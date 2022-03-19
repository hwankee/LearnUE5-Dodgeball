// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4GameMode.h"
#include "UE4Character.h"
#include "UObject/ConstructorHelpers.h"

AUE4GameMode::AUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
