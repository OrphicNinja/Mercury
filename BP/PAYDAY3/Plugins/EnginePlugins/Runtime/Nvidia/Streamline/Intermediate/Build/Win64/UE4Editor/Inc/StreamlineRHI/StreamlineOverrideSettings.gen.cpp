// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineRHI/Public/StreamlineOverrideSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineOverrideSettings() {}
// Cross Module References
	STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineOverrideSettings_NoRegister();
	STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineOverrideSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StreamlineRHI();
	STREAMLINERHI_API UEnum* Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride();
// End Cross Module References
	void UStreamlineOverrideSettings::StaticRegisterNativesUStreamlineOverrideSettings()
	{
	}
	UClass* Z_Construct_UClass_UStreamlineOverrideSettings_NoRegister()
	{
		return UStreamlineOverrideSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStreamlineOverrideSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnableDLSSFGInPlayInEditorViewportsOverride;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadDebugOverlayOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadDebugOverlayOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadDebugOverlayOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamlineOverrideSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamlineRHI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineOverrideSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreamlineOverrideSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreamlineOverrideSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineOverrideSettings" },
		{ "ModuleRelativePath", "Public/StreamlineOverrideSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride = { "EnableDLSSFGInPlayInEditorViewportsOverride", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamlineOverrideSettings, EnableDLSSFGInPlayInEditorViewportsOverride), Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride, METADATA_PARAMS(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineOverrideSettings" },
		{ "ModuleRelativePath", "Public/StreamlineOverrideSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride = { "LoadDebugOverlayOverride", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamlineOverrideSettings, LoadDebugOverlayOverride), Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride, METADATA_PARAMS(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamlineOverrideSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineOverrideSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::ClassParams = {
		&UStreamlineOverrideSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers),
		0,
		0x001000E4u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamlineOverrideSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamlineOverrideSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamlineOverrideSettings, 4055093485);
	template<> STREAMLINERHI_API UClass* StaticClass<UStreamlineOverrideSettings>()
	{
		return UStreamlineOverrideSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamlineOverrideSettings(Z_Construct_UClass_UStreamlineOverrideSettings, &UStreamlineOverrideSettings::StaticClass, TEXT("/Script/StreamlineRHI"), TEXT("UStreamlineOverrideSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineOverrideSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
