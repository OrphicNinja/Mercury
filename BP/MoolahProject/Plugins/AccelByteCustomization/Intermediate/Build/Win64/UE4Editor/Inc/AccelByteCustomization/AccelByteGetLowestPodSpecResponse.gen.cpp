// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/AccelByteGetLowestPodSpecResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteGetLowestPodSpecResponse() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FAccelByteGetLowestPodSpecResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("AccelByteGetLowestPodSpecResponse"), sizeof(FAccelByteGetLowestPodSpecResponse), Get_Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FAccelByteGetLowestPodSpecResponse>()
{
	return FAccelByteGetLowestPodSpecResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteGetLowestPodSpecResponse(FAccelByteGetLowestPodSpecResponse::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("AccelByteGetLowestPodSpecResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFAccelByteGetLowestPodSpecResponse
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFAccelByteGetLowestPodSpecResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteGetLowestPodSpecResponse>(FName(TEXT("AccelByteGetLowestPodSpecResponse")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFAccelByteGetLowestPodSpecResponse;
	struct Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cpu_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cpu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteGetLowestPodSpecResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteGetLowestPodSpecResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Cpu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetLowestPodSpecResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetLowestPodSpecResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Cpu = { "Cpu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetLowestPodSpecResponse, Cpu), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Cpu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Cpu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Mem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetLowestPodSpecResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetLowestPodSpecResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Mem = { "Mem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetLowestPodSpecResponse, Mem), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Mem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Mem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Cpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::NewProp_Mem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"AccelByteGetLowestPodSpecResponse",
		sizeof(FAccelByteGetLowestPodSpecResponse),
		alignof(FAccelByteGetLowestPodSpecResponse),
		Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteGetLowestPodSpecResponse"), sizeof(FAccelByteGetLowestPodSpecResponse), Get_Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetLowestPodSpecResponse_Hash() { return 2070813959U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
