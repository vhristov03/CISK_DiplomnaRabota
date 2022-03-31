// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/InfantryUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfantryUnit() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_AInfantryUnit_NoRegister();
	CISK_API UClass* Z_Construct_UClass_AInfantryUnit();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass();
	UPackage* Z_Construct_UPackage__Script_Cisk();
// End Cross Module References
	void AInfantryUnit::StaticRegisterNativesAInfantryUnit()
	{
	}
	UClass* Z_Construct_UClass_AInfantryUnit_NoRegister()
	{
		return AInfantryUnit::StaticClass();
	}
	struct Z_Construct_UClass_AInfantryUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfantryUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseUnitClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfantryUnit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InfantryUnit.h" },
		{ "ModuleRelativePath", "InfantryUnit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfantryUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfantryUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfantryUnit_Statics::ClassParams = {
		&AInfantryUnit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInfantryUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfantryUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfantryUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfantryUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfantryUnit, 951965296);
	template<> CISK_API UClass* StaticClass<AInfantryUnit>()
	{
		return AInfantryUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfantryUnit(Z_Construct_UClass_AInfantryUnit, &AInfantryUnit::StaticClass, TEXT("/Script/Cisk"), TEXT("AInfantryUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfantryUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
