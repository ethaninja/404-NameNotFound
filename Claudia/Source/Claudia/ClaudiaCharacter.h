

#pragma once

#include "GameFramework/Character.h"
#include "ClaudiaCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CLAUDIA_API AClaudiaCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

	virtual void BeginPlay() override;

	protected: 
		virtual void SetupPlayerInputComponent(class UInputComponent * InputComponent) override;


	//Handles moving left/right
	UFUNCTION()
	void MoveRight(float Val);

	//Sets jump flag when key is pressed
	UFUNCTION()
		void OnStartJump();
	//Clears jump flag when key is released
	UFUNCTION()
		void OnStopJump();

};
