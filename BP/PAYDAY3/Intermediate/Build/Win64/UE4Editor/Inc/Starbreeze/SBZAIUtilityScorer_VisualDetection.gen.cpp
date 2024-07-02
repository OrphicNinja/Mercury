// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer_VisualDetection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer_VisualDetection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIUtilityScorer_VisualDetection::StaticRegisterNativesUSBZAIUtilityScorer_VisualDetection()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_NoRegister()
	{
		return USBZAIUtilityScorer_VisualDetection::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer_VisualDetection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_VisualDetection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer_VisualDetection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::ClassParams = {
		&USBZAIUtilityScorer_VisualDetection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer_VisualDetection, 668201894);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer_VisualDetection>()
	{
		return USBZAIUtilityScorer_VisualDetection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer_VisualDetection(Z_Construct_UClass_USBZAIUtilityScorer_VisualDetection, &USBZAIUtilityScorer_VisualDetection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer_VisualDetection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer_VisualDetection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
