// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThirdPerson/MyThirdPersonGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdPersonGameModeBase() {}
// Cross Module References
	MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonGameModeBase_NoRegister();
	MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyThirdPerson();
// End Cross Module References
	void AMyThirdPersonGameModeBase::StaticRegisterNativesAMyThirdPersonGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyThirdPersonGameModeBase);
	UClass* Z_Construct_UClass_AMyThirdPersonGameModeBase_NoRegister()
	{
		return AMyThirdPersonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyThirdPerson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyThirdPersonGameModeBase.h" },
		{ "ModuleRelativePath", "MyThirdPersonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdPersonGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::ClassParams = {
		&AMyThirdPersonGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyThirdPersonGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyThirdPersonGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyThirdPersonGameModeBase.OuterSingleton, Z_Construct_UClass_AMyThirdPersonGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyThirdPersonGameModeBase.OuterSingleton;
	}
	template<> MYTHIRDPERSON_API UClass* StaticClass<AMyThirdPersonGameModeBase>()
	{
		return AMyThirdPersonGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyThirdPersonGameModeBase);
	struct Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyThirdPersonGameModeBase, AMyThirdPersonGameModeBase::StaticClass, TEXT("AMyThirdPersonGameModeBase"), &Z_Registration_Info_UClass_AMyThirdPersonGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyThirdPersonGameModeBase), 2771381864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonGameModeBase_h_842616035(TEXT("/Script/MyThirdPerson"),
		Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThirdPerson_Source_MyThirdPerson_MyThirdPersonGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
