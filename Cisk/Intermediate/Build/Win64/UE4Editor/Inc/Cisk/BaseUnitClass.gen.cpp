// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/BaseUnitClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUnitClass() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	CISK_API UClass* Z_Construct_UClass_ATile_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ACISKPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseUnitClass::execGetMovedThisTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMovedThisTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execSetMovedThisTurnFalse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovedThisTurnFalse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetClassName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetClassName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execSetPlayer)
	{
		P_GET_OBJECT(ACISKPlayer,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayer(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetCurrentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATile**)Z_Param__Result=P_THIS->GetCurrentLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetCurrrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetDefence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDefence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execMove)
	{
		P_GET_OBJECT(ATile,Z_Param_NewTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Move(Z_Param_NewTile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseUnitClass::execGetPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACISKPlayer**)Z_Param__Result=P_THIS->GetPlayer();
		P_NATIVE_END;
	}
	void ABaseUnitClass::StaticRegisterNativesABaseUnitClass()
	{
		UClass* Class = ABaseUnitClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClassName", &ABaseUnitClass::execGetClassName },
			{ "GetCurrentLocation", &ABaseUnitClass::execGetCurrentLocation },
			{ "GetCurrrentHealth", &ABaseUnitClass::execGetCurrrentHealth },
			{ "GetDamage", &ABaseUnitClass::execGetDamage },
			{ "GetDefence", &ABaseUnitClass::execGetDefence },
			{ "GetMaxHealth", &ABaseUnitClass::execGetMaxHealth },
			{ "GetMovedThisTurn", &ABaseUnitClass::execGetMovedThisTurn },
			{ "GetPlayer", &ABaseUnitClass::execGetPlayer },
			{ "GetQuantity", &ABaseUnitClass::execGetQuantity },
			{ "Move", &ABaseUnitClass::execMove },
			{ "SetMovedThisTurnFalse", &ABaseUnitClass::execSetMovedThisTurnFalse },
			{ "SetPlayer", &ABaseUnitClass::execSetPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics
	{
		struct BaseUnitClass_eventGetClassName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetClassName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetClassName", nullptr, nullptr, sizeof(BaseUnitClass_eventGetClassName_Parms), Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics
	{
		struct BaseUnitClass_eventGetCurrentLocation_Parms
		{
			ATile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetCurrentLocation_Parms, ReturnValue), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetCurrentLocation", nullptr, nullptr, sizeof(BaseUnitClass_eventGetCurrentLocation_Parms), Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics
	{
		struct BaseUnitClass_eventGetCurrrentHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetCurrrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetCurrrentHealth", nullptr, nullptr, sizeof(BaseUnitClass_eventGetCurrrentHealth_Parms), Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics
	{
		struct BaseUnitClass_eventGetDamage_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetDamage", nullptr, nullptr, sizeof(BaseUnitClass_eventGetDamage_Parms), Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics
	{
		struct BaseUnitClass_eventGetDefence_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetDefence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetDefence", nullptr, nullptr, sizeof(BaseUnitClass_eventGetDefence_Parms), Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetDefence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetDefence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics
	{
		struct BaseUnitClass_eventGetMaxHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(BaseUnitClass_eventGetMaxHealth_Parms), Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics
	{
		struct BaseUnitClass_eventGetMovedThisTurn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseUnitClass_eventGetMovedThisTurn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseUnitClass_eventGetMovedThisTurn_Parms), &Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetMovedThisTurn", nullptr, nullptr, sizeof(BaseUnitClass_eventGetMovedThisTurn_Parms), Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics
	{
		struct BaseUnitClass_eventGetPlayer_Parms
		{
			ACISKPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetPlayer_Parms, ReturnValue), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetPlayer", nullptr, nullptr, sizeof(BaseUnitClass_eventGetPlayer_Parms), Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics
	{
		struct BaseUnitClass_eventGetQuantity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "GetQuantity", nullptr, nullptr, sizeof(BaseUnitClass_eventGetQuantity_Parms), Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_Move_Statics
	{
		struct BaseUnitClass_eventMove_Parms
		{
			ATile* NewTile;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTile;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseUnitClass_Move_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventMove_Parms, NewTile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseUnitClass_Move_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventMove_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_Move_Statics::NewProp_NewTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_Move_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "Move", nullptr, nullptr, sizeof(BaseUnitClass_eventMove_Parms), Z_Construct_UFunction_ABaseUnitClass_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "SetMovedThisTurnFalse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics
	{
		struct BaseUnitClass_eventSetPlayer_Parms
		{
			ACISKPlayer* NewPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseUnitClass_eventSetPlayer_Parms, NewPlayer), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit Info" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseUnitClass, nullptr, "SetPlayer", nullptr, nullptr, sizeof(BaseUnitClass_eventSetPlayer_Parms), Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseUnitClass_SetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseUnitClass_SetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseUnitClass_NoRegister()
	{
		return ABaseUnitClass::StaticClass();
	}
	struct Z_Construct_UClass_ABaseUnitClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseUnitClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseUnitClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseUnitClass_GetClassName, "GetClassName" }, // 1223637838
		{ &Z_Construct_UFunction_ABaseUnitClass_GetCurrentLocation, "GetCurrentLocation" }, // 1633126204
		{ &Z_Construct_UFunction_ABaseUnitClass_GetCurrrentHealth, "GetCurrrentHealth" }, // 3336429627
		{ &Z_Construct_UFunction_ABaseUnitClass_GetDamage, "GetDamage" }, // 300862120
		{ &Z_Construct_UFunction_ABaseUnitClass_GetDefence, "GetDefence" }, // 964577905
		{ &Z_Construct_UFunction_ABaseUnitClass_GetMaxHealth, "GetMaxHealth" }, // 1262560209
		{ &Z_Construct_UFunction_ABaseUnitClass_GetMovedThisTurn, "GetMovedThisTurn" }, // 319574090
		{ &Z_Construct_UFunction_ABaseUnitClass_GetPlayer, "GetPlayer" }, // 981799690
		{ &Z_Construct_UFunction_ABaseUnitClass_GetQuantity, "GetQuantity" }, // 4056590974
		{ &Z_Construct_UFunction_ABaseUnitClass_Move, "Move" }, // 2259762010
		{ &Z_Construct_UFunction_ABaseUnitClass_SetMovedThisTurnFalse, "SetMovedThisTurnFalse" }, // 1390206954
		{ &Z_Construct_UFunction_ABaseUnitClass_SetPlayer, "SetPlayer" }, // 2827660882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseUnitClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseUnitClass.h" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseUnitClass, Player), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_CurrentLocation_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "BaseUnitClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseUnitClass, CurrentLocation), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_CurrentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_CurrentLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseUnitClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseUnitClass_Statics::NewProp_CurrentLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseUnitClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseUnitClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseUnitClass_Statics::ClassParams = {
		&ABaseUnitClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseUnitClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseUnitClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseUnitClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseUnitClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseUnitClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseUnitClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseUnitClass, 3882664563);
	template<> CISK_API UClass* StaticClass<ABaseUnitClass>()
	{
		return ABaseUnitClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseUnitClass(Z_Construct_UClass_ABaseUnitClass, &ABaseUnitClass::StaticClass, TEXT("/Script/Cisk"), TEXT("ABaseUnitClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseUnitClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
