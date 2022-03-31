// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapStructure.h"
#include "FactoryStructure.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API AFactoryStructure : public AMapStructure
{
	GENERATED_BODY()
public:

	void NewTurnRoutine() override;
	AFactoryStructure();

	
};
