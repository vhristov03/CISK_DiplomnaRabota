// Fill out your copyright notice in the Description page of Project Settings.


#include "BarracksStructure.h"

ABarracksStructure::ABarracksStructure() {
	PrimaryActorTick.bCanEverTick = true;
	this->CanBeCaptured = true;
	this->DmgBonus = 0;
	this->DefBonus = 0;
	this->ClassName = FString(TEXT("Barracks"));
}

void ABarracksStructure::NewTurnRoutine() {
	if (this->Tile->HasUnit == false) {
		const FVector Location = GetActorLocation();
		const FRotator Rotation = GetActorRotation();
		ABaseUnitClass* NewUnit = GetWorld()->SpawnActor<ABaseUnitClass>(UnitToSpawn, Location, Rotation);
		NewUnit->SetPlayer(this->GetStructureOwner());
		this->GetStructureOwner()->Units.Add(NewUnit);
		NewUnit->CurrentLocation = this->Tile;
		this->Tile->Unit = NewUnit;
		this->Tile->HasUnit = true;
	}
	else {
		if (this->Tile->Unit->ClassId == 1) {
			this->Tile->Unit->Quantity++;
		}
	}
}

