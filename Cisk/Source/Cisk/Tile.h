// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

class AMapStructure;

UCLASS()
class CISK_API ATile : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, Category = "Tile Info")
		int PlayerId;
	
	UPROPERTY(EditAnywhere, Category = "Tile Info")
	ATile* Neighbours[8];
	UPROPERTY(EditAnywhere, Category = "Tile Info")
	class AMapStructure* Structure;
	UPROPERTY(EditAnywhere, Category = "Tile Info")
	class ABaseUnitClass* Unit;
	UPROPERTY(EditAnywhere, Category = "Tile Info")
	bool HasUnit;
	UPROPERTY(EditAnywhere, Category = "Tile Info")
	int NeighboursCount;



	UFUNCTION(BlueprintCallable, Category = "Selection")
	ABaseUnitClass* SelectTileUnit() {
		return this->Unit;
	}

	UFUNCTION(BlueprintCallable, Category = "Selection")
		AMapStructure* SelectStructure();
	

	UFUNCTION(BlueprintCallable, Category = "Unit")
	void SetUnit(ABaseUnitClass* UnitToSet) {
		this->Unit = UnitToSet;
	}

	UFUNCTION(BlueprintCallable, Category = "Fortification Bonuses")
		int GetBonusAtt();

	UFUNCTION(BlueprintCallable, Category = "Fortification Bonuses")
		int GetBonusDef();

	UFUNCTION(BlueprintCallable, Category = "Tile")
		int GetId() {
		return this->PlayerId;
	}
	UFUNCTION(BlueprintCallable, Category = "Tile")
		void SetId(int newid) {
		this->PlayerId = newid;
	}

	UFUNCTION(BlueprintCallable, Category = "Tile")
		void BuildStructure(AMapStructure* NewStructure);





};
