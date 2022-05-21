// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class DODGEBALL_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= LookAt, meta = (AllowPrivateAccess = "true"))
	class ULookAtActorComponent* LookAtActorComponent;

	// 적 캐릭터가 이번 프레임에 플레이어를 볼 수 있는지 여부
	bool bCanSeePlayer = false;
	// 적 캐릭터가 이전 프레임에 플레이어를 볼 수 있었는지 여부
	bool bPreviousCanSeePlayer = false;

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	// dodgeball 오브젝트를 생성하는 데 사용할 클래스
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Dodgeball)
	TSubclassOf<class ADodgeballProjectile> DodgeballClass;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 타이머를 식별할 때 사용할 FTimerhandle 속성
	FTimerHandle ThrowTimerHandle;
	// 닷지볼을 던지는 동작 사이에 대기하는 시간 (간격)을 나타내는 속성, 기본 2초
	float ThrowingInterval = 2.f;
	// 타이머를 반복(루프)하기 전에 대기할 처음 시간을 나타내는 속성, 기본 0.5초
	float ThrowingDelay = 0.5f;
	// 타이머가 끝날 때마다 호출할 함수, ThrowDodgeball을 생성하고, 이 함수를 호출
	void ThrowDodgeball();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
