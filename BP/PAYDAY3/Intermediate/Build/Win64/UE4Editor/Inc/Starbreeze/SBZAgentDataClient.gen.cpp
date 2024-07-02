// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentDataClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentDataClient() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentDataClient();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRepMoveQueue();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentState();
// End Cross Module References
class UScriptStruct* FSBZAgentDataClient::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDataClient_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentDataClient, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentDataClient"), sizeof(FSBZAgentDataClient), Get_Z_Construct_UScriptStruct_FSBZAgentDataClient_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentDataClient>()
{
	return FSBZAgentDataClient::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentDataClient(FSBZAgentDataClient::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentDataClient"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDataClient
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDataClient()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentDataClient>(FName(TEXT("SBZAgentDataClient")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDataClient;
	struct Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerPosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerTimestamp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerTimestamp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerLocalTimestamp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerLocalTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerLocalTimestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevServerPosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevServerPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrevServerPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrevServerTimestamp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevServerTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrevServerTimestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerVelocity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerAcceleration_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerAcceleration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalPosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoalPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoalRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAtLastGoal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAtLastGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationAtLastGoal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteViewYawAtLastGoal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteViewYawAtLastGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoteViewYawAtLastGoal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GoalLocalTimestamp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocalTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoalLocalTimestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictedServerPosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedServerPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredictedServerPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictedServerVelocity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedServerVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredictedServerVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionDuration_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredictionDuration;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearVelocity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bClearVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimulatedPositionWarpTimer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedPositionWarpTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulatedPositionWarpTimer;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ServerMontageHash_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMontageHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerMontageHash;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMontagePosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMontagePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerMontagePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealServerPosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealServerPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RealServerPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealServerRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealServerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RealServerRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RealServerMontagePosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealServerMontagePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RealServerMontagePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoostSpeed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoostSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoostSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationGroupIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationGroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicationGroupIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepMoveQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepMoveQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RepMoveQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRepMove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRepMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentRepMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentDataClient>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition_Inner = { "ServerPosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition = { "ServerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp_Inner = { "ServerTimestamp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp = { "ServerTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerTimestamp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp_Inner = { "ServerLocalTimestamp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp = { "ServerLocalTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerLocalTimestamp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition_Inner = { "PrevServerPosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition = { "PrevServerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, PrevServerPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp_Inner = { "PrevServerTimestamp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp = { "PrevServerTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, PrevServerTimestamp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation_Inner = { "ServerRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation = { "ServerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity_Inner = { "ServerVelocity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity = { "ServerVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration_Inner = { "ServerAcceleration", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration = { "ServerAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerAcceleration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition_Inner = { "GoalPosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition = { "GoalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, GoalPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation_Inner = { "GoalRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation = { "GoalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, GoalRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal_Inner = { "RotationAtLastGoal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal = { "RotationAtLastGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, RotationAtLastGoal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal_Inner = { "RemoteViewYawAtLastGoal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal = { "RemoteViewYawAtLastGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, RemoteViewYawAtLastGoal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp_Inner = { "GoalLocalTimestamp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp = { "GoalLocalTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, GoalLocalTimestamp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition_Inner = { "PredictedServerPosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition = { "PredictedServerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, PredictedServerPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity_Inner = { "PredictedServerVelocity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity = { "PredictedServerVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, PredictedServerVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration_Inner = { "PredictionDuration", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration = { "PredictionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, PredictionDuration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity_Inner = { "bClearVelocity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity = { "bClearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, bClearVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer_Inner = { "SimulatedPositionWarpTimer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer = { "SimulatedPositionWarpTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, SimulatedPositionWarpTimer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash_Inner = { "ServerMontageHash", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash = { "ServerMontageHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerMontageHash), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition_Inner = { "ServerMontagePosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition = { "ServerMontagePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ServerMontagePosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition_Inner = { "RealServerPosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition = { "RealServerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, RealServerPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation_Inner = { "RealServerRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation = { "RealServerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, RealServerRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition_Inner = { "RealServerMontagePosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition = { "RealServerMontagePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, RealServerMontagePosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed_Inner = { "BoostSpeed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed = { "BoostSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, BoostSpeed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex_Inner = { "ReplicationGroupIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex = { "ReplicationGroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, ReplicationGroupIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue_Inner = { "RepMoveQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRepMoveQueue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue = { "RepMoveQueue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, RepMoveQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove_Inner = { "CurrentRepMove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataClient" },
		{ "ModuleRelativePath", "Public/SBZAgentDataClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove = { "CurrentRepMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataClient, CurrentRepMove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerLocalTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PrevServerTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RotationAtLastGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RemoteViewYawAtLastGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_GoalLocalTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictedServerVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_PredictionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_bClearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_SimulatedPositionWarpTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontageHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ServerMontagePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RealServerMontagePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_BoostSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_ReplicationGroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_RepMoveQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::NewProp_CurrentRepMove,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentDataClient",
		sizeof(FSBZAgentDataClient),
		alignof(FSBZAgentDataClient),
		Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentDataClient()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDataClient_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentDataClient"), sizeof(FSBZAgentDataClient), Get_Z_Construct_UScriptStruct_FSBZAgentDataClient_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentDataClient_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDataClient_Hash() { return 3000737477U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
