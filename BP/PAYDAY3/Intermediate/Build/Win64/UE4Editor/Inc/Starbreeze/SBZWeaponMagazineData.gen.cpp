// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponMagazineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponMagazineData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMagazineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMagazineData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType();
// End Cross Module References
	void USBZWeaponMagazineData::StaticRegisterNativesUSBZWeaponMagazineData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponMagazineData_NoRegister()
	{
		return USBZWeaponMagazineData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponMagazineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoadedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoLoadedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPerReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoPerReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventoryMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoInventoryMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoPickup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoVisibilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoVisibilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoVisibilityType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponMagazineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartCustomData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponMagazineData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoadedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoadedMax = { "AmmoLoadedMax", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoLoadedMax), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoadedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoadedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoaded = { "AmmoLoaded", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoLoaded), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPerReload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPerReload = { "AmmoPerReload", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoPerReload), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPerReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPerReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventoryMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventoryMax = { "AmmoInventoryMax", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoInventoryMax), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventoryMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventoryMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventory = { "AmmoInventory", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoInventory), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPickup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPickup = { "AmmoPickup", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoPickup), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPickup_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMagazineData" },
		{ "ModuleRelativePath", "Public/SBZWeaponMagazineData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType = { "AmmoVisibilityType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponMagazineData, AmmoVisibilityType), Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponMagazineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoadedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPerReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventoryMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponMagazineData_Statics::NewProp_AmmoVisibilityType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponMagazineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponMagazineData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponMagazineData_Statics::ClassParams = {
		&USBZWeaponMagazineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponMagazineData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponMagazineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponMagazineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponMagazineData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponMagazineData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponMagazineData, 940574709);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponMagazineData>()
	{
		return USBZWeaponMagazineData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponMagazineData(Z_Construct_UClass_USBZWeaponMagazineData, &USBZWeaponMagazineData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponMagazineData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponMagazineData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
