// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cisk/VehicleFactoryStructure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleFactoryStructure() {}
// Cross Module References
	CISK_API UClass* Z_Construct_UClass_AVehicleFactoryStructure_NoRegister();
	CISK_API UClass* Z_Construct_UClass_AVehicleFactoryStructure();
	CISK_API UClass* Z_Construct_UClass_AMapStructure();
	UPackage* Z_Construct_UPackage__Script_Cisk();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CISK_API UClass* Z_Construct_UClass_ABaseUnitClass_NoRegister();
// End Cross Module References
	void AVehicleFactoryStructure::StaticRegisterNativesAVehicleFactoryStructure()
	{
	}
	UClass* Z_Construct_UClass_AVehicleFactoryStructure_NoRegister()
	{
		return AVehicleFactoryStructure::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleFactoryStructure_Statics
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
	UObject* (*const Z_Construct_UClass_AVehicleFactoryStructure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMapStructure,
		(UObject* (*)())Z_Construct_UPackage__Script_Cisk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleFactoryStructure_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VehicleFactoryStructure.h" },
		{ "ModuleRelativePath", "VehicleFactoryStructure.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleFactoryStructure_Statics::NewProp_UnitToSpawn_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "VehicleFactoryStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVehicleFactoryStructure_Statics::NewProp_UnitToSpawn = { "UnitToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleFactoryStructure, UnitToSpawn), Z_Construct_UClass_ABaseUnitClass_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVehicleFactoryStructure_Statics::NewProp_UnitToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleFactoryStructure_Statics::NewProp_UnitToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleFactoryStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleFactoryStructure_Statics::NewProp_UnitToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleFactoryStructure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleFactoryStructure>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleFactoryStructure_Statics::ClassParams = {
		&AVehicleFactoryStructure::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVehicleFactoryStructure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleFactoryStructure_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleFactoryStructure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleFactoryStructure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleFactoryStructure()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleFactoryStructure_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleFactoryStructure, 494587202);
	template<> CISK_API UClass* StaticClass<AVehicleFactoryStructure>()
	{
		return AVehicleFactoryStructure::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleFactoryStructure(Z_Construct_UClass_AVehicleFactoryStructure, &AVehicleFactoryStructure::StaticClass, TEXT("/Script/Cisk"), TEXT("AVehicleFactoryStructure"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleFactoryStructure);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
