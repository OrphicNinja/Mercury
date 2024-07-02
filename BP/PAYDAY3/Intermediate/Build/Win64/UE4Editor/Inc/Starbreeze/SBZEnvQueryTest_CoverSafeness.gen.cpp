// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_CoverSafeness.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_CoverSafeness() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void USBZEnvQueryTest_CoverSafeness::StaticRegisterNativesUSBZEnvQueryTest_CoverSafeness()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_NoRegister()
	{
		return USBZEnvQueryTest_CoverSafeness::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_CoverSafeness.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_CoverSafeness.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::NewProp_EnemyContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_CoverSafeness" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_CoverSafeness.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::NewProp_EnemyContext = { "EnemyContext", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_CoverSafeness, EnemyContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::NewProp_EnemyContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::NewProp_EnemyContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::NewProp_EnemyContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_CoverSafeness>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::ClassParams = {
		&USBZEnvQueryTest_CoverSafeness::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_CoverSafeness, 543818238);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_CoverSafeness>()
	{
		return USBZEnvQueryTest_CoverSafeness::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_CoverSafeness(Z_Construct_UClass_USBZEnvQueryTest_CoverSafeness, &USBZEnvQueryTest_CoverSafeness::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_CoverSafeness"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_CoverSafeness);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
