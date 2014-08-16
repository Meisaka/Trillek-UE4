

#pragma once

#include "GameFramework/HUD.h"
#include "TrillekHUD.generated.h"

/**
 * 
 */
UCLASS()
class TRILLEK_API ATrillekHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:
	virtual void PostInitializeComponents() OVERRIDE;

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus | Main Menu")
		void PlayGameClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Menus | Main Menu")
		void QuitGameClicked();

private:
	TSharedPtr<class SMainMenuUI> MainMenuUI;



	
	
};
