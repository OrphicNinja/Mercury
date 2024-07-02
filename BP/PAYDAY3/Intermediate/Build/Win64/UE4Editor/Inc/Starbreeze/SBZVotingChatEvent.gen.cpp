// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVotingChatEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVotingChatEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingChatEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZVotingChatEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZVotingChatEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZVotingChatEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVotingChatEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVotingChatEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVotingChatEvent"), sizeof(FSBZVotingChatEvent), Get_Z_Construct_UScriptStruct_FSBZVotingChatEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVotingChatEvent>()
{
	return FSBZVotingChatEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVotingChatEvent(FSBZVotingChatEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVotingChatEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingChatEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingChatEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZVotingChatEvent>(FName(TEXT("SBZVotingChatEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingChatEvent;
	struct Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVotingChatEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVotingChatEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVotingChatEvent" },
		{ "ModuleRelativePath", "Public/SBZVotingChatEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVotingChatEvent, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZVotingChatEvent",
		sizeof(FSBZVotingChatEvent),
		alignof(FSBZVotingChatEvent),
		Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingChatEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVotingChatEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVotingChatEvent"), sizeof(FSBZVotingChatEvent), Get_Z_Construct_UScriptStruct_FSBZVotingChatEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVotingChatEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVotingChatEvent_Hash() { return 3611844841U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
