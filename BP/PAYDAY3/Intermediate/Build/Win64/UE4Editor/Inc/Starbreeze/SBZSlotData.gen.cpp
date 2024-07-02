// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSlotData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSlotData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerSlotInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotStatus();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
// End Cross Module References
class UScriptStruct* FSBZSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSlotData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSlotData"), sizeof(FSBZSlotData), Get_Z_Construct_UScriptStruct_FSBZSlotData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSlotData>()
{
	return FSBZSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSlotData(FSBZSlotData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSlotData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSlotData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSlotData>(FName(TEXT("SBZSlotData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSlotData;
	struct Z_Construct_UScriptStruct_FSBZSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nickname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchAccepted_MetaData[];
#endif
		static void NewProp_bMatchAccepted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchAccepted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreMatchReady_MetaData[];
#endif
		static void NewProp_bPreMatchReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreMatchReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJobOverviewReady_MetaData[];
#endif
		static void NewProp_bJobOverviewReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJobOverviewReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHaveGameState_MetaData[];
#endif
		static void NewProp_bHaveGameState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHaveGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReserved_MetaData[];
#endif
		static void NewProp_bReserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadingComplete_MetaData[];
#endif
		static void NewProp_bLoadingComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadingComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraveling_MetaData[];
#endif
		static void NewProp_bTraveling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraveling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoadout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreferredCharacters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLoadoutData_MetaData[];
#endif
		static void NewProp_bHasLoadoutData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLoadoutData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStayAsParty_MetaData[];
#endif
		static void NewProp_bStayAsParty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStayAsParty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrossPlayEnabled_MetaData[];
#endif
		static void NewProp_bCrossPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrossPlayEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, PlayerInfo), Z_Construct_UScriptStruct_FSBZPlayerSlotInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, Status), Z_Construct_UEnum_Starbreeze_ESBZSlotStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Nickname_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, Nickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Nickname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteUserName = { "AccelByteUserName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, AccelByteUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteDisplayName = { "AccelByteDisplayName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, AccelByteDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bMatchAccepted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted = { "bMatchAccepted", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bPreMatchReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady = { "bPreMatchReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bJobOverviewReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady = { "bJobOverviewReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bHaveGameState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState = { "bHaveGameState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bReserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved = { "bReserved", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bLoadingComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete = { "bLoadingComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bTraveling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling = { "bTraveling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_ClientLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_ClientLoadout = { "ClientLoadout", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, ClientLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_ClientLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_ClientLoadout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters_Inner = { "PreferredCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters = { "PreferredCharacters", nullptr, (EPropertyFlags)0x0010000080002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, PreferredCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters_Inner = { "InventoryCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters = { "InventoryCharacters", nullptr, (EPropertyFlags)0x0010000080002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, InventoryCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_SelectedCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, SelectedCharacter), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_SelectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_SelectedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bHasLoadoutData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData = { "bHasLoadoutData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bStayAsParty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty = { "bStayAsParty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, Platform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSlotData, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSlotData" },
		{ "ModuleRelativePath", "Public/SBZSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled_SetBit(void* Obj)
	{
		((FSBZSlotData*)Obj)->bCrossPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled = { "bCrossPlayEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSlotData), &Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Nickname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_AccelByteDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bMatchAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bPreMatchReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bJobOverviewReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHaveGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bReserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bLoadingComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bTraveling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_ClientLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_PreferredCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InventoryCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_SelectedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bHasLoadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bStayAsParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSlotData_Statics::NewProp_bCrossPlayEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSlotData",
		sizeof(FSBZSlotData),
		alignof(FSBZSlotData),
		Z_Construct_UScriptStruct_FSBZSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSlotData"), sizeof(FSBZSlotData), Get_Z_Construct_UScriptStruct_FSBZSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSlotData_Hash() { return 425824650U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
