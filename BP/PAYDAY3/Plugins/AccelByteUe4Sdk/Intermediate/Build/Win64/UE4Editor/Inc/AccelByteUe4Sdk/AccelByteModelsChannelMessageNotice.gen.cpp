// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChannelMessageNotice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsChannelMessageNotice() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsChannelMessageNotice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsChannelMessageNotice"), sizeof(FAccelByteModelsChannelMessageNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsChannelMessageNotice>()
{
	return FAccelByteModelsChannelMessageNotice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsChannelMessageNotice(FAccelByteModelsChannelMessageNotice::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsChannelMessageNotice"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChannelMessageNotice
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChannelMessageNotice()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsChannelMessageNotice>(FName(TEXT("AccelByteModelsChannelMessageNotice")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChannelMessageNotice;
	struct Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelSlug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelSlug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SentAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChannelMessageNotice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsChannelMessageNotice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_From_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChannelMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChannelMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChannelMessageNotice, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_ChannelSlug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChannelMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChannelMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_ChannelSlug = { "ChannelSlug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChannelMessageNotice, ChannelSlug), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_ChannelSlug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_ChannelSlug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChannelMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChannelMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChannelMessageNotice, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_SentAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChannelMessageNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChannelMessageNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_SentAt = { "SentAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChannelMessageNotice, SentAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_SentAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_SentAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_ChannelSlug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::NewProp_SentAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsChannelMessageNotice",
		sizeof(FAccelByteModelsChannelMessageNotice),
		alignof(FAccelByteModelsChannelMessageNotice),
		Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsChannelMessageNotice"), sizeof(FAccelByteModelsChannelMessageNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChannelMessageNotice_Hash() { return 3338807621U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
