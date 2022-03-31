// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmoredCarUnit.h"

AArmoredCarUnit::AArmoredCarUnit() {
	PrimaryActorTick.bCanEverTick = true;
	this->Damage = 8;
	this->Defence = 10;
	this->Quantity = 1;
	this->MaxHealth = 50;
	this->CurrentHealth = 50;
	this->ClassId = 3;
	this->CountersClassId = 1;
	this->CanRetaliate = true;
	this->ClassName = FString(TEXT("Armored Car"));
}