// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer_IsEvading.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer_IsEvading() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_IsEvading();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIUtilityScorer_IsEvading::StaticRegisterNativesUSBZAIUtilityScorer_IsEvading()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_NoRegister()
	{
		return USBZAIUtilityScorer_IsEvading::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer_IsEvading.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_IsEvading.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::NewProp_Bonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityScorer_IsEvading" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_IsEvading.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::NewProp_Bonus = { "Bonus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityScorer_IsEvading, Bonus), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::NewProp_Bonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::NewProp_Bonus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::NewProp_Bonus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer_IsEvading>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::ClassParams = {
		&USBZAIUtilityScorer_IsEvading::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_IsEvading()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_IsEvading_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer_IsEvading, 2045528472);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer_IsEvading>()
	{
		return USBZAIUtilityScorer_IsEvading::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer_IsEvading(Z_Construct_UClass_USBZAIUtilityScorer_IsEvading, &USBZAIUtilityScorer_IsEvading::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer_IsEvading"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer_IsEvading);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
