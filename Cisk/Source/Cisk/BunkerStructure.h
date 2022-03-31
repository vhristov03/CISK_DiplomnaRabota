// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapStructure.h"
#include "BunkerStructure.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API ABunkerStructure : public AMapStructure
{
	GENERATED_BODY()

	ABunkerStructure();
	void NewTurnRoutine() override;
};
