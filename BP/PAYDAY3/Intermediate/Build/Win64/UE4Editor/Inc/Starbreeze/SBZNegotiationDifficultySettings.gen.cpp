// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNegotiationDifficultySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNegotiationDifficultySettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZNegotiationDifficultySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZNegotiationDifficultySettings"), sizeof(FSBZNegotiationDifficultySettings), Get_Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZNegotiationDifficultySettings>()
{
	return FSBZNegotiationDifficultySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZNegotiationDifficultySettings(FSBZNegotiationDifficultySettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZNegotiationDifficultySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNegotiationDifficultySettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNegotiationDifficultySettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZNegotiationDifficultySettings>(FName(TEXT("SBZNegotiationDifficultySettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZNegotiationDifficultySettings;
	struct Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseNrHostagesRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_BaseNrHostagesRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NrHostagesToAddPerDemand_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NrHostagesToAddPerDemand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemandInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DemandInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTimeDemandThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingTimeDemandThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayAssaultSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayAssaultSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReducePlayerSpectateSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReducePlayerSpectateSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CivilianKilledExtraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CivilianKilledExtraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxExtraCustodyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxExtraCustodyTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZNegotiationDifficultySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseNrHostagesRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseNrHostagesRequired = { "BaseNrHostagesRequired", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, BaseNrHostagesRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseNrHostagesRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseNrHostagesRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_NrHostagesToAddPerDemand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_NrHostagesToAddPerDemand = { "NrHostagesToAddPerDemand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, NrHostagesToAddPerDemand), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_NrHostagesToAddPerDemand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_NrHostagesToAddPerDemand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseTime = { "BaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, BaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BonusTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BonusTime = { "BonusTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, BonusTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BonusTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BonusTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DemandInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DemandInterval = { "DemandInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, DemandInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DemandInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DemandInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_RemainingTimeDemandThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_RemainingTimeDemandThreshold = { "RemainingTimeDemandThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, RemainingTimeDemandThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_RemainingTimeDemandThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_RemainingTimeDemandThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DelayAssaultSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DelayAssaultSeconds = { "DelayAssaultSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, DelayAssaultSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DelayAssaultSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DelayAssaultSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_ReducePlayerSpectateSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_ReducePlayerSpectateSeconds = { "ReducePlayerSpectateSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, ReducePlayerSpectateSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_ReducePlayerSpectateSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_ReducePlayerSpectateSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_CivilianKilledExtraTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_CivilianKilledExtraTime = { "CivilianKilledExtraTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, CivilianKilledExtraTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_CivilianKilledExtraTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_CivilianKilledExtraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_MaxExtraCustodyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationDifficultySettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_MaxExtraCustodyTime = { "MaxExtraCustodyTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNegotiationDifficultySettings, MaxExtraCustodyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_MaxExtraCustodyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_MaxExtraCustodyTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseNrHostagesRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_NrHostagesToAddPerDemand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_BonusTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DemandInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_RemainingTimeDemandThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_DelayAssaultSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_ReducePlayerSpectateSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_CivilianKilledExtraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::NewProp_MaxExtraCustodyTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZNegotiationDifficultySettings",
		sizeof(FSBZNegotiationDifficultySettings),
		alignof(FSBZNegotiationDifficultySettings),
		Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZNegotiationDifficultySettings"), sizeof(FSBZNegotiationDifficultySettings), Get_Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings_Hash() { return 3353748548U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
