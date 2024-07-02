// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionActorTagEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionActorTagEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZLifeActionActorTagEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionActorTagEvent"), sizeof(FSBZLifeActionActorTagEvent), Get_Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionActorTagEvent>()
{
	return FSBZLifeActionActorTagEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionActorTagEvent(FSBZLifeActionActorTagEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionActorTagEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionActorTagEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionActorTagEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionActorTagEvent>(FName(TEXT("SBZLifeActionActorTagEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionActorTagEvent;
	struct Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandleEventStart_MetaData[];
#endif
		static void NewProp_bHandleEventStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandleEventStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandleEventEnd_MetaData[];
#endif
		static void NewProp_bHandleEventEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandleEventEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionActorTagEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionActorTagEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_EventTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionActorTagEvent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionActorTagEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionActorTagEvent, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_EventTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionActorTagEvent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionActorTagEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionActorTagEvent, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionActorTagEvent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionActorTagEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart_SetBit(void* Obj)
	{
		((FSBZLifeActionActorTagEvent*)Obj)->bHandleEventStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart = { "bHandleEventStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLifeActionActorTagEvent), &Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionActorTagEvent" },
		{ "ModuleRelativePath", "Public/SBZLifeActionActorTagEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd_SetBit(void* Obj)
	{
		((FSBZLifeActionActorTagEvent*)Obj)->bHandleEventEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd = { "bHandleEventEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLifeActionActorTagEvent), &Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::NewProp_bHandleEventEnd,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionActorTagEvent",
		sizeof(FSBZLifeActionActorTagEvent),
		alignof(FSBZLifeActionActorTagEvent),
		Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionActorTagEvent"), sizeof(FSBZLifeActionActorTagEvent), Get_Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent_Hash() { return 217476027U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
