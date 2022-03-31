// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapStructure;
class ABaseUnitClass;
#ifdef CISK_CISKPlayer_generated_h
#error "CISKPlayer.generated.h already included, missing '#pragma once' in CISKPlayer.h"
#endif
#define CISK_CISKPlayer_generated_h

#define Cisk_Source_Cisk_CISKPlayer_h_13_SPARSE_DATA
#define Cisk_Source_Cisk_CISKPlayer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStructuresArray); \
	DECLARE_FUNCTION(execGetUnitsArray); \
	DECLARE_FUNCTION(execAddStructure); \
	DECLARE_FUNCTION(execAddUnit); \
	DECLARE_FUNCTION(execRemoveMaterials); \
	DECLARE_FUNCTION(execAddMaterials); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetMaterials);


#define Cisk_Source_Cisk_CISKPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStructuresArray); \
	DECLARE_FUNCTION(execGetUnitsArray); \
	DECLARE_FUNCTION(execAddStructure); \
	DECLARE_FUNCTION(execAddUnit); \
	DECLARE_FUNCTION(execRemoveMaterials); \
	DECLARE_FUNCTION(execAddMaterials); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetMaterials);


#define Cisk_Source_Cisk_CISKPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACISKPlayer(); \
	friend struct Z_Construct_UClass_ACISKPlayer_Statics; \
public: \
	DECLARE_CLASS(ACISKPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(ACISKPlayer)


#define Cisk_Source_Cisk_CISKPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACISKPlayer(); \
	friend struct Z_Construct_UClass_ACISKPlayer_Statics; \
public: \
	DECLARE_CLASS(ACISKPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(ACISKPlayer)


#define Cisk_Source_Cisk_CISKPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACISKPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACISKPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACISKPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACISKPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACISKPlayer(ACISKPlayer&&); \
	NO_API ACISKPlayer(const ACISKPlayer&); \
public:


#define Cisk_Source_Cisk_CISKPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACISKPlayer(ACISKPlayer&&); \
	NO_API ACISKPlayer(const ACISKPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACISKPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACISKPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACISKPlayer)


#define Cisk_Source_Cisk_CISKPlayer_h_13_PRIVATE_PROPERTY_OFFSET
#define Cisk_Source_Cisk_CISKPlayer_h_10_PROLOG
#define Cisk_Source_Cisk_CISKPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_CISKPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_CISKPlayer_h_13_SPARSE_DATA \
	Cisk_Source_Cisk_CISKPlayer_h_13_RPC_WRAPPERS \
	Cisk_Source_Cisk_CISKPlayer_h_13_INCLASS \
	Cisk_Source_Cisk_CISKPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cisk_Source_Cisk_CISKPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_CISKPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_CISKPlayer_h_13_SPARSE_DATA \
	Cisk_Source_Cisk_CISKPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Cisk_Source_Cisk_CISKPlayer_h_13_INCLASS_NO_PURE_DECLS \
	Cisk_Source_Cisk_CISKPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISK_API UClass* StaticClass<class ACISKPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cisk_Source_Cisk_CISKPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
