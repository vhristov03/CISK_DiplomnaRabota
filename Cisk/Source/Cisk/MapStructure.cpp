// Fill out your copyright notice in the Description page of Project Settings.


#include "MapStructure.h"
#include "Tile.h"
// Sets default values
AMapStructure::AMapStructure()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapStructure::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapStructure::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapStructure::Capture(ACISKPlayer* Attacker) {
	if (this->CanBeCaptured == true) {
		this->GetStructureOwner()->Structures.Remove(this);
		this->SetStructureOwner(Attacker);
		Attacker->Structures.Add(this);
	}
	else {
		this->GetStructureOwner()->Structures.Remove(this);
		this->Tile->Structure = nullptr;
		this->Destroy();
	}
};
