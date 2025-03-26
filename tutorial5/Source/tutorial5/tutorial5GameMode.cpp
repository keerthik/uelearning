// Copyright Epic Games, Inc. All Rights Reserved.

#include "tutorial5GameMode.h"
#include "tutorial5PlayerController.h"
#include "tutorial5Character.h"
#include "UObject/ConstructorHelpers.h"

Atutorial5GameMode::Atutorial5GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Atutorial5PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}