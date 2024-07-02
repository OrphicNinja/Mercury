// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKeyItemCountChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKeyItemCountChangedEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKeyItemData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZKeyItemCountChangedEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZKeyItemCountChangedEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZKeyItemCountChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZKeyItemCountChangedEvent"), sizeof(FSBZKeyItemCountChangedEvent), Get_Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZKeyItemCountChangedEvent>()
{
	return FSBZKeyItemCountChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZKeyItemCountChangedEvent(FSBZKeyItemCountChangedEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZKeyItemCountChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKeyItemCountChangedEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKeyItemCountChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZKeyItemCountChangedEvent>(FName(TEXT("SBZKeyItemCountChangedEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZKeyItemCountChangedEvent;
	struct Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZKeyItemCountChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZKeyItemCountChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemCountChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZKeyItemCountChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKeyItemCountChangedEvent, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyTagName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemCountChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZKeyItemCountChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyTagName = { "KeyTagName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKeyItemCountChangedEvent, KeyTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemCountChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZKeyItemCountChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyItem = { "KeyItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKeyItemCountChangedEvent, KeyItem), Z_Construct_UClass_USBZKeyItemData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_OldValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemCountChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZKeyItemCountChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKeyItemCountChangedEvent, OldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_OldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_NewValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemCountChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZKeyItemCountChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKeyItemCountChangedEvent, NewValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_KeyItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::NewProp_NewValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZKeyItemCountChangedEvent",
		sizeof(FSBZKeyItemCountChangedEvent),
		alignof(FSBZKeyItemCountChangedEvent),
		Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZKeyItemCountChangedEvent"), sizeof(FSBZKeyItemCountChangedEvent), Get_Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent_Hash() { return 3939269415U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
