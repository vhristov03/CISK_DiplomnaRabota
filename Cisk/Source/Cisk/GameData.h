// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameData.generated.h"

UCLASS(Blueprintable)
class CISK_API AGameData : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameData();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Game Data")
	int TurnCount;

	UFUNCTION(BlueprintCallable, Category = "Turns")
	int GetTurn() {
		if (this->TurnCount % 2 == 0) {
			return this->TurnCount / 2;
		}
		else {
			return (this->TurnCount + 1) / 2;
		}
	}

	UFUNCTION(BlueprintCallable, Category = "Turns")
	void IncrementTurn() {
		this->TurnCount++;
	}

	UFUNCTION(BlueprintCallable, Category = "Turns")
		int GetActivePlayer() {
		if (this->TurnCount % 2 == 0) {
			return 2;
		}
		else {
			return 1;
		}
	}
	

};
