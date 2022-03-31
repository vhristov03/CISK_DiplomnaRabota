// Fill out your copyright notice in the Description page of Project Settings.


#include "GameData.h"

// Sets default values
AGameData::AGameData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->TurnCount = 1;

}

// Called when the game starts or when spawned
void AGameData::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameData::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


	

