// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThirdPerson/MyThirdPersonChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdPersonChar() {}
// Cross Module References
	MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister();
	MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonChar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyThirdPerson();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AMyThirdPersonChar::StaticRegisterNativesAMyThirdPersonChar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyThirdPersonChar);
	UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister()
	{
		return AMyThirdPersonChar::StaticClass();
	}
	struct Z_Construct_UClass_AMyThirdPersonChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyThirdPersonChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyThirdPerson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyThirdPersonChar.h" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyTPS_Cam" },
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc\xec\x9d\x98 \xed\x91\x9c\xec\x8b\x9c\xec\x9e\x90 \xec\x97\xad\xed\x95\xa0\xec\x9d\x84 \xeb\x8b\xb4\xeb\x8b\xb9\xed\x95\x98\xeb\x8a\x94 \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc\xec\x9d\x98 \xed\x91\x9c\xec\x8b\x9c\xec\x9e\x90 \xec\x97\xad\xed\x95\xa0\xec\x9d\x84 \xeb\x8b\xb4\xeb\x8b\xb9\xed\x95\x98\xeb\x8a\x94 \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyThirdPersonChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyTPS_Cam" },
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyThirdPersonChar, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyThirdPersonChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdPersonChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams = {
		&AMyThirdPersonChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyThirdPersonChar()
	{
		if (!Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton, Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton;
	}
	template<> MYTHIRDPERSON_API UClass* StaticClass<AMyThirdPersonChar>()
	{
		return AMyThirdPersonChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyThirdPersonChar);
	struct Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyThirdPersonChar, AMyThirdPersonChar::StaticClass, TEXT("AMyThirdPersonChar"), &Z_Registration_Info_UClass_AMyThirdPersonChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyThirdPersonChar), 2273893493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_3372742390(TEXT("/Script/MyThirdPerson"),
		Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
