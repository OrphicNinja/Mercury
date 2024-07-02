// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITeamStimulusEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITeamStimulusEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAITeamStimulusEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAITeamStimulusEvent"), sizeof(FSBZAITeamStimulusEvent), Get_Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAITeamStimulusEvent>()
{
	return FSBZAITeamStimulusEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAITeamStimulusEvent(FSBZAITeamStimulusEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAITeamStimulusEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAITeamStimulusEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAITeamStimulusEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZAITeamStimulusEvent>(FName(TEXT("SBZAITeamStimulusEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAITeamStimulusEvent;
	struct Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Broadcaster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Broadcaster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAITeamStimulusEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAITeamStimulusEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITeamStimulusEvent" },
		{ "ModuleRelativePath", "Public/SBZAITeamStimulusEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAITeamStimulusEvent, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITeamStimulusEvent" },
		{ "ModuleRelativePath", "Public/SBZAITeamStimulusEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAITeamStimulusEvent, Broadcaster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::NewProp_Broadcaster,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAITeamStimulusEvent",
		sizeof(FSBZAITeamStimulusEvent),
		alignof(FSBZAITeamStimulusEvent),
		Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAITeamStimulusEvent"), sizeof(FSBZAITeamStimulusEvent), Get_Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent_Hash() { return 1350643787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
