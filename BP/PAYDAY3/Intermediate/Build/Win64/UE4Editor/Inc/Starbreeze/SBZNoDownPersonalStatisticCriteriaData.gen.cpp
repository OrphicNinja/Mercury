// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNoDownPersonalStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNoDownPersonalStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersonalStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNoDownPersonalStatisticCriteriaData::StaticRegisterNativesUSBZNoDownPersonalStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_NoRegister()
	{
		return USBZNoDownPersonalStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPersonalStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNoDownPersonalStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNoDownPersonalStatisticCriteriaData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNoDownPersonalStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::ClassParams = {
		&USBZNoDownPersonalStatisticCriteriaData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNoDownPersonalStatisticCriteriaData, 93306364);
	template<> STARBREEZE_API UClass* StaticClass<USBZNoDownPersonalStatisticCriteriaData>()
	{
		return USBZNoDownPersonalStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNoDownPersonalStatisticCriteriaData(Z_Construct_UClass_USBZNoDownPersonalStatisticCriteriaData, &USBZNoDownPersonalStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNoDownPersonalStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNoDownPersonalStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
