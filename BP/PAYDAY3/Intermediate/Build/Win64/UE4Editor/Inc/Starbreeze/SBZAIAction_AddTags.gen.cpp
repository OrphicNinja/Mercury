// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_AddTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_AddTags() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_AddTags_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_AddTags();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZAIAction_AddTags::StaticRegisterNativesUSBZAIAction_AddTags()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_AddTags_NoRegister()
	{
		return USBZAIAction_AddTags::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_AddTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagsToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_AddTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_AddTags_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_AddTags.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_AddTags.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_AddTags_Statics::NewProp_TagsToAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_AddTags" },
		{ "ModuleRelativePath", "Public/SBZAIAction_AddTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAction_AddTags_Statics::NewProp_TagsToAdd = { "TagsToAdd", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_AddTags, TagsToAdd), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_AddTags_Statics::NewProp_TagsToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_AddTags_Statics::NewProp_TagsToAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_AddTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_AddTags_Statics::NewProp_TagsToAdd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_AddTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_AddTags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_AddTags_Statics::ClassParams = {
		&USBZAIAction_AddTags::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAction_AddTags_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_AddTags_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_AddTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_AddTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_AddTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_AddTags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_AddTags, 1713007734);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_AddTags>()
	{
		return USBZAIAction_AddTags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_AddTags(Z_Construct_UClass_USBZAIAction_AddTags, &USBZAIAction_AddTags::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_AddTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_AddTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
