// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMultipleServicePSNDLCSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMultipleServicePSNDLCSync() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsMultipleServicePSNDLCSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMultipleServicePSNDLCSync"), sizeof(FAccelByteModelsMultipleServicePSNDLCSync), Get_Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMultipleServicePSNDLCSync>()
{
	return FAccelByteModelsMultipleServicePSNDLCSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync(FAccelByteModelsMultipleServicePSNDLCSync::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMultipleServicePSNDLCSync"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMultipleServicePSNDLCSync
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMultipleServicePSNDLCSync()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMultipleServicePSNDLCSync>(FName(TEXT("AccelByteModelsMultipleServicePSNDLCSync")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMultipleServicePSNDLCSync;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServiceLabel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServiceLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMultipleServicePSNDLCSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMultipleServicePSNDLCSync>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel_Inner = { "ServiceLabel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMultipleServicePSNDLCSync" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMultipleServicePSNDLCSync.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel = { "ServiceLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMultipleServicePSNDLCSync, ServiceLabel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::NewProp_ServiceLabel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsMultipleServicePSNDLCSync",
		sizeof(FAccelByteModelsMultipleServicePSNDLCSync),
		alignof(FAccelByteModelsMultipleServicePSNDLCSync),
		Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMultipleServicePSNDLCSync"), sizeof(FAccelByteModelsMultipleServicePSNDLCSync), Get_Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMultipleServicePSNDLCSync_Hash() { return 4001079303U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
