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
#ifdef CISK_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define CISK_Tile_generated_h

#define Cisk_Source_Cisk_Tile_h_14_SPARSE_DATA
#define Cisk_Source_Cisk_Tile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuildStructure); \
	DECLARE_FUNCTION(execSetId); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execGetBonusDef); \
	DECLARE_FUNCTION(execGetBonusAtt); \
	DECLARE_FUNCTION(execSetUnit); \
	DECLARE_FUNCTION(execSelectStructure); \
	DECLARE_FUNCTION(execSelectTileUnit);


#define Cisk_Source_Cisk_Tile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildStructure); \
	DECLARE_FUNCTION(execSetId); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execGetBonusDef); \
	DECLARE_FUNCTION(execGetBonusAtt); \
	DECLARE_FUNCTION(execSetUnit); \
	DECLARE_FUNCTION(execSelectStructure); \
	DECLARE_FUNCTION(execSelectTileUnit);


#define Cisk_Source_Cisk_Tile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define Cisk_Source_Cisk_Tile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define Cisk_Source_Cisk_Tile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define Cisk_Source_Cisk_Tile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define Cisk_Source_Cisk_Tile_h_14_PRIVATE_PROPERTY_OFFSET
#define Cisk_Source_Cisk_Tile_h_11_PROLOG
#define Cisk_Source_Cisk_Tile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_Tile_h_14_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_Tile_h_14_SPARSE_DATA \
	Cisk_Source_Cisk_Tile_h_14_RPC_WRAPPERS \
	Cisk_Source_Cisk_Tile_h_14_INCLASS \
	Cisk_Source_Cisk_Tile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cisk_Source_Cisk_Tile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_Tile_h_14_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_Tile_h_14_SPARSE_DATA \
	Cisk_Source_Cisk_Tile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Cisk_Source_Cisk_Tile_h_14_INCLASS_NO_PURE_DECLS \
	Cisk_Source_Cisk_Tile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISK_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cisk_Source_Cisk_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
