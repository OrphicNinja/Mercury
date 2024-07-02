// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationCollection_NoRegister();
// End Cross Module References
	void USBZLifeActionSettings::StaticRegisterNativesUSBZLifeActionSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZLifeActionSettings_NoRegister()
	{
		return USBZLifeActionSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationCollections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLifeActionSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections_Inner = { "AnimationCollections", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBaseCharacterAnimationCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSettings" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections = { "AnimationCollections", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSettings, AnimationCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSettings_Statics::NewProp_AnimationCollections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionSettings_Statics::ClassParams = {
		&USBZLifeActionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLifeActionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionSettings, 2180978415);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionSettings>()
	{
		return USBZLifeActionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionSettings(Z_Construct_UClass_USBZLifeActionSettings, &USBZLifeActionSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
