// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRepMoveQueue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRepMoveQueue() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRepMoveQueue();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentState();
// End Cross Module References
class UScriptStruct* FSBZRepMoveQueue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRepMoveQueue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRepMoveQueue, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRepMoveQueue"), sizeof(FSBZRepMoveQueue), Get_Z_Construct_UScriptStruct_FSBZRepMoveQueue_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRepMoveQueue>()
{
	return FSBZRepMoveQueue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRepMoveQueue(FSBZRepMoveQueue::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRepMoveQueue"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRepMoveQueue
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRepMoveQueue()
	{
		UScriptStruct::DeferCppStructOps<FSBZRepMoveQueue>(FName(TEXT("SBZRepMoveQueue")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRepMoveQueue;
	struct Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepMoves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RepMoves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRepMoveQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRepMoveQueue>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves_Inner = { "RepMoves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgentState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRepMoveQueue" },
		{ "ModuleRelativePath", "Public/SBZRepMoveQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves = { "RepMoves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRepMoveQueue, RepMoves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::NewProp_RepMoves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRepMoveQueue",
		sizeof(FSBZRepMoveQueue),
		alignof(FSBZRepMoveQueue),
		Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRepMoveQueue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRepMoveQueue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRepMoveQueue"), sizeof(FSBZRepMoveQueue), Get_Z_Construct_UScriptStruct_FSBZRepMoveQueue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRepMoveQueue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRepMoveQueue_Hash() { return 2640025588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
