// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapStructure;
#ifdef CISK_BuilderUnit_generated_h
#error "BuilderUnit.generated.h already included, missing '#pragma once' in BuilderUnit.h"
#endif
#define CISK_BuilderUnit_generated_h

#define Cisk_Source_Cisk_BuilderUnit_h_16_SPARSE_DATA
#define Cisk_Source_Cisk_BuilderUnit_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuildStructure);


#define Cisk_Source_Cisk_BuilderUnit_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildStructure);


#define Cisk_Source_Cisk_BuilderUnit_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilderUnit(); \
	friend struct Z_Construct_UClass_ABuilderUnit_Statics; \
public: \
	DECLARE_CLASS(ABuilderUnit, ABaseUnitClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(ABuilderUnit)


#define Cisk_Source_Cisk_BuilderUnit_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABuilderUnit(); \
	friend struct Z_Construct_UClass_ABuilderUnit_Statics; \
public: \
	DECLARE_CLASS(ABuilderUnit, ABaseUnitClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(ABuilderUnit)


#define Cisk_Source_Cisk_BuilderUnit_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilderUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilderUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderUnit(ABuilderUnit&&); \
	NO_API ABuilderUnit(const ABuilderUnit&); \
public:


#define Cisk_Source_Cisk_BuilderUnit_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderUnit(ABuilderUnit&&); \
	NO_API ABuilderUnit(const ABuilderUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilderUnit)


#define Cisk_Source_Cisk_BuilderUnit_h_16_PRIVATE_PROPERTY_OFFSET
#define Cisk_Source_Cisk_BuilderUnit_h_13_PROLOG
#define Cisk_Source_Cisk_BuilderUnit_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_BuilderUnit_h_16_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_BuilderUnit_h_16_SPARSE_DATA \
	Cisk_Source_Cisk_BuilderUnit_h_16_RPC_WRAPPERS \
	Cisk_Source_Cisk_BuilderUnit_h_16_INCLASS \
	Cisk_Source_Cisk_BuilderUnit_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cisk_Source_Cisk_BuilderUnit_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_BuilderUnit_h_16_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_BuilderUnit_h_16_SPARSE_DATA \
	Cisk_Source_Cisk_BuilderUnit_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Cisk_Source_Cisk_BuilderUnit_h_16_INCLASS_NO_PURE_DECLS \
	Cisk_Source_Cisk_BuilderUnit_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISK_API UClass* StaticClass<class ABuilderUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cisk_Source_Cisk_BuilderUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
