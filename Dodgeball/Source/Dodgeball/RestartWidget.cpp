// Fill out your copyright notice in the Description page of Project Settings.


#include "RestartWidget.h"

#include "DodgeballPlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void URestartWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (RestartButton != nullptr)
	{
		RestartButton->OnClicked.AddDynamic(this, &URestartWidget::OnRestartClicked);
	}
}

void URestartWidget::OnRestartClicked()
{
	// OpenLevel 함수 호출 -> 얘는 월드 문맥 오브젝트를 파라미터로 받는다.
	UGameplayStatics::OpenLevel(this,
	    FName(*UGameplayStatics::GetCurrentLevelName(this)));
	// FString을 반환하는데, FName 생성자에 전달하기 위해 *를 붙여 역참조를 전달함

	ADodgeballPlayerController* PlayerController =
		Cast<ADodgeballPlayerController>(GetOwningPlayer());

	if (PlayerController != nullptr)
	{
		PlayerController->HideRestartWidget();
	}

	
}
