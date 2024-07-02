// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkStatItemCreate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsBulkStatItemCreate() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsBulkStatItemCreate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsBulkStatItemCreate"), sizeof(FAccelByteModelsBulkStatItemCreate), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsBulkStatItemCreate>()
{
	return FAccelByteModelsBulkStatItemCreate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsBulkStatItemCreate(FAccelByteModelsBulkStatItemCreate::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsBulkStatItemCreate"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkStatItemCreate
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkStatItemCreate()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsBulkStatItemCreate>(FName(TEXT("AccelByteModelsBulkStatItemCreate")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkStatItemCreate;
	struct Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkStatItemCreate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsBulkStatItemCreate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkStatItemCreate" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkStatItemCreate.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkStatItemCreate, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::NewProp_StatCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsBulkStatItemCreate",
		sizeof(FAccelByteModelsBulkStatItemCreate),
		alignof(FAccelByteModelsBulkStatItemCreate),
		Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsBulkStatItemCreate"), sizeof(FAccelByteModelsBulkStatItemCreate), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemCreate_Hash() { return 4258918888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
