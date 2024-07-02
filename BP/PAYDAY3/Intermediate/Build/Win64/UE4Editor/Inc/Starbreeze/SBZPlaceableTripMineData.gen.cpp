// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableTripMineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableTripMineData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableTripMineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableTripMineData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZPlaceableTripMineData::StaticRegisterNativesUSBZPlaceableTripMineData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceableTripMineData_NoRegister()
	{
		return USBZPlaceableTripMineData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceableTripMineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlayerRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalPlayerRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DurationTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceableTripMineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableTripMineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableTripMineData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableTripMineData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableTripMineData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableTripMineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableTripMineData, Range), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_AdditionalPlayerRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableTripMineData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableTripMineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_AdditionalPlayerRange = { "AdditionalPlayerRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableTripMineData, AdditionalPlayerRange), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_AdditionalPlayerRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_AdditionalPlayerRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_StunTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableTripMineData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableTripMineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_StunTime = { "StunTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableTripMineData, StunTime), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_StunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_StunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableTripMineData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableTripMineData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableTripMineData, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_GameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_GameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_DurationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableTripMineData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableTripMineData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_DurationTag = { "DurationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableTripMineData, DurationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_DurationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_DurationTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlaceableTripMineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_AdditionalPlayerRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_StunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_GameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableTripMineData_Statics::NewProp_DurationTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceableTripMineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceableTripMineData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceableTripMineData_Statics::ClassParams = {
		&USBZPlaceableTripMineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlaceableTripMineData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableTripMineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceableTripMineData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceableTripMineData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceableTripMineData, 1930510708);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceableTripMineData>()
	{
		return USBZPlaceableTripMineData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceableTripMineData(Z_Construct_UClass_USBZPlaceableTripMineData, &USBZPlaceableTripMineData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceableTripMineData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceableTripMineData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
