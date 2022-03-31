// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUnitClass.h"

// Sets default values
ABaseUnitClass::ABaseUnitClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseUnitClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseUnitClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}






