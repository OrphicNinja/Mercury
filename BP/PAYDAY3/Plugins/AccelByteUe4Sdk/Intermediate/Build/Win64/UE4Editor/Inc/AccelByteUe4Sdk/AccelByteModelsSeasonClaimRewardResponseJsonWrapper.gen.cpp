// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSeasonClaimRewardResponseJsonWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSeasonClaimRewardResponseJsonWrapper() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSeasonClaimRewardResponseJsonWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSeasonClaimRewardResponseJsonWrapper"), sizeof(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSeasonClaimRewardResponseJsonWrapper>()
{
	return FAccelByteModelsSeasonClaimRewardResponseJsonWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSeasonClaimRewardResponseJsonWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonClaimRewardResponseJsonWrapper
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonClaimRewardResponseJsonWrapper()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSeasonClaimRewardResponseJsonWrapper>(FName(TEXT("AccelByteModelsSeasonClaimRewardResponseJsonWrapper")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonClaimRewardResponseJsonWrapper;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToClaimRewards_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ToClaimRewards_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToClaimRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ToClaimRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClaimingRewards_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClaimingRewards_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimingRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClaimingRewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardResponseJsonWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSeasonClaimRewardResponseJsonWrapper>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_ValueProp = { "ToClaimRewards", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_Key_KeyProp = { "ToClaimRewards_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonClaimRewardResponseJsonWrapper" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardResponseJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards = { "ToClaimRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper, ToClaimRewards), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_ValueProp = { "ClaimingRewards", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_Key_KeyProp = { "ClaimingRewards_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonClaimRewardResponseJsonWrapper" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardResponseJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards = { "ClaimingRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper, ClaimingRewards), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ToClaimRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::NewProp_ClaimingRewards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSeasonClaimRewardResponseJsonWrapper",
		sizeof(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper),
		alignof(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper),
		Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSeasonClaimRewardResponseJsonWrapper"), sizeof(FAccelByteModelsSeasonClaimRewardResponseJsonWrapper), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardResponseJsonWrapper_Hash() { return 1041418065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
