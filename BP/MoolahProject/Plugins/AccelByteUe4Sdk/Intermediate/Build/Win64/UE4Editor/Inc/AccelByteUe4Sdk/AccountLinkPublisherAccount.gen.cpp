// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccountLinkPublisherAccount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccountLinkPublisherAccount() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkPublisherAccount();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkedPlatform();
// End Cross Module References
class UScriptStruct* FAccountLinkPublisherAccount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccountLinkPublisherAccount"), sizeof(FAccountLinkPublisherAccount), Get_Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccountLinkPublisherAccount>()
{
	return FAccountLinkPublisherAccount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccountLinkPublisherAccount(FAccountLinkPublisherAccount::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccountLinkPublisherAccount"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkPublisherAccount
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkPublisherAccount()
	{
		UScriptStruct::DeferCppStructOps<FAccountLinkPublisherAccount>(FName(TEXT("AccountLinkPublisherAccount")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccountLinkPublisherAccount;
	struct Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkedPlatforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedPlatforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccountLinkPublisherAccount.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountLinkPublisherAccount>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkPublisherAccount" },
		{ "ModuleRelativePath", "Public/AccountLinkPublisherAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkPublisherAccount, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkPublisherAccount" },
		{ "ModuleRelativePath", "Public/AccountLinkPublisherAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkPublisherAccount, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms_Inner = { "LinkedPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccountLinkedPlatform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountLinkPublisherAccount" },
		{ "ModuleRelativePath", "Public/AccountLinkPublisherAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms = { "LinkedPlatforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountLinkPublisherAccount, LinkedPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::NewProp_LinkedPlatforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccountLinkPublisherAccount",
		sizeof(FAccountLinkPublisherAccount),
		alignof(FAccountLinkPublisherAccount),
		Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountLinkPublisherAccount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccountLinkPublisherAccount"), sizeof(FAccountLinkPublisherAccount), Get_Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccountLinkPublisherAccount_Hash() { return 2912033939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
