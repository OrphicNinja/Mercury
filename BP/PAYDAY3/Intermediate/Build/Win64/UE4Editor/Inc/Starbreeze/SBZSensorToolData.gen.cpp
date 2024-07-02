// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSensorToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSensorToolData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorToolData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
// End Cross Module References
	void USBZSensorToolData::StaticRegisterNativesUSBZSensorToolData()
	{
	}
	UClass* Z_Construct_UClass_USBZSensorToolData_NoRegister()
	{
		return USBZSensorToolData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSensorToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMarkableTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMarkableTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVisibleTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVisibleTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorToolDOFFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SensorToolDOFFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkedOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorAimDegreePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorAimDegreePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAmmoCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAmmoCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSensoryMarkingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSensoryMarkingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanLineTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScanLineTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSensorToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSensorToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxMarkableTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxMarkableTargets = { "MaxMarkableTargets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, MaxMarkableTargets), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxMarkableTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxMarkableTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxVisibleTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxVisibleTargets = { "MaxVisibleTargets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, MaxVisibleTargets), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxVisibleTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxVisibleTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorToolDOFFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorToolDOFFeedback = { "SensorToolDOFFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, SensorToolDOFFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorToolDOFFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorToolDOFFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MarkedOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MarkedOutline = { "MarkedOutline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, MarkedOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MarkedOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MarkedOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorAimDegreePadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorAimDegreePadding = { "SensorAimDegreePadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, SensorAimDegreePadding), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorAimDegreePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorAimDegreePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultAmmoCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultAmmoCost = { "DefaultAmmoCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, DefaultAmmoCost), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultAmmoCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultAmmoCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultSensoryMarkingDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultSensoryMarkingDuration = { "DefaultSensoryMarkingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, DefaultSensoryMarkingDuration), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultSensoryMarkingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultSensoryMarkingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_ScanLineTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSensorToolData" },
		{ "ModuleRelativePath", "Public/SBZSensorToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_ScanLineTime = { "ScanLineTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSensorToolData, ScanLineTime), METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_ScanLineTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_ScanLineTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSensorToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxMarkableTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxVisibleTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorToolDOFFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_MarkedOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_SensorAimDegreePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultAmmoCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_DefaultSensoryMarkingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSensorToolData_Statics::NewProp_ScanLineTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSensorToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSensorToolData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSensorToolData_Statics::ClassParams = {
		&USBZSensorToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSensorToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSensorToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSensorToolData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSensorToolData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSensorToolData, 1079967070);
	template<> STARBREEZE_API UClass* StaticClass<USBZSensorToolData>()
	{
		return USBZSensorToolData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSensorToolData(Z_Construct_UClass_USBZSensorToolData, &USBZSensorToolData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSensorToolData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSensorToolData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
