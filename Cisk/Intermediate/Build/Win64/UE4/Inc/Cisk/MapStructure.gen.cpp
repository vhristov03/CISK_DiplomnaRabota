// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/MapStructure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapStructure() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_AMapStructure_NoRegister();
	CISK_API UClass* Z_Construct_UClass_AMapStructure();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	CISK_API UClass* Z_Construct_UClass_ACISKPlayer_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ATile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMapStructure::execSetTile)
	{
		P_GET_OBJECT(ATile,Z_Param_NewTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTile(Z_Param_NewTile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapStructure::execGetClassName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetClassName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapStructure::execGetStructureOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACISKPlayer**)Z_Param__Result=P_THIS->GetStructureOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapStructure::execSetStructureOwner)
	{
		P_GET_OBJECT(ACISKPlayer,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStructureOwner(Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapStructure::execCapture)
	{
		P_GET_OBJECT(ACISKPlayer,Z_Param_Attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Capture(Z_Param_Attacker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapStructure::execNewTurnRoutine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewTurnRoutine();
		P_NATIVE_END;
	}
	void AMapStructure::StaticRegisterNativesAMapStructure()
	{
		UClass* Class = AMapStructure::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Capture", &AMapStructure::execCapture },
			{ "GetClassName", &AMapStructure::execGetClassName },
			{ "GetStructureOwner", &AMapStructure::execGetStructureOwner },
			{ "NewTurnRoutine", &AMapStructure::execNewTurnRoutine },
			{ "SetStructureOwner", &AMapStructure::execSetStructureOwner },
			{ "SetTile", &AMapStructure::execSetTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapStructure_Capture_Statics
	{
		struct MapStructure_eventCapture_Parms
		{
			ACISKPlayer* Attacker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapStructure_Capture_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapStructure_eventCapture_Parms, Attacker), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapStructure_Capture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapStructure_Capture_Statics::NewProp_Attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapStructure_Capture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapStructure_Capture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapStructure, nullptr, "Capture", nullptr, nullptr, sizeof(MapStructure_eventCapture_Parms), Z_Construct_UFunction_AMapStructure_Capture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_Capture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapStructure_Capture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_Capture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapStructure_Capture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapStructure_Capture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapStructure_GetClassName_Statics
	{
		struct MapStructure_eventGetClassName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMapStructure_GetClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapStructure_eventGetClassName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapStructure_GetClassName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapStructure_GetClassName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapStructure_GetClassName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapStructure_GetClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapStructure, nullptr, "GetClassName", nullptr, nullptr, sizeof(MapStructure_eventGetClassName_Parms), Z_Construct_UFunction_AMapStructure_GetClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_GetClassName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapStructure_GetClassName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_GetClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapStructure_GetClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapStructure_GetClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics
	{
		struct MapStructure_eventGetStructureOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapStructure_eventGetStructureOwner_Parms, ReturnValue), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapStructure, nullptr, "GetStructureOwner", nullptr, nullptr, sizeof(MapStructure_eventGetStructureOwner_Parms), Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapStructure_GetStructureOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapStructure_GetStructureOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapStructure_NewTurnRoutine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapStructure_NewTurnRoutine_Statics::Function_MetaDataParams[] = {
		{ "Category", "NewTurn" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapStructure_NewTurnRoutine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapStructure, nullptr, "NewTurnRoutine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapStructure_NewTurnRoutine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_NewTurnRoutine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapStructure_NewTurnRoutine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapStructure_NewTurnRoutine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics
	{
		struct MapStructure_eventSetStructureOwner_Parms
		{
			ACISKPlayer* NewOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapStructure_eventSetStructureOwner_Parms, NewOwner), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapStructure, nullptr, "SetStructureOwner", nullptr, nullptr, sizeof(MapStructure_eventSetStructureOwner_Parms), Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapStructure_SetStructureOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapStructure_SetStructureOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapStructure_SetTile_Statics
	{
		struct MapStructure_eventSetTile_Parms
		{
			ATile* NewTile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapStructure_SetTile_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapStructure_eventSetTile_Parms, NewTile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapStructure_SetTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapStructure_SetTile_Statics::NewProp_NewTile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapStructure_SetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapStructure_SetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapStructure, nullptr, "SetTile", nullptr, nullptr, sizeof(MapStructure_eventSetTile_Parms), Z_Construct_UFunction_AMapStructure_SetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_SetTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapStructure_SetTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapStructure_SetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapStructure_SetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapStructure_SetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMapStructure_NoRegister()
	{
		return AMapStructure::StaticClass();
	}
	struct Z_Construct_UClass_AMapStructure_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructureOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StructureOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DmgBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DmgBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DefBonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapStructure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapStructure_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapStructure_Capture, "Capture" }, // 3421824781
		{ &Z_Construct_UFunction_AMapStructure_GetClassName, "GetClassName" }, // 1952656700
		{ &Z_Construct_UFunction_AMapStructure_GetStructureOwner, "GetStructureOwner" }, // 2793713610
		{ &Z_Construct_UFunction_AMapStructure_NewTurnRoutine, "NewTurnRoutine" }, // 3027539804
		{ &Z_Construct_UFunction_AMapStructure_SetStructureOwner, "SetStructureOwner" }, // 3593457934
		{ &Z_Construct_UFunction_AMapStructure_SetTile, "SetTile" }, // 2063663815
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapStructure_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapStructure.h" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapStructure_Statics::NewProp_StructureOwner_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapStructure_Statics::NewProp_StructureOwner = { "StructureOwner", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapStructure, StructureOwner), Z_Construct_UClass_ACISKPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapStructure_Statics::NewProp_StructureOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapStructure_Statics::NewProp_StructureOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapStructure_Statics::NewProp_Tile_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapStructure_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapStructure, Tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapStructure_Statics::NewProp_Tile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapStructure_Statics::NewProp_Tile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapStructure_Statics::NewProp_DmgBonus_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMapStructure_Statics::NewProp_DmgBonus = { "DmgBonus", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapStructure, DmgBonus), METADATA_PARAMS(Z_Construct_UClass_AMapStructure_Statics::NewProp_DmgBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapStructure_Statics::NewProp_DmgBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapStructure_Statics::NewProp_DefBonus_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "MapStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMapStructure_Statics::NewProp_DefBonus = { "DefBonus", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapStructure, DefBonus), METADATA_PARAMS(Z_Construct_UClass_AMapStructure_Statics::NewProp_DefBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapStructure_Statics::NewProp_DefBonus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapStructure_Statics::NewProp_StructureOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapStructure_Statics::NewProp_Tile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapStructure_Statics::NewProp_DmgBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapStructure_Statics::NewProp_DefBonus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapStructure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapStructure>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapStructure_Statics::ClassParams = {
		&AMapStructure::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapStructure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapStructure_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapStructure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapStructure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapStructure()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapStructure_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapStructure, 2030158516);
	template<> CISK_API UClass* StaticClass<AMapStructure>()
	{
		return AMapStructure::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapStructure(Z_Construct_UClass_AMapStructure, &AMapStructure::StaticClass, TEXT("/Script/Cisk"), TEXT("AMapStructure"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapStructure);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
