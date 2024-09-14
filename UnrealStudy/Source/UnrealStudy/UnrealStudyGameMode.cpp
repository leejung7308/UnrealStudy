// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealStudyGameMode.h"
#include "UnrealStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealStudyGameMode::AUnrealStudyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
