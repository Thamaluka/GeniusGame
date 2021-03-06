// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Lights.generated.h"

UCLASS()
class GENIUS_API ALights : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALights();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	FORCEINLINE int GetIndex() const { return Index; }

	void LightsOff();
	void LightsOn();

private:

	UPROPERTY(EditAnywhere)
		class UPaperSpriteComponent* Sprite;

	UPROPERTY(EditAnywhere)
		class UPaperSprite* LightSprite;


	UPROPERTY(EditAnywhere)
		class UPaperSprite* OffLight;

	UPROPERTY(EditAnywhere)
		int Index;

	UFUNCTION()
		void OnTouchBegin(ETouchIndex::Type type,
			UPrimitiveComponent* TouchedComponent);

	FTimerHandle TimerTurnOff;

	
	

	
};
