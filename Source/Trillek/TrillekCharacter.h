

#pragma once

#include "GameFramework/Character.h"
#include "TrillekCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TRILLEK_API ATrillekCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

	virtual void BeginPlay() OVERRIDE;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) OVERRIDE;
	/** handles moving forward/backward */
	UFUNCTION()
		void MoveForward(float Val);
	/** handles strafing */
	UFUNCTION()
		void MoveRight(float Val);
	/** sets jump flag when key is pressed */
	UFUNCTION()
		void OnStartJump();
	/** clears jump flag when key is released */
	UFUNCTION()
		void OnStopJump();
	
};
