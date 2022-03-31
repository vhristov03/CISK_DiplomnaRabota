// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapStructure.h"
#include "BaseUnitClass.h"
#include "BarracksStructure.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API ABarracksStructure : public AMapStructure
{
	GENERATED_BODY()
	ABarracksStructure();
	void NewTurnRoutine() override;
	UPROPERTY(EditAnywhere, Category = "Unit");
	TSubclassOf<ABaseUnitClass> UnitToSpawn;
};
