// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "MyThirdPersonChar.generated.h"

UCLASS()
class MYTHIRDPERSON_API AMyThirdPersonChar : public ACharacter
{
	GENERATED_BODY()
	
	// 플레이어 카메라의 표시자 역할을 담당하는 스프링 암 컴포넌트 
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	// 카메라
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this character's properties
	AMyThirdPersonChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveRight(float Value);
	void MoveForward(float Value);
	void TouchBegin(ETouchIndex::Type FingerIndex, FVector Location);
	void TouchEnd(ETouchIndex::Type FingerIndex, FVector Location);
	void BeginWalking();
	void StopWalking();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
