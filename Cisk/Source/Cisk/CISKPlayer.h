// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapStructure.h"
#include "CISKPlayer.generated.h"

UCLASS()
class CISK_API ACISKPlayer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACISKPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, Category = "Player Stats")
		int Materials;

	UPROPERTY(EditAnywhere, Category = "Player Stats")
		int id;

	UPROPERTY(EditAnywhere, Category = "Player Stats")
		TArray<class ABaseUnitClass*> Units;

	UPROPERTY(EditAnywhere, Category = "Player Stats")
		TArray<class AMapStructure*> Structures;

	UFUNCTION(BlueprintCallable, Category = "Player Stats")
		int GetMaterials() {
		return this->Materials;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Stats")
		int GetID() {
		return this->id;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Stats")
		void AddMaterials(int Amount) {
		this->Materials += Amount;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Stats")
		void RemoveMaterials(int Amount) {
		this->Materials -= Amount;
	}

	UFUNCTION(BlueprintCallable, Category = "Player")
		void AddUnit(ABaseUnitClass* NewUnit) {
		this->Units.Add(NewUnit);	
	}

	UFUNCTION(BlueprintCallable, Category = "Player")
		void AddStructure(AMapStructure* NewStr) {
		this->Structures.Add(NewStr);
	}

	UFUNCTION(BlueprintCallable, Category = "Player")
		TArray<ABaseUnitClass*> GetUnitsArray() {
		return this->Units;
	}

	UFUNCTION(BlueprintCallable, Category = "Player")
		TArray<AMapStructure*> GetStructuresArray() {
		return this->Structures;
	}

	

	
};
