// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERY_BatteryGameMode_generated_h
#error "BatteryGameMode.generated.h already included, missing '#pragma once' in BatteryGameMode.h"
#endif
#define BATTERY_BatteryGameMode_generated_h

#define Battery_Source_Battery_BatteryGameMode_h_12_SPARSE_DATA
#define Battery_Source_Battery_BatteryGameMode_h_12_RPC_WRAPPERS
#define Battery_Source_Battery_BatteryGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Battery_Source_Battery_BatteryGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryGameMode(); \
	friend struct Z_Construct_UClass_ABatteryGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery"), BATTERY_API) \
	DECLARE_SERIALIZER(ABatteryGameMode)


#define Battery_Source_Battery_BatteryGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryGameMode(); \
	friend struct Z_Construct_UClass_ABatteryGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery"), BATTERY_API) \
	DECLARE_SERIALIZER(ABatteryGameMode)


#define Battery_Source_Battery_BatteryGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTERY_API ABatteryGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERY_API, ABatteryGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERY_API ABatteryGameMode(ABatteryGameMode&&); \
	BATTERY_API ABatteryGameMode(const ABatteryGameMode&); \
public:


#define Battery_Source_Battery_BatteryGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERY_API ABatteryGameMode(ABatteryGameMode&&); \
	BATTERY_API ABatteryGameMode(const ABatteryGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERY_API, ABatteryGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryGameMode)


#define Battery_Source_Battery_BatteryGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Battery_Source_Battery_BatteryGameMode_h_9_PROLOG
#define Battery_Source_Battery_BatteryGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Source_Battery_BatteryGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Battery_Source_Battery_BatteryGameMode_h_12_SPARSE_DATA \
	Battery_Source_Battery_BatteryGameMode_h_12_RPC_WRAPPERS \
	Battery_Source_Battery_BatteryGameMode_h_12_INCLASS \
	Battery_Source_Battery_BatteryGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battery_Source_Battery_BatteryGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Source_Battery_BatteryGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Battery_Source_Battery_BatteryGameMode_h_12_SPARSE_DATA \
	Battery_Source_Battery_BatteryGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Battery_Source_Battery_BatteryGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Battery_Source_Battery_BatteryGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERY_API UClass* StaticClass<class ABatteryGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battery_Source_Battery_BatteryGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
