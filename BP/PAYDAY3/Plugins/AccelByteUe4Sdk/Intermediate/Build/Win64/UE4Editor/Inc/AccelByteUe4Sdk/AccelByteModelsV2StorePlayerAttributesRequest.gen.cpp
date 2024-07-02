// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2StorePlayerAttributesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2StorePlayerAttributesRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2PlayerAttributesPlatform();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2StorePlayerAttributesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2StorePlayerAttributesRequest"), sizeof(FAccelByteModelsV2StorePlayerAttributesRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2StorePlayerAttributesRequest>()
{
	return FAccelByteModelsV2StorePlayerAttributesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest(FAccelByteModelsV2StorePlayerAttributesRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2StorePlayerAttributesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2StorePlayerAttributesRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2StorePlayerAttributesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2StorePlayerAttributesRequest>(FName(TEXT("AccelByteModelsV2StorePlayerAttributesRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2StorePlayerAttributesRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayEnabled_MetaData[];
#endif
		static void NewProp_CrossplayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrossplayEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2StorePlayerAttributesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2StorePlayerAttributesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CurrentPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2StorePlayerAttributesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2StorePlayerAttributesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CurrentPlatform = { "CurrentPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2StorePlayerAttributesRequest, CurrentPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CurrentPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CurrentPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2StorePlayerAttributesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2StorePlayerAttributesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2StorePlayerAttributesRequest, Data), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2StorePlayerAttributesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2StorePlayerAttributesRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled_SetBit(void* Obj)
	{
		((FAccelByteModelsV2StorePlayerAttributesRequest*)Obj)->CrossplayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled = { "CrossplayEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2StorePlayerAttributesRequest), &Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms_Inner = { "Platforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2PlayerAttributesPlatform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2StorePlayerAttributesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2StorePlayerAttributesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2StorePlayerAttributesRequest, Platforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CurrentPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_CrossplayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::NewProp_Platforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2StorePlayerAttributesRequest",
		sizeof(FAccelByteModelsV2StorePlayerAttributesRequest),
		alignof(FAccelByteModelsV2StorePlayerAttributesRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2StorePlayerAttributesRequest"), sizeof(FAccelByteModelsV2StorePlayerAttributesRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2StorePlayerAttributesRequest_Hash() { return 2633854347U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
