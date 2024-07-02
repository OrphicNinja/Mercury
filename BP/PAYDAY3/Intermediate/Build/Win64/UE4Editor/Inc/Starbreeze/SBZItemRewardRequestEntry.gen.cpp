// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemRewardRequestEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemRewardRequestEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType();
// End Cross Module References
class UScriptStruct* FSBZItemRewardRequestEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZItemRewardRequestEntry"), sizeof(FSBZItemRewardRequestEntry), Get_Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZItemRewardRequestEntry>()
{
	return FSBZItemRewardRequestEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZItemRewardRequestEntry(FSBZItemRewardRequestEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZItemRewardRequestEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemRewardRequestEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemRewardRequestEntry()
	{
		UScriptStruct::DeferCppStructOps<FSBZItemRewardRequestEntry>(FName(TEXT("SBZItemRewardRequestEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemRewardRequestEntry;
	struct Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardRequestType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardRequestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RewardRequestType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZItemRewardRequestEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZItemRewardRequestEntry>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemRewardRequestEntry" },
		{ "ModuleRelativePath", "Public/SBZItemRewardRequestEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType = { "RewardRequestType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemRewardRequestEntry, RewardRequestType), Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_AccelByteUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemRewardRequestEntry" },
		{ "ModuleRelativePath", "Public/SBZItemRewardRequestEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_AccelByteUserId = { "AccelByteUserId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemRewardRequestEntry, AccelByteUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_AccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_AccelByteUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemRewardRequestEntry" },
		{ "ModuleRelativePath", "Public/SBZItemRewardRequestEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemRewardRequestEntry, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_RewardRequestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_AccelByteUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::NewProp_PlayerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZItemRewardRequestEntry",
		sizeof(FSBZItemRewardRequestEntry),
		alignof(FSBZItemRewardRequestEntry),
		Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZItemRewardRequestEntry"), sizeof(FSBZItemRewardRequestEntry), Get_Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZItemRewardRequestEntry_Hash() { return 3478546921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
