// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAssaultCountStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAssaultCountStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAssaultCountStatisticCriteriaData::StaticRegisterNativesUSBZAssaultCountStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_NoRegister()
	{
		return USBZAssaultCountStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfAssaultsCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfAssaultsCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAssaultCountStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAssaultCountStatisticCriteriaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::NewProp_NumberOfAssaultsCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultCountStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZAssaultCountStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::NewProp_NumberOfAssaultsCompleted = { "NumberOfAssaultsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssaultCountStatisticCriteriaData, NumberOfAssaultsCompleted), METADATA_PARAMS(Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::NewProp_NumberOfAssaultsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::NewProp_NumberOfAssaultsCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::NewProp_NumberOfAssaultsCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAssaultCountStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::ClassParams = {
		&USBZAssaultCountStatisticCriteriaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAssaultCountStatisticCriteriaData, 3875490163);
	template<> STARBREEZE_API UClass* StaticClass<USBZAssaultCountStatisticCriteriaData>()
	{
		return USBZAssaultCountStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAssaultCountStatisticCriteriaData(Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData, &USBZAssaultCountStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAssaultCountStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAssaultCountStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
