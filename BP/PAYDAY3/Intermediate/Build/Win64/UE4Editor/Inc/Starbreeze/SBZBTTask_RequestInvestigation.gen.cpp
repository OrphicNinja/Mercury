// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_RequestInvestigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_RequestInvestigation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_RequestInvestigation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_RequestInvestigation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_RequestInvestigation::StaticRegisterNativesUSBZBTTask_RequestInvestigation()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_RequestInvestigation_NoRegister()
	{
		return USBZBTTask_RequestInvestigation::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_RequestInvestigation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestInvestigation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::NewProp_MaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_RequestInvestigation" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestInvestigation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_RequestInvestigation, MaxRange), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::NewProp_MaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::NewProp_MaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_RequestInvestigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::ClassParams = {
		&USBZBTTask_RequestInvestigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_RequestInvestigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_RequestInvestigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_RequestInvestigation, 2742790553);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_RequestInvestigation>()
	{
		return USBZBTTask_RequestInvestigation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_RequestInvestigation(Z_Construct_UClass_USBZBTTask_RequestInvestigation, &USBZBTTask_RequestInvestigation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_RequestInvestigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_RequestInvestigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
