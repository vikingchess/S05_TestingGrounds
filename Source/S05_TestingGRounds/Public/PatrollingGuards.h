// Copyright 2017 David Flom

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuards.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUNDS_API APatrollingGuards : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
		UPROPERTY (EditInstanceOnly,Category ="Patrol Route")
		TArray<AActor*> PatrolPointsCPP;
	
	
	
};
