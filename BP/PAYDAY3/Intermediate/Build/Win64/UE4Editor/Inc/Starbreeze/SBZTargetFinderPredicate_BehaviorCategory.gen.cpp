// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTargetFinderPredicate_BehaviorCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTargetFinderPredicate_BehaviorCategory() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetFinderPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTargetFinderPredicate_BehaviorCategory::StaticRegisterNativesUSBZTargetFinderPredicate_BehaviorCategory()
	{
	}
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_NoRegister()
	{
		return USBZTargetFinderPredicate_BehaviorCategory::StaticClass();
	}
	struct Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedBehaviors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZTargetFinderPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTargetFinderPredicate_BehaviorCategory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate_BehaviorCategory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::NewProp_AllowedBehaviors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTargetFinderPredicate_BehaviorCategory" },
		{ "ModuleRelativePath", "Public/SBZTargetFinderPredicate_BehaviorCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::NewProp_AllowedBehaviors = { "AllowedBehaviors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTargetFinderPredicate_BehaviorCategory, AllowedBehaviors), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::NewProp_AllowedBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::NewProp_AllowedBehaviors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::NewProp_AllowedBehaviors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTargetFinderPredicate_BehaviorCategory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::ClassParams = {
		&USBZTargetFinderPredicate_BehaviorCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTargetFinderPredicate_BehaviorCategory, 2551472026);
	template<> STARBREEZE_API UClass* StaticClass<USBZTargetFinderPredicate_BehaviorCategory>()
	{
		return USBZTargetFinderPredicate_BehaviorCategory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTargetFinderPredicate_BehaviorCategory(Z_Construct_UClass_USBZTargetFinderPredicate_BehaviorCategory, &USBZTargetFinderPredicate_BehaviorCategory::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTargetFinderPredicate_BehaviorCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTargetFinderPredicate_BehaviorCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
