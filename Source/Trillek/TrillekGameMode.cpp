

#include "Trillek.h"
#include "TrillekGameMode.h"
#include "TrillekPlayerController.h"

ATrillekGameMode::ATrillekGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ATrillekPlayerController::StaticClass();
}


