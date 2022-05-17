// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DodgeballFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API UDodgeballFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	// 전달된 액터를 볼 수 있는지 확인
	static bool CanSeeActor(
		const UWorld* World, // 라인 트레이스 함수를 사용하는 데 필요한 속성 
		FVector Location,    // 대상 액터를 볼 수 있는지 확인하는 액터의 위치로 사용하기 위한 FVector Location 속성
		const AActor* TargetActor, // 볼 수 있는지 확인할 대상 액터
		TArray<const AActor*> IgnoreActors = TArray<const AActor*>()); // 무시할 액터의 목록인 속성은 기본값으로 빈 배열 사용 가능
};
