// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlatformSyncMobileGoogleResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlatformSyncMobileGoogleResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPlatformSyncMobileGoogleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlatformSyncMobileGoogleResponse"), sizeof(FAccelByteModelsPlatformSyncMobileGoogleResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlatformSyncMobileGoogleResponse>()
{
	return FAccelByteModelsPlatformSyncMobileGoogleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse(FAccelByteModelsPlatformSyncMobileGoogleResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlatformSyncMobileGoogleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformSyncMobileGoogleResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformSyncMobileGoogleResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlatformSyncMobileGoogleResponse>(FName(TEXT("AccelByteModelsPlatformSyncMobileGoogleResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformSyncMobileGoogleResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedConsume_MetaData[];
#endif
		static void NewProp_NeedConsume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedConsume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformSyncMobileGoogleResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlatformSyncMobileGoogleResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformSyncMobileGoogleResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformSyncMobileGoogleResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume_SetBit(void* Obj)
	{
		((FAccelByteModelsPlatformSyncMobileGoogleResponse*)Obj)->NeedConsume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume = { "NeedConsume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsPlatformSyncMobileGoogleResponse), &Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::NewProp_NeedConsume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPlatformSyncMobileGoogleResponse",
		sizeof(FAccelByteModelsPlatformSyncMobileGoogleResponse),
		alignof(FAccelByteModelsPlatformSyncMobileGoogleResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlatformSyncMobileGoogleResponse"), sizeof(FAccelByteModelsPlatformSyncMobileGoogleResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogleResponse_Hash() { return 289374358U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
