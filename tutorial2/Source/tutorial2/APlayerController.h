// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "APlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIAL2_API AAPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Game, meta = (DisplayName = "Get screen bounds"))
	FVector2D GetScreenBounds() { return FVector2D(Xbounds, Ybounds); }
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	float Xbounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	float Ybounds;
	
	virtual void BeginPlay() override;
};
