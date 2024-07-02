// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkStatItemInc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsBulkStatItemInc() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsBulkStatItemInc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsBulkStatItemInc"), sizeof(FAccelByteModelsBulkStatItemInc), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsBulkStatItemInc>()
{
	return FAccelByteModelsBulkStatItemInc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsBulkStatItemInc(FAccelByteModelsBulkStatItemInc::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsBulkStatItemInc"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkStatItemInc
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkStatItemInc()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsBulkStatItemInc>(FName(TEXT("AccelByteModelsBulkStatItemInc")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkStatItemInc;
	struct Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inc_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkStatItemInc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsBulkStatItemInc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_inc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkStatItemInc" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkStatItemInc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_inc = { "inc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkStatItemInc, inc), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_inc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_inc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_statCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkStatItemInc" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkStatItemInc.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_statCode = { "statCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkStatItemInc, statCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_statCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_statCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_inc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::NewProp_statCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsBulkStatItemInc",
		sizeof(FAccelByteModelsBulkStatItemInc),
		alignof(FAccelByteModelsBulkStatItemInc),
		Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsBulkStatItemInc"), sizeof(FAccelByteModelsBulkStatItemInc), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc_Hash() { return 4035520129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
