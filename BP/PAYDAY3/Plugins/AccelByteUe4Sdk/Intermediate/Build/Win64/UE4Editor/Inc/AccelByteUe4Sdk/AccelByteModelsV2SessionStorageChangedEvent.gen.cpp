// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2SessionStorageChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2SessionStorageChangedEvent() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2SessionStorageChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2SessionStorageChangedEvent"), sizeof(FAccelByteModelsV2SessionStorageChangedEvent), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2SessionStorageChangedEvent>()
{
	return FAccelByteModelsV2SessionStorageChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent(FAccelByteModelsV2SessionStorageChangedEvent::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2SessionStorageChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2SessionStorageChangedEvent
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2SessionStorageChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2SessionStorageChangedEvent>(FName(TEXT("AccelByteModelsV2SessionStorageChangedEvent")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2SessionStorageChangedEvent;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeader_MetaData[];
#endif
		static void NewProp_IsLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageChanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StorageChanges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionStorageChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2SessionStorageChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionStorageChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionStorageChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionStorageChangedEvent, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_SessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionStorageChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionStorageChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionStorageChangedEvent, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_SessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_ActorUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionStorageChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionStorageChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_ActorUserID = { "ActorUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionStorageChangedEvent, ActorUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_ActorUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_ActorUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionStorageChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionStorageChangedEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader_SetBit(void* Obj)
	{
		((FAccelByteModelsV2SessionStorageChangedEvent*)Obj)->IsLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader = { "IsLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2SessionStorageChangedEvent), &Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_StorageChanges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionStorageChangedEvent" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionStorageChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_StorageChanges = { "StorageChanges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionStorageChangedEvent, StorageChanges), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_StorageChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_StorageChanges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_ActorUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_IsLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::NewProp_StorageChanges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2SessionStorageChangedEvent",
		sizeof(FAccelByteModelsV2SessionStorageChangedEvent),
		alignof(FAccelByteModelsV2SessionStorageChangedEvent),
		Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2SessionStorageChangedEvent"), sizeof(FAccelByteModelsV2SessionStorageChangedEvent), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionStorageChangedEvent_Hash() { return 3119826961U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
