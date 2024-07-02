// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2MatchTicketOptionalParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2MatchTicketOptionalParams() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2MatchTicketOptionalParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2MatchTicketOptionalParams"), sizeof(FAccelByteModelsV2MatchTicketOptionalParams), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2MatchTicketOptionalParams>()
{
	return FAccelByteModelsV2MatchTicketOptionalParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams(FAccelByteModelsV2MatchTicketOptionalParams::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2MatchTicketOptionalParams"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchTicketOptionalParams
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchTicketOptionalParams()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2MatchTicketOptionalParams>(FName(TEXT("AccelByteModelsV2MatchTicketOptionalParams")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchTicketOptionalParams;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchTicketOptionalParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2MatchTicketOptionalParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_SessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchTicketOptionalParams" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchTicketOptionalParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchTicketOptionalParams, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchTicketOptionalParams" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchTicketOptionalParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchTicketOptionalParams, Attributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::NewProp_Attributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2MatchTicketOptionalParams",
		sizeof(FAccelByteModelsV2MatchTicketOptionalParams),
		alignof(FAccelByteModelsV2MatchTicketOptionalParams),
		Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2MatchTicketOptionalParams"), sizeof(FAccelByteModelsV2MatchTicketOptionalParams), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchTicketOptionalParams_Hash() { return 2623390347U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
