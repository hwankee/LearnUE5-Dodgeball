// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DODGEBALL_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

	// 소유자로부터 체력 점수를 뺏는다.
	void LoseHealth(float Amount);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// 소유자의 초기 및 현재 체력 점수의 양
	UPROPERTY(EditDefaultsOnly, Category = Health)
	float Health = 100.f;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
