// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryKillsStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryKillsStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSentryKillsStatisticCriteriaData::StaticRegisterNativesUSBZSentryKillsStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_NoRegister()
	{
		return USBZSentryKillsStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SentryKills;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryKillsStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryKillsStatisticCriteriaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::NewProp_SentryKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryKillsStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZSentryKillsStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::NewProp_SentryKills = { "SentryKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryKillsStatisticCriteriaData, SentryKills), METADATA_PARAMS(Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::NewProp_SentryKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::NewProp_SentryKills_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::NewProp_SentryKills,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryKillsStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::ClassParams = {
		&USBZSentryKillsStatisticCriteriaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryKillsStatisticCriteriaData, 1840694174);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryKillsStatisticCriteriaData>()
	{
		return USBZSentryKillsStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryKillsStatisticCriteriaData(Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData, &USBZSentryKillsStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryKillsStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryKillsStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
