// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballPlayerController() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballPlayerController_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ADodgeballPlayerController::StaticRegisterNativesADodgeballPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADodgeballPlayerController);
	UClass* Z_Construct_UClass_ADodgeballPlayerController_NoRegister()
	{
		return ADodgeballPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_RestartWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_RestartWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DodgeballPlayerController.h" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget_MetaData[] = {
		{ "Category", "DodgeballPlayerController" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget = { "BP_RestartWidget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController, BP_RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget = { "RestartWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController, RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADodgeballPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_BP_RestartWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController_Statics::NewProp_RestartWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballPlayerController_Statics::ClassParams = {
		&ADodgeballPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADodgeballPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeballPlayerController()
	{
		if (!Z_Registration_Info_UClass_ADodgeballPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeballPlayerController.OuterSingleton, Z_Construct_UClass_ADodgeballPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADodgeballPlayerController.OuterSingleton;
	}
	template<> DODGEBALL_API UClass* StaticClass<ADodgeballPlayerController>()
	{
		return ADodgeballPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballPlayerController);
	struct Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeballPlayerController, ADodgeballPlayerController::StaticClass, TEXT("ADodgeballPlayerController"), &Z_Registration_Info_UClass_ADodgeballPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeballPlayerController), 1456934209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_3187864088(TEXT("/Script/Dodgeball"),
		Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_DodgeballPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
