// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCallEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCallEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCallEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingCallAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerCallEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZPlayerCallEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZPlayerCallEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerCallEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerCallEvent"), sizeof(FSBZPlayerCallEvent), Get_Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerCallEvent>()
{
	return FSBZPlayerCallEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerCallEvent(FSBZPlayerCallEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerCallEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCallEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCallEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerCallEvent>(FName(TEXT("SBZPlayerCallEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCallEvent;
	struct Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Call_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Call;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCallEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerCallEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCallEvent" },
		{ "ModuleRelativePath", "Public/SBZPlayerCallEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCallEvent, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_Call_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCallEvent" },
		{ "ModuleRelativePath", "Public/SBZPlayerCallEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_Call = { "Call", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCallEvent, Call), Z_Construct_UClass_USBZPingCallAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_Call_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_Call_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::NewProp_Call,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZPlayerCallEvent",
		sizeof(FSBZPlayerCallEvent),
		alignof(FSBZPlayerCallEvent),
		Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCallEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerCallEvent"), sizeof(FSBZPlayerCallEvent), Get_Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCallEvent_Hash() { return 3445690200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
