// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "DodgeballProjectile.generated.h"

UCLASS()
class DODGEBALL_API ADodgeballProjectile : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=
		Dodgeball, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=
		Dodgeball, meta=(AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;
	
	// 닷지볼이 표면에 튕길 때 재생할 사운드
	UPROPERTY(EditAnywhere, Category=Sound)
	class USoundBase* BounceSound;

public:
	// Sets default values for this actor's properties
	ADodgeballProjectile();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	           UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// FORCEINLINE 매크로를 사용하면 이 함수의 선언을 헤더 파일에 추가할 수 없고,
	// 구현을 소스파일에 추가할 수 없다. 앞에서 본 것처럼, 헤더 파일에 선언과 구현을 모두 동시에 작성해야 한다. 
	FORCEINLINE class UProjectileMovementComponent*
	// Getter 함수
	GetProjectileMovementComponent() const
	{
		return ProjectileMovement;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// 닷지볼이 플레이어 캐릭터에게 입힐 데미지
	UPROPERTY(EditAnywhere, Category=Damage)
	float Damage = 34.f;

	// 이전 사운드의 사운드 감쇄 (sound attenuation)
	UPROPERTY(EditAnywhere, Category=Sound)
	class USoundAttenuation* BounceSoundAttenuation;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
