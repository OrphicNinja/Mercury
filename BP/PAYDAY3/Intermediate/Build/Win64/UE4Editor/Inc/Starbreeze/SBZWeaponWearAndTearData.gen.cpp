// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponWearAndTearData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponWearAndTearData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponWearAndTearData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponWearAndTearData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponWearAndTearData::StaticRegisterNativesUSBZWeaponWearAndTearData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponWearAndTearData_NoRegister()
	{
		return USBZWeaponWearAndTearData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponWearAndTearData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WearAndTearLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WearAndTearLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponWearAndTearData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponWearAndTearData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::NewProp_WearAndTearLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponWearAndTearData" },
		{ "ModuleRelativePath", "Public/SBZWeaponWearAndTearData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::NewProp_WearAndTearLevel = { "WearAndTearLevel", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponWearAndTearData, WearAndTearLevel), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::NewProp_WearAndTearLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::NewProp_WearAndTearLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::NewProp_WearAndTearLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponWearAndTearData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::ClassParams = {
		&USBZWeaponWearAndTearData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponWearAndTearData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponWearAndTearData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponWearAndTearData, 1523634556);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponWearAndTearData>()
	{
		return USBZWeaponWearAndTearData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponWearAndTearData(Z_Construct_UClass_USBZWeaponWearAndTearData, &USBZWeaponWearAndTearData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponWearAndTearData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponWearAndTearData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
