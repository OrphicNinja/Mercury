// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayEventInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayEventInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayEventInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReplayEvent();
// End Cross Module References
class UScriptStruct* FSBZReplayEventInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZReplayEventInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZReplayEventInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZReplayEventInfo"), sizeof(FSBZReplayEventInfo), Get_Z_Construct_UScriptStruct_FSBZReplayEventInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZReplayEventInfo>()
{
	return FSBZReplayEventInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZReplayEventInfo(FSBZReplayEventInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZReplayEventInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplayEventInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplayEventInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZReplayEventInfo>(FName(TEXT("SBZReplayEventInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZReplayEventInfo;
	struct Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventGroup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayEventInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZReplayEventInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayEventInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayEventInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup = { "EventGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayEventInfo, EventGroup), Z_Construct_UEnum_Starbreeze_ESBZReplayEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_MetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayEventInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayEventInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayEventInfo, MetaData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayEventInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayEventInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayEventInfo, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Percent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayEventInfo" },
		{ "ModuleRelativePath", "Public/SBZReplayEventInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZReplayEventInfo, Percent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Percent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_EventGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::NewProp_Percent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZReplayEventInfo",
		sizeof(FSBZReplayEventInfo),
		alignof(FSBZReplayEventInfo),
		Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayEventInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZReplayEventInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZReplayEventInfo"), sizeof(FSBZReplayEventInfo), Get_Z_Construct_UScriptStruct_FSBZReplayEventInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZReplayEventInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZReplayEventInfo_Hash() { return 362119695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
