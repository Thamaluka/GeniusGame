// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "LightsGrid.generated.h"

UCLASS()
class GENIUS_API ALightsGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightsGrid();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

private:

	UPROPERTY(EditAnywhere)
		USceneComponent* Root;

		TSubclassOf<class ALights>Blue;
		TSubclassOf<class ALights>Yellow;
		TSubclassOf<class ALights>Red;
		TSubclassOf<class ALights>Green;

		
	
	
};
