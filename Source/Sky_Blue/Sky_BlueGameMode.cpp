// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sky_BlueGameMode.h"
#include "Sky_BlueCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASky_BlueGameMode::ASky_BlueGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;


}
