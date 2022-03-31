// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tile.h"
#include "MapStructure.h"
#include "BaseUnitClass.h"
#include "BuildersHallStructure.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API ABuildersHallStructure : public AMapStructure
{
	GENERATED_BODY()
	ABuildersHallStructure();
	void NewTurnRoutine() override;
	UPROPERTY(EditAnywhere, Category = "Unit");
	TSubclassOf<ABaseUnitClass> UnitToSpawn;
	
	
	
};
