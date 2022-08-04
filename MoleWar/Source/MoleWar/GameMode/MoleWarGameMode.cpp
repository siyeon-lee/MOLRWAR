// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoleWarGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "MoleWar/Character/MLGameCharacter.h"
#include "MoleWar/MoleWar.h"

AMoleWarGameMode::AMoleWarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GameFrameWork/Character/MLGameCharacterBP.MLGameCharacterBP_C"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
