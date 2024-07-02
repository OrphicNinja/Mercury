// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterAbilityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterAbilityData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAbilityData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAbilityData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister();
// End Cross Module References
	void USBZCharacterAbilityData::StaticRegisterNativesUSBZCharacterAbilityData()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterAbilityData_NoRegister()
	{
		return USBZCharacterAbilityData::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterAbilityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialArmorHurtReactionWeightReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialArmorHurtReactionWeightReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDealtDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDealtDamageMultiplier;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterAbilityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAbilityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterAbilityData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterAbilityData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialHealth = { "InitialHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAbilityData, InitialHealth), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmor = { "InitialArmor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAbilityData, InitialArmor), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmorHurtReactionWeightReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmorHurtReactionWeightReduction = { "InitialArmorHurtReactionWeightReduction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAbilityData, InitialArmorHurtReactionWeightReduction), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmorHurtReactionWeightReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmorHurtReactionWeightReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialDealtDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialDealtDamageMultiplier = { "InitialDealtDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAbilityData, InitialDealtDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialDealtDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialDealtDamageMultiplier_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray_Inner = { "AbilityArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAbilityData" },
		{ "ModuleRelativePath", "Public/SBZCharacterAbilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray = { "AbilityArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAbilityData, AbilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterAbilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialArmorHurtReactionWeightReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_InitialDealtDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAbilityData_Statics::NewProp_AbilityArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterAbilityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterAbilityData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterAbilityData_Statics::ClassParams = {
		&USBZCharacterAbilityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterAbilityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAbilityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAbilityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterAbilityData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterAbilityData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterAbilityData, 1131445962);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterAbilityData>()
	{
		return USBZCharacterAbilityData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterAbilityData(Z_Construct_UClass_USBZCharacterAbilityData, &USBZCharacterAbilityData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterAbilityData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterAbilityData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
