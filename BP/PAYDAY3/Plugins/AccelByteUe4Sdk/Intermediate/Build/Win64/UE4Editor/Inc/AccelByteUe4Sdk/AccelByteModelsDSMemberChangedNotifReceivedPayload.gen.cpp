// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDSMemberChangedNotifReceivedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsDSMemberChangedNotifReceivedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSRegisteredPayload();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionUser();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionTeam();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsDSMemberChangedNotifReceivedPayload>() == std::is_polymorphic<FAccelByteModelsDSRegisteredPayload>(), "USTRUCT FAccelByteModelsDSMemberChangedNotifReceivedPayload cannot be polymorphic unless super FAccelByteModelsDSRegisteredPayload is polymorphic");

class UScriptStruct* FAccelByteModelsDSMemberChangedNotifReceivedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsDSMemberChangedNotifReceivedPayload"), sizeof(FAccelByteModelsDSMemberChangedNotifReceivedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsDSMemberChangedNotifReceivedPayload>()
{
	return FAccelByteModelsDSMemberChangedNotifReceivedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload(FAccelByteModelsDSMemberChangedNotifReceivedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsDSMemberChangedNotifReceivedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSMemberChangedNotifReceivedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSMemberChangedNotifReceivedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsDSMemberChangedNotifReceivedPayload>(FName(TEXT("AccelByteModelsDSMemberChangedNotifReceivedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSMemberChangedNotifReceivedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Teams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Teams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Teams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMemberChangedNotifReceivedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsDSMemberChangedNotifReceivedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_GameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMemberChangedNotifReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMemberChangedNotifReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_GameSessionId = { "GameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMemberChangedNotifReceivedPayload, GameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_GameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_GameSessionId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2SessionUser, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMemberChangedNotifReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMemberChangedNotifReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMemberChangedNotifReceivedPayload, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams_Inner = { "Teams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionTeam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMemberChangedNotifReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMemberChangedNotifReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams = { "Teams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMemberChangedNotifReceivedPayload, Teams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_GameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::NewProp_Teams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsDSRegisteredPayload,
		&NewStructOps,
		"AccelByteModelsDSMemberChangedNotifReceivedPayload",
		sizeof(FAccelByteModelsDSMemberChangedNotifReceivedPayload),
		alignof(FAccelByteModelsDSMemberChangedNotifReceivedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsDSMemberChangedNotifReceivedPayload"), sizeof(FAccelByteModelsDSMemberChangedNotifReceivedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMemberChangedNotifReceivedPayload_Hash() { return 2317090985U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
