// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_LifeActionWaitForCompletion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_LifeActionWaitForCompletion() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_LifeActionWaitForCompletion::StaticRegisterNativesUSBZBTTask_LifeActionWaitForCompletion()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_NoRegister()
	{
		return USBZBTTask_LifeActionWaitForCompletion::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_LifeActionWaitForCompletion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_LifeActionWaitForCompletion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_LifeActionWaitForCompletion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::ClassParams = {
		&USBZBTTask_LifeActionWaitForCompletion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_LifeActionWaitForCompletion, 2226737067);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_LifeActionWaitForCompletion>()
	{
		return USBZBTTask_LifeActionWaitForCompletion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_LifeActionWaitForCompletion(Z_Construct_UClass_USBZBTTask_LifeActionWaitForCompletion, &USBZBTTask_LifeActionWaitForCompletion::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_LifeActionWaitForCompletion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_LifeActionWaitForCompletion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
