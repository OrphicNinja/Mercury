// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCUpdateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUGCUpdateRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsUGCUpdateRequest>() == std::is_polymorphic<FAccelByteModelsUGCRequest>(), "USTRUCT FAccelByteModelsUGCUpdateRequest cannot be polymorphic unless super FAccelByteModelsUGCRequest is polymorphic");

class UScriptStruct* FAccelByteModelsUGCUpdateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUGCUpdateRequest"), sizeof(FAccelByteModelsUGCUpdateRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUGCUpdateRequest>()
{
	return FAccelByteModelsUGCUpdateRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUGCUpdateRequest(FAccelByteModelsUGCUpdateRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUGCUpdateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUpdateRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUpdateRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUGCUpdateRequest>(FName(TEXT("AccelByteModelsUGCUpdateRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCUpdateRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateContentFile_MetaData[];
#endif
		static void NewProp_UpdateContentFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateContentFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUpdateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUGCUpdateRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCUpdateRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCUpdateRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile_SetBit(void* Obj)
	{
		((FAccelByteModelsUGCUpdateRequest*)Obj)->UpdateContentFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile = { "UpdateContentFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsUGCUpdateRequest), &Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::NewProp_UpdateContentFile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsUGCRequest,
		&NewStructOps,
		"AccelByteModelsUGCUpdateRequest",
		sizeof(FAccelByteModelsUGCUpdateRequest),
		alignof(FAccelByteModelsUGCUpdateRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUGCUpdateRequest"), sizeof(FAccelByteModelsUGCUpdateRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest_Hash() { return 4266955918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
