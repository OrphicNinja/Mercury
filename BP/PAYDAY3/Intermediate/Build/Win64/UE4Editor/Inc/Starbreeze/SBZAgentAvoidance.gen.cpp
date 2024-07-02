// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentAvoidance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentAvoidance() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentAvoidance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZAgentAvoidance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentAvoidance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentAvoidance, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentAvoidance"), sizeof(FSBZAgentAvoidance), Get_Z_Construct_UScriptStruct_FSBZAgentAvoidance_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentAvoidance>()
{
	return FSBZAgentAvoidance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentAvoidance(FSBZAgentAvoidance::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentAvoidance"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentAvoidance
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentAvoidance()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentAvoidance>(FName(TEXT("SBZAgentAvoidance")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentAvoidance;
	struct Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvoidanceUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottleNeckDetectionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottleNeckDetectionTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRadiusModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetRadiusModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentAvoidance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_AvoidanceUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentAvoidance" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_AvoidanceUID = { "AvoidanceUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentAvoidance, AvoidanceUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_AvoidanceUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_AvoidanceUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_LockedVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentAvoidance" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_LockedVelocity = { "LockedVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentAvoidance, LockedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_LockedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_LockedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_Timer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentAvoidance" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentAvoidance, Timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_BottleNeckDetectionTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentAvoidance" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_BottleNeckDetectionTimer = { "BottleNeckDetectionTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentAvoidance, BottleNeckDetectionTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_BottleNeckDetectionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_BottleNeckDetectionTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_RadiusModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentAvoidance" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_RadiusModifier = { "RadiusModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentAvoidance, RadiusModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_RadiusModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_RadiusModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_TargetRadiusModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentAvoidance" },
		{ "ModuleRelativePath", "Public/SBZAgentAvoidance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_TargetRadiusModifier = { "TargetRadiusModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentAvoidance, TargetRadiusModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_TargetRadiusModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_TargetRadiusModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_AvoidanceUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_LockedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_BottleNeckDetectionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_RadiusModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::NewProp_TargetRadiusModifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentAvoidance",
		sizeof(FSBZAgentAvoidance),
		alignof(FSBZAgentAvoidance),
		Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentAvoidance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentAvoidance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentAvoidance"), sizeof(FSBZAgentAvoidance), Get_Z_Construct_UScriptStruct_FSBZAgentAvoidance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentAvoidance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentAvoidance_Hash() { return 1044551035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
