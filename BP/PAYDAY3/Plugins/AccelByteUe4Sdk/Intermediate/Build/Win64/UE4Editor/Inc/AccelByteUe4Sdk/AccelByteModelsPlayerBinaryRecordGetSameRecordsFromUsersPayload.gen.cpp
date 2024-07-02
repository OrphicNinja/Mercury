// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload"), sizeof(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload>()
{
	return FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload>(FName(TEXT("AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::NewProp_UserIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload",
		sizeof(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload),
		alignof(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload"), sizeof(FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayerBinaryRecordGetSameRecordsFromUsersPayload_Hash() { return 66466437U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
