// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballProjectile.h"
#include "DodgeballCharacter.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ADodgeballProjectile::ADodgeballProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Sphere 오브젝트를 생성한다.
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));

	// 반지름을 35로 설정한다.
	SphereComponent->SetSphereRadius(35.f);

	// Collision Preset을 앞서 생성한 Dodgeball 프리셋으로 설정한다.
	SphereComponent->SetCollisionProfileName(FName("Dodgeball"));

	// 피직스를 시뮬레이션 해야 하므로, 이 옵션을 활성화한다.
	SphereComponent->SetSimulatePhysics(true);

	// 시뮬레이션하는 동안 OnHit 이벤트를 호출하도록 하기 위해 SetNotifyRigidbodyCollision 함수를 호출해 true로 설정한다.
	// 시뮬레이션은 Hit 이벤트를 발생시킨다.
	SphereComponent->SetNotifyRigidBodyCollision(true);

	// 추가한 함수와의 바인딩을 통해 OnComponentHit 이벤트를 받도록 설정한다.
	SphereComponent->OnComponentHit.AddDynamic(this, &ADodgeballProjectile::OnHit);

	// 이 Sphere 컴포넌트를 Root 컴포넌트로 설정한다.
	// 이렇게 하지 않으면 충돌이 제대로 동작하지 않을 수 있다.
	RootComponent = SphereComponent;

	// 앞으로 가도록 함
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->InitialSpeed = 1500.f;
}

void ADodgeballProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit)
{
	if (BounceSound != nullptr && NormalImpulse.Size() > 600.0f)
	{
		UGameplayStatics::PlaySoundAtLocation(this, BounceSound,
			GetActorLocation(), 1.0f, 1.0f, 0.0f,
			BounceSoundAttenuation);
	}

	ADodgeballCharacter* Player = Cast<ADodgeballCharacter>(OtherActor);
	if (Player != nullptr)
	{
		UHealthComponent* HealthComponent = Player->FindComponentByClass<UHealthComponent>();
		if (HealthComponent != nullptr)
		{
			HealthComponent->LoseHealth(Damage);
		}

		if (HitParticles != nullptr)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticles, GetActorTransform());
		}

		if (DamageSound != nullptr)
		{
			UGameplayStatics::PlaySound2D(this, DamageSound);
		}

		Destroy();
	}
}

// Called when the game starts or when spawned
void ADodgeballProjectile::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(5.f);
}

// Called every frame
void ADodgeballProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
