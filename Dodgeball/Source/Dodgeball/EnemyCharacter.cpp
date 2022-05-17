// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Engine/World.h"
#include "DodgeballFunctionLibrary.h"
#include "DodgeballProjectile.h"
#include "TimerManager.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SightSource = CreateDefaultSubobject<USceneComponent>(TEXT("SightSource"));
	SightSource->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemyCharacter::ThrowDodgeball()
{
	if (DodgeballClass == nullptr)
	{
		return;
	}

	FVector ForwardVector = GetActorForwardVector();
	float SpawnDistance = 40.f;
	FVector SpawnLocation = GetActorLocation() + (ForwardVector * SpawnDistance);
	FTransform SpawnTransform(GetActorRotation(), SpawnLocation);
	ADodgeballProjectile* Projectile = GetWorld()
		->SpawnActorDeferred<ADodgeballProjectile>(DodgeballClass, SpawnTransform);
	Projectile->GetProjectileMovementComponent()->InitialSpeed = 2200.f;
	Projectile->FinishSpawning(SpawnTransform);

	// 새 닷지볼 스폰하기
	// GetWorld()->SpawnActor<ADodgeballProjectile>(DodgeballClass, SpawnLocation, GetActorRotation());
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 현재 플레이어가 제어하는 캐릭터 구하기
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);

	// 매 프레임 플레이어 캐릭터를 바라본다.
	bCanSeePlayer = LookAtActor(PlayerCharacter);

	// 값이 다르다는 것은.. 패치가 일어났다는 뜻이다.
	// 이전에 볼 수 없었는데 볼 수 있게 됐다는 뜻
	if (bCanSeePlayer != bPreviousCanSeePlayer)
	{
		if (bCanSeePlayer)
		{
			// 닷지볼 던지기를 시작한다.
			GetWorldTimerManager().SetTimer(ThrowTimerHandle, this,
			                                &AEnemyCharacter::ThrowDodgeball, ThrowingInterval, true,
			                                ThrowingDelay);
		}
		else
		{
			// 단지볼 던지기를 멈춘다.
			GetWorldTimerManager().ClearTimer(ThrowTimerHandle);
		}
	}

	bPreviousCanSeePlayer = bCanSeePlayer;
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool AEnemyCharacter::LookAtActor(AActor* TargetActor)
{
	if (TargetActor == nullptr)
		return false;

	const TArray<const AActor*> IgnoreActors = {this, TargetActor};
	if (UDodgeballFunctionLibrary::CanSeeActor(
		GetWorld(),
		SightSource->GetComponentLocation(),
		TargetActor,
		IgnoreActors))
	{
		FVector Start = GetActorLocation();
		FVector End = TargetActor->GetActorLocation();

		// 시작 지점에서 끝 지점을 바라보는 데 필요한 회전 계산하기
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(Start, End);

		// 적의 회전을 앞서 구한 회전 값으로 설정한다.
		SetActorRotation(LookAtRotation);
		return true;
	}

	return false;
}

bool AEnemyCharacter::CanSeeActor(const AActor* TargetActor) const
{
	if (TargetActor == nullptr)
		return false;

	// 라인 트레이스의 결과를 저장한다.
	FHitResult Hit;

	// 라인 트레이스의 시작과 끝 위치
	// FVector Start = GetActorLocation();
	FVector Start = SightSource->GetComponentLocation();
	FVector End = TargetActor->GetActorLocation();

	// 스윕 트레이스
	// FQuat Rotation = FQuat::Identity;

	// 라인 트레이스
	// 시야 판단을 위해 비교할 트레이스 채널
	ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1;

	// // 스윕 트레이스
	// FCollisionShape Shape = FCollisionShape::MakeBox(FVector(20.f, 20.f, 20.f));
	// GetWorld()->SweepSingleByChannel(Hit, Start, End, Rotation, Channel, Shape);

	// 라인 트레이스 실행하기
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, Channel);

	// 하지만 본인은 무시해야함
	FCollisionQueryParams QueryParams;

	// 이 라인 트레이스를 실행하는 액터를 무시한다.
	QueryParams.AddIgnoredActor(this);

	// 확인할 대상 액터를 무시할 액터 목록에 추가한다.
	QueryParams.AddIgnoredActor(TargetActor);

	// 라인 트레이스 실행하기
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams);

	// 게임에서 라인 트레이스 보여주기 (시각화)
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);

	return !Hit.bBlockingHit;
}
