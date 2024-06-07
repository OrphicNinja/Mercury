// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/User2FaSecretKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser2FaSecretKey() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUser2FaSecretKey();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FUser2FaSecretKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FUser2FaSecretKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUser2FaSecretKey, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("User2FaSecretKey"), sizeof(FUser2FaSecretKey), Get_Z_Construct_UScriptStruct_FUser2FaSecretKey_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FUser2FaSecretKey>()
{
	return FUser2FaSecretKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUser2FaSecretKey(FUser2FaSecretKey::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("User2FaSecretKey"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaSecretKey
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaSecretKey()
	{
		UScriptStruct::DeferCppStructOps<FUser2FaSecretKey>(FName(TEXT("User2FaSecretKey")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUser2FaSecretKey;
	struct Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecretKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User2FaSecretKey.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUser2FaSecretKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_SecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaSecretKey" },
		{ "ModuleRelativePath", "Public/User2FaSecretKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaSecretKey, SecretKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_SecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_SecretKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_Uri_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User2FaSecretKey" },
		{ "ModuleRelativePath", "Public/User2FaSecretKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUser2FaSecretKey, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_Uri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_SecretKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::NewProp_Uri,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"User2FaSecretKey",
		sizeof(FUser2FaSecretKey),
		alignof(FUser2FaSecretKey),
		Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUser2FaSecretKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUser2FaSecretKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("User2FaSecretKey"), sizeof(FUser2FaSecretKey), Get_Z_Construct_UScriptStruct_FUser2FaSecretKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUser2FaSecretKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUser2FaSecretKey_Hash() { return 1677887635U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
