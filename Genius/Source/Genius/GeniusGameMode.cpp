// Fill out your copyright notice in the Description page of Project Settings.

#include "Genius.h"
#include "GeniusGameMode.h"
#include "MyPlayerController.h"


AGeniusGameMode::AGeniusGameMode() {

	PlayerControllerClass = AMyPlayerController::StaticClass();
}

