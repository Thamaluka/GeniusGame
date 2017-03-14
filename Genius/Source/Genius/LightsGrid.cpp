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


	FVector BlueLocation = FVector(490.0f,90.0f,-360.0f);

	UWorld* World = GetWorld();
	if(World != nullptr){
		FActorSpawnParameters SpawnParameters;
		//ALights* Light = World->SpawnActor<ALights>(Blue,BlueLocation, FRotator::ZeroRotator, SpawnParameters);


	}
	
}

// Called every frame
void ALightsGrid::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

	

