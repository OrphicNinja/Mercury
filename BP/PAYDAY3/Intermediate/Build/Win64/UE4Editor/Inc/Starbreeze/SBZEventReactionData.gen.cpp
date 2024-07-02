// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEventReactionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEventReactionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventReactionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZEventReactionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEventReactionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEventReactionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEventReactionData"), sizeof(FSBZEventReactionData), Get_Z_Construct_UScriptStruct_FSBZEventReactionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEventReactionData>()
{
	return FSBZEventReactionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEventReactionData(FSBZEventReactionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEventReactionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventReactionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventReactionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEventReactionData>(FName(TEXT("SBZEventReactionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventReactionData;
	struct Z_Construct_UScriptStruct_FSBZEventReactionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EventCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPlayedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastPlayedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEventReactionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEventReactionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventToPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventReactionData" },
		{ "ModuleRelativePath", "Public/SBZEventReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventToPlay = { "EventToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventReactionData, EventToPlay), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventReactionData" },
		{ "ModuleRelativePath", "Public/SBZEventReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventCooldown = { "EventCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventReactionData, EventCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_LastPlayedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventReactionData" },
		{ "ModuleRelativePath", "Public/SBZEventReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_LastPlayedTime = { "LastPlayedTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventReactionData, LastPlayedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_LastPlayedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_LastPlayedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_EventCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::NewProp_LastPlayedTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEventReactionData",
		sizeof(FSBZEventReactionData),
		alignof(FSBZEventReactionData),
		Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEventReactionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEventReactionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEventReactionData"), sizeof(FSBZEventReactionData), Get_Z_Construct_UScriptStruct_FSBZEventReactionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEventReactionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEventReactionData_Hash() { return 3307118951U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
