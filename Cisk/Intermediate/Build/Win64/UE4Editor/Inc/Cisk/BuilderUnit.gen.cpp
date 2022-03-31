// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/BuilderUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderUnit() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_ABuilderUnit_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ABuilderUnit();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	CISK_API UClass* Z_Construct_UClass_AMapStructure_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABuilderUnit::execBuildStructure)
	{
		P_GET_OBJECT(AMapStructure,Z_Param_NewStructure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BuildStructure(Z_Param_NewStructure);
		P_NATIVE_END;
	}
	void ABuilderUnit::StaticRegisterNativesABuilderUnit()
	{
		UClass* Class = ABuilderUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildStructure", &ABuilderUnit::execBuildStructure },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics
	{
		struct BuilderUnit_eventBuildStructure_Parms
		{
			AMapStructure* NewStructure;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewStructure;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::NewProp_NewStructure = { "NewStructure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuilderUnit_eventBuildStructure_Parms, NewStructure), Z_Construct_UClass_AMapStructure_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuilderUnit_eventBuildStructure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::NewProp_NewStructure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "BuilderUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilderUnit, nullptr, "BuildStructure", nullptr, nullptr, sizeof(BuilderUnit_eventBuildStructure_Parms), Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuilderUnit_BuildStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuilderUnit_BuildStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABuilderUnit_NoRegister()
	{
		return ABuilderUnit::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseUnitClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuilderUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuilderUnit_BuildStructure, "BuildStructure" }, // 214678287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderUnit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BuilderUnit.h" },
		{ "ModuleRelativePath", "BuilderUnit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderUnit_Statics::ClassParams = {
		&ABuilderUnit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderUnit, 723666722);
	template<> CISK_API UClass* StaticClass<ABuilderUnit>()
	{
		return ABuilderUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderUnit(Z_Construct_UClass_ABuilderUnit, &ABuilderUnit::StaticClass, TEXT("/Script/Cisk"), TEXT("ABuilderUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
