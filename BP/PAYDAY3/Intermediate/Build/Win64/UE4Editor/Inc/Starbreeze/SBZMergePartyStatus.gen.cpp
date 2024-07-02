// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMergePartyStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMergePartyStatus() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePartyStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMergePartyStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMergePartyStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMergePartyStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMergePartyStatus"), sizeof(FSBZMergePartyStatus), Get_Z_Construct_UScriptStruct_FSBZMergePartyStatus_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMergePartyStatus>()
{
	return FSBZMergePartyStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMergePartyStatus(FSBZMergePartyStatus::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMergePartyStatus"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePartyStatus
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePartyStatus()
	{
		UScriptStruct::DeferCppStructOps<FSBZMergePartyStatus>(FName(TEXT("SBZMergePartyStatus")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePartyStatus;
	struct Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLeader_MetaData[];
#endif
		static void NewProp_bIsLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMergePartyStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMergePartyStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyStatus" },
		{ "ModuleRelativePath", "Public/SBZMergePartyStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((FSBZMergePartyStatus*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMergePartyStatus), &Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyStatus" },
		{ "ModuleRelativePath", "Public/SBZMergePartyStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader_SetBit(void* Obj)
	{
		((FSBZMergePartyStatus*)Obj)->bIsLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader = { "bIsLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMergePartyStatus), &Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_PartyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyStatus" },
		{ "ModuleRelativePath", "Public/SBZMergePartyStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMergePartyStatus, PartyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_PartyCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_bIsLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::NewProp_PartyCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMergePartyStatus",
		sizeof(FSBZMergePartyStatus),
		alignof(FSBZMergePartyStatus),
		Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePartyStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMergePartyStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMergePartyStatus"), sizeof(FSBZMergePartyStatus), Get_Z_Construct_UScriptStruct_FSBZMergePartyStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMergePartyStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMergePartyStatus_Hash() { return 812379431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
