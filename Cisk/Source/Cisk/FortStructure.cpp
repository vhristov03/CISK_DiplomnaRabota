// Fill out your copyright notice in the Description page of Project Settings.


#include "FortStructure.h"

AFortStructure::AFortStructure() {
	PrimaryActorTick.bCanEverTick = true;
	this->CanBeCaptured = false;
	this->DmgBonus = 4;
	this->DefBonus = 7;
	this->ClassName = FString(TEXT("Fort"));
}


void AFortStructure::NewTurnRoutine() {}