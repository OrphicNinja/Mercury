// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/AccelByteGetPodConfigResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteGetPodConfigResponse() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteGetPodConfigResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("AccelByteGetPodConfigResponse"), sizeof(FAccelByteGetPodConfigResponse), Get_Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FAccelByteGetPodConfigResponse>()
{
	return FAccelByteGetPodConfigResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteGetPodConfigResponse(FAccelByteGetPodConfigResponse::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("AccelByteGetPodConfigResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFAccelByteGetPodConfigResponse
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFAccelByteGetPodConfigResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteGetPodConfigResponse>(FName(TEXT("AccelByteGetPodConfigResponse")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFAccelByteGetPodConfigResponse;
	struct Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cpu_limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cpu_limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_createdAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_createdAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mem_limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mem_limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModifiedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteGetPodConfigResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Cpu_limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Cpu_limit = { "Cpu_limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, Cpu_limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Cpu_limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Cpu_limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_createdAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_createdAt = { "createdAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, createdAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_createdAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_createdAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_mem_limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_mem_limit = { "mem_limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, mem_limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_mem_limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_mem_limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_ModifiedBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_ModifiedBy = { "ModifiedBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, ModifiedBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_ModifiedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_ModifiedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, Params), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetPodConfigResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetPodConfigResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetPodConfigResponse, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_UpdatedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Cpu_limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_createdAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_mem_limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_ModifiedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::NewProp_UpdatedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"AccelByteGetPodConfigResponse",
		sizeof(FAccelByteGetPodConfigResponse),
		alignof(FAccelByteGetPodConfigResponse),
		Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteGetPodConfigResponse"), sizeof(FAccelByteGetPodConfigResponse), Get_Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetPodConfigResponse_Hash() { return 2485827965U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
