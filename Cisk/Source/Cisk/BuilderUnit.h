// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CISKPlayer.h"
#include "BaseUnitClass.h"
#include "BuilderUnit.generated.h"

/**
 * 
 */
UCLASS()
class CISK_API ABuilderUnit : public ABaseUnitClass
{
	GENERATED_BODY()

	ABuilderUnit();

	UFUNCTION(BlueprintCallable, Category = "Building")
		int BuildStructure(AMapStructure* NewStructure) {
			this->Player->AddStructure(NewStructure);
			this->Quantity -= 1;
			if (this->Quantity <= 0) {
				this->CurrentLocation->Unit = nullptr;
				this->CurrentLocation->HasUnit = false;
				this->GetPlayer()->Units.Remove(this);
				this->Destroy();
				return -1;
			}
			else {
				return 0;
			}
		}	
		

	
};
