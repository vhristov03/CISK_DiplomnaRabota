// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
class ACISKPlayer;
#ifdef CISK_MapStructure_generated_h
#error "MapStructure.generated.h already included, missing '#pragma once' in MapStructure.h"
#endif
#define CISK_MapStructure_generated_h

#define Cisk_Source_Cisk_MapStructure_h_14_SPARSE_DATA
#define Cisk_Source_Cisk_MapStructure_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGetClassName); \
	DECLARE_FUNCTION(execGetStructureOwner); \
	DECLARE_FUNCTION(execSetStructureOwner); \
	DECLARE_FUNCTION(execCapture); \
	DECLARE_FUNCTION(execNewTurnRoutine);


#define Cisk_Source_Cisk_MapStructure_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGetClassName); \
	DECLARE_FUNCTION(execGetStructureOwner); \
	DECLARE_FUNCTION(execSetStructureOwner); \
	DECLARE_FUNCTION(execCapture); \
	DECLARE_FUNCTION(execNewTurnRoutine);


#define Cisk_Source_Cisk_MapStructure_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapStructure(); \
	friend struct Z_Construct_UClass_AMapStructure_Statics; \
public: \
	DECLARE_CLASS(AMapStructure, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(AMapStructure)


#define Cisk_Source_Cisk_MapStructure_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMapStructure(); \
	friend struct Z_Construct_UClass_AMapStructure_Statics; \
public: \
	DECLARE_CLASS(AMapStructure, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(AMapStructure)


#define Cisk_Source_Cisk_MapStructure_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapStructure(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapStructure) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapStructure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapStructure); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapStructure(AMapStructure&&); \
	NO_API AMapStructure(const AMapStructure&); \
public:


#define Cisk_Source_Cisk_MapStructure_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapStructure(AMapStructure&&); \
	NO_API AMapStructure(const AMapStructure&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapStructure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapStructure); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapStructure)


#define Cisk_Source_Cisk_MapStructure_h_14_PRIVATE_PROPERTY_OFFSET
#define Cisk_Source_Cisk_MapStructure_h_11_PROLOG
#define Cisk_Source_Cisk_MapStructure_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_MapStructure_h_14_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_MapStructure_h_14_SPARSE_DATA \
	Cisk_Source_Cisk_MapStructure_h_14_RPC_WRAPPERS \
	Cisk_Source_Cisk_MapStructure_h_14_INCLASS \
	Cisk_Source_Cisk_MapStructure_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cisk_Source_Cisk_MapStructure_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_MapStructure_h_14_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_MapStructure_h_14_SPARSE_DATA \
	Cisk_Source_Cisk_MapStructure_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Cisk_Source_Cisk_MapStructure_h_14_INCLASS_NO_PURE_DECLS \
	Cisk_Source_Cisk_MapStructure_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISK_API UClass* StaticClass<class AMapStructure>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cisk_Source_Cisk_MapStructure_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
