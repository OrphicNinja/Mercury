// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZQueuedJoinLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZQueuedJoinLobby() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZQueuedJoinLobby();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZQueuedJoinLobby::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZQueuedJoinLobby"), sizeof(FSBZQueuedJoinLobby), Get_Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZQueuedJoinLobby>()
{
	return FSBZQueuedJoinLobby::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZQueuedJoinLobby(FSBZQueuedJoinLobby::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZQueuedJoinLobby"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZQueuedJoinLobby
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZQueuedJoinLobby()
	{
		UScriptStruct::DeferCppStructOps<FSBZQueuedJoinLobby>(FName(TEXT("SBZQueuedJoinLobby")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZQueuedJoinLobby;
	struct Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchmakingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasQueuedJoinLobby_MetaData[];
#endif
		static void NewProp_bHasQueuedJoinLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasQueuedJoinLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZQueuedJoinLobby.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZQueuedJoinLobby>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_MatchmakingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZQueuedJoinLobby" },
		{ "ModuleRelativePath", "Public/SBZQueuedJoinLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_MatchmakingData = { "MatchmakingData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZQueuedJoinLobby, MatchmakingData), Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_MatchmakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_MatchmakingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZQueuedJoinLobby" },
		{ "ModuleRelativePath", "Public/SBZQueuedJoinLobby.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby_SetBit(void* Obj)
	{
		((FSBZQueuedJoinLobby*)Obj)->bHasQueuedJoinLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby = { "bHasQueuedJoinLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZQueuedJoinLobby), &Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_MatchmakingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::NewProp_bHasQueuedJoinLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZQueuedJoinLobby",
		sizeof(FSBZQueuedJoinLobby),
		alignof(FSBZQueuedJoinLobby),
		Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZQueuedJoinLobby()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZQueuedJoinLobby"), sizeof(FSBZQueuedJoinLobby), Get_Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZQueuedJoinLobby_Hash() { return 2565650565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
