// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BulkGetUserPresenceRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulkGetUserPresenceRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FBulkGetUserPresenceRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BulkGetUserPresenceRequest"), sizeof(FBulkGetUserPresenceRequest), Get_Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBulkGetUserPresenceRequest>()
{
	return FBulkGetUserPresenceRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBulkGetUserPresenceRequest(FBulkGetUserPresenceRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BulkGetUserPresenceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkGetUserPresenceRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkGetUserPresenceRequest()
	{
		UScriptStruct::DeferCppStructOps<FBulkGetUserPresenceRequest>(FName(TEXT("BulkGetUserPresenceRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkGetUserPresenceRequest;
	struct Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCountOnly_MetaData[];
#endif
		static void NewProp_bCountOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCountOnly;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BulkGetUserPresenceRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulkGetUserPresenceRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulkGetUserPresenceRequest" },
		{ "ModuleRelativePath", "Public/BulkGetUserPresenceRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly_SetBit(void* Obj)
	{
		((FBulkGetUserPresenceRequest*)Obj)->bCountOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly = { "bCountOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBulkGetUserPresenceRequest), &Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulkGetUserPresenceRequest" },
		{ "ModuleRelativePath", "Public/BulkGetUserPresenceRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulkGetUserPresenceRequest, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_bCountOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::NewProp_UserIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BulkGetUserPresenceRequest",
		sizeof(FBulkGetUserPresenceRequest),
		alignof(FBulkGetUserPresenceRequest),
		Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BulkGetUserPresenceRequest"), sizeof(FBulkGetUserPresenceRequest), Get_Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest_Hash() { return 4267284622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
