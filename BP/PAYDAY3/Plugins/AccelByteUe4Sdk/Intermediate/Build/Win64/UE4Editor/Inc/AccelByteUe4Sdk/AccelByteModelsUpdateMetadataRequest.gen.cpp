// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateMetadataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUpdateMetadataRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUpdateMetadataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUpdateMetadataRequest"), sizeof(FAccelByteModelsUpdateMetadataRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUpdateMetadataRequest>()
{
	return FAccelByteModelsUpdateMetadataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest(FAccelByteModelsUpdateMetadataRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUpdateMetadataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateMetadataRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateMetadataRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUpdateMetadataRequest>(FName(TEXT("AccelByteModelsUpdateMetadataRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateMetadataRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomAttribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateMetadataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUpdateMetadataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUpdateMetadataRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateMetadataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUpdateMetadataRequest, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUpdateMetadataRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateMetadataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUpdateMetadataRequest, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_CustomAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUpdateMetadataRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateMetadataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_CustomAttribute = { "CustomAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUpdateMetadataRequest, CustomAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_CustomAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_CustomAttribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::NewProp_CustomAttribute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUpdateMetadataRequest",
		sizeof(FAccelByteModelsUpdateMetadataRequest),
		alignof(FAccelByteModelsUpdateMetadataRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUpdateMetadataRequest"), sizeof(FAccelByteModelsUpdateMetadataRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateMetadataRequest_Hash() { return 2833251412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
