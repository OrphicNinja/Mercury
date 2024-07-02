// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_IsWard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_IsWard() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_IsWard_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_IsWard();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryTest_IsWard::StaticRegisterNativesUSBZEnvQueryTest_IsWard()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_IsWard_NoRegister()
	{
		return USBZEnvQueryTest_IsWard::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_IsWard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_IsWard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_IsWard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::ClassParams = {
		&USBZEnvQueryTest_IsWard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_IsWard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_IsWard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_IsWard, 1374239061);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_IsWard>()
	{
		return USBZEnvQueryTest_IsWard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_IsWard(Z_Construct_UClass_USBZEnvQueryTest_IsWard, &USBZEnvQueryTest_IsWard::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_IsWard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_IsWard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
