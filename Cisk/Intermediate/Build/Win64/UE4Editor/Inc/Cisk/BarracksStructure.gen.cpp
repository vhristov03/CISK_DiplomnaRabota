// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/BarracksStructure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarracksStructure() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_ABarracksStructure_NoRegister();
	CISK_API UClass* Z_Construct_UClass_ABarracksStructure();
	CISK_API UClass* Z_Construct_UClass_AMapStructure();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass_NoRegister();
// End Cross Module References
	void ABarracksStructure::StaticRegisterNativesABarracksStructure()
	{
	}
	UClass* Z_Construct_UClass_ABarracksStructure_NoRegister()
	{
		return ABarracksStructure::StaticClass();
	}
	struct Z_Construct_UClass_ABarracksStructure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarracksStructure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMapStructure,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracksStructure_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BarracksStructure.h" },
		{ "ModuleRelativePath", "BarracksStructure.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracksStructure_Statics::NewProp_UnitToSpawn_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "BarracksStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABarracksStructure_Statics::NewProp_UnitToSpawn = { "UnitToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarracksStructure, UnitToSpawn), Z_Construct_UClass_ABaseUnitClass_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABarracksStructure_Statics::NewProp_UnitToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarracksStructure_Statics::NewProp_UnitToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarracksStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarracksStructure_Statics::NewProp_UnitToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarracksStructure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarracksStructure>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarracksStructure_Statics::ClassParams = {
		&ABarracksStructure::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarracksStructure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarracksStructure_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarracksStructure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarracksStructure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarracksStructure()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarracksStructure_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarracksStructure, 2181180423);
	template<> CISK_API UClass* StaticClass<ABarracksStructure>()
	{
		return ABarracksStructure::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarracksStructure(Z_Construct_UClass_ABarracksStructure, &ABarracksStructure::StaticClass, TEXT("/Script/Cisk"), TEXT("ABarracksStructure"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarracksStructure);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
