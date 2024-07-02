// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_TargetAggroDamage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_TargetAggroDamage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryTest_TargetAggroDamage::StaticRegisterNativesUSBZEnvQueryTest_TargetAggroDamage()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_NoRegister()
	{
		return USBZEnvQueryTest_TargetAggroDamage::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilForgetDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilForgetDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_TargetAggroDamage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_TargetAggroDamage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::NewProp_TimeUntilForgetDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_TargetAggroDamage" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_TargetAggroDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::NewProp_TimeUntilForgetDamage = { "TimeUntilForgetDamage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_TargetAggroDamage, TimeUntilForgetDamage), METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::NewProp_TimeUntilForgetDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::NewProp_TimeUntilForgetDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::NewProp_TimeUntilForgetDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_TargetAggroDamage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::ClassParams = {
		&USBZEnvQueryTest_TargetAggroDamage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_TargetAggroDamage, 3867967485);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_TargetAggroDamage>()
	{
		return USBZEnvQueryTest_TargetAggroDamage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_TargetAggroDamage(Z_Construct_UClass_USBZEnvQueryTest_TargetAggroDamage, &USBZEnvQueryTest_TargetAggroDamage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_TargetAggroDamage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_TargetAggroDamage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
