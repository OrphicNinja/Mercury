// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_VantagePointHasLOS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_VantagePointHasLOS() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void USBZEnvQueryTest_VantagePointHasLOS::StaticRegisterNativesUSBZEnvQueryTest_VantagePointHasLOS()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_NoRegister()
	{
		return USBZEnvQueryTest_VantagePointHasLOS::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_VantagePointHasLOS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_VantagePointHasLOS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::NewProp_TargetContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_VantagePointHasLOS" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_VantagePointHasLOS.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::NewProp_TargetContext = { "TargetContext", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_VantagePointHasLOS, TargetContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::NewProp_TargetContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::NewProp_TargetContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::NewProp_TargetContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_VantagePointHasLOS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::ClassParams = {
		&USBZEnvQueryTest_VantagePointHasLOS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_VantagePointHasLOS, 2048457030);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_VantagePointHasLOS>()
	{
		return USBZEnvQueryTest_VantagePointHasLOS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_VantagePointHasLOS(Z_Construct_UClass_USBZEnvQueryTest_VantagePointHasLOS, &USBZEnvQueryTest_VantagePointHasLOS::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_VantagePointHasLOS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_VantagePointHasLOS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
