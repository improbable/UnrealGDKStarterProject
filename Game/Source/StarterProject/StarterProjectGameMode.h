// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StarterProjectGameMode.generated.h"

UCLASS(minimalapi, Spatial=PrivateSingleton)
class AStarterProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStarterProjectGameMode();
};
