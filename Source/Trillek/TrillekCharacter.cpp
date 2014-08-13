

#include "Trillek.h"
#include "TrillekCharacter.h"


ATrillekCharacter::ATrillekCharacter(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// Create a CameraComponent
	FirstPersonCameraComponent = PCIP.CreateDefaultSubobject<UCameraComponent>(this, TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->AttachParent = CapsuleComponent;
	// position the camera above the eyes
	FirstPersonCameraComponent->RelativeLocation = FVector(0, 0, 50.0f + BaseEyeHeight);
}

void ATrillekCharacter::BeginPlay()
{
	Super::BeginPlay();
}


void ATrillekCharacter::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	// set up gameplay key bindings
	InputComponent->BindAxis("MoveForward", this, &ATrillekCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATrillekCharacter::MoveRight);
	InputComponent->BindAxis("Turn", this, &ATrillekCharacter::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &ATrillekCharacter::AddControllerPitchInput);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ATrillekCharacter::OnStartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &ATrillekCharacter::OnStartJump);

}

void ATrillekCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		FRotator Rotation = Controller->GetControlRotation();
		// limit pitch when walking or falling 
		if (CharacterMovement->IsMovingOnGround() || CharacterMovement->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		// add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

	void ATrillekCharacter::MoveRight(float Value)
	{
		if ((Controller != NULL) && (Value != 0.0f))
		{
			// find out which way is right
			const FRotator Rotation = Controller->GetControlRotation();
			const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
			// add movement in that direction
			AddMovementInput(Direction, Value);
		}
	}

	void ATrillekCharacter::OnStartJump()
	{
		bPressedJump = true;
	}

	void ATrillekCharacter::OnStopJump()
	{
		bPressedJump = false;
	}






