// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/ArmoredCarUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmoredCarUnit() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_AArmoredCarUnit_NoRegister();
	CISK_API UClass* Z_Construct_UClass_AArmoredCarUnit();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass();
	UPackage* Z_Construct_UPackage__Script_Cisk();
// End Cross Module References
	void AArmoredCarUnit::StaticRegisterNativesAArmoredCarUnit()
	{
	}
	UClass* Z_Construct_UClass_AArmoredCarUnit_NoRegister()
	{
		return AArmoredCarUnit::StaticClass();
	}
	struct Z_Construct_UClass_AArmoredCarUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmoredCarUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseUnitClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmoredCarUnit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmoredCarUnit.h" },
		{ "ModuleRelativePath", "ArmoredCarUnit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmoredCarUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmoredCarUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmoredCarUnit_Statics::ClassParams = {
		&AArmoredCarUnit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmoredCarUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmoredCarUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmoredCarUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmoredCarUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmoredCarUnit, 2002480790);
	template<> CISK_API UClass* StaticClass<AArmoredCarUnit>()
	{
		return AArmoredCarUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmoredCarUnit(Z_Construct_UClass_AArmoredCarUnit, &AArmoredCarUnit::StaticClass, TEXT("/Script/Cisk"), TEXT("AArmoredCarUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmoredCarUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
