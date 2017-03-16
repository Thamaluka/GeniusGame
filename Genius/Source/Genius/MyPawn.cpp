// Fill out your copyright notice in the Description page of Project Settings.

#include "Genius.h"
#include "MyPawn.h"
#include "Lights.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->SetupAttachment(RootComponent);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	Playing = true;
	Sequencie = 1;
	

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	RandomNum();
	while(Playing){
	

		for (int l = 0; l < Numbs.Num(); ++l){
			UE_LOG(LogTemp, Warning, TEXT("%d"),Numbs[l]);
			switch(Numbs[l]){
				case 1 :
				Blue->LightsOn();
				break;

				case 2 :
				Green->LightsOn();
				break;
			}
			RandomNum();
		}


		
		


			//GetWorldTimerManager().SetTimer(TimerTurnOff, this,&AMyPawn::GlowLight, 0.5f, true);
		

		//Playing = false;
	}

	

	
	
}

// Called every frame
void AMyPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void AMyPawn::RandomNum(){
	Num = FMath::RandRange(1,4);
	Numbs.Add(Num);
		//UE_LOG(LogTemp, Warning, TEXT("%d"),Num);

}

void AMyPawn::GlowLight(){
	GetWorldTimerManager().ClearTimer(TimerTurnOff);
	switch(Num){
		case 1 :
		Blue->LightsOn();
		UE_LOG(LogTemp, Warning, TEXT("Brilhei Azul"));
		break;

		case 2 :
		Green->LightsOn();
		UE_LOG(LogTemp, Warning, TEXT("Brilhei Verde"));
		break;

		case 3 :
		Yellow->LightsOn();
		UE_LOG(LogTemp, Warning, TEXT("Brilhei Amarelo"));
		break;

		case 4 :
		Red->LightsOn();
		UE_LOG(LogTemp, Warning, TEXT("Brilhei Vermelho"));
		break;
	}

	
}


