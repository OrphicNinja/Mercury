// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerProjectileWeaponFireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerProjectileWeaponFireData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerProjectileWeaponFireData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerWeaponFireData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerProjectileWeaponFireData::StaticRegisterNativesUSBZPlayerProjectileWeaponFireData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_NoRegister()
	{
		return USBZPlayerProjectileWeaponFireData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffsetFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnOffsetFromCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerWeaponFireData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerProjectileWeaponFireData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerProjectileWeaponFireData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_PitchAdjustment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerProjectileWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerProjectileWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_PitchAdjustment = { "PitchAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerProjectileWeaponFireData, PitchAdjustment), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_PitchAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_PitchAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_SpawnOffsetFromCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerProjectileWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerProjectileWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_SpawnOffsetFromCamera = { "SpawnOffsetFromCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerProjectileWeaponFireData, SpawnOffsetFromCamera), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_SpawnOffsetFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_SpawnOffsetFromCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_PitchAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::NewProp_SpawnOffsetFromCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerProjectileWeaponFireData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::ClassParams = {
		&USBZPlayerProjectileWeaponFireData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerProjectileWeaponFireData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerProjectileWeaponFireData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerProjectileWeaponFireData, 2860769191);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerProjectileWeaponFireData>()
	{
		return USBZPlayerProjectileWeaponFireData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerProjectileWeaponFireData(Z_Construct_UClass_USBZPlayerProjectileWeaponFireData, &USBZPlayerProjectileWeaponFireData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerProjectileWeaponFireData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerProjectileWeaponFireData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
