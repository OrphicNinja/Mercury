// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlockedPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlockedPlayer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBlockedPlayer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZBlockedPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBlockedPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBlockedPlayer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBlockedPlayer"), sizeof(FSBZBlockedPlayer), Get_Z_Construct_UScriptStruct_FSBZBlockedPlayer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBlockedPlayer>()
{
	return FSBZBlockedPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBlockedPlayer(FSBZBlockedPlayer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBlockedPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlockedPlayer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlockedPlayer()
	{
		UScriptStruct::DeferCppStructOps<FSBZBlockedPlayer>(FName(TEXT("SBZBlockedPlayer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlockedPlayer;
	struct Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelbyteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelbyteUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBlockedPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::NewProp_AccelbyteUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlockedPlayer" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::NewProp_AccelbyteUserId = { "AccelbyteUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBlockedPlayer, AccelbyteUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::NewProp_AccelbyteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::NewProp_AccelbyteUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::NewProp_AccelbyteUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBlockedPlayer",
		sizeof(FSBZBlockedPlayer),
		alignof(FSBZBlockedPlayer),
		Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBlockedPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBlockedPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBlockedPlayer"), sizeof(FSBZBlockedPlayer), Get_Z_Construct_UScriptStruct_FSBZBlockedPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBlockedPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBlockedPlayer_Hash() { return 446713987U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
