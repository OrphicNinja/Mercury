// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_AttractorPrio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_AttractorPrio() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryTest_AttractorPrio::StaticRegisterNativesUSBZEnvQueryTest_AttractorPrio()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_NoRegister()
	{
		return USBZEnvQueryTest_AttractorPrio::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_AttractorPrio.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_AttractorPrio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_AttractorPrio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::ClassParams = {
		&USBZEnvQueryTest_AttractorPrio::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_AttractorPrio, 1770992164);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_AttractorPrio>()
	{
		return USBZEnvQueryTest_AttractorPrio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_AttractorPrio(Z_Construct_UClass_USBZEnvQueryTest_AttractorPrio, &USBZEnvQueryTest_AttractorPrio::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_AttractorPrio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_AttractorPrio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
