// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload"), sizeof(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload>()
{
	return FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload>(FName(TEXT("AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_Query_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::NewProp_Query,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload",
		sizeof(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload),
		alignof(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload"), sizeof(FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetRecordsByQueryPayload_Hash() { return 3103669381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
