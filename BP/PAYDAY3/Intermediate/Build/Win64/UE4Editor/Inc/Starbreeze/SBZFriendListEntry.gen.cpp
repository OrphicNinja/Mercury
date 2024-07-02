// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFriendListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFriendListEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFriendListEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EFriendStatus();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUserActivity();
// End Cross Module References
class UScriptStruct* FSBZFriendListEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFriendListEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFriendListEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFriendListEntry"), sizeof(FSBZFriendListEntry), Get_Z_Construct_UScriptStruct_FSBZFriendListEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFriendListEntry>()
{
	return FSBZFriendListEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFriendListEntry(FSBZFriendListEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFriendListEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFriendListEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFriendListEntry()
	{
		UScriptStruct::DeferCppStructOps<FSBZFriendListEntry>(FName(TEXT("SBZFriendListEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFriendListEntry;
	struct Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FriendName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenFriendName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HiddenFriendName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformFriendName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlatformFriendName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FriendStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FriendStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenownLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenownLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlatformBlocked_MetaData[];
#endif
		static void NewProp_bPlatformBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlatformPlayer_MetaData[];
#endif
		static void NewProp_bPlatformPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformPlayer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserIds_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserIds_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformUserIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NebulaIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NebulaIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserActivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserActivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCommunicateWith_MetaData[];
#endif
		static void NewProp_bCanCommunicateWith_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCommunicateWith;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFriendListEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendName = { "FriendName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, FriendName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_HiddenFriendName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_HiddenFriendName = { "HiddenFriendName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, HiddenFriendName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_HiddenFriendName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_HiddenFriendName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, PlatformUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformFriendName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformFriendName = { "PlatformFriendName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, PlatformFriendName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformFriendName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformFriendName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus = { "FriendStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, FriendStatus), Z_Construct_UEnum_Starbreeze_EFriendStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_RenownLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_RenownLevel = { "RenownLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, RenownLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_RenownLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_RenownLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked_SetBit(void* Obj)
	{
		((FSBZFriendListEntry*)Obj)->bPlatformBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked = { "bPlatformBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFriendListEntry), &Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer_SetBit(void* Obj)
	{
		((FSBZFriendListEntry*)Obj)->bPlatformPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer = { "bPlatformPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFriendListEntry), &Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_ValueProp = { "PlatformUserIds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_Key_KeyProp = { "PlatformUserIds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds = { "PlatformUserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, PlatformUserIds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformIcon = { "PlatformIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, PlatformIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_NebulaIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_NebulaIcon = { "NebulaIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, NebulaIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_NebulaIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_NebulaIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserActivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserActivity = { "UserActivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFriendListEntry, UserActivity), Z_Construct_UScriptStruct_FSBZUserActivity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserActivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserActivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFriendListEntry" },
		{ "ModuleRelativePath", "Public/SBZFriendListEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith_SetBit(void* Obj)
	{
		((FSBZFriendListEntry*)Obj)->bCanCommunicateWith = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith = { "bCanCommunicateWith", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFriendListEntry), &Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_HiddenFriendName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformFriendName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_FriendStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_RenownLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bPlatformPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformUserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_PlatformIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_NebulaIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_UserActivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::NewProp_bCanCommunicateWith,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZFriendListEntry",
		sizeof(FSBZFriendListEntry),
		alignof(FSBZFriendListEntry),
		Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFriendListEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFriendListEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFriendListEntry"), sizeof(FSBZFriendListEntry), Get_Z_Construct_UScriptStruct_FSBZFriendListEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFriendListEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFriendListEntry_Hash() { return 4155387997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
