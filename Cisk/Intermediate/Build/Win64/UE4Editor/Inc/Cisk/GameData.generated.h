// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CISK_GameData_generated_h
#error "GameData.generated.h already included, missing '#pragma once' in GameData.h"
#endif
#define CISK_GameData_generated_h

#define Cisk_Source_Cisk_GameData_h_12_SPARSE_DATA
#define Cisk_Source_Cisk_GameData_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActivePlayer); \
	DECLARE_FUNCTION(execIncrementTurn); \
	DECLARE_FUNCTION(execGetTurn);


#define Cisk_Source_Cisk_GameData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActivePlayer); \
	DECLARE_FUNCTION(execIncrementTurn); \
	DECLARE_FUNCTION(execGetTurn);


#define Cisk_Source_Cisk_GameData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameData(); \
	friend struct Z_Construct_UClass_AGameData_Statics; \
public: \
	DECLARE_CLASS(AGameData, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(AGameData)


#define Cisk_Source_Cisk_GameData_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameData(); \
	friend struct Z_Construct_UClass_AGameData_Statics; \
public: \
	DECLARE_CLASS(AGameData, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cisk"), NO_API) \
	DECLARE_SERIALIZER(AGameData)


#define Cisk_Source_Cisk_GameData_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameData(AGameData&&); \
	NO_API AGameData(const AGameData&); \
public:


#define Cisk_Source_Cisk_GameData_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameData(AGameData&&); \
	NO_API AGameData(const AGameData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameData)


#define Cisk_Source_Cisk_GameData_h_12_PRIVATE_PROPERTY_OFFSET
#define Cisk_Source_Cisk_GameData_h_9_PROLOG
#define Cisk_Source_Cisk_GameData_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_GameData_h_12_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_GameData_h_12_SPARSE_DATA \
	Cisk_Source_Cisk_GameData_h_12_RPC_WRAPPERS \
	Cisk_Source_Cisk_GameData_h_12_INCLASS \
	Cisk_Source_Cisk_GameData_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cisk_Source_Cisk_GameData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cisk_Source_Cisk_GameData_h_12_PRIVATE_PROPERTY_OFFSET \
	Cisk_Source_Cisk_GameData_h_12_SPARSE_DATA \
	Cisk_Source_Cisk_GameData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Cisk_Source_Cisk_GameData_h_12_INCLASS_NO_PURE_DECLS \
	Cisk_Source_Cisk_GameData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISK_API UClass* StaticClass<class AGameData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cisk_Source_Cisk_GameData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
