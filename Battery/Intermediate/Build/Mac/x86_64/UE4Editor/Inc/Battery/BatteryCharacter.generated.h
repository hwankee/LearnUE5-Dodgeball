// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERY_BatteryCharacter_generated_h
#error "BatteryCharacter.generated.h already included, missing '#pragma once' in BatteryCharacter.h"
#endif
#define BATTERY_BatteryCharacter_generated_h

#define Battery_Source_Battery_BatteryCharacter_h_12_SPARSE_DATA
#define Battery_Source_Battery_BatteryCharacter_h_12_RPC_WRAPPERS
#define Battery_Source_Battery_BatteryCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Battery_Source_Battery_BatteryCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCharacter)


#define Battery_Source_Battery_BatteryCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCharacter)


#define Battery_Source_Battery_BatteryCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCharacter(ABatteryCharacter&&); \
	NO_API ABatteryCharacter(const ABatteryCharacter&); \
public:


#define Battery_Source_Battery_BatteryCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCharacter(ABatteryCharacter&&); \
	NO_API ABatteryCharacter(const ABatteryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCharacter)


#define Battery_Source_Battery_BatteryCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatteryCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatteryCharacter, FollowCamera); }


#define Battery_Source_Battery_BatteryCharacter_h_9_PROLOG
#define Battery_Source_Battery_BatteryCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Source_Battery_BatteryCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Battery_Source_Battery_BatteryCharacter_h_12_SPARSE_DATA \
	Battery_Source_Battery_BatteryCharacter_h_12_RPC_WRAPPERS \
	Battery_Source_Battery_BatteryCharacter_h_12_INCLASS \
	Battery_Source_Battery_BatteryCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battery_Source_Battery_BatteryCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Source_Battery_BatteryCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Battery_Source_Battery_BatteryCharacter_h_12_SPARSE_DATA \
	Battery_Source_Battery_BatteryCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Battery_Source_Battery_BatteryCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Battery_Source_Battery_BatteryCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERY_API UClass* StaticClass<class ABatteryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battery_Source_Battery_BatteryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
