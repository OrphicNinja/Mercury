// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugPreviewSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugPreviewSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugPreviewSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugPreviewSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionPreviewData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPedestrianTrafficNavLinkPreviewData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void USBZDebugPreviewSettings::StaticRegisterNativesUSBZDebugPreviewSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZDebugPreviewSettings_NoRegister()
	{
		return USBZDebugPreviewSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZDebugPreviewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PedestrianPreviewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PedestrianPreviewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilitySkeletalPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AgilitySkeletalPreview;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LifeActionsIcons_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LifeActionsIcons_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionsIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LifeActionsIcons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDebugPreviewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugPreviewSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDebugPreviewSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugPreviewSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PreviewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugPreviewSettings" },
		{ "ModuleRelativePath", "Public/SBZDebugPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PreviewData = { "PreviewData", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugPreviewSettings, PreviewData), Z_Construct_UClass_USBZLifeActionPreviewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PreviewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PreviewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PedestrianPreviewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugPreviewSettings" },
		{ "ModuleRelativePath", "Public/SBZDebugPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PedestrianPreviewData = { "PedestrianPreviewData", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugPreviewSettings, PedestrianPreviewData), Z_Construct_UClass_USBZPedestrianTrafficNavLinkPreviewData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PedestrianPreviewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PedestrianPreviewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_AgilitySkeletalPreview_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugPreviewSettings" },
		{ "ModuleRelativePath", "Public/SBZDebugPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_AgilitySkeletalPreview = { "AgilitySkeletalPreview", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugPreviewSettings, AgilitySkeletalPreview), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_AgilitySkeletalPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_AgilitySkeletalPreview_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_ValueProp = { "LifeActionsIcons", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_Key_KeyProp = { "LifeActionsIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugPreviewSettings" },
		{ "ModuleRelativePath", "Public/SBZDebugPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons = { "LifeActionsIcons", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugPreviewSettings, LifeActionsIcons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDebugPreviewSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PreviewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_PedestrianPreviewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_AgilitySkeletalPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugPreviewSettings_Statics::NewProp_LifeActionsIcons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDebugPreviewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDebugPreviewSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDebugPreviewSettings_Statics::ClassParams = {
		&USBZDebugPreviewSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDebugPreviewSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugPreviewSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDebugPreviewSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDebugPreviewSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDebugPreviewSettings, 3311256950);
	template<> STARBREEZE_API UClass* StaticClass<USBZDebugPreviewSettings>()
	{
		return USBZDebugPreviewSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDebugPreviewSettings(Z_Construct_UClass_USBZDebugPreviewSettings, &USBZDebugPreviewSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDebugPreviewSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDebugPreviewSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
