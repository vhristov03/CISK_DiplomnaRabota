// Fill out your copyright notice in the Description page of Project Settings.


#include "InfantryUnit.h"

AInfantryUnit::AInfantryUnit() {
	PrimaryActorTick.bCanEverTick = true;
	this->Damage = 4;
	this->Defence = 2;
	this->Quantity = 1;
	this->MaxHealth = 25;
	this->CurrentHealth = 25;
	this->ClassId = 1;
	this->CountersClassId = 0;
	this->CanRetaliate = true;
	this->ClassName = FString(TEXT("Infantry"));
}