// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/FortStructure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortStructure() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_AFortStructure_NoRegister();
	CISK_API UClass* Z_Construct_UClass_AFortStructure();
	CISK_API UClass* Z_Construct_UClass_AMapStructure();
	UPackage* Z_Construct_UPackage__Script_Cisk();
// End Cross Module References
	void AFortStructure::StaticRegisterNativesAFortStructure()
	{
	}
	UClass* Z_Construct_UClass_AFortStructure_NoRegister()
	{
		return AFortStructure::StaticClass();
	}
	struct Z_Construct_UClass_AFortStructure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortStructure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMapStructure,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortStructure_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FortStructure.h" },
		{ "ModuleRelativePath", "FortStructure.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortStructure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortStructure>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFortStructure_Statics::ClassParams = {
		&AFortStructure::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFortStructure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFortStructure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFortStructure()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFortStructure_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFortStructure, 2148376261);
	template<> CISK_API UClass* StaticClass<AFortStructure>()
	{
		return AFortStructure::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFortStructure(Z_Construct_UClass_AFortStructure, &AFortStructure::StaticClass, TEXT("/Script/Cisk"), TEXT("AFortStructure"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortStructure);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
