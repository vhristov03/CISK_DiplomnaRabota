	// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"
#include "MapStructure.h"
// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerId = 0;

}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMapStructure* ATile::SelectStructure() {
	return this->Structure;
}

int ATile::GetBonusAtt() {
	if (this->Structure == nullptr) {
		return 0;
	}
	else {
		return this->Structure->DmgBonus;
	}
}

int ATile::GetBonusDef() {
	if (this->Structure == nullptr) {
		return 0;
	}
	else {
		return this->Structure->DefBonus;
	}
}

void ATile::BuildStructure(AMapStructure* NewStructure) {
	this->Structure = NewStructure;
}