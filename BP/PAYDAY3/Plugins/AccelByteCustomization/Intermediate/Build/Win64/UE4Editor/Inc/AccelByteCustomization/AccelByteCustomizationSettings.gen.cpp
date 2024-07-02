// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/AccelByteCustomizationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteCustomizationSettings() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteCustomizationSettings_NoRegister();
	ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteCustomizationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
	void UAccelByteCustomizationSettings::StaticRegisterNativesUAccelByteCustomizationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAccelByteCustomizationSettings_NoRegister()
	{
		return UAccelByteCustomizationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteCustomizationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeServerUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChallengeServerUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteCustomizationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteCustomizationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteCustomizationSettings" },
		{ "ModuleRelativePath", "Public/AccelByteCustomizationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl = { "ChallengeServerUrl", nullptr, (EPropertyFlags)0x0010000000044005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAccelByteCustomizationSettings, ChallengeServerUrl), METADATA_PARAMS(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteCustomizationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::ClassParams = {
		&UAccelByteCustomizationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteCustomizationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteCustomizationSettings, 2393065824);
	template<> ACCELBYTECUSTOMIZATION_API UClass* StaticClass<UAccelByteCustomizationSettings>()
	{
		return UAccelByteCustomizationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteCustomizationSettings(Z_Construct_UClass_UAccelByteCustomizationSettings, &UAccelByteCustomizationSettings::StaticClass, TEXT("/Script/AccelByteCustomization"), TEXT("UAccelByteCustomizationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteCustomizationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
