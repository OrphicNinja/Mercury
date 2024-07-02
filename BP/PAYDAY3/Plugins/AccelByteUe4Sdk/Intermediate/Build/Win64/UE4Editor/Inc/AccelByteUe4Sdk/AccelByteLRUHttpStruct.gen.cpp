// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteLRUHttpStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteLRUHttpStruct() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteLRUHttpStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteLRUHttpStruct"), sizeof(FAccelByteLRUHttpStruct), Get_Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteLRUHttpStruct>()
{
	return FAccelByteLRUHttpStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteLRUHttpStruct(FAccelByteLRUHttpStruct::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteLRUHttpStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteLRUHttpStruct
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteLRUHttpStruct()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteLRUHttpStruct>(FName(TEXT("AccelByteLRUHttpStruct")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteLRUHttpStruct;
	struct Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestHeaders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestHeaders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestHeaders;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResponseHeaders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseHeaders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResponseHeaders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestURL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResponsePayload_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponsePayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResponsePayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpireTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpireTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteLRUHttpStruct>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_Inner = { "RequestHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders = { "RequestHeaders", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, RequestHeaders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_Inner = { "ResponseHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders = { "ResponseHeaders", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ResponseHeaders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ResponseCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL = { "RequestURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, RequestURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_Inner = { "ResponsePayload", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload = { "ResponsePayload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ResponsePayload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime = { "ExpireTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ExpireTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteLRUHttpStruct",
		sizeof(FAccelByteLRUHttpStruct),
		alignof(FAccelByteLRUHttpStruct),
		Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteLRUHttpStruct"), sizeof(FAccelByteLRUHttpStruct), Get_Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Hash() { return 2974714987U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
