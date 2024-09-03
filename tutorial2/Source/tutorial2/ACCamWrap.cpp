// Fill out your copyright notice in the Description page of Project Settings.


#include "ACCamWrap.h"
#include "AsteroidsGameModeBase.h"
#include "Components/SceneComponent.h"


// Sets default values for this component's properties
UACCamWrap::UACCamWrap()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UACCamWrap::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UACCamWrap::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float xbounds, ybounds;
	GameMode->GetScreenBounds(xbounds, ybounds);

	TArray<UActorComponent*> sceneComponents = GetOwner()->GetComponentsByTag(USceneComponent::StaticClass(), WrapTag);
	for (UActorComponent* Component : sceneComponents)
	{
		FVector location = Cast<USceneComponent>(Component)->GetComponentLocation();
		wrapX = location.X;
		wrapY = location.Y;
		if (location.X > xbounds || location.X < -xbounds)
		{
			wrapX = -0.99 * location.X;
		}
		if (location.Y > ybounds || location.Y < -ybounds)
		{
			wrapY = -0.99 * location.Y;
		}

		Cast<USceneComponent>(Component)->SetWorldLocation(FVector(wrapX, wrapY, location.Z));
	}
	// ...
}