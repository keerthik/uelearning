// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicMenuLibrary.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

UUserWidget* UBasicMenuLibrary::PauseGameWithMenu(TSubclassOf<class UUserWidget> PauseMenuClass, APlayerController* playerController, UUserWidget* existingMenu = nullptr)
{
	// bShowMouseCursor = true;
	if (PauseMenuClass != nullptr && existingMenu == nullptr)
	{
		// existingMenu = CreateWidget<UUserWidget>(playerController, PauseMenuClass);
	}
	if (existingMenu != nullptr)
	{
		// what should we do based on the pause state *before* we toggle it
		// if (IsPaused())
		// {
		// 	PauseMenu->RemoveFromParent();
		// 	SetInputMode(FInputModeGameAndUI());
		// }
		// else
		// {
		// 	PauseMenu->AddToViewport();
		// 	SetInputMode(FInputModeGameAndUI());
		// }
	} 
	// SetPause(!IsPaused());
    return existingMenu;
}

