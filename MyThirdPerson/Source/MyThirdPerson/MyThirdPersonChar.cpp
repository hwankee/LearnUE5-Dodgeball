// Fill out your copyright notice in the Description page of Project Settings.


#include "MyThirdPersonChar.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMyThirdPersonChar::AMyThirdPersonChar()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 캡슐 콜리전의 크기를 설정한다.
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	// 컨트롤러가 회전할 때 캐릭터는 회전하지 않도록 설정한다.
	// 캐릭터가 카메라에 영향을 주도록 놔둔다.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// 캐릭터 무브먼트를 설정한다.
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// 카메라 붐을 설정한다. (충돌이 발생할 경우 플레이어 쪽으로 다가가도록 설정한다.)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// 캐릭터를 따라다닐 카메라를 설정한다.
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void AMyThirdPersonChar::BeginPlay()
{
	Super::BeginPlay();
}

void AMyThirdPersonChar::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.0f)
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);
		const FVector Direction = UKismetMathLibrary::GetRightVector(YawRotation);
		AddMovementInput(Direction, Value);
	}
}

void AMyThirdPersonChar::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.0f)
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);
		const FVector Direction = UKismetMathLibrary::GetForwardVector(YawRotation);
		AddMovementInput(Direction, Value);
	}
}

void AMyThirdPersonChar::TouchBegin(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void AMyThirdPersonChar::TouchEnd(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void AMyThirdPersonChar::BeginWalking()
{
	GetCharacterMovement()->MaxWalkSpeed = 40;
}

void AMyThirdPersonChar::StopWalking()
{
	GetCharacterMovement()->MaxWalkSpeed = 250;
}

// Called every frame
void AMyThirdPersonChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyThirdPersonChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Walk", IE_Pressed, this, &AMyThirdPersonChar::BeginWalking);
	PlayerInputComponent->BindAction("Walk", IE_Released, this, &AMyThirdPersonChar::StopWalking);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AMyThirdPersonChar::TouchBegin);
	PlayerInputComponent->BindTouch(IE_Released, this, &AMyThirdPersonChar::TouchEnd);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyThirdPersonChar::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyThirdPersonChar::MoveForward);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}
