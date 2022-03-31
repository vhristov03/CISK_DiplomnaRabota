// Fill out your copyright notice in the Description page of Project Settings.


#include "CISKPlayer.h"




// Sets default values
ACISKPlayer::ACISKPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->Materials = 200;
}

// Called when the game starts or when spawned
void ACISKPlayer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACISKPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

