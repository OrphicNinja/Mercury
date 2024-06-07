// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload"), sizeof(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload>()
{
	return FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload>(FName(TEXT("AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload",
		sizeof(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload),
		alignof(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload"), sizeof(FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPublicPlayerRecordGetSameRecordsFromUsersPayload_Hash() { return 3400647804U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
