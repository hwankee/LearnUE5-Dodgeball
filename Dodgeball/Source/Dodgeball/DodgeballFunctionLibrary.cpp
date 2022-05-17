// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"
#include "DodgeballFunctionLibrary.h"

bool UDodgeballFunctionLibrary::CanSeeActor(const UWorld* World, FVector Location, const AActor* TargetActor,
	TArray<const AActor*> IgnoreActors)
{
	if (TargetActor == nullptr)
		return false;

	// 라인 트레이스의 결과를 저장한다.
	FHitResult Hit;

	// 라인 트레이스의 시작과 끝 위치
	FVector Start = Location;
	FVector End = TargetActor->GetActorLocation();

	// 라인 트레이스
	// 시야 판단을 위해 비교할 트레이스 채널
	ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1;

	// // 스윕 트레이스
	// FCollisionShape Shape = FCollisionShape::MakeBox(FVector(20.f, 20.f, 20.f));
	// GetWorld()->SweepSingleByChannel(Hit, Start, End, Rotation, Channel, Shape);

	// 하지만 본인은 무시해야함
	FCollisionQueryParams QueryParams;

	// 지정된 액터들을 무시한다.
	QueryParams.AddIgnoredActors(IgnoreActors);

	// 라인 트레이스 실행하기
	World->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams);

	// 게임에서 라인 트레이스 보여주기 (시각화)
	DrawDebugLine(World, Start, End, FColor::Red);

	return !Hit.bBlockingHit;
}
