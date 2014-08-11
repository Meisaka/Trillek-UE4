

#include "Trillek.h"
#include "TrillekGameMode.h"


ATrillekGameMode::ATrillekGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	
}

void ATrillekGameMode::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Work in Progress!"));
	}
}


