// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityCompanySettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityCompanySettingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType();
// End Cross Module References
class UScriptStruct* FSBZSecurityCompanySettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSecurityCompanySettingData"), sizeof(FSBZSecurityCompanySettingData), Get_Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSecurityCompanySettingData>()
{
	return FSBZSecurityCompanySettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSecurityCompanySettingData(FSBZSecurityCompanySettingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSecurityCompanySettingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityCompanySettingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityCompanySettingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSecurityCompanySettingData>(FName(TEXT("SBZSecurityCompanySettingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSecurityCompanySettingData;
	struct Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndestructibleCamerasMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_IndestructibleCamerasMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRuntimeLimitMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_CameraRuntimeLimitMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeadGuardMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_LeadGuardMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebilitatingSpecialsMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_DebilitatingSpecialsMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacialRecognitionMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_FacialRecognitionMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPiercingMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ArmorPiercingMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuddySystemMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_BuddySystemMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaStrikeMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_AlphaStrikeMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardBargainMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_HardBargainMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICoreMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_AICoreMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectorShieldsMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ReflectorShieldsMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIShieldingMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_AIShieldingMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPiercingPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPiercingPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebilitatingPawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebilitatingPawnTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebilitatingBuffsToRemove_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebilitatingBuffsToRemove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebilitatingBuffsToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebilitatingBuffsToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardBargainMinHostageRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HardBargainMinHostageRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuddySystemIgnoreTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuddySystemIgnoreTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSecurityCompanySettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_IndestructibleCamerasMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_IndestructibleCamerasMask = { "IndestructibleCamerasMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, IndestructibleCamerasMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_IndestructibleCamerasMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_IndestructibleCamerasMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_CameraRuntimeLimitMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_CameraRuntimeLimitMask = { "CameraRuntimeLimitMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, CameraRuntimeLimitMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_CameraRuntimeLimitMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_CameraRuntimeLimitMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_LeadGuardMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_LeadGuardMask = { "LeadGuardMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, LeadGuardMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_LeadGuardMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_LeadGuardMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingSpecialsMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingSpecialsMask = { "DebilitatingSpecialsMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, DebilitatingSpecialsMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingSpecialsMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingSpecialsMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_FacialRecognitionMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_FacialRecognitionMask = { "FacialRecognitionMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, FacialRecognitionMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_FacialRecognitionMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_FacialRecognitionMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingMask = { "ArmorPiercingMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, ArmorPiercingMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemMask = { "BuddySystemMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, BuddySystemMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AlphaStrikeMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AlphaStrikeMask = { "AlphaStrikeMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, AlphaStrikeMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AlphaStrikeMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AlphaStrikeMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMask = { "HardBargainMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, HardBargainMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AICoreMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AICoreMask = { "AICoreMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, AICoreMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AICoreMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AICoreMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ReflectorShieldsMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ReflectorShieldsMask = { "ReflectorShieldsMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, ReflectorShieldsMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ReflectorShieldsMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ReflectorShieldsMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AIShieldingMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AIShieldingMask = { "AIShieldingMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, AIShieldingMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AIShieldingMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AIShieldingMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingPercentage = { "ArmorPiercingPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, ArmorPiercingPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingPawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingPawnTypes = { "DebilitatingPawnTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, DebilitatingPawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingPawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingPawnTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_Inner = { "DebilitatingBuffsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove = { "DebilitatingBuffsToRemove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, DebilitatingBuffsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMinHostageRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMinHostageRequired = { "HardBargainMinHostageRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, HardBargainMinHostageRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMinHostageRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMinHostageRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemIgnoreTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettingData" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemIgnoreTags = { "BuddySystemIgnoreTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSecurityCompanySettingData, BuddySystemIgnoreTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemIgnoreTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemIgnoreTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_IndestructibleCamerasMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_CameraRuntimeLimitMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_LeadGuardMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingSpecialsMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_FacialRecognitionMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AlphaStrikeMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AICoreMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ReflectorShieldsMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_AIShieldingMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_ArmorPiercingPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingPawnTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_DebilitatingBuffsToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_HardBargainMinHostageRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::NewProp_BuddySystemIgnoreTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSecurityCompanySettingData",
		sizeof(FSBZSecurityCompanySettingData),
		alignof(FSBZSecurityCompanySettingData),
		Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSecurityCompanySettingData"), sizeof(FSBZSecurityCompanySettingData), Get_Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData_Hash() { return 3042273329U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
