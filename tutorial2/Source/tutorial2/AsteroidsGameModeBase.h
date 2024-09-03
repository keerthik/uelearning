// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/GameModeBase.h"
#include "AsteroidsGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class TUTORIAL2_API AAsteroidsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Game, meta = (DisplayName = "Determine screen bounds"))
	void DetermineScreenBounds(UCameraComponent* GameCamera);
	UFUNCTION(BlueprintCallable, Category = Game, meta = (DisplayName = "Get screen bounds"))
	FVector2D GetScreenBounds(float& X, float& Y);
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	float Xbounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	float Ybounds;
};
