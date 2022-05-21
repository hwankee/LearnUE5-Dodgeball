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

	if (ExitButton != nullptr)
	{
		ExitButton->OnClicked.AddDynamic(this, &URestartWidget::OnExitClicked);
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

void URestartWidget::OnExitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(),    // World 오브젝트
			nullptr,    // PlayerController 오브젝트, 자동으로 PlayerController를 찾기 때문에, 여기선 nullptr로 해둠
			EQuitPreference::Quit,    // 게임을 종료하거나, 백그라운드 프로세스를 설정해 게임을 종료하는 방법을 설정하는데 사용하는 EQuit 오브젝트
			true); // 게임을 종료할 때, 플랫폼의 제한(방해)를 무시할지 여부
}
