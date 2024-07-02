// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserAddPlayerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSessionBrowserAddPlayerRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSessionBrowserAddPlayerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSessionBrowserAddPlayerRequest"), sizeof(FAccelByteModelsSessionBrowserAddPlayerRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSessionBrowserAddPlayerRequest>()
{
	return FAccelByteModelsSessionBrowserAddPlayerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest(FAccelByteModelsSessionBrowserAddPlayerRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSessionBrowserAddPlayerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserAddPlayerRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserAddPlayerRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSessionBrowserAddPlayerRequest>(FName(TEXT("AccelByteModelsSessionBrowserAddPlayerRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserAddPlayerRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_As_spectator_MetaData[];
#endif
		static void NewProp_As_spectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_As_spectator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserAddPlayerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSessionBrowserAddPlayerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_User_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserAddPlayerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserAddPlayerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_User_id = { "User_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserAddPlayerRequest, User_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_User_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_User_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserAddPlayerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserAddPlayerRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator_SetBit(void* Obj)
	{
		((FAccelByteModelsSessionBrowserAddPlayerRequest*)Obj)->As_spectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator = { "As_spectator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsSessionBrowserAddPlayerRequest), &Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_User_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::NewProp_As_spectator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSessionBrowserAddPlayerRequest",
		sizeof(FAccelByteModelsSessionBrowserAddPlayerRequest),
		alignof(FAccelByteModelsSessionBrowserAddPlayerRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSessionBrowserAddPlayerRequest"), sizeof(FAccelByteModelsSessionBrowserAddPlayerRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserAddPlayerRequest_Hash() { return 2344240427U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
