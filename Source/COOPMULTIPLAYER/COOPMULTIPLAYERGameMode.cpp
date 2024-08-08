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

void ACOOPMULTIPLAYERGameMode::HostLANGame()
{
	GetWorld()->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void ACOOPMULTIPLAYERGameMode::JoinLANGame()
{
	APlayerController* APC = GetGameInstance()->GetFirstLocalPlayerController();
	if (APC) 
	{
		APC->ClientTravel("192.168.58.114",TRAVEL_Absolute);
	}

}
