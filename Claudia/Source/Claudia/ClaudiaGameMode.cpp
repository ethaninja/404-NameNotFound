

#include "Claudia.h"
#include "ClaudiaGameMode.h"
#include "Engine.h"
#include "ClaudiaCharacter.h"

AClaudiaGameMode::AClaudiaGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	DefaultPawnClass = AClaudiaCharacter::StaticClass();
}

void AClaudiaGameMode::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Yellow,TEXT("Hello Fagg0ts!"));
	}

}



