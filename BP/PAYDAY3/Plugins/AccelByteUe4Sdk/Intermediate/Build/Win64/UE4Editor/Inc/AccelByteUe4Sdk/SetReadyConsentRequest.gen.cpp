// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/SetReadyConsentRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetReadyConsentRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetReadyConsentRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FSetReadyConsentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FSetReadyConsentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetReadyConsentRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("SetReadyConsentRequest"), sizeof(FSetReadyConsentRequest), Get_Z_Construct_UScriptStruct_FSetReadyConsentRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FSetReadyConsentRequest>()
{
	return FSetReadyConsentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSetReadyConsentRequest(FSetReadyConsentRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("SetReadyConsentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSetReadyConsentRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSetReadyConsentRequest()
	{
		UScriptStruct::DeferCppStructOps<FSetReadyConsentRequest>(FName(TEXT("SetReadyConsentRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSetReadyConsentRequest;
	struct Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SetReadyConsentRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetReadyConsentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::NewProp_matchId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetReadyConsentRequest" },
		{ "ModuleRelativePath", "Public/SetReadyConsentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::NewProp_matchId = { "matchId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSetReadyConsentRequest, matchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::NewProp_matchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::NewProp_matchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::NewProp_matchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"SetReadyConsentRequest",
		sizeof(FSetReadyConsentRequest),
		alignof(FSetReadyConsentRequest),
		Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetReadyConsentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSetReadyConsentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SetReadyConsentRequest"), sizeof(FSetReadyConsentRequest), Get_Z_Construct_UScriptStruct_FSetReadyConsentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSetReadyConsentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSetReadyConsentRequest_Hash() { return 3543962737U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
