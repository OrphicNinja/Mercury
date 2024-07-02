// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITouchEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITouchEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAITouchEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAITouchEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAITouchEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAITouchEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAITouchEvent"), sizeof(FSBZAITouchEvent), Get_Z_Construct_UScriptStruct_FSBZAITouchEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAITouchEvent>()
{
	return FSBZAITouchEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAITouchEvent(FSBZAITouchEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAITouchEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAITouchEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAITouchEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZAITouchEvent>(FName(TEXT("SBZAITouchEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAITouchEvent;
	struct Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchReceiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAITouchEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAITouchEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_TouchReceiver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITouchEvent" },
		{ "ModuleRelativePath", "Public/SBZAITouchEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_TouchReceiver = { "TouchReceiver", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAITouchEvent, TouchReceiver), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_TouchReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_TouchReceiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_OtherActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITouchEvent" },
		{ "ModuleRelativePath", "Public/SBZAITouchEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAITouchEvent, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_TouchReceiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::NewProp_OtherActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAITouchEvent",
		sizeof(FSBZAITouchEvent),
		alignof(FSBZAITouchEvent),
		Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAITouchEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAITouchEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAITouchEvent"), sizeof(FSBZAITouchEvent), Get_Z_Construct_UScriptStruct_FSBZAITouchEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAITouchEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAITouchEvent_Hash() { return 2962609381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
