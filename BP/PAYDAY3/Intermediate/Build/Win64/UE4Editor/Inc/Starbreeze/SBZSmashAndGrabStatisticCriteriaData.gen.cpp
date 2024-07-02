// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSmashAndGrabStatisticCriteriaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSmashAndGrabStatisticCriteriaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSmashAndGrabStatisticCriteriaData::StaticRegisterNativesUSBZSmashAndGrabStatisticCriteriaData()
	{
	}
	UClass* Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_NoRegister()
	{
		return USBZSmashAndGrabStatisticCriteriaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompletionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSmashAndGrabStatisticCriteriaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSmashAndGrabStatisticCriteriaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::NewProp_CompletionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmashAndGrabStatisticCriteriaData" },
		{ "ModuleRelativePath", "Public/SBZSmashAndGrabStatisticCriteriaData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::NewProp_CompletionTime = { "CompletionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmashAndGrabStatisticCriteriaData, CompletionTime), METADATA_PARAMS(Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::NewProp_CompletionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::NewProp_CompletionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::NewProp_CompletionTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSmashAndGrabStatisticCriteriaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::ClassParams = {
		&USBZSmashAndGrabStatisticCriteriaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSmashAndGrabStatisticCriteriaData, 1229585115);
	template<> STARBREEZE_API UClass* StaticClass<USBZSmashAndGrabStatisticCriteriaData>()
	{
		return USBZSmashAndGrabStatisticCriteriaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSmashAndGrabStatisticCriteriaData(Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData, &USBZSmashAndGrabStatisticCriteriaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSmashAndGrabStatisticCriteriaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSmashAndGrabStatisticCriteriaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
