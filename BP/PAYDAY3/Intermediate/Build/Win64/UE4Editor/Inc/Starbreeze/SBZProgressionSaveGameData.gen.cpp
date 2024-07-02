// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProgressionSaveGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProgressionSaveGameData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveGameData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamySaveData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock();
// End Cross Module References
class UScriptStruct* FSBZProgressionSaveGameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZProgressionSaveGameData"), sizeof(FSBZProgressionSaveGameData), Get_Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZProgressionSaveGameData>()
{
	return FSBZProgressionSaveGameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZProgressionSaveGameData(FSBZProgressionSaveGameData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZProgressionSaveGameData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveGameData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveGameData()
	{
		UScriptStruct::DeferCppStructOps<FSBZProgressionSaveGameData>(FName(TEXT("SBZProgressionSaveGameData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveGameData;
	struct Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loadout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveLoadoutIndexPlatformArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLoadoutIndexPlatformArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveLoadoutIndexPlatformArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfigArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfigPerPlatformArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfigPerPlatformArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerLoadoutConfigPerPlatformArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCosmeticsConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerCosmeticsConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerCosmeticsConfigPerPlatformArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCosmeticsConfigPerPlatformArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerCosmeticsConfigPerPlatformArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredPlayerCharacterPerPlatformArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredPlayerCharacterPerPlatformArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreferredPlayerCharacterPerPlatformArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPreferredCharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPreferredCharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerPreferredCharacterArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemConfigInventorySaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemConfigInventorySaveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfigInventorySaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfigInventorySaveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfigInventorySaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitConfigInventorySaveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveConfigInventorySaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveConfigInventorySaveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResearchMarker;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentRequestedPriceProgressionLevel_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentRequestedPriceProgressionLevel_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRequestedPriceProgressionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurrentRequestedPriceProgressionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTimeEventCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastTimeEventCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamySaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfamySaveData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StoryProgressionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryProgressionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoryProgressionArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkipIntroSequenceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipIntroSequenceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkipIntroSequenceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartAttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPartAttachmentData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecommendedChallengeBlockMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecommendedChallengeBlockMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecommendedChallengeBlockMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RecommendedChallengeBlockMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZProgressionSaveGameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_Loadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, Loadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_Loadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_Loadout_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray_Inner = { "ActiveLoadoutIndexPlatformArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray = { "ActiveLoadoutIndexPlatformArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, ActiveLoadoutIndexPlatformArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigArray = { "PlayerLoadoutConfigArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, PlayerLoadoutConfigArray), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray_Inner = { "PlayerLoadoutConfigPerPlatformArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray = { "PlayerLoadoutConfigPerPlatformArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, PlayerLoadoutConfigPerPlatformArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfig = { "PlayerCosmeticsConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, PlayerCosmeticsConfig), Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray_Inner = { "PlayerCosmeticsConfigPerPlatformArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray = { "PlayerCosmeticsConfigPerPlatformArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, PlayerCosmeticsConfigPerPlatformArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray_Inner = { "PreferredPlayerCharacterPerPlatformArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPreferredPlayerCharacterArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray = { "PreferredPlayerCharacterPerPlatformArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, PreferredPlayerCharacterPerPlatformArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray_Inner = { "PlayerPreferredCharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray = { "PlayerPreferredCharacterArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, PlayerPreferredCharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ItemConfigInventorySaveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ItemConfigInventorySaveData = { "ItemConfigInventorySaveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, ItemConfigInventorySaveData), Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ItemConfigInventorySaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ItemConfigInventorySaveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_MaskConfigInventorySaveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_MaskConfigInventorySaveData = { "MaskConfigInventorySaveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, MaskConfigInventorySaveData), Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_MaskConfigInventorySaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_MaskConfigInventorySaveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SuitConfigInventorySaveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SuitConfigInventorySaveData = { "SuitConfigInventorySaveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, SuitConfigInventorySaveData), Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SuitConfigInventorySaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SuitConfigInventorySaveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_GloveConfigInventorySaveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_GloveConfigInventorySaveData = { "GloveConfigInventorySaveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, GloveConfigInventorySaveData), Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_GloveConfigInventorySaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_GloveConfigInventorySaveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ResearchMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ResearchMarker = { "ResearchMarker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, ResearchMarker), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ResearchMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ResearchMarker_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_ValueProp = { "CurrentRequestedPriceProgressionLevel", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_Key_KeyProp = { "CurrentRequestedPriceProgressionLevel_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel = { "CurrentRequestedPriceProgressionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, CurrentRequestedPriceProgressionLevel), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_LastTimeEventCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_LastTimeEventCheck = { "LastTimeEventCheck", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, LastTimeEventCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_LastTimeEventCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_LastTimeEventCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_InfamySaveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_InfamySaveData = { "InfamySaveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, InfamySaveData), Z_Construct_UScriptStruct_FSBZInfamySaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_InfamySaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_InfamySaveData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray_Inner = { "StoryProgressionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray = { "StoryProgressionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, StoryProgressionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray_Inner = { "SkipIntroSequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray = { "SkipIntroSequenceArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, SkipIntroSequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_WeaponPartAttachmentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_WeaponPartAttachmentData = { "WeaponPartAttachmentData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, WeaponPartAttachmentData), Z_Construct_UScriptStruct_FSBZWeaponPartAttachmentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_WeaponPartAttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_WeaponPartAttachmentData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_ValueProp = { "RecommendedChallengeBlockMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_Key_KeyProp = { "RecommendedChallengeBlockMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGameData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap = { "RecommendedChallengeBlockMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveGameData, RecommendedChallengeBlockMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_Loadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ActiveLoadoutIndexPlatformArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerLoadoutConfigPerPlatformArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerCosmeticsConfigPerPlatformArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PreferredPlayerCharacterPerPlatformArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_PlayerPreferredCharacterArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ItemConfigInventorySaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_MaskConfigInventorySaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SuitConfigInventorySaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_GloveConfigInventorySaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_ResearchMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_CurrentRequestedPriceProgressionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_LastTimeEventCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_InfamySaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_StoryProgressionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_SkipIntroSequenceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_WeaponPartAttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::NewProp_RecommendedChallengeBlockMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZProgressionSaveGameData",
		sizeof(FSBZProgressionSaveGameData),
		alignof(FSBZProgressionSaveGameData),
		Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveGameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZProgressionSaveGameData"), sizeof(FSBZProgressionSaveGameData), Get_Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveGameData_Hash() { return 2330931615U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
