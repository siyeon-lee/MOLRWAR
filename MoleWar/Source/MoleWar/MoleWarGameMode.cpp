// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoleWarGameMode.h"
#include "MoleWarCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "MoleWar.h"
AMoleWarGameMode::AMoleWarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
