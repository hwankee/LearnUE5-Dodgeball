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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyThirdPersonChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdPersonChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams = {
		&AMyThirdPersonChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_AMyThirdPersonChar, AMyThirdPersonChar::StaticClass, TEXT("AMyThirdPersonChar"), &Z_Registration_Info_UClass_AMyThirdPersonChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyThirdPersonChar), 3932875902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_595114296(TEXT("/Script/MyThirdPerson"),
		Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
