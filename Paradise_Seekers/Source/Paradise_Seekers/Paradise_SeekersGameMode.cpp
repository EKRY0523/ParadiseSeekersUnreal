// Copyright Epic Games, Inc. All Rights Reserved.

#include "Paradise_SeekersGameMode.h"
#include "Paradise_SeekersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParadise_SeekersGameMode::AParadise_SeekersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
