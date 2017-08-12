// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGRoundsGameMode.h"
#include "S05_TestingGRoundsHUD.h"
#include "S05_TestingGRoundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_TestingGRoundsGameMode::AS05_TestingGRoundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TestingGRoundsHUD::StaticClass();
}
