// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery/BatteryGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryGameMode() {}
// Cross Module References
	BATTERY_API UClass* Z_Construct_UClass_ABatteryGameMode_NoRegister();
	BATTERY_API UClass* Z_Construct_UClass_ABatteryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Battery();
// End Cross Module References
	void ABatteryGameMode::StaticRegisterNativesABatteryGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABatteryGameMode_NoRegister()
	{
		return ABatteryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BatteryGameMode.h" },
		{ "ModuleRelativePath", "BatteryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryGameMode_Statics::ClassParams = {
		&ABatteryGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABatteryGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryGameMode, 1472946495);
	template<> BATTERY_API UClass* StaticClass<ABatteryGameMode>()
	{
		return ABatteryGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryGameMode(Z_Construct_UClass_ABatteryGameMode, &ABatteryGameMode::StaticClass, TEXT("/Script/Battery"), TEXT("ABatteryGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
