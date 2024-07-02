// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicatedReloadState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicatedReloadState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicatedReloadState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedReloadState();
// End Cross Module References
class UScriptStruct* FSBZReplicatedReloadState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReplicatedReloadState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReplicatedReloadState"), sizeof(FSBZReplicatedReloadState), Get_Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReplicatedReloadState>()
{
	return FSBZReplicatedReloadState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReplicatedReloadState(FSBZReplicatedReloadState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReplicatedReloadState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicatedReloadState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicatedReloadState()
	{
		UScriptStruct::DeferCppStructOps<FSBZReplicatedReloadState>(FName(TEXT("SBZReplicatedReloadState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplicatedReloadState;
	struct Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingEmptyCycleNeeded_MetaData[];
#endif
		static void NewProp_bIsPlayingEmptyCycleNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingEmptyCycleNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicatedReloadState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReplicatedReloadState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_Array_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedReloadState" },
		{ "ModuleRelativePath", "Public/SBZReplicatedReloadState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Array, FSBZReplicatedReloadState), STRUCT_OFFSET(FSBZReplicatedReloadState, Array), Z_Construct_UScriptStruct_FSBZCombinedReloadState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedReloadState" },
		{ "ModuleRelativePath", "Public/SBZReplicatedReloadState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FSBZReplicatedReloadState*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReplicatedReloadState), &Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedReloadState" },
		{ "ModuleRelativePath", "Public/SBZReplicatedReloadState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded_SetBit(void* Obj)
	{
		((FSBZReplicatedReloadState*)Obj)->bIsPlayingEmptyCycleNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded = { "bIsPlayingEmptyCycleNeeded", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReplicatedReloadState), &Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::NewProp_bIsPlayingEmptyCycleNeeded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReplicatedReloadState",
		sizeof(FSBZReplicatedReloadState),
		alignof(FSBZReplicatedReloadState),
		Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicatedReloadState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReplicatedReloadState"), sizeof(FSBZReplicatedReloadState), Get_Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReplicatedReloadState_Hash() { return 4038785110U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
