// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNoKillStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNoKillStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNoKillStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNoKillStatisticCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNoKillStatisticCriteriaData::StaticRegisterNativesUSBZNoKillStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZNoKillStatisticCriteriaData_NoRegister()
	{
		return USBZNoKillStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNoKillStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNoKillStatisticCriteriaData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNoKillStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::ClassParams = {
		&USBZNoKillStatisticCriteriaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNoKillStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNoKillStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNoKillStatisticCriteriaData, 1097094593);
	template<> STARBREEZE_API UClass* StaticClass<USBZNoKillStatisticCriteriaData>()
	{
		return USBZNoKillStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNoKillStatisticCriteriaData(Z_Construct_UClass_USBZNoKillStatisticCriteriaData, &USBZNoKillStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNoKillStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNoKillStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
