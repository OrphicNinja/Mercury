// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_AddTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_AddTags() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_AddTags_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_AddTags();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZBTDecorator_AddTags::StaticRegisterNativesUSBZBTDecorator_AddTags()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_AddTags_NoRegister()
	{
		return USBZBTDecorator_AddTags::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_AddTags_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagsToAdd;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RemoveOnPauseReasons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveOnPauseReasons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveOnPauseReasons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_AddTags.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_AddTags.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_TagsToAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_AddTags" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_AddTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_TagsToAdd = { "TagsToAdd", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_AddTags, TagsToAdd), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_TagsToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_TagsToAdd_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons_Inner = { "RemoveOnPauseReasons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_AddTags" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_AddTags.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons = { "RemoveOnPauseReasons", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_AddTags, RemoveOnPauseReasons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_TagsToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::NewProp_RemoveOnPauseReasons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_AddTags>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::ClassParams = {
		&USBZBTDecorator_AddTags::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_AddTags()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_AddTags_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_AddTags, 3796309764);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_AddTags>()
	{
		return USBZBTDecorator_AddTags::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_AddTags(Z_Construct_UClass_USBZBTDecorator_AddTags, &USBZBTDecorator_AddTags::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_AddTags"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_AddTags);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
