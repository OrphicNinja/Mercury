// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGlobalStatItemGetItemByCodePayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGlobalStatItemGetItemByCodePayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsGlobalStatItemGetItemByCodePayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsGlobalStatItemGetItemByCodePayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsGlobalStatItemGetItemByCodePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGlobalStatItemGetItemByCodePayload"), sizeof(FAccelByteModelsGlobalStatItemGetItemByCodePayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGlobalStatItemGetItemByCodePayload>()
{
	return FAccelByteModelsGlobalStatItemGetItemByCodePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload(FAccelByteModelsGlobalStatItemGetItemByCodePayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGlobalStatItemGetItemByCodePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGlobalStatItemGetItemByCodePayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGlobalStatItemGetItemByCodePayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGlobalStatItemGetItemByCodePayload>(FName(TEXT("AccelByteModelsGlobalStatItemGetItemByCodePayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGlobalStatItemGetItemByCodePayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGlobalStatItemGetItemByCodePayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGlobalStatItemGetItemByCodePayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGlobalStatItemGetItemByCodePayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGlobalStatItemGetItemByCodePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGlobalStatItemGetItemByCodePayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGlobalStatItemGetItemByCodePayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGlobalStatItemGetItemByCodePayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGlobalStatItemGetItemByCodePayload, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::NewProp_StatCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsGlobalStatItemGetItemByCodePayload",
		sizeof(FAccelByteModelsGlobalStatItemGetItemByCodePayload),
		alignof(FAccelByteModelsGlobalStatItemGetItemByCodePayload),
		Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGlobalStatItemGetItemByCodePayload"), sizeof(FAccelByteModelsGlobalStatItemGetItemByCodePayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGlobalStatItemGetItemByCodePayload_Hash() { return 700515451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
