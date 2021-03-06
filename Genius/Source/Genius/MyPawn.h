// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class GENIUS_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	

private:

	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
		class ALights* Blue;
	UPROPERTY(EditAnywhere)
		class ALights* Red;
	UPROPERTY(EditAnywhere)
		class ALights* Yellow;
	UPROPERTY(EditAnywhere)
		class ALights* Green;
	
	int Num;
	int Sequencie;
	bool Playing;
	bool Shine;
	TArray <int> Numbs;

	FTimerHandle TimerTurnOff;

	void GlowLight();
	void RandomNum();


	
	
};
