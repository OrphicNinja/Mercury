// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStatisticCriteriaDataCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStatisticCriteriaDataCollection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTaserPackStunsCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZStatisticCriteriaDataCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStatisticCriteriaDataCollection"), sizeof(FSBZStatisticCriteriaDataCollection), Get_Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStatisticCriteriaDataCollection>()
{
	return FSBZStatisticCriteriaDataCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStatisticCriteriaDataCollection(FSBZStatisticCriteriaDataCollection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStatisticCriteriaDataCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStatisticCriteriaDataCollection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStatisticCriteriaDataCollection()
	{
		UScriptStruct::DeferCppStructOps<FSBZStatisticCriteriaDataCollection>(FName(TEXT("SBZStatisticCriteriaDataCollection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStatisticCriteriaDataCollection;
	struct Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PutOnMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PutOnMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsurancePolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InsurancePolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlimitedPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlimitedPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaserPackStuns_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaserPackStuns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmashAndGrab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmashAndGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SentryKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AfterParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorMeSurprised_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorMeSurprised;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecOps_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecOps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoBagOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoBagOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchBankNoDyePackExploded_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BranchBankNoDyePackExploded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStatisticCriteriaDataCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_PutOnMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_PutOnMask = { "PutOnMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, PutOnMask), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_PutOnMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_PutOnMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_InsurancePolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_InsurancePolicy = { "InsurancePolicy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, InsurancePolicy), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_InsurancePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_InsurancePolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_CrowdControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_CrowdControl = { "CrowdControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, CrowdControl), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_CrowdControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_CrowdControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_UnlimitedPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_UnlimitedPower = { "UnlimitedPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, UnlimitedPower), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_UnlimitedPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_UnlimitedPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_TaserPackStuns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_TaserPackStuns = { "TaserPackStuns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, TaserPackStuns), Z_Construct_UClass_USBZTaserPackStunsCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_TaserPackStuns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_TaserPackStuns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SmashAndGrab_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SmashAndGrab = { "SmashAndGrab", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, SmashAndGrab), Z_Construct_UClass_USBZSmashAndGrabStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SmashAndGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SmashAndGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SentryKills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SentryKills = { "SentryKills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, SentryKills), Z_Construct_UClass_USBZSentryKillsStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SentryKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SentryKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_AfterParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_AfterParty = { "AfterParty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, AfterParty), Z_Construct_UClass_USBZAssaultCountStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_AfterParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_AfterParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_ColorMeSurprised_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_ColorMeSurprised = { "ColorMeSurprised", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, ColorMeSurprised), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_ColorMeSurprised_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_ColorMeSurprised_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SpecOps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SpecOps = { "SpecOps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, SpecOps), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SpecOps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SpecOps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_NoBagOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_NoBagOnGround = { "NoBagOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, NoBagOnGround), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_NoBagOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_NoBagOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_BranchBankNoDyePackExploded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStatisticCriteriaDataCollection" },
		{ "ModuleRelativePath", "Public/SBZStatisticCriteriaDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_BranchBankNoDyePackExploded = { "BranchBankNoDyePackExploded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStatisticCriteriaDataCollection, BranchBankNoDyePackExploded), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_BranchBankNoDyePackExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_BranchBankNoDyePackExploded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_PutOnMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_InsurancePolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_CrowdControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_UnlimitedPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_TaserPackStuns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SmashAndGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SentryKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_AfterParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_ColorMeSurprised,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_SpecOps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_NoBagOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::NewProp_BranchBankNoDyePackExploded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStatisticCriteriaDataCollection",
		sizeof(FSBZStatisticCriteriaDataCollection),
		alignof(FSBZStatisticCriteriaDataCollection),
		Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStatisticCriteriaDataCollection"), sizeof(FSBZStatisticCriteriaDataCollection), Get_Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection_Hash() { return 2665817054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
