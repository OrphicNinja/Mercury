// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccountLinkConflictMessageVariables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccountLinkConflictMessageVariables() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkPublisherAccount();
// End Cross Module References
class UScriptStruct* FAccountLinkConflictMessageVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccountLinkConflictMessageVariables"), sizeof(FAccountLinkConflictMessageVariables), Get_Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccountLinkConflictMessageVariables>()
{
	return FAccountLinkConflictMessageVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccountLinkConflictMessageVariables(FAccountLinkConflictMessageVariables::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccountLinkConflictMessageVariables"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkConflictMessageVariables
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkConflictMessageVariables()
	{
		UScriptStruct::DeferCppStructOps<FAccountLinkConflictMessageVariables>(FName(TEXT("AccountLinkConflictMessageVariables")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkConflictMessageVariables;
	struct Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublisherAccounts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublisherAccounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublisherAccounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictMessageVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountLinkConflictMessageVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PlatformUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkConflictMessageVariables" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictMessageVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PlatformUserID = { "PlatformUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkConflictMessageVariables, PlatformUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PlatformUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PlatformUserID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts_Inner = { "PublisherAccounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccountLinkPublisherAccount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkConflictMessageVariables" },
		{ "ModuleRelativePath", "Public/AccountLinkConflictMessageVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts = { "PublisherAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkConflictMessageVariables, PublisherAccounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PlatformUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::NewProp_PublisherAccounts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccountLinkConflictMessageVariables",
		sizeof(FAccountLinkConflictMessageVariables),
		alignof(FAccountLinkConflictMessageVariables),
		Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccountLinkConflictMessageVariables"), sizeof(FAccountLinkConflictMessageVariables), Get_Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccountLinkConflictMessageVariables_Hash() { return 3844557676U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
