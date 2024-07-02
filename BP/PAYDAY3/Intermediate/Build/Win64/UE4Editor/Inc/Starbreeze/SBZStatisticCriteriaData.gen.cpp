// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
// End Cross Module References
	void USBZStatisticCriteriaData::StaticRegisterNativesUSBZStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister()
	{
		return USBZStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistDataArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LowestDifficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowestDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LowestDifficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinPassableState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPassableState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinPassableState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxPassableState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPassableState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxPassableState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray_Inner = { "HeistDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray = { "HeistDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStatisticCriteriaData, HeistDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty = { "LowestDifficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStatisticCriteriaData, LowestDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState = { "MinPassableState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStatisticCriteriaData, MinPassableState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState = { "MaxPassableState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStatisticCriteriaData, MaxPassableState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_StatisticCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_StatisticCode = { "StatisticCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStatisticCriteriaData, StatisticCode), METADATA_PARAMS(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_StatisticCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_StatisticCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStatisticCriteriaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_HeistDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_LowestDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MinPassableState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_MaxPassableState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStatisticCriteriaData_Statics::NewProp_StatisticCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStatisticCriteriaData_Statics::ClassParams = {
		&USBZStatisticCriteriaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStatisticCriteriaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStatisticCriteriaData, 2009992377);
	template<> STARBREEZE_API UClass* StaticClass<USBZStatisticCriteriaData>()
	{
		return USBZStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStatisticCriteriaData(Z_Construct_UClass_USBZStatisticCriteriaData, &USBZStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
