// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;

UCLASS()
class IGNITEGAME_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent)
		void JumpPress();
	void JumpPress_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void JumpRelease();
	void JumpRelease_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void AimPress();
	void AimPress_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void AimRelease();
	void AimRelease_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void PausePress();
	void PausePress_Implementation();

	UFUNCTION(BlueprintNativeEvent)
		void PauseRelease();
	void PauseRelease_Implementation();

	UFUNCTION(BlueprintCallable)
		void MoveForward(float Value);

	UFUNCTION(BlueprintCallable)
		void MoveSideways(float Value);

	UFUNCTION(BlueprintCallable)
		void LookUp(float Value);

	UFUNCTION(BlueprintCallable)
		void LookSideways(float Value);



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
