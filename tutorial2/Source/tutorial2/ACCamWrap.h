// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ACCamWrap.generated.h"

class AAsteroidsGameModeBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TUTORIAL2_API UACCamWrap : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UACCamWrap();
protected:	
	// Called when the game starts
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
