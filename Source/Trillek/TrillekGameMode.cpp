

#include "Trillek.h"
#include "TrillekGameMode.h"
#include "TrillekPlayerController.h"

ATrillekGameMode::ATrillekGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ATrillekPlayerController::StaticClass();
}

void ATrillekGameMode::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Work in Progress!"));
	}
}


