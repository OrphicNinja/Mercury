// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficSoundHorn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficSoundHorn() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSoundHorn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZTrafficSoundHorn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficSoundHorn"), sizeof(FSBZTrafficSoundHorn), Get_Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficSoundHorn>()
{
	return FSBZTrafficSoundHorn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficSoundHorn(FSBZTrafficSoundHorn::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficSoundHorn"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSoundHorn
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSoundHorn()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficSoundHorn>(FName(TEXT("SBZTrafficSoundHorn")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficSoundHorn;
	struct Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightBaseTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrafficLightBaseTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightQueueAddition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrafficLightQueueAddition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightQueueStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrafficLightQueueStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrafficLightChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWaitTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopWaitTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWaitChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopWaitChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficSoundHorn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightBaseTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSoundHorn" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightBaseTimer = { "TrafficLightBaseTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSoundHorn, TrafficLightBaseTimer), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightBaseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightBaseTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueAddition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSoundHorn" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueAddition = { "TrafficLightQueueAddition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSoundHorn, TrafficLightQueueAddition), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueAddition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueAddition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSoundHorn" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueStart = { "TrafficLightQueueStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSoundHorn, TrafficLightQueueStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSoundHorn" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightChance = { "TrafficLightChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSoundHorn, TrafficLightChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSoundHorn" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitTimer = { "StopWaitTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSoundHorn, StopWaitTimer), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficSoundHorn" },
		{ "ModuleRelativePath", "Public/SBZTrafficSoundHorn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitChance = { "StopWaitChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficSoundHorn, StopWaitChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightBaseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueAddition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightQueueStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_TrafficLightChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::NewProp_StopWaitChance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficSoundHorn",
		sizeof(FSBZTrafficSoundHorn),
		alignof(FSBZTrafficSoundHorn),
		Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSoundHorn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficSoundHorn"), sizeof(FSBZTrafficSoundHorn), Get_Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficSoundHorn_Hash() { return 1984575129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
