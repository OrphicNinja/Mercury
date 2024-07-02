// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStopAndTurnMontageInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStopAndTurnMontageInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZStopAndTurnMontageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStopAndTurnMontageInfo"), sizeof(FSBZStopAndTurnMontageInfo), Get_Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStopAndTurnMontageInfo>()
{
	return FSBZStopAndTurnMontageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStopAndTurnMontageInfo(FSBZStopAndTurnMontageInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStopAndTurnMontageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStopAndTurnMontageInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStopAndTurnMontageInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZStopAndTurnMontageInfo>(FName(TEXT("SBZStopAndTurnMontageInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStopAndTurnMontageInfo;
	struct Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntrySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionAngleThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMontageInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStopAndTurnMontageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_EntrySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_EntrySpeed = { "EntrySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStopAndTurnMontageInfo, EntrySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_EntrySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_EntrySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_Angle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStopAndTurnMontageInfo, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionSpeedThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionSpeedThreshold = { "SelectionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStopAndTurnMontageInfo, SelectionSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionAngleThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionAngleThreshold = { "SelectionAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStopAndTurnMontageInfo, SelectionAngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionAngleThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_EntrySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::NewProp_SelectionAngleThreshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStopAndTurnMontageInfo",
		sizeof(FSBZStopAndTurnMontageInfo),
		alignof(FSBZStopAndTurnMontageInfo),
		Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStopAndTurnMontageInfo"), sizeof(FSBZStopAndTurnMontageInfo), Get_Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo_Hash() { return 3096813003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
