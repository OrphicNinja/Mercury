// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsRegisterServerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsRegisterServerRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsRegisterServerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsRegisterServerRequest"), sizeof(FAccelByteModelsRegisterServerRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsRegisterServerRequest>()
{
	return FAccelByteModelsRegisterServerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsRegisterServerRequest(FAccelByteModelsRegisterServerRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsRegisterServerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRegisterServerRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRegisterServerRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsRegisterServerRequest>(FName(TEXT("AccelByteModelsRegisterServerRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRegisterServerRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pod_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pod_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Custom_attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsRegisterServerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Game_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRegisterServerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Game_version = { "Game_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRegisterServerRequest, Game_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Game_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Game_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Ip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRegisterServerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRegisterServerRequest, Ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Pod_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRegisterServerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Pod_name = { "Pod_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRegisterServerRequest, Pod_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Pod_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Pod_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRegisterServerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRegisterServerRequest, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Provider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRegisterServerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRegisterServerRequest, Provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Custom_attribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRegisterServerRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRegisterServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Custom_attribute = { "Custom_attribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRegisterServerRequest, Custom_attribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Custom_attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Custom_attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Game_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Pod_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::NewProp_Custom_attribute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsRegisterServerRequest",
		sizeof(FAccelByteModelsRegisterServerRequest),
		alignof(FAccelByteModelsRegisterServerRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsRegisterServerRequest"), sizeof(FAccelByteModelsRegisterServerRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRegisterServerRequest_Hash() { return 1028623422U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
