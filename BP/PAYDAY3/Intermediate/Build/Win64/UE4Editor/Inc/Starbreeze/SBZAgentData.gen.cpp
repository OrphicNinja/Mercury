// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMovementMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterMovementState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTurnDirection();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentMeshCollision();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCapsuleInfos();
// End Cross Module References
class UScriptStruct* FSBZAgentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentData"), sizeof(FSBZAgentData), Get_Z_Construct_UScriptStruct_FSBZAgentData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentData>()
{
	return FSBZAgentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentData(FSBZAgentData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentData>(FName(TEXT("SBZAgentData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentData;
	struct Z_Construct_UScriptStruct_FSBZAgentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Id_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PawnUniqueId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnUniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Movement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulatedPosition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulatedPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulatedRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulatedRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteViewYaw_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteViewYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoteViewYaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteDesiredViewYaw_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteDesiredViewYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoteDesiredViewYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVelocityIsRequested_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVelocityIsRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bVelocityIsRequested;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActualVelocity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActualVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredAcceleration_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DesiredAcceleration;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaxSpeed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterMovementState_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterMovementState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterMovementState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TurnDirection_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TurnDirection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TurnDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapTimer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Collision_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Collision;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MontageHash_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MontageHash;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RMTargetWorldWS_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RMTargetWorldWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RMTargetWorldWS;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsuleInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id_Inner = { "Id", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Id), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn_Inner = { "Pawn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Pawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId_Inner = { "PawnUniqueId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId = { "PawnUniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, PawnUniqueId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_Inner = { "Movement", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Movement), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position_Inner = { "Position", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Position), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition_Inner = { "SimulatedPosition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition = { "SimulatedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, SimulatedPosition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation_Inner = { "Rotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Rotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation_Inner = { "SimulatedRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation = { "SimulatedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, SimulatedRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation_Inner = { "TargetRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, TargetRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw_Inner = { "RemoteViewYaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw = { "RemoteViewYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, RemoteViewYaw), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw_Inner = { "RemoteDesiredViewYaw", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw = { "RemoteDesiredViewYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, RemoteDesiredViewYaw), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity_Inner = { "Velocity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Velocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested_Inner = { "bVelocityIsRequested", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested = { "bVelocityIsRequested", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, bVelocityIsRequested), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity_Inner = { "ActualVelocity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity = { "ActualVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, ActualVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration_Inner = { "DesiredAcceleration", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration = { "DesiredAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, DesiredAcceleration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed_Inner = { "MaxSpeed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, MaxSpeed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent_Inner = { "Extent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Extent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_Inner = { "MovementMode", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZMovementMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, MovementMode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_Inner = { "CharacterMovementState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZCharacterMovementState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState = { "CharacterMovementState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, CharacterMovementState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_Inner = { "TurnDirection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZTurnDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection = { "TurnDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, TurnDirection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer_Inner = { "OverlapTimer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer = { "OverlapTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, OverlapTimer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision_Inner = { "Collision", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentMeshCollision, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, Collision), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash_Inner = { "MontageHash", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash = { "MontageHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, MontageHash), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS_Inner = { "RMTargetWorldWS", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS = { "RMTargetWorldWS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, RMTargetWorldWS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos_Inner = { "SkeletalMeshInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSkeletalMeshInfos, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos = { "SkeletalMeshInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, SkeletalMeshInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos_Inner = { "CapsuleInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCapsuleInfos, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentData" },
		{ "ModuleRelativePath", "Public/SBZAgentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos = { "CapsuleInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentData, CapsuleInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_PawnUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SimulatedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteViewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RemoteDesiredViewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_bVelocityIsRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_ActualVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_DesiredAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CharacterMovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_TurnDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_OverlapTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_MontageHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_RMTargetWorldWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_SkeletalMeshInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentData_Statics::NewProp_CapsuleInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentData",
		sizeof(FSBZAgentData),
		alignof(FSBZAgentData),
		Z_Construct_UScriptStruct_FSBZAgentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentData"), sizeof(FSBZAgentData), Get_Z_Construct_UScriptStruct_FSBZAgentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentData_Hash() { return 2345559749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
