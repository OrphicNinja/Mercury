// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIDefaultSoundEvents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIDefaultSoundEvents() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZUIDefaultSoundEvents::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUIDefaultSoundEvents"), sizeof(FSBZUIDefaultSoundEvents), Get_Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUIDefaultSoundEvents>()
{
	return FSBZUIDefaultSoundEvents::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUIDefaultSoundEvents(FSBZUIDefaultSoundEvents::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUIDefaultSoundEvents"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIDefaultSoundEvents
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIDefaultSoundEvents()
	{
		UScriptStruct::DeferCppStructOps<FSBZUIDefaultSoundEvents>(FName(TEXT("SBZUIDefaultSoundEvents")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIDefaultSoundEvents;
	struct Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonFocusedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonFocusedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUIDefaultSoundEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUIDefaultSoundEvents>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::NewProp_ButtonFocusedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIDefaultSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZUIDefaultSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::NewProp_ButtonFocusedEvent = { "ButtonFocusedEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIDefaultSoundEvents, ButtonFocusedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::NewProp_ButtonFocusedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::NewProp_ButtonFocusedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::NewProp_ButtonFocusedEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUIDefaultSoundEvents",
		sizeof(FSBZUIDefaultSoundEvents),
		alignof(FSBZUIDefaultSoundEvents),
		Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUIDefaultSoundEvents"), sizeof(FSBZUIDefaultSoundEvents), Get_Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents_Hash() { return 476912943U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
