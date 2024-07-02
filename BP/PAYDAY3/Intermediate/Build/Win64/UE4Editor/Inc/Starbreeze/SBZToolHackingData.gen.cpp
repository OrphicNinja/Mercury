// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolHackingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolHackingData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolHackingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolHackingData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
	void USBZToolHackingData::StaticRegisterNativesUSBZToolHackingData()
	{
	}
	UClass* Z_Construct_UClass_USBZToolHackingData_NoRegister()
	{
		return USBZToolHackingData::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolHackingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHackingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHackingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingSynchTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HackingSynchTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingToolDOFFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HackingToolDOFFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingAimDegreePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HackingAimDegreePadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolHackingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolHackingData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZToolHackingData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolHackingData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_MaxHackingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolHackingData" },
		{ "ModuleRelativePath", "Public/SBZToolHackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_MaxHackingDistance = { "MaxHackingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolHackingData, MaxHackingDistance), METADATA_PARAMS(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_MaxHackingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_MaxHackingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingSynchTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolHackingData" },
		{ "ModuleRelativePath", "Public/SBZToolHackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingSynchTimer = { "HackingSynchTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolHackingData, HackingSynchTimer), METADATA_PARAMS(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingSynchTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingSynchTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingToolDOFFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolHackingData" },
		{ "ModuleRelativePath", "Public/SBZToolHackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingToolDOFFeedback = { "HackingToolDOFFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolHackingData, HackingToolDOFFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingToolDOFFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingToolDOFFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingAimDegreePadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolHackingData" },
		{ "ModuleRelativePath", "Public/SBZToolHackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingAimDegreePadding = { "HackingAimDegreePadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolHackingData, HackingAimDegreePadding), METADATA_PARAMS(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingAimDegreePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingAimDegreePadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZToolHackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_MaxHackingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingSynchTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingToolDOFFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolHackingData_Statics::NewProp_HackingAimDegreePadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolHackingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZToolHackingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolHackingData_Statics::ClassParams = {
		&USBZToolHackingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZToolHackingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackingData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZToolHackingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolHackingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolHackingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolHackingData, 411060126);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolHackingData>()
	{
		return USBZToolHackingData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolHackingData(Z_Construct_UClass_USBZToolHackingData, &USBZToolHackingData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolHackingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolHackingData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
