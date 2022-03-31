// Fill out your copyright notice in the Description page of Project Settings.


#include "GameClass.h"

GameClass::GameClass()
{
	this->Turn = 0;
}

GameClass::~GameClass()
{
}


void GameClass::NewTurn() {
	this->Turn++;
}
