// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/GameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameData() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_AGameData_NoRegister();
	CISK_API UClass* Z_Construct_UClass_AGameData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cisk();
// End Cross Module References
	DEFINE_FUNCTION(AGameData::execGetActivePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActivePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameData::execIncrementTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameData::execGetTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTurn();
		P_NATIVE_END;
	}
	void AGameData::StaticRegisterNativesAGameData()
	{
		UClass* Class = AGameData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActivePlayer", &AGameData::execGetActivePlayer },
			{ "GetTurn", &AGameData::execGetTurn },
			{ "IncrementTurn", &AGameData::execIncrementTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameData_GetActivePlayer_Statics
	{
		struct GameData_eventGetActivePlayer_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameData_eventGetActivePlayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turns" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameData, nullptr, "GetActivePlayer", nullptr, nullptr, sizeof(GameData_eventGetActivePlayer_Parms), Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameData_GetActivePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameData_GetActivePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameData_GetTurn_Statics
	{
		struct GameData_eventGetTurn_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameData_GetTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameData_eventGetTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameData_GetTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameData_GetTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameData_GetTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turns" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameData_GetTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameData, nullptr, "GetTurn", nullptr, nullptr, sizeof(GameData_eventGetTurn_Parms), Z_Construct_UFunction_AGameData_GetTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameData_GetTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameData_GetTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameData_GetTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameData_GetTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameData_GetTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameData_IncrementTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameData_IncrementTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turns" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameData_IncrementTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameData, nullptr, "IncrementTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameData_IncrementTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameData_IncrementTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameData_IncrementTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameData_IncrementTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameData_NoRegister()
	{
		return AGameData::StaticClass();
	}
	struct Z_Construct_UClass_AGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TurnCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameData_GetActivePlayer, "GetActivePlayer" }, // 1069676068
		{ &Z_Construct_UFunction_AGameData_GetTurn, "GetTurn" }, // 1399527470
		{ &Z_Construct_UFunction_AGameData_IncrementTurn, "IncrementTurn" }, // 1640468800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameData_Statics::NewProp_TurnCount_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameData_Statics::NewProp_TurnCount = { "TurnCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameData, TurnCount), METADATA_PARAMS(Z_Construct_UClass_AGameData_Statics::NewProp_TurnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameData_Statics::NewProp_TurnCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameData_Statics::NewProp_TurnCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameData_Statics::ClassParams = {
		&AGameData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameData_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameData, 3960529244);
	template<> CISK_API UClass* StaticClass<AGameData>()
	{
		return AGameData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameData(Z_Construct_UClass_AGameData, &AGameData::StaticClass, TEXT("/Script/Cisk"), TEXT("AGameData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
