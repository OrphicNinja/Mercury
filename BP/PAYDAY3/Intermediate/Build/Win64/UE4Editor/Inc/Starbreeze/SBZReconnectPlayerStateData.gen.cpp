// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReconnectPlayerStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReconnectPlayerStateData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
// End Cross Module References
class UScriptStruct* FSBZReconnectPlayerStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReconnectPlayerStateData"), sizeof(FSBZReconnectPlayerStateData), Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReconnectPlayerStateData>()
{
	return FSBZReconnectPlayerStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReconnectPlayerStateData(FSBZReconnectPlayerStateData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReconnectPlayerStateData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReconnectPlayerStateData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReconnectPlayerStateData()
	{
		UScriptStruct::DeferCppStructOps<FSBZReconnectPlayerStateData>(FName(TEXT("SBZReconnectPlayerStateData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReconnectPlayerStateData;
	struct Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedNetworkAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedNetworkAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CiviliansKilledBeforeCustody_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CiviliansKilledBeforeCustody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerSentryKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerSentryKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillTankDisengageActivatedTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcerSkillKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnforcerSkillKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcerSkillLastKillTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnforcerSkillLastKillTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcerAcedSkillKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnforcerAcedSkillKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaskOn_MetaData[];
#endif
		static void NewProp_bIsMaskOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaskOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateDurationModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectateDurationModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReducedCustodyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReducedCustodyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustodyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustodyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustodyReleaseCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustodyReleaseCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTradeReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTradeReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerIsHardBargainCustody_MetaData[];
#endif
		static void NewProp_bServerIsHardBargainCustody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerIsHardBargainCustody;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefeatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLastArrestedByGuard_MetaData[];
#endif
		static void NewProp_bIsLastArrestedByGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLastArrestedByGuard;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffTimeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuffTimeArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuffBlockCountArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffBlockCountArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuffBlockCountArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffBlockCooldownTimeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffBlockCooldownTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuffBlockCooldownTimeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkillTankLastManStandingBlocking_MetaData[];
#endif
		static void NewProp_bIsSkillTankLastManStandingBlocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkillTankLastManStandingBlocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTankLastManStandingImmuneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillTankLastManStandingImmuneTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReconnectPlayerStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_UniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SavedNetworkAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SavedNetworkAddress = { "SavedNetworkAddress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, SavedNetworkAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SavedNetworkAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SavedNetworkAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Loadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, Loadout), Z_Construct_UScriptStruct_FSBZReconnectPlayerStateLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Loadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Loadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ResultData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, ResultData), Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ResultData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CiviliansKilledBeforeCustody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CiviliansKilledBeforeCustody = { "CiviliansKilledBeforeCustody", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, CiviliansKilledBeforeCustody), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CiviliansKilledBeforeCustody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CiviliansKilledBeforeCustody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ServerSentryKillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ServerSentryKillCount = { "ServerSentryKillCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, ServerSentryKillCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ServerSentryKillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ServerSentryKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds = { "SkillTankDisengageActivatedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, SkillTankDisengageActivatedTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillKillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillKillCount = { "EnforcerSkillKillCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, EnforcerSkillKillCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillKillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillLastKillTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillLastKillTime = { "EnforcerSkillLastKillTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, EnforcerSkillLastKillTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillLastKillTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillLastKillTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerAcedSkillKillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerAcedSkillKillCount = { "EnforcerAcedSkillKillCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, EnforcerAcedSkillKillCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerAcedSkillKillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerAcedSkillKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_OverkillWeaponProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_OverkillWeaponProgress = { "OverkillWeaponProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, OverkillWeaponProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_OverkillWeaponProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_OverkillWeaponProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn_SetBit(void* Obj)
	{
		((FSBZReconnectPlayerStateData*)Obj)->bIsMaskOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn = { "bIsMaskOn", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReconnectPlayerStateData), &Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateDurationModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateDurationModification = { "SpectateDurationModification", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, SpectateDurationModification), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateDurationModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateDurationModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ReducedCustodyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ReducedCustodyTime = { "ReducedCustodyTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, ReducedCustodyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ReducedCustodyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ReducedCustodyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateTime = { "SpectateTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, SpectateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyCount = { "CustodyCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, CustodyCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyReleaseCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyReleaseCost = { "CustodyReleaseCost", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, CustodyReleaseCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyReleaseCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyReleaseCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CurrentTradeReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CurrentTradeReduction = { "CurrentTradeReduction", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, CurrentTradeReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CurrentTradeReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CurrentTradeReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody_SetBit(void* Obj)
	{
		((FSBZReconnectPlayerStateData*)Obj)->bServerIsHardBargainCustody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody = { "bServerIsHardBargainCustody", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReconnectPlayerStateData), &Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState = { "DefeatState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, DefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard_SetBit(void* Obj)
	{
		((FSBZReconnectPlayerStateData*)Obj)->bIsLastArrestedByGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard = { "bIsLastArrestedByGuard", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReconnectPlayerStateData), &Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray_Inner = { "BuffTimeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray = { "BuffTimeArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, BuffTimeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray_Inner = { "BuffBlockCountArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray = { "BuffBlockCountArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, BuffBlockCountArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray_Inner = { "BuffBlockCooldownTimeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray = { "BuffBlockCooldownTimeArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, BuffBlockCooldownTimeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking_SetBit(void* Obj)
	{
		((FSBZReconnectPlayerStateData*)Obj)->bIsSkillTankLastManStandingBlocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking = { "bIsSkillTankLastManStandingBlocking", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReconnectPlayerStateData), &Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankLastManStandingImmuneTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReconnectPlayerStateData" },
		{ "ModuleRelativePath", "Public/SBZReconnectPlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankLastManStandingImmuneTime = { "SkillTankLastManStandingImmuneTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReconnectPlayerStateData, SkillTankLastManStandingImmuneTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankLastManStandingImmuneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankLastManStandingImmuneTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_UniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SavedNetworkAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_Loadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CiviliansKilledBeforeCustody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ServerSentryKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerSkillLastKillTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_EnforcerAcedSkillKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_OverkillWeaponProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsMaskOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateDurationModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_ReducedCustodyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SpectateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CustodyReleaseCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_CurrentTradeReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bServerIsHardBargainCustody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_DefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsLastArrestedByGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCountArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_BuffBlockCooldownTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_bIsSkillTankLastManStandingBlocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::NewProp_SkillTankLastManStandingImmuneTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReconnectPlayerStateData",
		sizeof(FSBZReconnectPlayerStateData),
		alignof(FSBZReconnectPlayerStateData),
		Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReconnectPlayerStateData"), sizeof(FSBZReconnectPlayerStateData), Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData_Hash() { return 3685704587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
