// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStickerDataConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStickerDataConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerDataConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerDataConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponStickerDataConfig::StaticRegisterNativesUSBZWeaponStickerDataConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponStickerDataConfig_NoRegister()
	{
		return USBZWeaponStickerDataConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerPositionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_StickerPositionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponStickerDataConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerDataConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::NewProp_StickerPositionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerDataConfig" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerDataConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::NewProp_StickerPositionIndex = { "StickerPositionIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerDataConfig, StickerPositionIndex), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::NewProp_StickerPositionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::NewProp_StickerPositionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::NewProp_StickerPositionIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponStickerDataConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::ClassParams = {
		&USBZWeaponStickerDataConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponStickerDataConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponStickerDataConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponStickerDataConfig, 251173938);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponStickerDataConfig>()
	{
		return USBZWeaponStickerDataConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponStickerDataConfig(Z_Construct_UClass_USBZWeaponStickerDataConfig, &USBZWeaponStickerDataConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponStickerDataConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponStickerDataConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
