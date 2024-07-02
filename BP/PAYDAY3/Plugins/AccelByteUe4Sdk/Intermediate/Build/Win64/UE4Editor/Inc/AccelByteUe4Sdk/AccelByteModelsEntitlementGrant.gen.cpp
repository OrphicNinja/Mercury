// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsEntitlementGrant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsEntitlementGrant() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource();
// End Cross Module References
class UScriptStruct* FAccelByteModelsEntitlementGrant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsEntitlementGrant"), sizeof(FAccelByteModelsEntitlementGrant), Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsEntitlementGrant>()
{
	return FAccelByteModelsEntitlementGrant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsEntitlementGrant(FAccelByteModelsEntitlementGrant::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsEntitlementGrant"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementGrant
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementGrant()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsEntitlementGrant>(FName(TEXT("AccelByteModelsEntitlementGrant")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementGrant;
	struct Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GrantedCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsEntitlementGrant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_GrantedCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_GrantedCode = { "GrantedCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, GrantedCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_GrantedCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_GrantedCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemNamespace = { "ItemNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, ItemNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, Source), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Language_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementGrant" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementGrant.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementGrant, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_GrantedCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_ItemNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::NewProp_Language,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsEntitlementGrant",
		sizeof(FAccelByteModelsEntitlementGrant),
		alignof(FAccelByteModelsEntitlementGrant),
		Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsEntitlementGrant"), sizeof(FAccelByteModelsEntitlementGrant), Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementGrant_Hash() { return 2824014571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
