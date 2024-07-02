// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobbyCharacterInfoUi.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobbyCharacterInfoUi() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotStatus();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FSBZLobbyCharacterInfoUi::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLobbyCharacterInfoUi"), sizeof(FSBZLobbyCharacterInfoUi), Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLobbyCharacterInfoUi>()
{
	return FSBZLobbyCharacterInfoUi::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLobbyCharacterInfoUi(FSBZLobbyCharacterInfoUi::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLobbyCharacterInfoUi"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLobbyCharacterInfoUi
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLobbyCharacterInfoUi()
	{
		UScriptStruct::DeferCppStructOps<FSBZLobbyCharacterInfoUi>(FName(TEXT("SBZLobbyCharacterInfoUi")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLobbyCharacterInfoUi;
	struct Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSoftClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PawnSoftClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsyncLoadInProgress_MetaData[];
#endif
		static void NewProp_bAsyncLoadInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsyncLoadInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerReady_MetaData[];
#endif
		static void NewProp_bIsPlayerReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerAcceptedMatch_MetaData[];
#endif
		static void NewProp_bPlayerAcceptedMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerAcceptedMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PowerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nickname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelBytePlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelBytePlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUidString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerUidString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerUId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssetSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreplanningAssetSku;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLobbyCharacterInfoUi>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnSoftClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnSoftClass = { "PawnSoftClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, PawnSoftClass), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnSoftClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnSoftClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress_SetBit(void* Obj)
	{
		((FSBZLobbyCharacterInfoUi*)Obj)->bAsyncLoadInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress = { "bAsyncLoadInProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLobbyCharacterInfoUi), &Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady_SetBit(void* Obj)
	{
		((FSBZLobbyCharacterInfoUi*)Obj)->bIsPlayerReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady = { "bIsPlayerReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLobbyCharacterInfoUi), &Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch_SetBit(void* Obj)
	{
		((FSBZLobbyCharacterInfoUi*)Obj)->bPlayerAcceptedMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch = { "bPlayerAcceptedMatch", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLobbyCharacterInfoUi), &Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PowerLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PowerLevel = { "PowerLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, PowerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PowerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PowerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Nickname_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, Nickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Nickname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_AccelBytePlayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_AccelBytePlayerName = { "AccelBytePlayerName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, AccelBytePlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_AccelBytePlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_AccelBytePlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUidString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUidString = { "PlayerUidString", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, PlayerUidString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUidString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUidString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUId = { "PlayerUId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, PlayerUId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus = { "SlotStatus", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, SlotStatus), Z_Construct_UEnum_Starbreeze_ESBZSlotStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PreplanningAssetSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PreplanningAssetSku = { "PreplanningAssetSku", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, PreplanningAssetSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PreplanningAssetSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PreplanningAssetSku_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, Platform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Loadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, Loadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Loadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Loadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SelectedCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfoUi" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfoUi.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfoUi, SelectedCharacter), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SelectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SelectedCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PawnSoftClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bAsyncLoadInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bIsPlayerReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_bPlayerAcceptedMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PowerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Nickname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_AccelBytePlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUidString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PlayerUId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SlotStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_PreplanningAssetSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_Loadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::NewProp_SelectedCharacter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLobbyCharacterInfoUi",
		sizeof(FSBZLobbyCharacterInfoUi),
		alignof(FSBZLobbyCharacterInfoUi),
		Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLobbyCharacterInfoUi"), sizeof(FSBZLobbyCharacterInfoUi), Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi_Hash() { return 431484000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
