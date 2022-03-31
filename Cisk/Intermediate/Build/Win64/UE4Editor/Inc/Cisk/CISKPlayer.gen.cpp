// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/CISKPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCISKPlayer() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_ACISKPlayer_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ACISKPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	CISK_API UClass* Z_Construct_UClass_AMapStructure_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACISKPlayer::execGetStructuresArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMapStructure*>*)Z_Param__Result=P_THIS->GetStructuresArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execGetUnitsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ABaseUnitClass*>*)Z_Param__Result=P_THIS->GetUnitsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execAddStructure)
	{
		P_GET_OBJECT(AMapStructure,Z_Param_NewStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStructure(Z_Param_NewStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execAddUnit)
	{
		P_GET_OBJECT(ABaseUnitClass,Z_Param_NewUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUnit(Z_Param_NewUnit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execRemoveMaterials)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMaterials(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execAddMaterials)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaterials(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACISKPlayer::execGetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterials();
		P_NATIVE_END;
	}
	void ACISKPlayer::StaticRegisterNativesACISKPlayer()
	{
		UClass* Class = ACISKPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaterials", &ACISKPlayer::execAddMaterials },
			{ "AddStructure", &ACISKPlayer::execAddStructure },
			{ "AddUnit", &ACISKPlayer::execAddUnit },
			{ "GetID", &ACISKPlayer::execGetID },
			{ "GetMaterials", &ACISKPlayer::execGetMaterials },
			{ "GetStructuresArray", &ACISKPlayer::execGetStructuresArray },
			{ "GetUnitsArray", &ACISKPlayer::execGetUnitsArray },
			{ "RemoveMaterials", &ACISKPlayer::execRemoveMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics
	{
		struct CISKPlayer_eventAddMaterials_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventAddMaterials_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "AddMaterials", nullptr, nullptr, sizeof(CISKPlayer_eventAddMaterials_Parms), Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_AddMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_AddMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics
	{
		struct CISKPlayer_eventAddStructure_Parms
		{
			AMapStructure* NewStr;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::NewProp_NewStr = { "NewStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventAddStructure_Parms, NewStr), Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::NewProp_NewStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "AddStructure", nullptr, nullptr, sizeof(CISKPlayer_eventAddStructure_Parms), Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_AddStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_AddStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics
	{
		struct CISKPlayer_eventAddUnit_Parms
		{
			ABaseUnitClass* NewUnit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewUnit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::NewProp_NewUnit = { "NewUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventAddUnit_Parms, NewUnit), Z_Construct_UClass_ABaseUnitClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::NewProp_NewUnit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "AddUnit", nullptr, nullptr, sizeof(CISKPlayer_eventAddUnit_Parms), Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_AddUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_AddUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_GetID_Statics
	{
		struct CISKPlayer_eventGetID_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACISKPlayer_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "GetID", nullptr, nullptr, sizeof(CISKPlayer_eventGetID_Parms), Z_Construct_UFunction_ACISKPlayer_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics
	{
		struct CISKPlayer_eventGetMaterials_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventGetMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "GetMaterials", nullptr, nullptr, sizeof(CISKPlayer_eventGetMaterials_Parms), Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics
	{
		struct CISKPlayer_eventGetStructuresArray_Parms
		{
			TArray<AMapStructure*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventGetStructuresArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "GetStructuresArray", nullptr, nullptr, sizeof(CISKPlayer_eventGetStructuresArray_Parms), Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_GetStructuresArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_GetStructuresArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics
	{
		struct CISKPlayer_eventGetUnitsArray_Parms
		{
			TArray<ABaseUnitClass*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseUnitClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventGetUnitsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "GetUnitsArray", nullptr, nullptr, sizeof(CISKPlayer_eventGetUnitsArray_Parms), Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_GetUnitsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_GetUnitsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics
	{
		struct CISKPlayer_eventRemoveMaterials_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CISKPlayer_eventRemoveMaterials_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACISKPlayer, nullptr, "RemoveMaterials", nullptr, nullptr, sizeof(CISKPlayer_eventRemoveMaterials_Parms), Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACISKPlayer_RemoveMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACISKPlayer_RemoveMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACISKPlayer_NoRegister()
	{
		return ACISKPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACISKPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Units_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Units;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Structures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Structures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Structures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACISKPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACISKPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACISKPlayer_AddMaterials, "AddMaterials" }, // 2366064907
		{ &Z_Construct_UFunction_ACISKPlayer_AddStructure, "AddStructure" }, // 726095747
		{ &Z_Construct_UFunction_ACISKPlayer_AddUnit, "AddUnit" }, // 2461288619
		{ &Z_Construct_UFunction_ACISKPlayer_GetID, "GetID" }, // 1926817596
		{ &Z_Construct_UFunction_ACISKPlayer_GetMaterials, "GetMaterials" }, // 4052920405
		{ &Z_Construct_UFunction_ACISKPlayer_GetStructuresArray, "GetStructuresArray" }, // 1386665169
		{ &Z_Construct_UFunction_ACISKPlayer_GetUnitsArray, "GetUnitsArray" }, // 3163343257
		{ &Z_Construct_UFunction_ACISKPlayer_RemoveMaterials, "RemoveMaterials" }, // 3891034590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACISKPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CISKPlayer.h" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACISKPlayer, Materials), METADATA_PARAMS(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACISKPlayer_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACISKPlayer_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACISKPlayer, id), METADATA_PARAMS(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units_Inner = { "Units", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseUnitClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACISKPlayer, Units), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures_Inner = { "Structures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "CISKPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures = { "Structures", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACISKPlayer, Structures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACISKPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACISKPlayer_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Units,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACISKPlayer_Statics::NewProp_Structures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACISKPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACISKPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACISKPlayer_Statics::ClassParams = {
		&ACISKPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACISKPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACISKPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACISKPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACISKPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACISKPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACISKPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACISKPlayer, 1987790689);
	template<> CISK_API UClass* StaticClass<ACISKPlayer>()
	{
		return ACISKPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACISKPlayer(Z_Construct_UClass_ACISKPlayer, &ACISKPlayer::StaticClass, TEXT("/Script/Cisk"), TEXT("ACISKPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACISKPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
