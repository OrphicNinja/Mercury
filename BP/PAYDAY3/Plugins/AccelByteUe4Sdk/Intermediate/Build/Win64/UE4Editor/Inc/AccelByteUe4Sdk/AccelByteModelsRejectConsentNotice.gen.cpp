// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsRejectConsentNotice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsRejectConsentNotice() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsRejectConsentNotice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsRejectConsentNotice"), sizeof(FAccelByteModelsRejectConsentNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsRejectConsentNotice>()
{
	return FAccelByteModelsRejectConsentNotice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsRejectConsentNotice(FAccelByteModelsRejectConsentNotice::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsRejectConsentNotice"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRejectConsentNotice
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRejectConsentNotice()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsRejectConsentNotice>(FName(TEXT("AccelByteModelsRejectConsentNotice")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRejectConsentNotice;
	struct Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRejectConsentNotice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsRejectConsentNotice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_MatchId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRejectConsentNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRejectConsentNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRejectConsentNotice, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRejectConsentNotice" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRejectConsentNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRejectConsentNotice, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsRejectConsentNotice",
		sizeof(FAccelByteModelsRejectConsentNotice),
		alignof(FAccelByteModelsRejectConsentNotice),
		Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsRejectConsentNotice"), sizeof(FAccelByteModelsRejectConsentNotice), Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRejectConsentNotice_Hash() { return 395369470U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
