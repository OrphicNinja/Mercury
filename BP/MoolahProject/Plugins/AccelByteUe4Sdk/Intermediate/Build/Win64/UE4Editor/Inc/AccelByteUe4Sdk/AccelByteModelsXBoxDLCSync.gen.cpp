// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsXBoxDLCSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsXBoxDLCSync() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsXBoxDLCSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsXBoxDLCSync"), sizeof(FAccelByteModelsXBoxDLCSync), Get_Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsXBoxDLCSync>()
{
	return FAccelByteModelsXBoxDLCSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsXBoxDLCSync(FAccelByteModelsXBoxDLCSync::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsXBoxDLCSync"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsXBoxDLCSync
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsXBoxDLCSync()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsXBoxDLCSync>(FName(TEXT("AccelByteModelsXBoxDLCSync")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsXBoxDLCSync;
	struct Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XstsToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XstsToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsXBoxDLCSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsXBoxDLCSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::NewProp_XstsToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsXBoxDLCSync" },
		{ "ModuleRelativePath", "Public/AccelByteModelsXBoxDLCSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::NewProp_XstsToken = { "XstsToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsXBoxDLCSync, XstsToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::NewProp_XstsToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::NewProp_XstsToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::NewProp_XstsToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsXBoxDLCSync",
		sizeof(FAccelByteModelsXBoxDLCSync),
		alignof(FAccelByteModelsXBoxDLCSync),
		Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsXBoxDLCSync"), sizeof(FAccelByteModelsXBoxDLCSync), Get_Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsXBoxDLCSync_Hash() { return 2273783688U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
