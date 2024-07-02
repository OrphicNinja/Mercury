// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStickerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStickerData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void USBZWeaponStickerData::StaticRegisterNativesUSBZWeaponStickerData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponStickerData_NoRegister()
	{
		return USBZWeaponStickerData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponStickerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StickerTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerTextureBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickerTextureBaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerTextureBaseSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickerTextureBaseSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerMetallic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickerMetallic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerNormalStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickerNormalStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerRoughnessContrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickerRoughnessContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerRoughnessValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickerRoughnessValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponStickerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponStickerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTexture = { "StickerTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseRotation = { "StickerTextureBaseRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerTextureBaseRotation), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseSize = { "StickerTextureBaseSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerTextureBaseSize), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerMetallic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerMetallic = { "StickerMetallic", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerMetallic), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerMetallic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerMetallic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerNormalStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerNormalStrength = { "StickerNormalStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerNormalStrength), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerNormalStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerNormalStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessContrast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessContrast = { "StickerRoughnessContrast", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerRoughnessContrast), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessContrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerData" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessValue = { "StickerRoughnessValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponStickerData, StickerRoughnessValue), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponStickerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerTextureBaseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerMetallic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerNormalStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponStickerData_Statics::NewProp_StickerRoughnessValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponStickerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponStickerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponStickerData_Statics::ClassParams = {
		&USBZWeaponStickerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponStickerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponStickerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponStickerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponStickerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponStickerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponStickerData, 2068502092);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponStickerData>()
	{
		return USBZWeaponStickerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponStickerData(Z_Construct_UClass_USBZWeaponStickerData, &USBZWeaponStickerData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponStickerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponStickerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
