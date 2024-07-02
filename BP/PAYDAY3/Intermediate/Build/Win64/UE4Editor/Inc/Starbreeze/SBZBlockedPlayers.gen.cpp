// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlockedPlayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlockedPlayers() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBlockedPlayers();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBlockedPlayer();
// End Cross Module References
class UScriptStruct* FSBZBlockedPlayers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBlockedPlayers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBlockedPlayers, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBlockedPlayers"), sizeof(FSBZBlockedPlayers), Get_Z_Construct_UScriptStruct_FSBZBlockedPlayers_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBlockedPlayers>()
{
	return FSBZBlockedPlayers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBlockedPlayers(FSBZBlockedPlayers::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBlockedPlayers"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlockedPlayers
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlockedPlayers()
	{
		UScriptStruct::DeferCppStructOps<FSBZBlockedPlayers>(FName(TEXT("SBZBlockedPlayers")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBlockedPlayers;
	struct Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockedPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBlockedPlayers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlockedPlayers" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBlockedPlayers, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers_Inner = { "BlockedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBlockedPlayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlockedPlayers" },
		{ "ModuleRelativePath", "Public/SBZBlockedPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers = { "BlockedPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBlockedPlayers, BlockedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::NewProp_BlockedPlayers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBlockedPlayers",
		sizeof(FSBZBlockedPlayers),
		alignof(FSBZBlockedPlayers),
		Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBlockedPlayers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBlockedPlayers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBlockedPlayers"), sizeof(FSBZBlockedPlayers), Get_Z_Construct_UScriptStruct_FSBZBlockedPlayers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBlockedPlayers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBlockedPlayers_Hash() { return 1909425848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
