// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2GameSessionUserRejectedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2GameSessionUserRejectedEvent() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionUser();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2GameSessionUserRejectedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2GameSessionUserRejectedEvent"), sizeof(FAccelByteModelsV2GameSessionUserRejectedEvent), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2GameSessionUserRejectedEvent>()
{
	return FAccelByteModelsV2GameSessionUserRejectedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent(FAccelByteModelsV2GameSessionUserRejectedEvent::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2GameSessionUserRejectedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2GameSessionUserRejectedEvent
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2GameSessionUserRejectedEvent()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2GameSessionUserRejectedEvent>(FName(TEXT("AccelByteModelsV2GameSessionUserRejectedEvent")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2GameSessionUserRejectedEvent;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectedID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RejectedID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2GameSessionUserRejectedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2GameSessionUserRejectedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_SessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2GameSessionUserRejectedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2GameSessionUserRejectedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2GameSessionUserRejectedEvent, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2SessionUser, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2GameSessionUserRejectedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2GameSessionUserRejectedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2GameSessionUserRejectedEvent, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_RejectedID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2GameSessionUserRejectedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2GameSessionUserRejectedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_RejectedID = { "RejectedID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2GameSessionUserRejectedEvent, RejectedID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_RejectedID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_RejectedID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::NewProp_RejectedID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2GameSessionUserRejectedEvent",
		sizeof(FAccelByteModelsV2GameSessionUserRejectedEvent),
		alignof(FAccelByteModelsV2GameSessionUserRejectedEvent),
		Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2GameSessionUserRejectedEvent"), sizeof(FAccelByteModelsV2GameSessionUserRejectedEvent), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionUserRejectedEvent_Hash() { return 1871676144U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
