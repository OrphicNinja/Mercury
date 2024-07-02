// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyMessageAB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyMessageAB() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMessageAB();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPartyMessageAB::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMessageAB_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPartyMessageAB, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPartyMessageAB"), sizeof(FSBZPartyMessageAB), Get_Z_Construct_UScriptStruct_FSBZPartyMessageAB_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPartyMessageAB>()
{
	return FSBZPartyMessageAB::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPartyMessageAB(FSBZPartyMessageAB::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPartyMessageAB"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMessageAB
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMessageAB()
	{
		UScriptStruct::DeferCppStructOps<FSBZPartyMessageAB>(FName(TEXT("SBZPartyMessageAB")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMessageAB;
	struct Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Topic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyMessageAB.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPartyMessageAB>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Topic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMessageAB" },
		{ "ModuleRelativePath", "Public/SBZPartyMessageAB.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMessageAB, Topic), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Topic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Topic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMessageAB" },
		{ "ModuleRelativePath", "Public/SBZPartyMessageAB.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMessageAB, Payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::NewProp_Payload,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPartyMessageAB",
		sizeof(FSBZPartyMessageAB),
		alignof(FSBZPartyMessageAB),
		Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMessageAB()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMessageAB_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPartyMessageAB"), sizeof(FSBZPartyMessageAB), Get_Z_Construct_UScriptStruct_FSBZPartyMessageAB_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPartyMessageAB_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMessageAB_Hash() { return 1221215302U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
