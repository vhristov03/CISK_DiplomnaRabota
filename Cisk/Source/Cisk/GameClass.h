// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class CISK_API GameClass
{
public:
	

	//Player* Players[2];
	//Map* GameMap;
	int Turn;

	GameClass();
	~GameClass();

	void NewTurn();
};
