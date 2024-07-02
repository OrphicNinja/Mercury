// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewChatEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewChatEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewChatEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAICrewChatEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZAICrewChatEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZAICrewChatEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAICrewChatEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAICrewChatEvent"), sizeof(FSBZAICrewChatEvent), Get_Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAICrewChatEvent>()
{
	return FSBZAICrewChatEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAICrewChatEvent(FSBZAICrewChatEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAICrewChatEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAICrewChatEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAICrewChatEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZAICrewChatEvent>(FName(TEXT("SBZAICrewChatEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAICrewChatEvent;
	struct Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrewState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewChatEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAICrewChatEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_CrewState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewChatEvent" },
		{ "ModuleRelativePath", "Public/SBZAICrewChatEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_CrewState = { "CrewState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAICrewChatEvent, CrewState), Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_CrewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_CrewState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewChatEvent" },
		{ "ModuleRelativePath", "Public/SBZAICrewChatEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAICrewChatEvent, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_CrewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZAICrewChatEvent",
		sizeof(FSBZAICrewChatEvent),
		alignof(FSBZAICrewChatEvent),
		Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAICrewChatEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAICrewChatEvent"), sizeof(FSBZAICrewChatEvent), Get_Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAICrewChatEvent_Hash() { return 4018570165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
