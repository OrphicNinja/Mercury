// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillFloatValue();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillIntValue();
// End Cross Module References
	void USBZSkillData::StaticRegisterNativesUSBZSkillData()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillData_NoRegister()
	{
		return USBZSkillData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippedTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquippedTagGranted_MetaData[];
#endif
		static void NewProp_bIsEquippedTagGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquippedTagGranted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrewEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDescriptionImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillDescriptionImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuffActivationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffActivationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuffActivationArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequiredBuffTypeArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequiredBuffTypeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBuffTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredBuffTypeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAnyRequiredBuffTypeEnough_MetaData[];
#endif
		static void NewProp_bIsAnyRequiredBuffTypeEnough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnyRequiredBuffTypeEnough;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_ProgressLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_ProgressLevel = { "ProgressLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, ProgressLevel), METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_ProgressLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_ProgressLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_EquippedTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_EquippedTag = { "EquippedTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, EquippedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_EquippedTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_EquippedTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	void Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted_SetBit(void* Obj)
	{
		((USBZSkillData*)Obj)->bIsEquippedTagGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted = { "bIsEquippedTagGranted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSkillData), &Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_PlayerEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_PlayerEffect = { "PlayerEffect", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, PlayerEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_PlayerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_PlayerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_CrewEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_CrewEffect = { "CrewEffect", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, CrewEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_CrewEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_CrewEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, Category), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_SkillDescriptionImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_SkillDescriptionImage = { "SkillDescriptionImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, SkillDescriptionImage), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_SkillDescriptionImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_SkillDescriptionImage_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray_Inner = { "BuffActivationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAbilityBuffTypeActivation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray = { "BuffActivationArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, BuffActivationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_Inner = { "RequiredBuffTypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray = { "RequiredBuffTypeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, RequiredBuffTypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	void Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough_SetBit(void* Obj)
	{
		((USBZSkillData*)Obj)->bIsAnyRequiredBuffTypeEnough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough = { "bIsAnyRequiredBuffTypeEnough", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSkillData), &Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSkillFloatValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSkillIntValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillData" },
		{ "ModuleRelativePath", "Public/SBZSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillData, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_ProgressLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_EquippedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsEquippedTagGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_PlayerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_CrewEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_SkillDescriptionImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_BuffActivationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_RequiredBuffTypeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_bIsAnyRequiredBuffTypeEnough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_FloatArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillData_Statics::NewProp_IntArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillData_Statics::ClassParams = {
		&USBZSkillData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillData, 648479226);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillData>()
	{
		return USBZSkillData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillData(Z_Construct_UClass_USBZSkillData, &USBZSkillData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
