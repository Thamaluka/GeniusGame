// Fill out your copyright notice in the Description page of Project Settings.

#include "Genius.h"
#include "MyPlayerController.h"


AMyPlayerController::AMyPlayerController() {
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;

	bEnableTouchEvents = true;
	bEnableClickEvents = true;
}

