// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIWeaponStatsAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIWeaponStatsAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsBlueprint_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer();
// End Cross Module References
	void USBZUIWeaponStatsAsset::StaticRegisterNativesUSBZUIWeaponStatsAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZUIWeaponStatsAsset_NoRegister()
	{
		return USBZUIWeaponStatsAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStatsBlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponStatsBlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatWeightContainerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatWeightContainerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIWeaponStatsAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_WeaponStatsBlueprintClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatsAsset" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_WeaponStatsBlueprintClass = { "WeaponStatsBlueprintClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIWeaponStatsAsset, WeaponStatsBlueprintClass), Z_Construct_UClass_USBZUIWeaponStatsBlueprint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_WeaponStatsBlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_WeaponStatsBlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_StatWeightContainerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIWeaponStatsAsset" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_StatWeightContainerArray = { "StatWeightContainerArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StatWeightContainerArray, USBZUIWeaponStatsAsset), STRUCT_OFFSET(USBZUIWeaponStatsAsset, StatWeightContainerArray), Z_Construct_UScriptStruct_FSBZUIWeaponStatWeightContainer, METADATA_PARAMS(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_StatWeightContainerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_StatWeightContainerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_WeaponStatsBlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::NewProp_StatWeightContainerArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIWeaponStatsAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::ClassParams = {
		&USBZUIWeaponStatsAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIWeaponStatsAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIWeaponStatsAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIWeaponStatsAsset, 2132215375);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIWeaponStatsAsset>()
	{
		return USBZUIWeaponStatsAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIWeaponStatsAsset(Z_Construct_UClass_USBZUIWeaponStatsAsset, &USBZUIWeaponStatsAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIWeaponStatsAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIWeaponStatsAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
