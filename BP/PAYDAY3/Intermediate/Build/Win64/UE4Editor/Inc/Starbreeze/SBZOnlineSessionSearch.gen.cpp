// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSessionSearch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSessionSearch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionSearch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionSearch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionRequestHandler_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSearchResult();
// End Cross Module References
	void USBZOnlineSessionSearch::StaticRegisterNativesUSBZOnlineSessionSearch()
	{
	}
	UClass* Z_Construct_UClass_USBZOnlineSessionSearch_NoRegister()
	{
		return USBZOnlineSessionSearch::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSessionSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchSessionParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayedSearchSessionParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayedSearchSessionParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSearchKeyword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSearchKeyword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHostPartyByDefault_MetaData[];
#endif
		static void NewProp_bHostPartyByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHostPartyByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZOnlineSessionUtils_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZOnlineSessionUtils;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZOnlineSessionRequestHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZOnlineSessionRequestHandler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSessionSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSessionSearch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchSessionParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchSessionParams = { "SearchSessionParams", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSearch, SearchSessionParams), Z_Construct_UScriptStruct_FSBZOnlineSessionParams, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchSessionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchSessionParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_DelayedSearchSessionParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_DelayedSearchSessionParams = { "DelayedSearchSessionParams", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSearch, DelayedSearchSessionParams), Z_Construct_UScriptStruct_FSBZOnlineSessionParams, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_DelayedSearchSessionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_DelayedSearchSessionParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_GameSearchKeyword_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_GameSearchKeyword = { "GameSearchKeyword", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSearch, GameSearchKeyword), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_GameSearchKeyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_GameSearchKeyword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	void Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault_SetBit(void* Obj)
	{
		((USBZOnlineSessionSearch*)Obj)->bHostPartyByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault = { "bHostPartyByDefault", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZOnlineSessionSearch), &Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionUtils_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionUtils = { "SBZOnlineSessionUtils", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSearch, SBZOnlineSessionUtils), Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionUtils_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionUtils_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionRequestHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionRequestHandler = { "SBZOnlineSessionRequestHandler", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSearch, SBZOnlineSessionRequestHandler), Z_Construct_UClass_USBZOnlineSessionRequestHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionRequestHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionRequestHandler_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults_Inner = { "SearchResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZOnlineSearchResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSearch" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults = { "SearchResults", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSearch, SearchResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSessionSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchSessionParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_DelayedSearchSessionParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_GameSearchKeyword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_bHostPartyByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionUtils,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SBZOnlineSessionRequestHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSearch_Statics::NewProp_SearchResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSessionSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSessionSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSessionSearch_Statics::ClassParams = {
		&USBZOnlineSessionSearch::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZOnlineSessionSearch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSessionSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSessionSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSessionSearch, 2762562525);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSessionSearch>()
	{
		return USBZOnlineSessionSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSessionSearch(Z_Construct_UClass_USBZOnlineSessionSearch, &USBZOnlineSessionSearch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSessionSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSessionSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
