// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetFP3DGameMode.h"
#include "ProjetFP3DHUD.h"
#include "ProjetFP3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetFP3DGameMode::AProjetFP3DGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjetFP3DHUD::StaticClass();
}
