// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionPredicate_HasTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionPredicate_HasTags() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_HasTags_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_HasTags();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTagsQuerySetting();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZReactionPredicate_HasTags::StaticRegisterNativesUSBZReactionPredicate_HasTags()
	{
	}
	UClass* Z_Construct_UClass_USBZReactionPredicate_HasTags_NoRegister()
	{
		return USBZReactionPredicate_HasTags::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZReactionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReactionPredicate_HasTags.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_HasTags.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_HasTags" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_HasTags.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_HasTags, Target), Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_HasTags" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_HasTags.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_HasTags, Mode), Z_Construct_UEnum_Starbreeze_ESBZTagsQuerySetting, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_HasTags" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_HasTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_HasTags, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReactionPredicate_HasTags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::ClassParams = {
		&USBZReactionPredicate_HasTags::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionPredicate_HasTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionPredicate_HasTags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionPredicate_HasTags, 2195189614);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionPredicate_HasTags>()
	{
		return USBZReactionPredicate_HasTags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionPredicate_HasTags(Z_Construct_UClass_USBZReactionPredicate_HasTags, &USBZReactionPredicate_HasTags::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionPredicate_HasTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionPredicate_HasTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
