// Copyright Epic Games, Inc. All Rights Reserved.

#include "COOPMULTIPLAYERGameMode.h"
#include "COOPMULTIPLAYERCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACOOPMULTIPLAYERGameMode::ACOOPMULTIPLAYERGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
