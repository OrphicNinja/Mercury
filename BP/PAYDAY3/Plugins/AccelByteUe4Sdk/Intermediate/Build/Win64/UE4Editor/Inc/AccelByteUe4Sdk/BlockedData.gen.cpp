// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BlockedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockedData() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBlockedData();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FBlockedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBlockedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockedData, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BlockedData"), sizeof(FBlockedData), Get_Z_Construct_UScriptStruct_FBlockedData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBlockedData>()
{
	return FBlockedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlockedData(FBlockedData::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BlockedData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBlockedData
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBlockedData()
	{
		UScriptStruct::DeferCppStructOps<FBlockedData>(FName(TEXT("BlockedData")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBlockedData;
	struct Z_Construct_UScriptStruct_FBlockedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlockedUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlockedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockedData_Statics::NewProp_BlockedUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlockedData" },
		{ "ModuleRelativePath", "Public/BlockedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlockedData_Statics::NewProp_BlockedUserId = { "BlockedUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockedData, BlockedUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockedData_Statics::NewProp_BlockedUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedData_Statics::NewProp_BlockedUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockedData_Statics::NewProp_BlockedUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BlockedData",
		sizeof(FBlockedData),
		alignof(FBlockedData),
		Z_Construct_UScriptStruct_FBlockedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlockedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlockedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlockedData"), sizeof(FBlockedData), Get_Z_Construct_UScriptStruct_FBlockedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlockedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlockedData_Hash() { return 1328953412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
