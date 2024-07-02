// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmorData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmorData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmorData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
	void USBZArmorData::StaticRegisterNativesUSBZArmorData()
	{
	}
	UClass* Z_Construct_UClass_USBZArmorData_NoRegister()
	{
		return USBZArmorData::StaticClass();
	}
	struct Z_Construct_UClass_USBZArmorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorDamageScaleOverrideDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDamageScaleOverrideDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmorDamageScaleOverrideDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideArmorColor_MetaData[];
#endif
		static void NewProp_bOverrideArmorColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideArmorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenMainColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenMainColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenLaggingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenLaggingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenTraumaColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenTraumaColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDescriptionStatColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArmorDescriptionStatColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDamageFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ArmorDamageFeedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZArmorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZArmorData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray_Inner = { "GameplayEffectArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray = { "GameplayEffectArray", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, GameplayEffectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray_Inner = { "ArmorDamageScaleOverrideDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZArmorDamageScaleOverrideData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray = { "ArmorDamageScaleOverrideDataArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, ArmorDamageScaleOverrideDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	void Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor_SetBit(void* Obj)
	{
		((USBZArmorData*)Obj)->bOverrideArmorColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor = { "bOverrideArmorColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZArmorData), &Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenBackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenBackgroundColor = { "OverridenBackgroundColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, OverridenBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenMainColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenMainColor = { "OverridenMainColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, OverridenMainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenMainColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenMainColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenLaggingColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenLaggingColor = { "OverridenLaggingColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, OverridenLaggingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenLaggingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenLaggingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenTraumaColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenTraumaColor = { "OverridenTraumaColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, OverridenTraumaColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenTraumaColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenTraumaColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDescriptionStatColorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDescriptionStatColorName = { "ArmorDescriptionStatColorName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, ArmorDescriptionStatColorName), METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDescriptionStatColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDescriptionStatColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorData" },
		{ "ModuleRelativePath", "Public/SBZArmorData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageFeedback = { "ArmorDamageFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArmorData, ArmorDamageFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageFeedback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZArmorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_GameplayEffectArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageScaleOverrideDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_bOverrideArmorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenMainColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenLaggingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_OverridenTraumaColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDescriptionStatColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArmorData_Statics::NewProp_ArmorDamageFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZArmorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZArmorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZArmorData_Statics::ClassParams = {
		&USBZArmorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZArmorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZArmorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArmorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZArmorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZArmorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZArmorData, 465322324);
	template<> STARBREEZE_API UClass* StaticClass<USBZArmorData>()
	{
		return USBZArmorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZArmorData(Z_Construct_UClass_USBZArmorData, &USBZArmorData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZArmorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZArmorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
