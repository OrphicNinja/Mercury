// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNoKillGuardStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNoKillGuardStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNoKillGuardStatisticCriteriaData::StaticRegisterNativesUSBZNoKillGuardStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_NoRegister()
	{
		return USBZNoKillGuardStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNoKillGuardStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNoKillGuardStatisticCriteriaData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNoKillGuardStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::ClassParams = {
		&USBZNoKillGuardStatisticCriteriaData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNoKillGuardStatisticCriteriaData, 3672376442);
	template<> STARBREEZE_API UClass* StaticClass<USBZNoKillGuardStatisticCriteriaData>()
	{
		return USBZNoKillGuardStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNoKillGuardStatisticCriteriaData(Z_Construct_UClass_USBZNoKillGuardStatisticCriteriaData, &USBZNoKillGuardStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNoKillGuardStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNoKillGuardStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
