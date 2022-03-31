// Fill out your copyright notice in the Description page of Project Settings.


#include "BunkerStructure.h"

ABunkerStructure::ABunkerStructure() {
	PrimaryActorTick.bCanEverTick = true;
	this->CanBeCaptured = true;
	this->DmgBonus = 2;
	this->DefBonus = 5;
	this->ClassName = FString(TEXT("Bunker"));
}


void ABunkerStructure::NewTurnRoutine() {}