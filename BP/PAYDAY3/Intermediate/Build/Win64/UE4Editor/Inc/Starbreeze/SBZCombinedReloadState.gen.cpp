// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCombinedReloadState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCombinedReloadState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedReloadState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReloadState();
// End Cross Module References
class UScriptStruct* FSBZCombinedReloadState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCombinedReloadState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCombinedReloadState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCombinedReloadState"), sizeof(FSBZCombinedReloadState), Get_Z_Construct_UScriptStruct_FSBZCombinedReloadState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCombinedReloadState>()
{
	return FSBZCombinedReloadState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCombinedReloadState(FSBZCombinedReloadState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCombinedReloadState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCombinedReloadState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCombinedReloadState()
	{
		UScriptStruct::DeferCppStructOps<FSBZCombinedReloadState>(FName(TEXT("SBZCombinedReloadState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCombinedReloadState;
	struct Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEmptyCycleNeeded_MetaData[];
#endif
		static void NewProp_bIsEmptyCycleNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEmptyCycleNeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCycleNeeded_MetaData[];
#endif
		static void NewProp_bIsCycleNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCycleNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCombinedReloadState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCombinedReloadState>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombinedReloadState" },
		{ "ModuleRelativePath", "Public/SBZCombinedReloadState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCombinedReloadState, State), Z_Construct_UEnum_Starbreeze_ESBZReloadState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombinedReloadState" },
		{ "ModuleRelativePath", "Public/SBZCombinedReloadState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded_SetBit(void* Obj)
	{
		((FSBZCombinedReloadState*)Obj)->bIsEmptyCycleNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded = { "bIsEmptyCycleNeeded", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCombinedReloadState), &Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombinedReloadState" },
		{ "ModuleRelativePath", "Public/SBZCombinedReloadState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded_SetBit(void* Obj)
	{
		((FSBZCombinedReloadState*)Obj)->bIsCycleNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded = { "bIsCycleNeeded", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCombinedReloadState), &Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsEmptyCycleNeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::NewProp_bIsCycleNeeded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCombinedReloadState",
		sizeof(FSBZCombinedReloadState),
		alignof(FSBZCombinedReloadState),
		Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedReloadState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCombinedReloadState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCombinedReloadState"), sizeof(FSBZCombinedReloadState), Get_Z_Construct_UScriptStruct_FSBZCombinedReloadState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCombinedReloadState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCombinedReloadState_Hash() { return 1062549958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
