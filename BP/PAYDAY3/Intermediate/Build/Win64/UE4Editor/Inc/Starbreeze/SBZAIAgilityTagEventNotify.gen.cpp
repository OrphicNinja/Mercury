// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAgilityTagEventNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAgilityTagEventNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAgilityTagEventNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAgilityTagEventNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZAIAgilityTagEventNotify::StaticRegisterNativesUSBZAIAgilityTagEventNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAgilityTagEventNotify_NoRegister()
	{
		return USBZAIAgilityTagEventNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAIAgilityTagEventNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAgilityTagEventNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::NewProp_EventTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAgilityTagEventNotify" },
		{ "ModuleRelativePath", "Public/SBZAIAgilityTagEventNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAgilityTagEventNotify, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::NewProp_EventTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::NewProp_EventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAgilityTagEventNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::ClassParams = {
		&USBZAIAgilityTagEventNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAgilityTagEventNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAgilityTagEventNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAgilityTagEventNotify, 2892277695);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAgilityTagEventNotify>()
	{
		return USBZAIAgilityTagEventNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAgilityTagEventNotify(Z_Construct_UClass_USBZAIAgilityTagEventNotify, &USBZAIAgilityTagEventNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAgilityTagEventNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAgilityTagEventNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
