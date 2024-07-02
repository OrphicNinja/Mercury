// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSegmentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSegmentInfo() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkSegmentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSegmentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSegmentInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSegmentInfo"), sizeof(FAkSegmentInfo), Get_Z_Construct_UScriptStruct_FAkSegmentInfo_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSegmentInfo>()
{
	return FAkSegmentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSegmentInfo(FAkSegmentInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSegmentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSegmentInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSegmentInfo()
	{
		UScriptStruct::DeferCppStructOps<FAkSegmentInfo>(FName(TEXT("AkSegmentInfo")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSegmentInfo;
	struct Z_Construct_UScriptStruct_FAkSegmentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreEntryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreEntryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostExitDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostExitDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingLookAheadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingLookAheadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSegmentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, CurrentPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration = { "PreEntryDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, PreEntryDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration = { "ActiveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, ActiveDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration = { "PostExitDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, PostExitDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime = { "RemainingLookAheadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, RemainingLookAheadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration = { "BeatDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, BeatDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration = { "BarDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, BarDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration = { "GridDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, GridDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSegmentInfo" },
		{ "ModuleRelativePath", "Public/AkSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSegmentInfo, GridOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSegmentInfo",
		sizeof(FAkSegmentInfo),
		alignof(FAkSegmentInfo),
		Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSegmentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSegmentInfo"), sizeof(FAkSegmentInfo), Get_Z_Construct_UScriptStruct_FAkSegmentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSegmentInfo_Hash() { return 1099342997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
