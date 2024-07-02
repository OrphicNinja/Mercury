// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTasedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTasedData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTasedData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTasedData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
// End Cross Module References
	void USBZTasedData::StaticRegisterNativesUSBZTasedData()
	{
	}
	UClass* Z_Construct_UClass_USBZTasedData_NoRegister()
	{
		return USBZTasedData::StaticClass();
	}
	struct Z_Construct_UClass_USBZTasedData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitedControlTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitedControlTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccuracyModifierDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccuracyModifierDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedTiltSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TasedTiltSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedTiltDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TasedTiltDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncontrolledShootingTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncontrolledShootingTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncontrolledShootingCooldownTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncontrolledShootingCooldownTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedCameraShakeFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TasedCameraShakeFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedGentlyCameraShakeFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TasedGentlyCameraShakeFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedUncontrolledCameraShakeFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TasedUncontrolledCameraShakeFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockCameraData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTasedData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTasedData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_LimitedControlTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_LimitedControlTimer = { "LimitedControlTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, LimitedControlTimer), METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_LimitedControlTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_LimitedControlTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_AccuracyModifierDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_AccuracyModifierDegrees = { "AccuracyModifierDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, AccuracyModifierDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_AccuracyModifierDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_AccuracyModifierDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltSpeed = { "TasedTiltSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, TasedTiltSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltDegrees = { "TasedTiltDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, TasedTiltDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingTimeInterval = { "UncontrolledShootingTimeInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, UncontrolledShootingTimeInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingCooldownTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingCooldownTimeInterval = { "UncontrolledShootingCooldownTimeInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, UncontrolledShootingCooldownTimeInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingCooldownTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingCooldownTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedCameraShakeFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedCameraShakeFeedback = { "TasedCameraShakeFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, TasedCameraShakeFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedCameraShakeFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedCameraShakeFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedGentlyCameraShakeFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedGentlyCameraShakeFeedback = { "TasedGentlyCameraShakeFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, TasedGentlyCameraShakeFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedGentlyCameraShakeFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedGentlyCameraShakeFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedUncontrolledCameraShakeFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedUncontrolledCameraShakeFeedback = { "TasedUncontrolledCameraShakeFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, TasedUncontrolledCameraShakeFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedUncontrolledCameraShakeFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedUncontrolledCameraShakeFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedData_Statics::NewProp_LockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTasedData" },
		{ "ModuleRelativePath", "Public/SBZTasedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTasedData_Statics::NewProp_LockCameraData = { "LockCameraData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTasedData, LockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::NewProp_LockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::NewProp_LockCameraData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTasedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_LimitedControlTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_AccuracyModifierDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedTiltDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_UncontrolledShootingCooldownTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedCameraShakeFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedGentlyCameraShakeFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_TasedUncontrolledCameraShakeFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTasedData_Statics::NewProp_LockCameraData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTasedData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTasedData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTasedData_Statics::ClassParams = {
		&USBZTasedData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTasedData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTasedData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTasedData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTasedData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTasedData, 1125351445);
	template<> STARBREEZE_API UClass* StaticClass<USBZTasedData>()
	{
		return USBZTasedData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTasedData(Z_Construct_UClass_USBZTasedData, &USBZTasedData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTasedData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTasedData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
