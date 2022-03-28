// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial1GameMode.h"
#include "Tutorial1Character.h"
#include "UObject/ConstructorHelpers.h"

ATutorial1GameMode::ATutorial1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
