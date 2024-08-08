// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "COOPMULTIPLAYERGameMode.generated.h"

UCLASS(minimalapi)
class ACOOPMULTIPLAYERGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACOOPMULTIPLAYERGameMode();

	UFUNCTION(BlueprintCallable)
	void HostLANGame();

	UFUNCTION(BlueprintCallable)
	void JoinLANGame();
};



