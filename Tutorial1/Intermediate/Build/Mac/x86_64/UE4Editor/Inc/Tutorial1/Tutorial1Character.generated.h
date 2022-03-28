// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIAL1_Tutorial1Character_generated_h
#error "Tutorial1Character.generated.h already included, missing '#pragma once' in Tutorial1Character.h"
#endif
#define TUTORIAL1_Tutorial1Character_generated_h

#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_SPARSE_DATA
#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_RPC_WRAPPERS
#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorial1Character(); \
	friend struct Z_Construct_UClass_ATutorial1Character_Statics; \
public: \
	DECLARE_CLASS(ATutorial1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tutorial1"), NO_API) \
	DECLARE_SERIALIZER(ATutorial1Character)


#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATutorial1Character(); \
	friend struct Z_Construct_UClass_ATutorial1Character_Statics; \
public: \
	DECLARE_CLASS(ATutorial1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tutorial1"), NO_API) \
	DECLARE_SERIALIZER(ATutorial1Character)


#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorial1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutorial1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorial1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorial1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorial1Character(ATutorial1Character&&); \
	NO_API ATutorial1Character(const ATutorial1Character&); \
public:


#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorial1Character(ATutorial1Character&&); \
	NO_API ATutorial1Character(const ATutorial1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorial1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorial1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorial1Character)


#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATutorial1Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATutorial1Character, FollowCamera); }


#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_9_PROLOG
#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_SPARSE_DATA \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_RPC_WRAPPERS \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_INCLASS \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_SPARSE_DATA \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_INCLASS_NO_PURE_DECLS \
	Tutorial1_Source_Tutorial1_Tutorial1Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIAL1_API UClass* StaticClass<class ATutorial1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tutorial1_Source_Tutorial1_Tutorial1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
