

#pragma once

#include "GameFramework/GameMode.h"
#include "ClaudiaGameMode.generated.h"


/**
 * 
 */
UCLASS()
class CLAUDIA_API AClaudiaGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

	virtual void StartPlay() override;
	
};
