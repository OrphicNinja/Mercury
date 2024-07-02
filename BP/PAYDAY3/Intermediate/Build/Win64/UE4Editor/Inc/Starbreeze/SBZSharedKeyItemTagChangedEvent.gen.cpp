// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSharedKeyItemTagChangedEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSharedKeyItemTagChangedEvent() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKeyItemData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSharedKeyItemTagChangedEvent>() == std::is_polymorphic<FSBZGameEventStructBase>(), "USTRUCT FSBZSharedKeyItemTagChangedEvent cannot be polymorphic unless super FSBZGameEventStructBase is polymorphic");

class UScriptStruct* FSBZSharedKeyItemTagChangedEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSharedKeyItemTagChangedEvent"), sizeof(FSBZSharedKeyItemTagChangedEvent), Get_Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSharedKeyItemTagChangedEvent>()
{
	return FSBZSharedKeyItemTagChangedEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent(FSBZSharedKeyItemTagChangedEvent::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSharedKeyItemTagChangedEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedKeyItemTagChangedEvent
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedKeyItemTagChangedEvent()
	{
		UScriptStruct::DeferCppStructOps<FSBZSharedKeyItemTagChangedEvent>(FName(TEXT("SBZSharedKeyItemTagChangedEvent")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedKeyItemTagChangedEvent;
	struct Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSharedKeyItemTagChangedEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSharedKeyItemTagChangedEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedKeyItemTagChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZSharedKeyItemTagChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedKeyItemTagChangedEvent, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedKeyItemTagChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZSharedKeyItemTagChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedKeyItemTagChangedEvent, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_KeyItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedKeyItemTagChangedEvent" },
		{ "ModuleRelativePath", "Public/SBZSharedKeyItemTagChangedEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_KeyItem = { "KeyItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedKeyItemTagChangedEvent, KeyItem), Z_Construct_UClass_USBZKeyItemData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_KeyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_KeyItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::NewProp_KeyItem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZGameEventStructBase,
		&NewStructOps,
		"SBZSharedKeyItemTagChangedEvent",
		sizeof(FSBZSharedKeyItemTagChangedEvent),
		alignof(FSBZSharedKeyItemTagChangedEvent),
		Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSharedKeyItemTagChangedEvent"), sizeof(FSBZSharedKeyItemTagChangedEvent), Get_Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent_Hash() { return 1602762021U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
