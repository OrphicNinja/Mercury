// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer_Custom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer_Custom() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_Custom_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_Custom();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIUtilityScorer_Custom::StaticRegisterNativesUSBZAIUtilityScorer_Custom()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_Custom_NoRegister()
	{
		return USBZAIUtilityScorer_Custom::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer_Custom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_Custom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer_Custom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::ClassParams = {
		&USBZAIUtilityScorer_Custom::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_Custom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_Custom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer_Custom, 3090904394);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer_Custom>()
	{
		return USBZAIUtilityScorer_Custom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer_Custom(Z_Construct_UClass_USBZAIUtilityScorer_Custom, &USBZAIUtilityScorer_Custom::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer_Custom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer_Custom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
