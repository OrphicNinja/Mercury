// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleReplicatedMovementBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleReplicatedMovementBase() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
class UScriptStruct* FSBZVehicleReplicatedMovementBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleReplicatedMovementBase"), sizeof(FSBZVehicleReplicatedMovementBase), Get_Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleReplicatedMovementBase>()
{
	return FSBZVehicleReplicatedMovementBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleReplicatedMovementBase(FSBZVehicleReplicatedMovementBase::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleReplicatedMovementBase"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleReplicatedMovementBase
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleReplicatedMovementBase()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleReplicatedMovementBase>(FName(TEXT("SBZVehicleReplicatedMovementBase")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleReplicatedMovementBase;
	struct Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionCorrectionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionCorrectionTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleReplicatedMovementBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleReplicatedMovementBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleReplicatedMovementBase" },
		{ "ModuleRelativePath", "Public/SBZVehicleReplicatedMovementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleReplicatedMovementBase, Location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleReplicatedMovementBase" },
		{ "ModuleRelativePath", "Public/SBZVehicleReplicatedMovementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleReplicatedMovementBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_ServerTimestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleReplicatedMovementBase" },
		{ "ModuleRelativePath", "Public/SBZVehicleReplicatedMovementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_ServerTimestamp = { "ServerTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleReplicatedMovementBase, ServerTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_ServerTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_ServerTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_PredictionCorrectionTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleReplicatedMovementBase" },
		{ "ModuleRelativePath", "Public/SBZVehicleReplicatedMovementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_PredictionCorrectionTimer = { "PredictionCorrectionTimer", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleReplicatedMovementBase, PredictionCorrectionTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_PredictionCorrectionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_PredictionCorrectionTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_ServerTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::NewProp_PredictionCorrectionTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleReplicatedMovementBase",
		sizeof(FSBZVehicleReplicatedMovementBase),
		alignof(FSBZVehicleReplicatedMovementBase),
		Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleReplicatedMovementBase"), sizeof(FSBZVehicleReplicatedMovementBase), Get_Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase_Hash() { return 2619244132U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
