// Copyright 2017 David Flom

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DavesCharacter.generated.h"

UCLASS()
class S05_TESTINGGROUNDS_API ADavesCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADavesCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
