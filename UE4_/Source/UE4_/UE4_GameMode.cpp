// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_GameMode.h"
#include "UE4_Character.h"
#include "UObject/ConstructorHelpers.h"

AUE4_GameMode::AUE4_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
