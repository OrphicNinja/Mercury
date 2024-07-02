// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStatisticCodeCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStatisticCodeCollection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStatisticCodeCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZStatisticCodeCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStatisticCodeCollection"), sizeof(FSBZStatisticCodeCollection), Get_Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStatisticCodeCollection>()
{
	return FSBZStatisticCodeCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStatisticCodeCollection(FSBZStatisticCodeCollection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStatisticCodeCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStatisticCodeCollection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStatisticCodeCollection()
	{
		UScriptStruct::DeferCppStructOps<FSBZStatisticCodeCollection>(FName(TEXT("SBZStatisticCodeCollection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStatisticCodeCollection;
	struct Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveCrewmate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReviveCrewmate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlideDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlideKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideHeadshotKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlideHeadshotKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JumpKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeadshotKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JumpHeadshotKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HumanShieldTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HumanShieldKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldHeadshotKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HumanShieldHeadshotKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DozerFaceplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DozerFaceplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyTaserBattery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestroyTaserBattery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyGrenadeBelt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestroyGrenadeBelt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakShieldVisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BreakShieldVisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakDisplayCase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BreakDisplayCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostagesTraded_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostagesTraded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorSprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DoorSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloakerSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CloakerSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaserSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaserSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CutObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockPicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockPicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DetectedKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevicesHacked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevicesHacked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEnemyKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecialEnemyKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyKillsOverkillWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnemyKillsOverkillWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyKillsLastBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnemyKillsLastBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZipTie_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZipTie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyStuns_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnemyStuns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GainDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainMitigation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GainMitigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GainSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLures_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UseLures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyDoorLocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestroyDoorLocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackCameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HackCameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEnemyKillsHumanShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecialEnemyKillsHumanShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecureBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecureBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecureBagsAssaultStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecureBagsAssaultStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecureBagsNoAlarm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecureBagsNoAlarm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RappellingEnemyKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RappellingEnemyKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PickupAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyKillsSilencedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnemyKillsSilencedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeists_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsAssaultStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsAssaultStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsNoAlarm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsNoAlarm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsVeryHardAndAbove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsVeryHardAndAbove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsSecuredBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsSecuredBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsInstantLootTaken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsInstantLootTaken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsNoAlarmNoSilencedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsNoAlarmNoSilencedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsNoCustody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsNoCustody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsSurviveThreeAssault_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsSurviveThreeAssault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedHeistsHeadshotKilled30_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompletedHeistsHeadshotKilled30;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutWindows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CutWindows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreeEnemyGrenadeKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThreeEnemyGrenadeKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillEnemySnipersWithMarksman_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KillEnemySnipersWithMarksman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStatisticCodeCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ReviveCrewmate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ReviveCrewmate = { "ReviveCrewmate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, ReviveCrewmate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ReviveCrewmate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ReviveCrewmate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideDistance = { "SlideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SlideDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideKills = { "SlideKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SlideKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideHeadshotKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideHeadshotKills = { "SlideHeadshotKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SlideHeadshotKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideHeadshotKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideHeadshotKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpKills = { "JumpKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, JumpKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpHeadshotKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpHeadshotKills = { "JumpHeadshotKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, JumpHeadshotKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpHeadshotKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpHeadshotKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldTime = { "HumanShieldTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, HumanShieldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldKills = { "HumanShieldKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, HumanShieldKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldHeadshotKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldHeadshotKills = { "HumanShieldHeadshotKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, HumanShieldHeadshotKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldHeadshotKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldHeadshotKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DozerFaceplate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DozerFaceplate = { "DozerFaceplate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DozerFaceplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DozerFaceplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DozerFaceplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyTaserBattery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyTaserBattery = { "DestroyTaserBattery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DestroyTaserBattery), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyTaserBattery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyTaserBattery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyGrenadeBelt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyGrenadeBelt = { "DestroyGrenadeBelt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DestroyGrenadeBelt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyGrenadeBelt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyGrenadeBelt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakShieldVisor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakShieldVisor = { "BreakShieldVisor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, BreakShieldVisor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakShieldVisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakShieldVisor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakDisplayCase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakDisplayCase = { "BreakDisplayCase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, BreakDisplayCase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakDisplayCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakDisplayCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HostagesTraded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HostagesTraded = { "HostagesTraded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, HostagesTraded), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HostagesTraded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HostagesTraded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DoorSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DoorSprint = { "DoorSprint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DoorSprint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DoorSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DoorSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CloakerSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CloakerSave = { "CloakerSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CloakerSave), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CloakerSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CloakerSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_TaserSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_TaserSave = { "TaserSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, TaserSave), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_TaserSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_TaserSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutObjects = { "CutObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CutObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_LockPicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_LockPicked = { "LockPicked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, LockPicked), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_LockPicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_LockPicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DetectedKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DetectedKills = { "DetectedKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DetectedKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DetectedKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DetectedKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DevicesHacked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DevicesHacked = { "DevicesHacked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DevicesHacked), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DevicesHacked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DevicesHacked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKills = { "SpecialEnemyKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SpecialEnemyKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsOverkillWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsOverkillWeapon = { "EnemyKillsOverkillWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, EnemyKillsOverkillWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsOverkillWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsOverkillWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsLastBullet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsLastBullet = { "EnemyKillsLastBullet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, EnemyKillsLastBullet), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsLastBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsLastBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ZipTie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ZipTie = { "ZipTie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, ZipTie), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ZipTie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ZipTie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyStuns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyStuns = { "EnemyStuns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, EnemyStuns), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyStuns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyStuns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainDamage = { "GainDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, GainDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainMitigation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainMitigation = { "GainMitigation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, GainMitigation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainMitigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainMitigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainSpeed = { "GainSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, GainSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_UseLures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_UseLures = { "UseLures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, UseLures), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_UseLures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_UseLures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyDoorLocks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyDoorLocks = { "DestroyDoorLocks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, DestroyDoorLocks), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyDoorLocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyDoorLocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HackCameras_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HackCameras = { "HackCameras", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, HackCameras), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HackCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HackCameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKillsHumanShield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKillsHumanShield = { "SpecialEnemyKillsHumanShield", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SpecialEnemyKillsHumanShield), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKillsHumanShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKillsHumanShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBags = { "SecureBags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SecureBags), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsAssaultStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsAssaultStarted = { "SecureBagsAssaultStarted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SecureBagsAssaultStarted), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsAssaultStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsAssaultStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsNoAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsNoAlarm = { "SecureBagsNoAlarm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, SecureBagsNoAlarm), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsNoAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsNoAlarm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_RappellingEnemyKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_RappellingEnemyKills = { "RappellingEnemyKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, RappellingEnemyKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_RappellingEnemyKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_RappellingEnemyKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_PickupAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_PickupAmmo = { "PickupAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, PickupAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_PickupAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_PickupAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsSilencedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsSilencedWeapon = { "EnemyKillsSilencedWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, EnemyKillsSilencedWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsSilencedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsSilencedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeists = { "CompletedHeists", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeists), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeists_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsAssaultStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsAssaultStarted = { "CompletedHeistsAssaultStarted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsAssaultStarted), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsAssaultStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsAssaultStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarm = { "CompletedHeistsNoAlarm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsNoAlarm), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsVeryHardAndAbove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsVeryHardAndAbove = { "CompletedHeistsVeryHardAndAbove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsVeryHardAndAbove), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsVeryHardAndAbove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsVeryHardAndAbove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSecuredBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSecuredBags = { "CompletedHeistsSecuredBags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsSecuredBags), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSecuredBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSecuredBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsInstantLootTaken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsInstantLootTaken = { "CompletedHeistsInstantLootTaken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsInstantLootTaken), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsInstantLootTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsInstantLootTaken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarmNoSilencedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarmNoSilencedWeapon = { "CompletedHeistsNoAlarmNoSilencedWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsNoAlarmNoSilencedWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarmNoSilencedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarmNoSilencedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoCustody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoCustody = { "CompletedHeistsNoCustody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsNoCustody), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoCustody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoCustody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSurviveThreeAssault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSurviveThreeAssault = { "CompletedHeistsSurviveThreeAssault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsSurviveThreeAssault), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSurviveThreeAssault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSurviveThreeAssault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsHeadshotKilled30_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsHeadshotKilled30 = { "CompletedHeistsHeadshotKilled30", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CompletedHeistsHeadshotKilled30), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsHeadshotKilled30_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsHeadshotKilled30_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutWindows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutWindows = { "CutWindows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, CutWindows), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutWindows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutWindows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ThreeEnemyGrenadeKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ThreeEnemyGrenadeKills = { "ThreeEnemyGrenadeKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, ThreeEnemyGrenadeKills), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ThreeEnemyGrenadeKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ThreeEnemyGrenadeKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_KillEnemySnipersWithMarksman_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCodeCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCodeCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_KillEnemySnipersWithMarksman = { "KillEnemySnipersWithMarksman", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCodeCollection, KillEnemySnipersWithMarksman), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_KillEnemySnipersWithMarksman_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_KillEnemySnipersWithMarksman_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ReviveCrewmate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SlideHeadshotKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_JumpHeadshotKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HumanShieldHeadshotKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DozerFaceplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyTaserBattery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyGrenadeBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakShieldVisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_BreakDisplayCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HostagesTraded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DoorSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CloakerSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_TaserSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_LockPicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DetectedKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DevicesHacked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsOverkillWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsLastBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ZipTie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyStuns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainMitigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_GainSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_UseLures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_DestroyDoorLocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_HackCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SpecialEnemyKillsHumanShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsAssaultStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_SecureBagsNoAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_RappellingEnemyKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_PickupAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_EnemyKillsSilencedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsAssaultStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsVeryHardAndAbove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSecuredBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsInstantLootTaken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoAlarmNoSilencedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsNoCustody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsSurviveThreeAssault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CompletedHeistsHeadshotKilled30,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_CutWindows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_ThreeEnemyGrenadeKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::NewProp_KillEnemySnipersWithMarksman,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStatisticCodeCollection",
		sizeof(FSBZStatisticCodeCollection),
		alignof(FSBZStatisticCodeCollection),
		Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStatisticCodeCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStatisticCodeCollection"), sizeof(FSBZStatisticCodeCollection), Get_Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStatisticCodeCollection_Hash() { return 2077561916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
