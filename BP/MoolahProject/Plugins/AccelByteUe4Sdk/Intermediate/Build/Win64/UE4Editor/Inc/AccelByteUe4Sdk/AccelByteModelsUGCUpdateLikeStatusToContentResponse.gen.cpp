// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCUpdateLikeStatusToContentResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUGCUpdateLikeStatusToContentResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUGCUpdateLikeStatusToContentResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUGCUpdateLikeStatusToContentResponse"), sizeof(FAccelByteModelsUGCUpdateLikeStatusToContentResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUGCUpdateLikeStatusToContentResponse>()
{
	return FAccelByteModelsUGCUpdateLikeStatusToContentResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse(FAccelByteModelsUGCUpdateLikeStatusToContentResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUGCUpdateLikeStatusToContentResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUpdateLikeStatusToContentResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUpdateLikeStatusToContentResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUGCUpdateLikeStatusToContentResponse>(FName(TEXT("AccelByteModelsUGCUpdateLikeStatusToContentResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUpdateLikeStatusToContentResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LikeStatus_MetaData[];
#endif
		static void NewProp_LikeStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LikeStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUpdateLikeStatusToContentResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUGCUpdateLikeStatusToContentResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_ContentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUpdateLikeStatusToContentResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUpdateLikeStatusToContentResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_ContentId = { "ContentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCUpdateLikeStatusToContentResponse, ContentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_ContentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_ContentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUpdateLikeStatusToContentResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUpdateLikeStatusToContentResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus_SetBit(void* Obj)
	{
		((FAccelByteModelsUGCUpdateLikeStatusToContentResponse*)Obj)->LikeStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus = { "LikeStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsUGCUpdateLikeStatusToContentResponse), &Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_ContentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::NewProp_LikeStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUGCUpdateLikeStatusToContentResponse",
		sizeof(FAccelByteModelsUGCUpdateLikeStatusToContentResponse),
		alignof(FAccelByteModelsUGCUpdateLikeStatusToContentResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUGCUpdateLikeStatusToContentResponse"), sizeof(FAccelByteModelsUGCUpdateLikeStatusToContentResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateLikeStatusToContentResponse_Hash() { return 3168087260U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
