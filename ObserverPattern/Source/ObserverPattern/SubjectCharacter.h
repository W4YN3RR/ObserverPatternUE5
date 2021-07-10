// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "ObserverPatternCharacter.h"

#include "SubjectCharacter.generated.h"

UCLASS(config = Game)
class ASubjectCharacter : public ACharacter
{
	GENERATED_BODY()

//ObserverPatternBegin
public:
	UFUNCTION(BlueprintCallable, Category = "Observer")
		void attach(AObserverPatternCharacter* newobserver) {
		observer_list.Add(newobserver);
	}

	UFUNCTION(BlueprintCallable, Category = "Observer")
		void deattach(AObserverPatternCharacter* newobserver) {
		observer_list.Remove(newobserver);
	}

	//dummy notify with print for testing purpose
	UFUNCTION(BlueprintCallable, Category = "Observer")
		void notify();

	UFUNCTION(BlueprintCallable, Category = "Observer")
		void MovementNotify(FVector Direction, float Value);

	UFUNCTION(BlueprintCallable, Category = "Observer")
		void JumpAndNotify();

private:
	TArray <class AObserverPatternCharacter* > observer_list;
//ObserverPatternEnd

private:

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;
public:
	ASubjectCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};

