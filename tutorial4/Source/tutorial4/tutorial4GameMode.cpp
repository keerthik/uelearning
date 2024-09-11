// Copyright Epic Games, Inc. All Rights Reserved.

#include "tutorial4GameMode.h"
#include "tutorial4Character.h"
#include "UObject/ConstructorHelpers.h"

Atutorial4GameMode::Atutorial4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
