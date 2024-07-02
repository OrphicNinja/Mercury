// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsCurrencyList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsCurrencyList() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCurrencyType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsCurrencyList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsCurrencyList"), sizeof(FAccelByteModelsCurrencyList), Get_Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsCurrencyList>()
{
	return FAccelByteModelsCurrencyList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsCurrencyList(FAccelByteModelsCurrencyList::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsCurrencyList"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCurrencyList
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCurrencyList()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsCurrencyList>(FName(TEXT("AccelByteModelsCurrencyList")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCurrencyList;
	struct Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizationDescriptions_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizationDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizationDescriptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencySymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencySymbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decimals_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Decimals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsCurrencyList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_ValueProp = { "LocalizationDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_Key_KeyProp = { "LocalizationDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions = { "LocalizationDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, LocalizationDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencySymbol_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencySymbol = { "CurrencySymbol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, CurrencySymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencySymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencySymbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, CurrencyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Decimals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Decimals = { "Decimals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, Decimals), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Decimals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Decimals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_UpdateAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCurrencyList" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCurrencyList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_UpdateAt = { "UpdateAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCurrencyList, UpdateAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_UpdateAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_UpdateAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_LocalizationDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencySymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_Decimals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::NewProp_UpdateAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsCurrencyList",
		sizeof(FAccelByteModelsCurrencyList),
		alignof(FAccelByteModelsCurrencyList),
		Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsCurrencyList"), sizeof(FAccelByteModelsCurrencyList), Get_Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCurrencyList_Hash() { return 4005589162U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
