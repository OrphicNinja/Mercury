// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/JwkSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJwkSet() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FJwkSet();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FJwkSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FJwkSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJwkSet, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("JwkSet"), sizeof(FJwkSet), Get_Z_Construct_UScriptStruct_FJwkSet_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FJwkSet>()
{
	return FJwkSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJwkSet(FJwkSet::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("JwkSet"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFJwkSet
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFJwkSet()
	{
		UScriptStruct::DeferCppStructOps<FJwkSet>(FName(TEXT("JwkSet")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFJwkSet;
	struct Z_Construct_UScriptStruct_FJwkSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_keys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJwkSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JwkSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJwkSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJwkSet>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys_Inner = { "keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JwkSet" },
		{ "ModuleRelativePath", "Public/JwkSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys = { "keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJwkSet, keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJwkSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJwkSet_Statics::NewProp_keys,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJwkSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"JwkSet",
		sizeof(FJwkSet),
		alignof(FJwkSet),
		Z_Construct_UScriptStruct_FJwkSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJwkSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJwkSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJwkSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJwkSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJwkSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JwkSet"), sizeof(FJwkSet), Get_Z_Construct_UScriptStruct_FJwkSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJwkSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJwkSet_Hash() { return 2300916165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
