// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/RestartWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestartWidget() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URestartWidget::execOnRestartClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartClicked();
		P_NATIVE_END;
	}
	void URestartWidget::StaticRegisterNativesURestartWidget()
	{
		UClass* Class = URestartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRestartClicked", &URestartWidget::execOnRestartClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestartWidget, nullptr, "OnRestartClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URestartWidget_OnRestartClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URestartWidget);
	UClass* Z_Construct_UClass_URestartWidget_NoRegister()
	{
		return URestartWidget::StaticClass();
	}
	struct Z_Construct_UClass_URestartWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URestartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URestartWidget_OnRestartClicked, "OnRestartClicked" }, // 92012611
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RestartWidget.h" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "/* \xec\x9d\xb4 \xec\x86\x8d\xec\x84\xb1\xec\x9d\x84 \xed\x86\xb5\xed\x95\xb4 \xec\x9c\x84\xec\xb9\x98, \xed\x81\xac\xea\xb8\xb0 \xeb\x93\xb1\xec\x9d\x98 \xec\x86\x8d\xec\x84\xb1\xec\x9d\x84 \xec\x9e\x90\xec\x9c\xa0\xeb\xa1\xad\xea\xb2\x8c \xec\x9c\x84\xec\xa0\xaf \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xed\x8e\xb8\xec\xa7\x91 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8b\xa4. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RestartWidget.h" },
		{ "OptrionalWidget", "TRUE" },
		{ "ToolTip", "\xec\x9d\xb4 \xec\x86\x8d\xec\x84\xb1\xec\x9d\x84 \xed\x86\xb5\xed\x95\xb4 \xec\x9c\x84\xec\xb9\x98, \xed\x81\xac\xea\xb8\xb0 \xeb\x93\xb1\xec\x9d\x98 \xec\x86\x8d\xec\x84\xb1\xec\x9d\x84 \xec\x9e\x90\xec\x9c\xa0\xeb\xa1\xad\xea\xb2\x8c \xec\x9c\x84\xec\xa0\xaf \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xed\x8e\xb8\xec\xa7\x91 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8b\xa4." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URestartWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestartWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestartWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URestartWidget_Statics::ClassParams = {
		&URestartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URestartWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestartWidget()
	{
		if (!Z_Registration_Info_UClass_URestartWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URestartWidget.OuterSingleton, Z_Construct_UClass_URestartWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URestartWidget.OuterSingleton;
	}
	template<> DODGEBALL_API UClass* StaticClass<URestartWidget>()
	{
		return URestartWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestartWidget);
	struct Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URestartWidget, URestartWidget::StaticClass, TEXT("URestartWidget"), &Z_Registration_Info_UClass_URestartWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URestartWidget), 1376998994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_RestartWidget_h_321457477(TEXT("/Script/Dodgeball"),
		Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
