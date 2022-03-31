// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapStructure.h"
#include "BaseUnitClass.h"
#include "Tile.h"
#include "VehicleFactoryStructure.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API AVehicleFactoryStructure : public AMapStructure
{
	GENERATED_BODY()
	AVehicleFactoryStructure();
	void NewTurnRoutine() override;
	UPROPERTY(EditAnywhere, Category = "Unit");
	TSubclassOf<ABaseUnitClass> UnitToSpawn;
};
