// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractorPredicate_HasTag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractorPredicate_HasTag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_HasTag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_HasTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZAttractorPredicate_HasTag::StaticRegisterNativesUSBZAttractorPredicate_HasTag()
	{
	}
	UClass* Z_Construct_UClass_USBZAttractorPredicate_HasTag_NoRegister()
	{
		return USBZAttractorPredicate_HasTag::StaticClass();
	}
	struct Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttractorTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAttractorPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractorPredicate_HasTag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_HasTag.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::NewProp_AttractorTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorPredicate_HasTag" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_HasTag.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::NewProp_AttractorTags = { "AttractorTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorPredicate_HasTag, AttractorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::NewProp_AttractorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::NewProp_AttractorTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::NewProp_AttractorTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAttractorPredicate_HasTag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::ClassParams = {
		&USBZAttractorPredicate_HasTag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAttractorPredicate_HasTag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAttractorPredicate_HasTag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAttractorPredicate_HasTag, 1388290888);
	template<> STARBREEZE_API UClass* StaticClass<USBZAttractorPredicate_HasTag>()
	{
		return USBZAttractorPredicate_HasTag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAttractorPredicate_HasTag(Z_Construct_UClass_USBZAttractorPredicate_HasTag, &USBZAttractorPredicate_HasTag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAttractorPredicate_HasTag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAttractorPredicate_HasTag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
