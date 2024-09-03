// Fill out your copyright notice in the Description page of Project Settings.


#include "AsteroidsGameModeBase.h"
#include "Engine/GameViewportClient.h"

void AAsteroidsGameModeBase::DetermineScreenBounds(UCameraComponent* GameCamera)
{
    if (GEngine && GEngine->GameViewport)
    {
        FVector2D ViewportSize;
        GEngine->GameViewport->GetViewportSize(ViewportSize);
        Xbounds = ViewportSize.X;
        Ybounds = ViewportSize.Y;
    }
    else
    {
        Xbounds = 1000;
        Ybounds = 1000;
    }
	if (!GameCamera || GameCamera->ProjectionMode != ECameraProjectionMode::Orthographic)
    {
        UE_LOG(LogTemp, Warning, TEXT("GameCamera is not a valid orthographic camera"));
        return;
    }
	else
	{
		const float OrthoWidth = GameCamera->OrthoWidth;
		const float OrthoHeight = OrthoWidth / (Xbounds / static_cast<float>(Ybounds));
		Xbounds = OrthoWidth/2;
		Ybounds = OrthoHeight/2;
	}
}
