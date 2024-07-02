// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload"), sizeof(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload>()
{
	return FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload>(FName(TEXT("AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SeasonId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_SeasonId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_SeasonId = { "SeasonId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload, SeasonId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_SeasonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_SeasonId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::NewProp_SeasonId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload",
		sizeof(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload),
		alignof(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload"), sizeof(FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonPassGetUserSpecificSeasonDataPayload_Hash() { return 3716872072U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
