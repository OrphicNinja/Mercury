// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStickerSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStickerSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponStickerSlot::StaticRegisterNativesUSBZWeaponStickerSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponStickerSlot_NoRegister()
	{
		return USBZWeaponStickerSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponStickerSlot_Statics
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
	UObject* (*const Z_Construct_UClass_USBZWeaponStickerSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsPartSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponStickerSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerSlot_Statics::NewProp_StickerPositionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerSlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZWeaponStickerSlot_Statics::NewProp_StickerPositionIndex = { "StickerPositionIndex", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerSlot, StickerPositionIndex), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerSlot_Statics::NewProp_StickerPositionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerSlot_Statics::NewProp_StickerPositionIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponStickerSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerSlot_Statics::NewProp_StickerPositionIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponStickerSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponStickerSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponStickerSlot_Statics::ClassParams = {
		&USBZWeaponStickerSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponStickerSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerSlot_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponStickerSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponStickerSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponStickerSlot, 943885830);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponStickerSlot>()
	{
		return USBZWeaponStickerSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponStickerSlot(Z_Construct_UClass_USBZWeaponStickerSlot, &USBZWeaponStickerSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponStickerSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponStickerSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
