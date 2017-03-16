// Fill out your copyright notice in the Description page of Project Settings.

#include "Genius.h"
#include "LightsGrid.h"
#include "Lights.h"


// Sets default values
ALightsGrid::ALightsGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;


	ConstructorHelpers::FObjectFinder<UBlueprint> BlueBP(TEXT("Blueprint'/Game/Blueprint/Blue_BP.Blue_BP'"));
	ConstructorHelpers::FObjectFinder<UBlueprint> YellowBP(TEXT("Blueprint'/Game/Blueprint/Yellow_BP.Yellow_BP'"));
	ConstructorHelpers::FObjectFinder<UBlueprint> RedBP(TEXT("Blueprint'/Game/Blueprint/Red_BP.Red_BP'"));
	ConstructorHelpers::FObjectFinder<UBlueprint> GeenBP(TEXT("Blueprint'/Game/Blueprint/Green_BP.Green_BP'"));

	if(BlueBP.Succeeded()){
		Blue = Cast<UClass>(BlueBP.Object->GeneratedClass);
	}

	if(YellowBP.Succeeded()){
		Yellow = Cast<UClass>(YellowBP.Object->GeneratedClass);
	}

	if(RedBP.Succeeded()){
		Red = Cast<UClass>(RedBP.Object->GeneratedClass);
	}

	if(GeenBP.Succeeded()){
		Green = Cast<UClass>(GeenBP.Object->GeneratedClass);
	}

}

// Called when the game starts or when spawned
void ALightsGrid::BeginPlay()
{
	Super::BeginPlay();
	/*
	float LocationX = 0.0f;
	float LocationZ = 0.0f;
	

	UWorld* World = GetWorld();
	if (World != nullptr) {
	for (int i = 0; i < 4; i++){
		
			FVector Location(LocationX, 0.0f, LocationZ);
			FActorSpawnParameters SpawnParameters;

		
			switch (i) {
			case 0:
				ALights* Light = World->SpawnActor<ALights>(Blue, Location, FRotator::ZeroRotator, SpawnParameters);
				LocationX += 250.0f;
				break;
				
			case 1:
				ALights* Light = World->SpawnActor<ALights>(Yellow, Location, FRotator::ZeroRotator, SpawnParameters);
				LocationX += 250.0f;
				break;
			case 2:
				ALights* Light = World->SpawnActor<ALights>(Red, Location, FRotator::ZeroRotator, SpawnParameters);
				LocationX += 250.0f;
				break;
			case 3:
				ALights* Light = World->SpawnActor<ALights>(Green, Location, FRotator::ZeroRotator, SpawnParameters);
				LocationX += 250.0f;
				break;
				
			}

			if (i == 1) { LocationZ -= 250.0f; LocationX = 0;}

		}
	}
	*/
	
}

// Called every frame
void ALightsGrid::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

	

