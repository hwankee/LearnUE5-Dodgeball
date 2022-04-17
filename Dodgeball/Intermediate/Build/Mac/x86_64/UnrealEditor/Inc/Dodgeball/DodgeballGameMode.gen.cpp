// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballGameMode() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballGameMode_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References
	void ADodgeballGameMode::StaticRegisterNativesADodgeballGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADodgeballGameMode);
	UClass* Z_Construct_UClass_ADodgeballGameMode_NoRegister()
	{
		return ADodgeballGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DodgeballGameMode.h" },
		{ "ModuleRelativePath", "DodgeballGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballGameMode_Statics::ClassParams = {
		&ADodgeballGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeballGameMode()
	{
		if (!Z_Registration_Info_UClass_ADodgeballGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeballGameMode.OuterSingleton, Z_Construct_UClass_ADodgeballGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADodgeballGameMode.OuterSingleton;
	}
	template<> DODGEBALL_API UClass* StaticClass<ADodgeballGameMode>()
	{
		return ADodgeballGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballGameMode);
	struct Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeballGameMode, ADodgeballGameMode::StaticClass, TEXT("ADodgeballGameMode"), &Z_Registration_Info_UClass_ADodgeballGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeballGameMode), 1277550105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballGameMode_h_1925490137(TEXT("/Script/Dodgeball"),
		Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
