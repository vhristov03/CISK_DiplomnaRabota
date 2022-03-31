// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapStructure.h"
#include "FortStructure.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API AFortStructure : public AMapStructure
{
	GENERATED_BODY()

	AFortStructure();
	void NewTurnRoutine() override;
	
};
