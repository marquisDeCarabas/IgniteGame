// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChar/PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::JumpPress_Implementation()
{
}

void APlayerCharacter::JumpRelease_Implementation()
{
}

void APlayerCharacter::AimPress_Implementation()
{
}

void APlayerCharacter::AimRelease_Implementation()
{
}

void APlayerCharacter::PausePress_Implementation()
{
}




void APlayerCharacter::PauseRelease_Implementation()
{
}

void APlayerCharacter::MoveForward(float Value)
{
}

void APlayerCharacter::MoveSideways(float Value)
{
}

void APlayerCharacter::LookUp(float Value)
{
}

void APlayerCharacter::LookSideways(float Value)
{
}


// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("jump", IE_Pressed, this, &APlayerCharacter::JumpPress);
	PlayerInputComponent->BindAction("jump", IE_Released, this, &APlayerCharacter::JumpRelease);

	PlayerInputComponent->BindAction("leftFire", IE_Pressed, this, &APlayerCharacter::AimPress);
	PlayerInputComponent->BindAction("leftFire", IE_Released, this, &APlayerCharacter::AimRelease);

	PlayerInputComponent->BindAction("pause", IE_Pressed, this, &APlayerCharacter::PausePress);
	PlayerInputComponent->BindAction("pause", IE_Released, this, &APlayerCharacter::PauseRelease);

	PlayerInputComponent->BindAxis("forward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("sideways", this, &APlayerCharacter::MoveSideways);

	PlayerInputComponent->BindAxis("lookUp", this, &APlayerCharacter::LookUp);
	PlayerInputComponent->BindAxis("lookRight", this, &APlayerCharacter::LookSideways);




}

