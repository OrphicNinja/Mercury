// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentStateVariables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentStateVariables() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentStateVariables();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMovementMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterMovementState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTurnDirection();
// End Cross Module References
class UScriptStruct* FSBZAgentStateVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentStateVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentStateVariables, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentStateVariables"), sizeof(FSBZAgentStateVariables), Get_Z_Construct_UScriptStruct_FSBZAgentStateVariables_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentStateVariables>()
{
	return FSBZAgentStateVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentStateVariables(FSBZAgentStateVariables::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentStateVariables"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentStateVariables
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentStateVariables()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentStateVariables>(FName(TEXT("SBZAgentStateVariables")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentStateVariables;
	struct Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MontageHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteViewYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteViewYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteDesiredViewYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteDesiredViewYaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterMovementState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterMovementState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TurnDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TurnDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bClearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MontagePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationGroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationGroupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVelocityIsRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bVelocityIsRequested;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentStateVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_DesiredAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_DesiredAcceleration = { "DesiredAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, DesiredAcceleration), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_DesiredAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_DesiredAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontageHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontageHash = { "MontageHash", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, MontageHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontageHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontageHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, Yaw), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteViewYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteViewYaw = { "RemoteViewYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, RemoteViewYaw), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteViewYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteViewYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteDesiredViewYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteDesiredViewYaw = { "RemoteDesiredViewYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, RemoteDesiredViewYaw), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteDesiredViewYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteDesiredViewYaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, MovementMode), Z_Construct_UEnum_Starbreeze_ESBZMovementMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState = { "CharacterMovementState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, CharacterMovementState), Z_Construct_UEnum_Starbreeze_ESBZCharacterMovementState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection = { "TurnDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, TurnDirection), Z_Construct_UEnum_Starbreeze_ESBZTurnDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bClearVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bClearVelocity = { "bClearVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, bClearVelocity), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bClearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bClearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontagePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontagePosition = { "MontagePosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, MontagePosition), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontagePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_ReplicationGroupIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_ReplicationGroupIndex = { "ReplicationGroupIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, ReplicationGroupIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_ReplicationGroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_ReplicationGroupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bVelocityIsRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentStateVariables" },
		{ "ModuleRelativePath", "Public/SBZAgentStateVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bVelocityIsRequested = { "bVelocityIsRequested", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentStateVariables, bVelocityIsRequested), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bVelocityIsRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bVelocityIsRequested_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_DesiredAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontageHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteViewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_RemoteDesiredViewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_CharacterMovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_TurnDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bClearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_MontagePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_ReplicationGroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::NewProp_bVelocityIsRequested,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentStateVariables",
		sizeof(FSBZAgentStateVariables),
		alignof(FSBZAgentStateVariables),
		Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentStateVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentStateVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentStateVariables"), sizeof(FSBZAgentStateVariables), Get_Z_Construct_UScriptStruct_FSBZAgentStateVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentStateVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentStateVariables_Hash() { return 3040230785U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
