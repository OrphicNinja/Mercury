// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIStackChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIStackChangedEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZUIStackChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUIStackChangedEvent"), sizeof(FSBZUIStackChangedEvent), Get_Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUIStackChangedEvent>()
{
	return FSBZUIStackChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUIStackChangedEvent(FSBZUIStackChangedEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUIStackChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIStackChangedEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIStackChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZUIStackChangedEvent>(FName(TEXT("SBZUIStackChangedEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIStackChangedEvent;
	struct Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasAddedEvent_MetaData[];
#endif
		static void NewProp_bWasAddedEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasAddedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUIStackChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUIStackChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_NewValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIStackChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZUIStackChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIStackChangedEvent, NewValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_OldValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIStackChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZUIStackChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIStackChangedEvent, OldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_OldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIStackChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZUIStackChangedEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent_SetBit(void* Obj)
	{
		((FSBZUIStackChangedEvent*)Obj)->bWasAddedEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent = { "bWasAddedEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZUIStackChangedEvent), &Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::NewProp_bWasAddedEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUIStackChangedEvent",
		sizeof(FSBZUIStackChangedEvent),
		alignof(FSBZUIStackChangedEvent),
		Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUIStackChangedEvent"), sizeof(FSBZUIStackChangedEvent), Get_Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUIStackChangedEvent_Hash() { return 846453991U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
