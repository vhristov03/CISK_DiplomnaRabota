// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/Tile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_ATile_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	CISK_API UClass* Z_Construct_UClass_AMapStructure_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATile::execBuildStructure)
	{
		P_GET_OBJECT(AMapStructure,Z_Param_NewStructure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildStructure(Z_Param_NewStructure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSetId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetId(Z_Param_newid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execGetBonusDef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBonusDef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execGetBonusAtt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBonusAtt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSetUnit)
	{
		P_GET_OBJECT(ABaseUnitClass,Z_Param_UnitToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnit(Z_Param_UnitToSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSelectStructure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMapStructure**)Z_Param__Result=P_THIS->SelectStructure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSelectTileUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABaseUnitClass**)Z_Param__Result=P_THIS->SelectTileUnit();
		P_NATIVE_END;
	}
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildStructure", &ATile::execBuildStructure },
			{ "GetBonusAtt", &ATile::execGetBonusAtt },
			{ "GetBonusDef", &ATile::execGetBonusDef },
			{ "GetId", &ATile::execGetId },
			{ "SelectStructure", &ATile::execSelectStructure },
			{ "SelectTileUnit", &ATile::execSelectTileUnit },
			{ "SetId", &ATile::execSetId },
			{ "SetUnit", &ATile::execSetUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_BuildStructure_Statics
	{
		struct Tile_eventBuildStructure_Parms
		{
			AMapStructure* NewStructure;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewStructure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_BuildStructure_Statics::NewProp_NewStructure = { "NewStructure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventBuildStructure_Parms, NewStructure), Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_BuildStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_BuildStructure_Statics::NewProp_NewStructure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_BuildStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_BuildStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "BuildStructure", nullptr, nullptr, sizeof(Tile_eventBuildStructure_Parms), Z_Construct_UFunction_ATile_BuildStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_BuildStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_BuildStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_BuildStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_BuildStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_BuildStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_GetBonusAtt_Statics
	{
		struct Tile_eventGetBonusAtt_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATile_GetBonusAtt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventGetBonusAtt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetBonusAtt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetBonusAtt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetBonusAtt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fortification Bonuses" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetBonusAtt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetBonusAtt", nullptr, nullptr, sizeof(Tile_eventGetBonusAtt_Parms), Z_Construct_UFunction_ATile_GetBonusAtt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBonusAtt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_GetBonusAtt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBonusAtt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_GetBonusAtt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_GetBonusAtt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_GetBonusDef_Statics
	{
		struct Tile_eventGetBonusDef_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATile_GetBonusDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventGetBonusDef_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetBonusDef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetBonusDef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetBonusDef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fortification Bonuses" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetBonusDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetBonusDef", nullptr, nullptr, sizeof(Tile_eventGetBonusDef_Parms), Z_Construct_UFunction_ATile_GetBonusDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBonusDef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_GetBonusDef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetBonusDef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_GetBonusDef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_GetBonusDef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_GetId_Statics
	{
		struct Tile_eventGetId_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATile_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetId", nullptr, nullptr, sizeof(Tile_eventGetId_Parms), Z_Construct_UFunction_ATile_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SelectStructure_Statics
	{
		struct Tile_eventSelectStructure_Parms
		{
			AMapStructure* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_SelectStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSelectStructure_Parms, ReturnValue), Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SelectStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SelectStructure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SelectStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SelectStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SelectStructure", nullptr, nullptr, sizeof(Tile_eventSelectStructure_Parms), Z_Construct_UFunction_ATile_SelectStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SelectStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SelectStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SelectStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SelectStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SelectStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SelectTileUnit_Statics
	{
		struct Tile_eventSelectTileUnit_Parms
		{
			ABaseUnitClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_SelectTileUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSelectTileUnit_Parms, ReturnValue), Z_Construct_UClass_ABaseUnitClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SelectTileUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SelectTileUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SelectTileUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SelectTileUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SelectTileUnit", nullptr, nullptr, sizeof(Tile_eventSelectTileUnit_Parms), Z_Construct_UFunction_ATile_SelectTileUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SelectTileUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SelectTileUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SelectTileUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SelectTileUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SelectTileUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SetId_Statics
	{
		struct Tile_eventSetId_Parms
		{
			int32 newid;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATile_SetId_Statics::NewProp_newid = { "newid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSetId_Parms, newid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SetId_Statics::NewProp_newid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SetId", nullptr, nullptr, sizeof(Tile_eventSetId_Parms), Z_Construct_UFunction_ATile_SetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SetUnit_Statics
	{
		struct Tile_eventSetUnit_Parms
		{
			ABaseUnitClass* UnitToSet;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnitToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_SetUnit_Statics::NewProp_UnitToSet = { "UnitToSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSetUnit_Parms, UnitToSet), Z_Construct_UClass_ABaseUnitClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SetUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SetUnit_Statics::NewProp_UnitToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SetUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SetUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SetUnit", nullptr, nullptr, sizeof(Tile_eventSetUnit_Parms), Z_Construct_UFunction_ATile_SetUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SetUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SetUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SetUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SetUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbours_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Neighbours;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Structure_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Structure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasUnit_MetaData[];
#endif
		static void NewProp_HasUnit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighboursCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NeighboursCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_BuildStructure, "BuildStructure" }, // 3454615964
		{ &Z_Construct_UFunction_ATile_GetBonusAtt, "GetBonusAtt" }, // 303008957
		{ &Z_Construct_UFunction_ATile_GetBonusDef, "GetBonusDef" }, // 4206280340
		{ &Z_Construct_UFunction_ATile_GetId, "GetId" }, // 2410642841
		{ &Z_Construct_UFunction_ATile_SelectStructure, "SelectStructure" }, // 1598694523
		{ &Z_Construct_UFunction_ATile_SelectTileUnit, "SelectTileUnit" }, // 268185680
		{ &Z_Construct_UFunction_ATile_SetId, "SetId" }, // 1545521307
		{ &Z_Construct_UFunction_ATile_SetUnit, "SetUnit" }, // 44713389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "Tile Info" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, PlayerId), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Neighbours_MetaData[] = {
		{ "Category", "Tile Info" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Neighbours = { "Neighbours", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Neighbours, ATile), STRUCT_OFFSET(ATile, Neighbours), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Neighbours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Neighbours_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Structure_MetaData[] = {
		{ "Category", "Tile Info" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Structure = { "Structure", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Structure), Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Structure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Structure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "Tile Info" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Unit), Z_Construct_UClass_ABaseUnitClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Unit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_HasUnit_MetaData[] = {
		{ "Category", "Tile Info" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_HasUnit_SetBit(void* Obj)
	{
		((ATile*)Obj)->HasUnit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_HasUnit = { "HasUnit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_HasUnit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_HasUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_HasUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_NeighboursCount_MetaData[] = {
		{ "Category", "Tile Info" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_NeighboursCount = { "NeighboursCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, NeighboursCount), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_NeighboursCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_NeighboursCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Neighbours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Structure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_HasUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_NeighboursCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATile, 1387636914);
	template<> CISK_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATile(Z_Construct_UClass_ATile, &ATile::StaticClass, TEXT("/Script/Cisk"), TEXT("ATile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
