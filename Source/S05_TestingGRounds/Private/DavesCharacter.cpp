// Copyright 2017 David Flom

#include "DavesCharacter.h"


// Sets default values
ADavesCharacter::ADavesCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADavesCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADavesCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADavesCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

