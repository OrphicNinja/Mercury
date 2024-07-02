// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentDeltaState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentDeltaState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentDeltaState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentStateBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAgentDeltaState>() == std::is_polymorphic<FSBZAgentStateBase>(), "USTRUCT FSBZAgentDeltaState cannot be polymorphic unless super FSBZAgentStateBase is polymorphic");

class UScriptStruct* FSBZAgentDeltaState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDeltaState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentDeltaState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentDeltaState"), sizeof(FSBZAgentDeltaState), Get_Z_Construct_UScriptStruct_FSBZAgentDeltaState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentDeltaState>()
{
	return FSBZAgentDeltaState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentDeltaState(FSBZAgentDeltaState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentDeltaState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDeltaState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDeltaState()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentDeltaState>(FName(TEXT("SBZAgentDeltaState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentDeltaState;
	struct Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFrameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceFrameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentDeltaState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentDeltaState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_StreamIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDeltaState" },
		{ "ModuleRelativePath", "Public/SBZAgentDeltaState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_StreamIndex = { "StreamIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDeltaState, StreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_StreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_StreamIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_SourceFrameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentDeltaState" },
		{ "ModuleRelativePath", "Public/SBZAgentDeltaState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_SourceFrameId = { "SourceFrameId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentDeltaState, SourceFrameId), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_SourceFrameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_SourceFrameId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_StreamIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::NewProp_SourceFrameId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZAgentStateBase,
		&NewStructOps,
		"SBZAgentDeltaState",
		sizeof(FSBZAgentDeltaState),
		alignof(FSBZAgentDeltaState),
		Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentDeltaState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDeltaState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentDeltaState"), sizeof(FSBZAgentDeltaState), Get_Z_Construct_UScriptStruct_FSBZAgentDeltaState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentDeltaState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentDeltaState_Hash() { return 2326139357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
