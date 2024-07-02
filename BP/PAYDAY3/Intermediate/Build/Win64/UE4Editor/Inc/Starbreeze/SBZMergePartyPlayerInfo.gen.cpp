// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMergePartyPlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMergePartyPlayerInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMergePartyPlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMergePartyPlayerInfo"), sizeof(FSBZMergePartyPlayerInfo), Get_Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMergePartyPlayerInfo>()
{
	return FSBZMergePartyPlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMergePartyPlayerInfo(FSBZMergePartyPlayerInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMergePartyPlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePartyPlayerInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePartyPlayerInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZMergePartyPlayerInfo>(FName(TEXT("SBZMergePartyPlayerInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePartyPlayerInfo;
	struct Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMergePartySelected_MetaData[];
#endif
		static void NewProp_bIsMergePartySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMergePartySelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfMembersInPartyManagersParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfMembersInPartyManagersParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergePartyMemberPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MergePartyMemberPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelectedAsMergePartyLeader_MetaData[];
#endif
		static void NewProp_bIsSelectedAsMergePartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelectedAsMergePartyLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMergePartyPlayerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMergePartyPlayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyPlayerInfo" },
		{ "ModuleRelativePath", "Public/SBZMergePartyPlayerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected_SetBit(void* Obj)
	{
		((FSBZMergePartyPlayerInfo*)Obj)->bIsMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected = { "bIsMergePartySelected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMergePartyPlayerInfo), &Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_NumberOfMembersInPartyManagersParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyPlayerInfo" },
		{ "ModuleRelativePath", "Public/SBZMergePartyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_NumberOfMembersInPartyManagersParty = { "NumberOfMembersInPartyManagersParty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMergePartyPlayerInfo, NumberOfMembersInPartyManagersParty), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_NumberOfMembersInPartyManagersParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_NumberOfMembersInPartyManagersParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_MergePartyMemberPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyPlayerInfo" },
		{ "ModuleRelativePath", "Public/SBZMergePartyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_MergePartyMemberPlayerController = { "MergePartyMemberPlayerController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMergePartyPlayerInfo, MergePartyMemberPlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_MergePartyMemberPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_MergePartyMemberPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyPlayerInfo" },
		{ "ModuleRelativePath", "Public/SBZMergePartyPlayerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader_SetBit(void* Obj)
	{
		((FSBZMergePartyPlayerInfo*)Obj)->bIsSelectedAsMergePartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader = { "bIsSelectedAsMergePartyLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMergePartyPlayerInfo), &Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsMergePartySelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_NumberOfMembersInPartyManagersParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_MergePartyMemberPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::NewProp_bIsSelectedAsMergePartyLeader,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMergePartyPlayerInfo",
		sizeof(FSBZMergePartyPlayerInfo),
		alignof(FSBZMergePartyPlayerInfo),
		Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMergePartyPlayerInfo"), sizeof(FSBZMergePartyPlayerInfo), Get_Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo_Hash() { return 2814162455U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
