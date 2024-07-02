// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentNavState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentNavState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentNavState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHitResultLite();
// End Cross Module References
class UScriptStruct* FSBZAgentNavState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentNavState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentNavState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentNavState"), sizeof(FSBZAgentNavState), Get_Z_Construct_UScriptStruct_FSBZAgentNavState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentNavState>()
{
	return FSBZAgentNavState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentNavState(FSBZAgentNavState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentNavState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentNavState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentNavState()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentNavState>(FName(TEXT("SBZAgentNavState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentNavState;
	struct Z_Construct_UScriptStruct_FSBZAgentNavState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFloorCheckZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFloorCheckZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedProjectedNavMeshHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedProjectedNavMeshHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentNavState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentNavState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_LastFloorCheckZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentNavState" },
		{ "ModuleRelativePath", "Public/SBZAgentNavState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_LastFloorCheckZ = { "LastFloorCheckZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentNavState, LastFloorCheckZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_LastFloorCheckZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_LastFloorCheckZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_ProjectionTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentNavState" },
		{ "ModuleRelativePath", "Public/SBZAgentNavState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_ProjectionTimer = { "ProjectionTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentNavState, ProjectionTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_ProjectionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_ProjectionTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_CachedProjectedNavMeshHitResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentNavState" },
		{ "ModuleRelativePath", "Public/SBZAgentNavState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_CachedProjectedNavMeshHitResult = { "CachedProjectedNavMeshHitResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentNavState, CachedProjectedNavMeshHitResult), Z_Construct_UScriptStruct_FSBZHitResultLite, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_CachedProjectedNavMeshHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_CachedProjectedNavMeshHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_LastFloorCheckZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_ProjectionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::NewProp_CachedProjectedNavMeshHitResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentNavState",
		sizeof(FSBZAgentNavState),
		alignof(FSBZAgentNavState),
		Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentNavState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentNavState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentNavState"), sizeof(FSBZAgentNavState), Get_Z_Construct_UScriptStruct_FSBZAgentNavState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentNavState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentNavState_Hash() { return 716813655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
