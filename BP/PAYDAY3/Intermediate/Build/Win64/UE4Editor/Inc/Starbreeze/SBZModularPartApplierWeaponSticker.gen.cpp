// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplierWeaponSticker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplierWeaponSticker() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponSticker_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponSticker();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerDataConfig_NoRegister();
// End Cross Module References
	void USBZModularPartApplierWeaponSticker::StaticRegisterNativesUSBZModularPartApplierWeaponSticker()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponSticker_NoRegister()
	{
		return USBZModularPartApplierWeaponSticker::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StickerConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplierWeaponSticker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierWeaponSticker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::NewProp_StickerConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularPartApplierWeaponSticker" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierWeaponSticker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::NewProp_StickerConfig = { "StickerConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularPartApplierWeaponSticker, StickerConfig), Z_Construct_UClass_USBZWeaponStickerDataConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::NewProp_StickerConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::NewProp_StickerConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::NewProp_StickerConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplierWeaponSticker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::ClassParams = {
		&USBZModularPartApplierWeaponSticker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponSticker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplierWeaponSticker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplierWeaponSticker, 3411068628);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplierWeaponSticker>()
	{
		return USBZModularPartApplierWeaponSticker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplierWeaponSticker(Z_Construct_UClass_USBZModularPartApplierWeaponSticker, &USBZModularPartApplierWeaponSticker::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplierWeaponSticker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplierWeaponSticker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
