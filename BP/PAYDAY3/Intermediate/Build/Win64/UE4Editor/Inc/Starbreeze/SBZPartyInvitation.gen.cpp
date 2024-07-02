// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyInvitation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyInvitation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyInvitation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyInviteStatus();
// End Cross Module References
class UScriptStruct* FSBZPartyInvitation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPartyInvitation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPartyInvitation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPartyInvitation"), sizeof(FSBZPartyInvitation), Get_Z_Construct_UScriptStruct_FSBZPartyInvitation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPartyInvitation>()
{
	return FSBZPartyInvitation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPartyInvitation(FSBZPartyInvitation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPartyInvitation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyInvitation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyInvitation()
	{
		UScriptStruct::DeferCppStructOps<FSBZPartyInvitation>(FName(TEXT("SBZPartyInvitation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyInvitation;
	struct Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InvitationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteExpirationTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InviteExpirationTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_System_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_System;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPartyInvitation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InvitationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InvitationId = { "InvitationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, InvitationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InvitationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InvitationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PartyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, PartyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PartyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InviteExpirationTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InviteExpirationTimer = { "InviteExpirationTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, InviteExpirationTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InviteExpirationTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InviteExpirationTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, Type), Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, System), Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyInvitation" },
		{ "ModuleRelativePath", "Public/SBZPartyInvitation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyInvitation, Status), Z_Construct_UEnum_Starbreeze_ESBZPartyInviteStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InvitationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_InviteExpirationTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_System,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPartyInvitation",
		sizeof(FSBZPartyInvitation),
		alignof(FSBZPartyInvitation),
		Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyInvitation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPartyInvitation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPartyInvitation"), sizeof(FSBZPartyInvitation), Get_Z_Construct_UScriptStruct_FSBZPartyInvitation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPartyInvitation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPartyInvitation_Hash() { return 1824048015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
