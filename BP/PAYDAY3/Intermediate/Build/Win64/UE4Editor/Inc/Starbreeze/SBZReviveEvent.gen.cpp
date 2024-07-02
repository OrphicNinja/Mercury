// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReviveEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReviveEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReviveEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZReviveEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZReviveEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZReviveEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReviveEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReviveEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReviveEvent"), sizeof(FSBZReviveEvent), Get_Z_Construct_UScriptStruct_FSBZReviveEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReviveEvent>()
{
	return FSBZReviveEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReviveEvent(FSBZReviveEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReviveEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReviveEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReviveEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZReviveEvent>(FName(TEXT("SBZReviveEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReviveEvent;
	struct Z_Construct_UScriptStruct_FSBZReviveEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reviver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reviver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterBeingRevived_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterBeingRevived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReviveEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReviveEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_Reviver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReviveEvent" },
		{ "ModuleRelativePath", "Public/SBZReviveEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_Reviver = { "Reviver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReviveEvent, Reviver), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_Reviver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_Reviver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_CharacterBeingRevived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReviveEvent" },
		{ "ModuleRelativePath", "Public/SBZReviveEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_CharacterBeingRevived = { "CharacterBeingRevived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReviveEvent, CharacterBeingRevived), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_CharacterBeingRevived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_CharacterBeingRevived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_Reviver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::NewProp_CharacterBeingRevived,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZReviveEvent",
		sizeof(FSBZReviveEvent),
		alignof(FSBZReviveEvent),
		Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReviveEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReviveEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReviveEvent"), sizeof(FSBZReviveEvent), Get_Z_Construct_UScriptStruct_FSBZReviveEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReviveEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReviveEvent_Hash() { return 3387634231U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
