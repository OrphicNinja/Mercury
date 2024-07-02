// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTaserPackStunsCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTaserPackStunsCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTaserPackStunsCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTaserPackStunsCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTaserPackStunsCriteriaData::StaticRegisterNativesUSBZTaserPackStunsCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZTaserPackStunsCriteriaData_NoRegister()
	{
		return USBZTaserPackStunsCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfStuns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfStuns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTaserPackStunsCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTaserPackStunsCriteriaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::NewProp_NumberOfStuns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTaserPackStunsCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZTaserPackStunsCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::NewProp_NumberOfStuns = { "NumberOfStuns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTaserPackStunsCriteriaData, NumberOfStuns), METADATA_PARAMS(Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::NewProp_NumberOfStuns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::NewProp_NumberOfStuns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::NewProp_NumberOfStuns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTaserPackStunsCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::ClassParams = {
		&USBZTaserPackStunsCriteriaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTaserPackStunsCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTaserPackStunsCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTaserPackStunsCriteriaData, 442661722);
	template<> STARBREEZE_API UClass* StaticClass<USBZTaserPackStunsCriteriaData>()
	{
		return USBZTaserPackStunsCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTaserPackStunsCriteriaData(Z_Construct_UClass_USBZTaserPackStunsCriteriaData, &USBZTaserPackStunsCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTaserPackStunsCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTaserPackStunsCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
