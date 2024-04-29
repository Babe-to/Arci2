// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArciGameMode.h"
#include "ArciCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArciGameMode::AArciGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
