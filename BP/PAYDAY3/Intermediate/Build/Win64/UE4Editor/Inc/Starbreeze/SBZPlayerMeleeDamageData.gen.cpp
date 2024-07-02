// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerMeleeDamageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerMeleeDamageData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMeleeDamageData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMeleeDamageData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerMeleeDamageData::StaticRegisterNativesUSBZPlayerMeleeDamageData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerMeleeDamageData_NoRegister()
	{
		return USBZPlayerMeleeDamageData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PropDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAimAssistAngleDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumAimAssistAngleDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAssistSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimAssistSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeleeDamageData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerMeleeDamageData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerMeleeDamageData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_HealthDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZPlayerMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_HealthDamage = { "HealthDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMeleeDamageData, HealthDamage), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_HealthDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_HealthDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_PropDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZPlayerMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_PropDamage = { "PropDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMeleeDamageData, PropDamage), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_PropDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_PropDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_MaximumAimAssistAngleDifference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZPlayerMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_MaximumAimAssistAngleDifference = { "MaximumAimAssistAngleDifference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMeleeDamageData, MaximumAimAssistAngleDifference), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_MaximumAimAssistAngleDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_MaximumAimAssistAngleDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_AimAssistSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZPlayerMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_AimAssistSpeed = { "AimAssistSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMeleeDamageData, AimAssistSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_AimAssistSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_AimAssistSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_HealthDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_PropDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_MaximumAimAssistAngleDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::NewProp_AimAssistSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerMeleeDamageData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::ClassParams = {
		&USBZPlayerMeleeDamageData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerMeleeDamageData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerMeleeDamageData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerMeleeDamageData, 4285231176);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerMeleeDamageData>()
	{
		return USBZPlayerMeleeDamageData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerMeleeDamageData(Z_Construct_UClass_USBZPlayerMeleeDamageData, &USBZPlayerMeleeDamageData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerMeleeDamageData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerMeleeDamageData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
