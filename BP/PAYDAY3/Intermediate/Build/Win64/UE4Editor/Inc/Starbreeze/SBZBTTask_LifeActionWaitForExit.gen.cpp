// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_LifeActionWaitForExit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_LifeActionWaitForExit() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_LifeActionWaitForExit::StaticRegisterNativesUSBZBTTask_LifeActionWaitForExit()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_NoRegister()
	{
		return USBZBTTask_LifeActionWaitForExit::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_LifeActionWaitForExit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_LifeActionWaitForExit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_LifeActionWaitForExit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::ClassParams = {
		&USBZBTTask_LifeActionWaitForExit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_LifeActionWaitForExit, 1167127574);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_LifeActionWaitForExit>()
	{
		return USBZBTTask_LifeActionWaitForExit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_LifeActionWaitForExit(Z_Construct_UClass_USBZBTTask_LifeActionWaitForExit, &USBZBTTask_LifeActionWaitForExit::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_LifeActionWaitForExit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_LifeActionWaitForExit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
