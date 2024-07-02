// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMergePlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMergePlayerData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePlayerData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMergePlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMergePlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMergePlayerData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMergePlayerData"), sizeof(FSBZMergePlayerData), Get_Z_Construct_UScriptStruct_FSBZMergePlayerData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMergePlayerData>()
{
	return FSBZMergePlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMergePlayerData(FSBZMergePlayerData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMergePlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePlayerData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePlayerData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMergePlayerData>(FName(TEXT("SBZMergePlayerData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMergePlayerData;
	struct Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMergePartySelecter_MetaData[];
#endif
		static void NewProp_bIsMergePartySelecter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMergePartySelecter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMergePlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMergePlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_PlayerDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePlayerData" },
		{ "ModuleRelativePath", "Public/SBZMergePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_PlayerDisplayName = { "PlayerDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMergePlayerData, PlayerDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_PlayerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_PlayerDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePlayerData" },
		{ "ModuleRelativePath", "Public/SBZMergePlayerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter_SetBit(void* Obj)
	{
		((FSBZMergePlayerData*)Obj)->bIsMergePartySelecter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter = { "bIsMergePartySelecter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMergePlayerData), &Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_PlayerDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::NewProp_bIsMergePartySelecter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMergePlayerData",
		sizeof(FSBZMergePlayerData),
		alignof(FSBZMergePlayerData),
		Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMergePlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMergePlayerData"), sizeof(FSBZMergePlayerData), Get_Z_Construct_UScriptStruct_FSBZMergePlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMergePlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMergePlayerData_Hash() { return 1843937445U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
