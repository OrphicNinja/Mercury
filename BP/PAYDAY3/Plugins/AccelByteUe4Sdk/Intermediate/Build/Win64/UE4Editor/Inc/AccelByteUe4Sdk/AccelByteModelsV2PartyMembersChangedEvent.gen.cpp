// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2PartyMembersChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2PartyMembersChangedEvent() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionUser();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2PartySession();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2PartyMembersChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2PartyMembersChangedEvent"), sizeof(FAccelByteModelsV2PartyMembersChangedEvent), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2PartyMembersChangedEvent>()
{
	return FAccelByteModelsV2PartyMembersChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent(FAccelByteModelsV2PartyMembersChangedEvent::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2PartyMembersChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2PartyMembersChangedEvent
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2PartyMembersChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2PartyMembersChangedEvent>(FName(TEXT("AccelByteModelsV2PartyMembersChangedEvent")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2PartyMembersChangedEvent;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JoinerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2PartyMembersChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2PartyMembersChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_PartyID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2PartyMembersChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2PartyMembersChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_PartyID = { "PartyID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2PartyMembersChangedEvent, PartyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_PartyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_PartyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_JoinerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2PartyMembersChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2PartyMembersChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_JoinerID = { "JoinerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2PartyMembersChangedEvent, JoinerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_JoinerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_JoinerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_LeaderID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2PartyMembersChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2PartyMembersChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_LeaderID = { "LeaderID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2PartyMembersChangedEvent, LeaderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_LeaderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_LeaderID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2SessionUser, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2PartyMembersChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2PartyMembersChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2PartyMembersChangedEvent, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Session_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2PartyMembersChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2PartyMembersChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2PartyMembersChangedEvent, Session), Z_Construct_UScriptStruct_FAccelByteModelsV2PartySession, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Session_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Session_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_PartyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_JoinerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_LeaderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::NewProp_Session,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2PartyMembersChangedEvent",
		sizeof(FAccelByteModelsV2PartyMembersChangedEvent),
		alignof(FAccelByteModelsV2PartyMembersChangedEvent),
		Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2PartyMembersChangedEvent"), sizeof(FAccelByteModelsV2PartyMembersChangedEvent), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2PartyMembersChangedEvent_Hash() { return 3914072254U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
