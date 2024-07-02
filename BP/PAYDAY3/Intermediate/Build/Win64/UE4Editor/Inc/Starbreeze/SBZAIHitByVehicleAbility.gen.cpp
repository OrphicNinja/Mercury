// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIHitByVehicleAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIHitByVehicleAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIHitByVehicleAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIHitByVehicleAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
// End Cross Module References
	void USBZAIHitByVehicleAbility::StaticRegisterNativesUSBZAIHitByVehicleAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIHitByVehicleAbility_NoRegister()
	{
		return USBZAIHitByVehicleAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinHeistState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeistState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinHeistState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleStances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompatibleStances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadlyVehicleSpeedHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadlyVehicleSpeedHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDeadlyVehicleImpactWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDeadlyVehicleImpactWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIHitByVehicleAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIHitByVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIHitByVehicleAbility" },
		{ "ModuleRelativePath", "Public/SBZAIHitByVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState = { "MinHeistState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIHitByVehicleAbility, MinHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_CompatibleStances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIHitByVehicleAbility" },
		{ "ModuleRelativePath", "Public/SBZAIHitByVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_CompatibleStances = { "CompatibleStances", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIHitByVehicleAbility, CompatibleStances), METADATA_PARAMS(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_CompatibleStances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_CompatibleStances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_DeadlyVehicleSpeedHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIHitByVehicleAbility" },
		{ "ModuleRelativePath", "Public/SBZAIHitByVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_DeadlyVehicleSpeedHit = { "DeadlyVehicleSpeedHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIHitByVehicleAbility, DeadlyVehicleSpeedHit), METADATA_PARAMS(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_DeadlyVehicleSpeedHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_DeadlyVehicleSpeedHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinDeadlyVehicleImpactWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIHitByVehicleAbility" },
		{ "ModuleRelativePath", "Public/SBZAIHitByVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinDeadlyVehicleImpactWidth = { "MinDeadlyVehicleImpactWidth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIHitByVehicleAbility, MinDeadlyVehicleImpactWidth), METADATA_PARAMS(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinDeadlyVehicleImpactWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinDeadlyVehicleImpactWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinHeistState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_CompatibleStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_DeadlyVehicleSpeedHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::NewProp_MinDeadlyVehicleImpactWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIHitByVehicleAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::ClassParams = {
		&USBZAIHitByVehicleAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIHitByVehicleAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIHitByVehicleAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIHitByVehicleAbility, 2508999676);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIHitByVehicleAbility>()
	{
		return USBZAIHitByVehicleAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIHitByVehicleAbility(Z_Construct_UClass_USBZAIHitByVehicleAbility, &USBZAIHitByVehicleAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIHitByVehicleAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIHitByVehicleAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
