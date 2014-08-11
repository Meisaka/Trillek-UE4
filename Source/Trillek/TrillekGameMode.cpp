

#include "Trillek.h"
#include "TrillekGameMode.h"
#include "TrillekCharacter.h"


ATrillekGameMode::ATrillekGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	DefaultPawnClass = ATrillekCharacter::StaticClass();
}

void ATrillekGameMode::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Work in Progress!"));
	}
}


