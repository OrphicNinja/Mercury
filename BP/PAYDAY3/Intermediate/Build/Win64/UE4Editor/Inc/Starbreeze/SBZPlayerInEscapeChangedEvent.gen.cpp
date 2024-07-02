// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerInEscapeChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerInEscapeChangedEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerInEscapeChangedEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZPlayerInEscapeChangedEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZPlayerInEscapeChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerInEscapeChangedEvent"), sizeof(FSBZPlayerInEscapeChangedEvent), Get_Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerInEscapeChangedEvent>()
{
	return FSBZPlayerInEscapeChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerInEscapeChangedEvent(FSBZPlayerInEscapeChangedEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerInEscapeChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerInEscapeChangedEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerInEscapeChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerInEscapeChangedEvent>(FName(TEXT("SBZPlayerInEscapeChangedEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerInEscapeChangedEvent;
	struct Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inside_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Inside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerInEscapeChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerInEscapeChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Inside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInEscapeChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInEscapeChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Inside = { "Inside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerInEscapeChangedEvent, Inside), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Inside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Inside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInEscapeChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInEscapeChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerInEscapeChangedEvent, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Total_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Inside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::NewProp_Total,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZPlayerInEscapeChangedEvent",
		sizeof(FSBZPlayerInEscapeChangedEvent),
		alignof(FSBZPlayerInEscapeChangedEvent),
		Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerInEscapeChangedEvent"), sizeof(FSBZPlayerInEscapeChangedEvent), Get_Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent_Hash() { return 28468938U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
