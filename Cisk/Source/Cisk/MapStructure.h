// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CISKPlayer.h"
#include "Tile.h"
#include "MapStructure.generated.h"

UCLASS()
class CISK_API AMapStructure : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapStructure();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "NewTurn")
	virtual void NewTurnRoutine() {};

	UPROPERTY(EditAnywhere, Category = "Building")
		class ACISKPlayer* StructureOwner;
	UPROPERTY(EditAnywhere, Category = "Building")
		class ATile* Tile;
	UPROPERTY(EditAnywhere, Category = "Building")
		int DmgBonus;
	UPROPERTY(EditAnywhere, Category = "Building")
		int DefBonus;

		FString ClassName;
		bool CanBeCaptured;

		UFUNCTION(BlueprintCallable, Category = "Building")
			void Capture(ACISKPlayer* Attacker);

	UFUNCTION(BlueprintCallable, Category = "Building")
	void SetStructureOwner(ACISKPlayer* NewOwner) {
		this->StructureOwner = NewOwner;
	}

	UFUNCTION(BlueprintCallable, Category = "Building")
		class ACISKPlayer* GetStructureOwner() {
		return this->StructureOwner;
	}

	UFUNCTION(BlueprintCallable, Category = "Building")
		FString GetClassName() {
		return this->ClassName;
	}

	UFUNCTION(BlueprintCallable, Category = "Building")
		void SetTile(ATile* NewTile) {
		this->Tile = NewTile;
	}


	
		


	

	

};
