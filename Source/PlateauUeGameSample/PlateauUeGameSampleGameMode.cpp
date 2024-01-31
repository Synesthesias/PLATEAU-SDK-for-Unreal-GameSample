// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlateauUeGameSampleGameMode.h"
#include "PlateauUeGameSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlateauUeGameSampleGameMode::APlateauUeGameSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
