// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYGAME_BatteryGameCharacter_generated_h
#error "BatteryGameCharacter.generated.h already included, missing '#pragma once' in BatteryGameCharacter.h"
#endif
#define BATTERYGAME_BatteryGameCharacter_generated_h

#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_SPARSE_DATA
#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_RPC_WRAPPERS
#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryGameCharacter(); \
	friend struct Z_Construct_UClass_ABatteryGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryGame"), NO_API) \
	DECLARE_SERIALIZER(ABatteryGameCharacter)


#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryGameCharacter(); \
	friend struct Z_Construct_UClass_ABatteryGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryGame"), NO_API) \
	DECLARE_SERIALIZER(ABatteryGameCharacter)


#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryGameCharacter(ABatteryGameCharacter&&); \
	NO_API ABatteryGameCharacter(const ABatteryGameCharacter&); \
public:


#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryGameCharacter(ABatteryGameCharacter&&); \
	NO_API ABatteryGameCharacter(const ABatteryGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryGameCharacter)


#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatteryGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatteryGameCharacter, FollowCamera); }


#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_9_PROLOG
#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_SPARSE_DATA \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_RPC_WRAPPERS \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_INCLASS \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_SPARSE_DATA \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BatteryGame_Source_BatteryGame_BatteryGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYGAME_API UClass* StaticClass<class ABatteryGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryGame_Source_BatteryGame_BatteryGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
