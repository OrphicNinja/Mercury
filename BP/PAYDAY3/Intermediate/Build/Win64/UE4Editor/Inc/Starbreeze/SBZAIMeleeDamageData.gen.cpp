// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIMeleeDamageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIMeleeDamageData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIMeleeDamageData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIMeleeDamageData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIMeleeDamageData::StaticRegisterNativesUSBZAIMeleeDamageData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIMeleeDamageData_NoRegister()
	{
		return USBZAIMeleeDamageData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIMeleeDamageData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIMeleeDamageData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeleeDamageData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIMeleeDamageData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIMeleeDamageData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIMeleeDamageData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_HealthDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZAIMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_HealthDamage = { "HealthDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HealthDamage, USBZAIMeleeDamageData), STRUCT_OFFSET(USBZAIMeleeDamageData, HealthDamage), METADATA_PARAMS(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_HealthDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_HealthDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_GlobalCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZAIMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_GlobalCooldown = { "GlobalCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIMeleeDamageData, GlobalCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_GlobalCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_GlobalCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIMeleeDamageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_HealthDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIMeleeDamageData_Statics::NewProp_GlobalCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIMeleeDamageData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIMeleeDamageData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIMeleeDamageData_Statics::ClassParams = {
		&USBZAIMeleeDamageData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIMeleeDamageData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIMeleeDamageData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIMeleeDamageData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIMeleeDamageData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIMeleeDamageData, 200299047);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIMeleeDamageData>()
	{
		return USBZAIMeleeDamageData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIMeleeDamageData(Z_Construct_UClass_USBZAIMeleeDamageData, &USBZAIMeleeDamageData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIMeleeDamageData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIMeleeDamageData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
