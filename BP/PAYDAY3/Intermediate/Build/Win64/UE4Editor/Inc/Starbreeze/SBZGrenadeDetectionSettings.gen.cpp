// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGrenadeDetectionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGrenadeDetectionSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeDetectionSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeDetectionSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGrenadeDetectionSettings::StaticRegisterNativesUSBZGrenadeDetectionSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZGrenadeDetectionSettings_NoRegister()
	{
		return USBZGrenadeDetectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDelayBeforeExplode_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelayBeforeExplode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrenadeTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrenadeTypeFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGrenadeDetectionSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenadeDetectionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_MinDelayBeforeExplode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZGrenadeDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_MinDelayBeforeExplode = { "MinDelayBeforeExplode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGrenadeDetectionSettings, MinDelayBeforeExplode), METADATA_PARAMS(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_MinDelayBeforeExplode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_MinDelayBeforeExplode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_DetectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZGrenadeDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGrenadeDetectionSettings, DetectionRange), METADATA_PARAMS(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_DetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_DetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_GrenadeTypeFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZGrenadeDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_GrenadeTypeFlags = { "GrenadeTypeFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGrenadeDetectionSettings, GrenadeTypeFlags), METADATA_PARAMS(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_GrenadeTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_GrenadeTypeFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_MinDelayBeforeExplode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_DetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::NewProp_GrenadeTypeFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGrenadeDetectionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::ClassParams = {
		&USBZGrenadeDetectionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGrenadeDetectionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGrenadeDetectionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGrenadeDetectionSettings, 2680100893);
	template<> STARBREEZE_API UClass* StaticClass<USBZGrenadeDetectionSettings>()
	{
		return USBZGrenadeDetectionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGrenadeDetectionSettings(Z_Construct_UClass_USBZGrenadeDetectionSettings, &USBZGrenadeDetectionSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGrenadeDetectionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGrenadeDetectionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
