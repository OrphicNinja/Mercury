// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMemberInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase();
// End Cross Module References
class UScriptStruct* FSBZPartyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPartyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPartyData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPartyData"), sizeof(FSBZPartyData), Get_Z_Construct_UScriptStruct_FSBZPartyData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPartyData>()
{
	return FSBZPartyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPartyData(FSBZPartyData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPartyData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPartyData>(FName(TEXT("SBZPartyData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyData;
	struct Z_Construct_UScriptStruct_FSBZPartyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OwnerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OwnerIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HostState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HostState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsQuickPlay_MetaData[];
#endif
		static void NewProp_bIsQuickPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsQuickPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionSchematicIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MissionSchematicIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionDifficultyIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MissionDifficultyIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPartyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerId = { "OwnerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyData, OwnerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerIndex = { "OwnerIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyData, OwnerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPartyMemberInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyData, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState = { "HostState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyData, HostState), Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay_SetBit(void* Obj)
	{
		((FSBZPartyData*)Obj)->bIsQuickPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay = { "bIsQuickPlay", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPartyData), &Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionSchematicIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionSchematicIdx = { "MissionSchematicIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyData, MissionSchematicIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionSchematicIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionSchematicIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionDifficultyIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyData" },
		{ "ModuleRelativePath", "Public/SBZPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionDifficultyIdx = { "MissionDifficultyIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyData, MissionDifficultyIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionDifficultyIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionDifficultyIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPartyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_OwnerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_HostState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_bIsQuickPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionSchematicIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyData_Statics::NewProp_MissionDifficultyIdx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPartyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPartyData",
		sizeof(FSBZPartyData),
		alignof(FSBZPartyData),
		Z_Construct_UScriptStruct_FSBZPartyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPartyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPartyData"), sizeof(FSBZPartyData), Get_Z_Construct_UScriptStruct_FSBZPartyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPartyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPartyData_Hash() { return 474371109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
