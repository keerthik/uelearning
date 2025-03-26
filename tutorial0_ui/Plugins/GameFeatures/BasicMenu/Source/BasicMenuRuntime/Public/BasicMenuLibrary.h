// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "BasicMenuLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BASICMENURUNTIME_API UBasicMenuLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category=Game, meta=(DisplayName = "Toggle pause+menu"))
    static UUserWidget* PauseGameWithMenu(TSubclassOf<class UUserWidget> PauseMenuClass, APlayerController *playerController, UUserWidget* existingMenu);
protected:
    // UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    // UUserWidget* PauseMenu;
};
