// Fill out your copyright notice in the Description page of Project Settings.


#include "VictoryBox.h"
#include "DodgeballCharacter.h"
#include "Kismet/KismetSystemLibrary.h" // 일반적인 목적으로 사용할 수 있는 유용한 함수들을 포함한다.

// Sets default values
AVictoryBox::AVictoryBox()
{
     // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);    // RootComponent에 붙일 수 있다.
    CollisionBox->SetBoxExtent(FVector(60.0f, 60.0f, 60.0f)); // BoxComponent에서 모든 축의 BoxExtent 속성을 60 유닛으로 설정 -> 2배
    CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f)); // z축에 대해 120 유닛만큼 상대 위치를 조정한다.

    // 바인딩
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AVictoryBox::OnBeginOverlap);
}

// Called when the game starts or when spawned
void AVictoryBox::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void AVictoryBox::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AVictoryBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    /* 파라미터 내용 확인 */
    // UPrimitiveComponent* OverlappedComp: 오버랩이 발생한 컴포넌트 중 이 액터에 포함된 컴포넌트
    // AActor* OtherActor: 오버랩에 참여한 다른 액터 (상대방 액터)
    // UPrimitiveComponent* OtherComp: 오버랩이 발생한 컴포넌트 중 다른 액터에 포함된 컴포넌트
    // int32 OtherBodyIndex: 프리미티브 중에서 충돌이 발생한 컴포넌트의 인덱스 (일반적으로 Instanced Static Mesh Component)
    // bool bFromSweep: 오버랩이 스윕 트레이스로부터 시작됐는지 여부
    // const FHitResult& SweepResult: 이 오브젝트와 다른 오브젝트 사이에서 실행한 스윕 트레이스의 결과 데이터

    if (Cast<ADodgeballCharacter>(OtherActor))
    {
        UKismetSystemLibrary::QuitGame(GetWorld(),    // World 오브젝트
            nullptr,    // PlayerController 오브젝트, 자동으로 PlayerController를 찾기 때문에, 여기선 nullptr로 해둠
            EQuitPreference::Quit,    // 게임을 종료하거나, 백그라운드 프로세스를 설정해 게임을 종료하는 방법을 설정하는데 사용하는 EQuit 오브젝트
            true); // 게임을 종료할 때, 플랫폼의 제한(방해)를 무시할지 여부
    }
}

