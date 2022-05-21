// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RestartWidget.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API URestartWidget : public UUserWidget
{
	GENERATED_BODY()

	/* 이 속성은 플레이어가 레벨을 재시작하기 위해 누를 버튼을 나타낸다. */
	/* 이 속성을 통해 위치, 크기 등의 속성을 자유롭게 위젯 블루프린트에서 편집 가능하다. */
	UPROPERTY(meta = (BindWidget, OptrionalWidget = true))
	class UButton* RestartButton;

	UPROPERTY(meta = (BindWidget, OptrionalWidget = true))
	class UButton* ExitButton;

	virtual void NativeOnInitialized() override;

protected:
	UFUNCTION()
	void OnRestartClicked();

	UFUNCTION()
	void OnExitClicked();
};
