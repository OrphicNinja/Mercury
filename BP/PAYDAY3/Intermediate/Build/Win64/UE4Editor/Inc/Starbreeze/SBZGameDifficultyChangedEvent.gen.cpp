// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameDifficultyChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameDifficultyChangedEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZGameDifficultyChangedEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZGameDifficultyChangedEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZGameDifficultyChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameDifficultyChangedEvent"), sizeof(FSBZGameDifficultyChangedEvent), Get_Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameDifficultyChangedEvent>()
{
	return FSBZGameDifficultyChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameDifficultyChangedEvent(FSBZGameDifficultyChangedEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameDifficultyChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameDifficultyChangedEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameDifficultyChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameDifficultyChangedEvent>(FName(TEXT("SBZGameDifficultyChangedEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameDifficultyChangedEvent;
	struct Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifficultyIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameDifficultyChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameDifficultyChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::NewProp_DifficultyIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameDifficultyChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZGameDifficultyChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameDifficultyChangedEvent, DifficultyIdx), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::NewProp_DifficultyIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::NewProp_DifficultyIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::NewProp_DifficultyIdx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZGameDifficultyChangedEvent",
		sizeof(FSBZGameDifficultyChangedEvent),
		alignof(FSBZGameDifficultyChangedEvent),
		Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameDifficultyChangedEvent"), sizeof(FSBZGameDifficultyChangedEvent), Get_Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameDifficultyChangedEvent_Hash() { return 1061680488U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
