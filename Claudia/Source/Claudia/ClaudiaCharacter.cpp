

#include "Claudia.h"
#include "ClaudiaCharacter.h"


AClaudiaCharacter::AClaudiaCharacter(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	
}

void AClaudiaCharacter::BeginPlay()
{

	Super::BeginPlay();

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1 ,5.f ,FColor::Blue, TEXT("Claudia lives!!!"));
		}
}

void AClaudiaCharacter::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	//Setup gameplay key bindings
	InputComponent->BindAxis("MoveRight", this, &AClaudiaCharacter::MoveRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AClaudiaCharacter::OnStartJump);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AClaudiaCharacter::OnStopJump);
}

void AClaudiaCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		//Find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		//Add movement in that direction
		AddMovementInput(Direction, Value);
	}

}

void AClaudiaCharacter::OnStartJump()
{
	bPressedJump = true;
}
void AClaudiaCharacter::OnStopJump()
{
	bPressedJump = false;
}
