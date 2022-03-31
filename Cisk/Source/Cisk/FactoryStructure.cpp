// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryStructure.h"
#include "CISKPlayer.h"


void AFactoryStructure::NewTurnRoutine(){
	this->StructureOwner->Materials += 50;
}

AFactoryStructure::AFactoryStructure() {
	PrimaryActorTick.bCanEverTick = true;
	this->CanBeCaptured = true;
	this->DmgBonus = 0;
	this->DefBonus = 0;
	this->ClassName = FString(TEXT("Factory"));
}