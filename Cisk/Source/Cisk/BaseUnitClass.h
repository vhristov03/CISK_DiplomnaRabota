// Fill out your copyright notice in the Description page of Project Settings.
//TODO:
//	void Move(ATile* NewTile){};
#pragma once


#include "CoreMinimal.h"
#include "Tile.h"
#include "GameFramework/Pawn.h"
#include "CISKPlayer.h"
#include "BaseUnitClass.generated.h"


UCLASS()
class CISK_API ABaseUnitClass : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseUnitClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Unit");
	class ACISKPlayer* Player;
	int ClassId;
	int CountersClassId;
	bool CanRetaliate;
	uint16_t Damage;
	uint16_t Defence;
	int MaxHealth;
	int CurrentHealth;
	int Quantity;
	FString ClassName;
	UPROPERTY(EditAnywhere, Category = "Unit");
	class ATile* CurrentLocation;
	bool MovedThisTurn;


	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		ACISKPlayer* GetPlayer() {
		return this->Player;
	}

	//Calculates the damage for the AttackEnemy function
	int CalculateDamage(ABaseUnitClass* Attacker, ABaseUnitClass* Defender) {

		int DamageToDeal = 1;

		if (Attacker->Damage > Defender->Defence) {
			DamageToDeal += (Attacker->Damage + this->CurrentLocation->GetBonusAtt()) - (Defender->Defence + Defender->CurrentLocation->GetBonusDef());
			if (DamageToDeal <= 0) {
				DamageToDeal = 1;
			}
		}

		if (Defender->ClassId == Attacker->CountersClassId) {
			DamageToDeal = DamageToDeal * 2;
		}

		if (Defender->Quantity / 10 == 0) {
			DamageToDeal = DamageToDeal * Attacker->Quantity;
		}
		else {
			DamageToDeal = DamageToDeal * Attacker->Quantity / (Defender->Quantity / 10);
		}
		return DamageToDeal;
	}

	int AttackEnemy(ABaseUnitClass* Enemy) {

		int OutputCode = 0;

		int DamageToDeal = CalculateDamage(this, Enemy);
		if (Enemy->CanRetaliate == true) {
			int DamageToTake = CalculateDamage(Enemy, this);
			int UnusedDamageToTake = DamageToTake % this->MaxHealth;
			DamageToTake -= UnusedDamageToTake;
			this->CurrentHealth -= UnusedDamageToTake;
			if (this->CurrentHealth <= 0) {
				this->Quantity -= 1;
				this->CurrentHealth = this->MaxHealth + this->CurrentHealth;
			}
			this->Quantity -= DamageToTake / this->MaxHealth;

		}

		int UnusedDamage = DamageToDeal % Enemy->MaxHealth;
		DamageToDeal -= UnusedDamage;
		Enemy->CurrentHealth -= UnusedDamage;
		if (Enemy->CurrentHealth <= 0) {
			Enemy->Quantity -= 1;
			Enemy->CurrentHealth = Enemy->MaxHealth + Enemy->CurrentHealth;
		}
		Enemy->Quantity -= DamageToDeal / Enemy->MaxHealth;


		if (Enemy->Quantity <= 0) {
			OutputCode++;
			Enemy->CurrentLocation->Unit = nullptr;
			Enemy->CurrentLocation->HasUnit = false;
			Enemy->GetPlayer()->Units.Remove(Enemy);
			Enemy->Destroy();
		}
		if (this->Quantity <= 0) {
			this->CurrentLocation->Unit = nullptr;
			this->CurrentLocation->HasUnit = false;
			this->GetPlayer()->Units.Remove(this);
			this->Destroy();
			OutputCode -= 2;
		}
		return OutputCode;
	}

	UFUNCTION(BlueprintCallable, Category = "Unit")
		int Move(ATile* NewTile) {
		if (this->MovedThisTurn == false) {
			for (int i = 0; i < this->CurrentLocation->NeighboursCount; i++) {
				if (this->CurrentLocation->Neighbours[i] == NewTile) {
					this->MovedThisTurn = true;
					if (NewTile->HasUnit == false) {
						this->CurrentLocation->HasUnit = false;
						this->CurrentLocation->Unit = nullptr;
						this->CurrentLocation = NewTile;
						NewTile->Unit = this;
						NewTile->PlayerId = this->Player->GetID();
						NewTile->HasUnit = true;
						if (NewTile->Structure != nullptr) {
							if(NewTile->Structure->GetStructureOwner() != this->GetPlayer())
							NewTile->Structure->Capture(this->GetPlayer());
						}
						return 0;
					}
					else {
						if (this->GetPlayer() != NewTile->Unit->GetPlayer()) {
							int CanContinue = this->AttackEnemy(NewTile->Unit);
							if (CanContinue == 1) {
								this->CurrentLocation->HasUnit = false;
								this->CurrentLocation->Unit = nullptr;
								this->CurrentLocation = NewTile;
								NewTile->Unit = this;
								NewTile->PlayerId = this->Player->GetID();
								NewTile->HasUnit = true;
								if (NewTile->Structure != nullptr) {
									NewTile->Structure->Capture(this->GetPlayer());
								}
								return 0;
							}
						}
						else if (this->ClassId == NewTile->Unit->ClassId) {
							NewTile->Unit->Quantity += this->Quantity;
							this->CurrentLocation->Unit = nullptr;
							this->CurrentLocation->HasUnit = false;
							this->GetPlayer()->Units.Remove(this);
							this->Destroy();
						}
					}
				}
			}
		}
		return -1;
	}

	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		int GetDamage() {
		return this->Damage;
	}
	UFUNCTION(BlueprintCallable, Category = "Unit Info")
	int GetQuantity() {
		return this->Quantity;
	}
	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		int GetDefence() {
		return this->Defence;
	}
	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		int GetCurrrentHealth() {
		return this->CurrentHealth;
	}
	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		int GetMaxHealth() {
		return this->MaxHealth;
	}

	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		ATile* GetCurrentLocation() {
		return this->CurrentLocation;
	}
	

	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		void SetPlayer(ACISKPlayer* NewPlayer) {
		this->Player = NewPlayer;
	}

	UFUNCTION(BlueprintCallable, Category = "Unit Info")
		FString GetClassName() {
			return this->ClassName;
		}

	UFUNCTION(BlueprintCallable, Category = "Unit")
		void SetMovedThisTurnFalse() {
			this->MovedThisTurn = false;
	}

	UFUNCTION(BlueprintCallable, Category = "Unit")
		bool GetMovedThisTurn() {
		return this->MovedThisTurn;
	}


	

};
