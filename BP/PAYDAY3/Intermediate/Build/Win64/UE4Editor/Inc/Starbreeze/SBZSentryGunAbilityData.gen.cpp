// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunAbilityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunAbilityData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAbilityData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAbilityData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister();
// End Cross Module References
	void USBZSentryGunAbilityData::StaticRegisterNativesUSBZSentryGunAbilityData()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryGunAbilityData_NoRegister()
	{
		return USBZSentryGunAbilityData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryGunAbilityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryGunAbilityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAbilityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryGunAbilityData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray_Inner = { "AbilityArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGunAbilityData" },
		{ "ModuleRelativePath", "Public/SBZSentryGunAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray = { "AbilityArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryGunAbilityData, AbilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSentryGunAbilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryGunAbilityData_Statics::NewProp_AbilityArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryGunAbilityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryGunAbilityData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryGunAbilityData_Statics::ClassParams = {
		&USBZSentryGunAbilityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSentryGunAbilityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAbilityData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunAbilityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunAbilityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryGunAbilityData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryGunAbilityData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryGunAbilityData, 1225033288);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryGunAbilityData>()
	{
		return USBZSentryGunAbilityData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryGunAbilityData(Z_Construct_UClass_USBZSentryGunAbilityData, &USBZSentryGunAbilityData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryGunAbilityData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryGunAbilityData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
