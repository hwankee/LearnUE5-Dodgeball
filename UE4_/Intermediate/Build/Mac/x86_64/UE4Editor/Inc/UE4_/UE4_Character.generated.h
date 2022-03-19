// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4__UE4_Character_generated_h
#error "UE4_Character.generated.h already included, missing '#pragma once' in UE4_Character.h"
#endif
#define UE4__UE4_Character_generated_h

#define UE4__Source_UE4__UE4_Character_h_12_SPARSE_DATA
#define UE4__Source_UE4__UE4_Character_h_12_RPC_WRAPPERS
#define UE4__Source_UE4__UE4_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4__Source_UE4__UE4_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4_Character(); \
	friend struct Z_Construct_UClass_AUE4_Character_Statics; \
public: \
	DECLARE_CLASS(AUE4_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_"), NO_API) \
	DECLARE_SERIALIZER(AUE4_Character)


#define UE4__Source_UE4__UE4_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUE4_Character(); \
	friend struct Z_Construct_UClass_AUE4_Character_Statics; \
public: \
	DECLARE_CLASS(AUE4_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_"), NO_API) \
	DECLARE_SERIALIZER(AUE4_Character)


#define UE4__Source_UE4__UE4_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4_Character(AUE4_Character&&); \
	NO_API AUE4_Character(const AUE4_Character&); \
public:


#define UE4__Source_UE4__UE4_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4_Character(AUE4_Character&&); \
	NO_API AUE4_Character(const AUE4_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4_Character)


#define UE4__Source_UE4__UE4_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUE4_Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AUE4_Character, FollowCamera); }


#define UE4__Source_UE4__UE4_Character_h_9_PROLOG
#define UE4__Source_UE4__UE4_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4__Source_UE4__UE4_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4__Source_UE4__UE4_Character_h_12_SPARSE_DATA \
	UE4__Source_UE4__UE4_Character_h_12_RPC_WRAPPERS \
	UE4__Source_UE4__UE4_Character_h_12_INCLASS \
	UE4__Source_UE4__UE4_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4__Source_UE4__UE4_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4__Source_UE4__UE4_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4__Source_UE4__UE4_Character_h_12_SPARSE_DATA \
	UE4__Source_UE4__UE4_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4__Source_UE4__UE4_Character_h_12_INCLASS_NO_PURE_DECLS \
	UE4__Source_UE4__UE4_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4__API UClass* StaticClass<class AUE4_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4__Source_UE4__UE4_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
