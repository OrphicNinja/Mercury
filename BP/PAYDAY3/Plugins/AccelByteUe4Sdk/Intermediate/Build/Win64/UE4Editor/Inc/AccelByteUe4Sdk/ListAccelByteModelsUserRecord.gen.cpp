// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ListAccelByteModelsUserRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListAccelByteModelsUserRecord() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserRecord();
// End Cross Module References
class UScriptStruct* FListAccelByteModelsUserRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ListAccelByteModelsUserRecord"), sizeof(FListAccelByteModelsUserRecord), Get_Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FListAccelByteModelsUserRecord>()
{
	return FListAccelByteModelsUserRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FListAccelByteModelsUserRecord(FListAccelByteModelsUserRecord::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ListAccelByteModelsUserRecord"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFListAccelByteModelsUserRecord
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFListAccelByteModelsUserRecord()
	{
		UScriptStruct::DeferCppStructOps<FListAccelByteModelsUserRecord>(FName(TEXT("ListAccelByteModelsUserRecord")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFListAccelByteModelsUserRecord;
	struct Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ListAccelByteModelsUserRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FListAccelByteModelsUserRecord>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsUserRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListAccelByteModelsUserRecord" },
		{ "ModuleRelativePath", "Public/ListAccelByteModelsUserRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListAccelByteModelsUserRecord, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ListAccelByteModelsUserRecord",
		sizeof(FListAccelByteModelsUserRecord),
		alignof(FListAccelByteModelsUserRecord),
		Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ListAccelByteModelsUserRecord"), sizeof(FListAccelByteModelsUserRecord), Get_Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FListAccelByteModelsUserRecord_Hash() { return 1160935802U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
