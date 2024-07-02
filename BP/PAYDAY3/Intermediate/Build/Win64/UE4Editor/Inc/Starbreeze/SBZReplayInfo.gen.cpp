// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSBZReplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReplayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReplayInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReplayInfo"), sizeof(FSBZReplayInfo), Get_Z_Construct_UScriptStruct_FSBZReplayInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReplayInfo>()
{
	return FSBZReplayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReplayInfo(FSBZReplayInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplayInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplayInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZReplayInfo>(FName(TEXT("SBZReplayInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplayInfo;
	struct Z_Construct_UScriptStruct_FSBZReplayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LengthInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayDisplayTotalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayDisplayTotalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayDisplayCreationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayDisplayCreationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReplayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, ReplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LengthInMS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LengthInMS = { "LengthInMS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, LengthInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LengthInMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LengthInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FSBZReplayInfo*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZReplayInfo), &Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayTotalTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayTotalTime = { "ReplayDisplayTotalTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, ReplayDisplayTotalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayTotalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayTotalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayCreationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayCreationTime = { "ReplayDisplayCreationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, ReplayDisplayCreationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayCreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayCreationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ChangeList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ChangeList = { "ChangeList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayInfo, ChangeList), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ChangeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ChangeList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_LengthInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayTotalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ReplayDisplayCreationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::NewProp_ChangeList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReplayInfo",
		sizeof(FSBZReplayInfo),
		alignof(FSBZReplayInfo),
		Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReplayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReplayInfo"), sizeof(FSBZReplayInfo), Get_Z_Construct_UScriptStruct_FSBZReplayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReplayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReplayInfo_Hash() { return 2131997909U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
