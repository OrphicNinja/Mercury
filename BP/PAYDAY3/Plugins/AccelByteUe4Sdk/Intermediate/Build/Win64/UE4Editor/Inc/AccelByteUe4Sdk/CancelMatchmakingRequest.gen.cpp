// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/CancelMatchmakingRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCancelMatchmakingRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FCancelMatchmakingRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FCancelMatchmakingRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCancelMatchmakingRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("CancelMatchmakingRequest"), sizeof(FCancelMatchmakingRequest), Get_Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FCancelMatchmakingRequest>()
{
	return FCancelMatchmakingRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCancelMatchmakingRequest(FCancelMatchmakingRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("CancelMatchmakingRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCancelMatchmakingRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCancelMatchmakingRequest()
	{
		UScriptStruct::DeferCppStructOps<FCancelMatchmakingRequest>(FName(TEXT("CancelMatchmakingRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCancelMatchmakingRequest;
	struct Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTempParty_MetaData[];
#endif
		static void NewProp_isTempParty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTempParty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CancelMatchmakingRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCancelMatchmakingRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_gameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CancelMatchmakingRequest" },
		{ "ModuleRelativePath", "Public/CancelMatchmakingRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_gameMode = { "gameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCancelMatchmakingRequest, gameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_gameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_gameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CancelMatchmakingRequest" },
		{ "ModuleRelativePath", "Public/CancelMatchmakingRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty_SetBit(void* Obj)
	{
		((FCancelMatchmakingRequest*)Obj)->isTempParty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty = { "isTempParty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCancelMatchmakingRequest), &Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_gameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::NewProp_isTempParty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"CancelMatchmakingRequest",
		sizeof(FCancelMatchmakingRequest),
		alignof(FCancelMatchmakingRequest),
		Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCancelMatchmakingRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CancelMatchmakingRequest"), sizeof(FCancelMatchmakingRequest), Get_Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCancelMatchmakingRequest_Hash() { return 1288564971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
