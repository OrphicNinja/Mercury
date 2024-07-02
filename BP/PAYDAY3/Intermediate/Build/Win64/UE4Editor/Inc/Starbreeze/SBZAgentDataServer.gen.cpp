// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentDataServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentDataServer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentDataServer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentAvoidance();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentNavState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentNavRestrict();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMesh();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicationGroupIndices();
// End Cross Module References
class UScriptStruct* FSBZAgentDataServer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDataServer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentDataServer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentDataServer"), sizeof(FSBZAgentDataServer), Get_Z_Construct_UScriptStruct_FSBZAgentDataServer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentDataServer>()
{
	return FSBZAgentDataServer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentDataServer(FSBZAgentDataServer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentDataServer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDataServer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDataServer()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentDataServer>(FName(TEXT("SBZAgentDataServer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDataServer;
	struct Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousYaw_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousYaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MontagePosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MontagePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MontageLength_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MontageLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollideWithOtherAgentsTimer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollideWithOtherAgentsTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollideWithOtherAgentsTimer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Avoidance_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avoidance_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avoidance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavRestrict_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavRestrict_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavRestrict;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CorridorDebugMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorridorDebugMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CorridorDebugMesh;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceReplication_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceReplication_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bForceReplication;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicationGroupIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationGroupIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicationGroupIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentDataServer>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw_Inner = { "PreviousYaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw = { "PreviousYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, PreviousYaw), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition_Inner = { "MontagePosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition = { "MontagePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, MontagePosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength_Inner = { "MontageLength", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength = { "MontageLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, MontageLength), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer_Inner = { "CollideWithOtherAgentsTimer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer = { "CollideWithOtherAgentsTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, CollideWithOtherAgentsTimer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance_Inner = { "Avoidance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentAvoidance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance = { "Avoidance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, Avoidance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState_Inner = { "NavState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentNavState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState = { "NavState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, NavState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict_Inner = { "NavRestrict", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentNavRestrict, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict = { "NavRestrict", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, NavRestrict), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh_Inner = { "CorridorDebugMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh = { "CorridorDebugMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, CorridorDebugMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication_Inner = { "bForceReplication", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication = { "bForceReplication", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, bForceReplication), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices_Inner = { "ReplicationGroupIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZReplicationGroupIndices, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDataServer" },
		{ "ModuleRelativePath", "Public/SBZAgentDataServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices = { "ReplicationGroupIndices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDataServer, ReplicationGroupIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_PreviousYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontagePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_MontageLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CollideWithOtherAgentsTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_Avoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_NavRestrict,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_CorridorDebugMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_bForceReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::NewProp_ReplicationGroupIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentDataServer",
		sizeof(FSBZAgentDataServer),
		alignof(FSBZAgentDataServer),
		Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentDataServer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDataServer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentDataServer"), sizeof(FSBZAgentDataServer), Get_Z_Construct_UScriptStruct_FSBZAgentDataServer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentDataServer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDataServer_Hash() { return 656948799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
