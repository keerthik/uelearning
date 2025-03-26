// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicMenuLibrary.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

UUserWidget* UBasicMenuLibrary::PauseGameWithMenu(TSubclassOf<class UUserWidget> PauseMenuClass, APlayerController* playerController, UUserWidget* existingMenu = nullptr)
{
	if (PauseMenuClass != nullptr && existingMenu == nullptr)
	{
		existingMenu = CreateWidget<UUserWidget>(playerController, PauseMenuClass);
	}
	if (existingMenu != nullptr)
	{
		// what should we do based on the pause state *before* we toggle it
		if (playerController->IsPaused())
		{
			existingMenu->RemoveFromParent();
			playerController->SetInputMode(FInputModeGameAndUI());
		}
		else
		{
			playerController->SetShowMouseCursor(true);

			existingMenu->AddToViewport();
			playerController->SetInputMode(FInputModeGameAndUI());
		}
	} 
	playerController->SetPause(!playerController->IsPaused());
    return existingMenu;
}

