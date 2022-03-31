// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderUnit.h"

ABuilderUnit::ABuilderUnit() {
	PrimaryActorTick.bCanEverTick = true;
	this->Damage = 1;
	this->Defence = 1;
	this->Quantity = 1;
	this->MaxHealth = 10;
	this->CurrentHealth = 10;
	this->ClassId = -1;
	this->CountersClassId = -1;
	this->CanRetaliate = false;
	this->ClassName = FString(TEXT("Builder"));
}
