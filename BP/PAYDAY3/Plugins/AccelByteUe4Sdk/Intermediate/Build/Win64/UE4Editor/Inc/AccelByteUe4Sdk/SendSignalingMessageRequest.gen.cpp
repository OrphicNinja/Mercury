// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/SendSignalingMessageRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendSignalingMessageRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendSignalingMessageRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FSendSignalingMessageRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSendSignalingMessageRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("SendSignalingMessageRequest"), sizeof(FSendSignalingMessageRequest), Get_Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FSendSignalingMessageRequest>()
{
	return FSendSignalingMessageRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSendSignalingMessageRequest(FSendSignalingMessageRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("SendSignalingMessageRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSendSignalingMessageRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSendSignalingMessageRequest()
	{
		UScriptStruct::DeferCppStructOps<FSendSignalingMessageRequest>(FName(TEXT("SendSignalingMessageRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSendSignalingMessageRequest;
	struct Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SendSignalingMessageRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSendSignalingMessageRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_UserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SendSignalingMessageRequest" },
		{ "ModuleRelativePath", "Public/SendSignalingMessageRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSendSignalingMessageRequest, UserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_UserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SendSignalingMessageRequest" },
		{ "ModuleRelativePath", "Public/SendSignalingMessageRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSendSignalingMessageRequest, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"SendSignalingMessageRequest",
		sizeof(FSendSignalingMessageRequest),
		alignof(FSendSignalingMessageRequest),
		Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSendSignalingMessageRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SendSignalingMessageRequest"), sizeof(FSendSignalingMessageRequest), Get_Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSendSignalingMessageRequest_Hash() { return 1296702160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
