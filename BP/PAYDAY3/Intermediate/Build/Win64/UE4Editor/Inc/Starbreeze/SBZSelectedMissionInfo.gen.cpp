// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSelectedMissionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSelectedMissionInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSelectedMissionInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSelectedMissionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSelectedMissionInfo"), sizeof(FSBZSelectedMissionInfo), Get_Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSelectedMissionInfo>()
{
	return FSBZSelectedMissionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSelectedMissionInfo(FSBZSelectedMissionInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSelectedMissionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSelectedMissionInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSelectedMissionInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZSelectedMissionInfo>(FName(TEXT("SBZSelectedMissionInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSelectedMissionInfo;
	struct Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSchematicIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelSchematicIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DifficultyIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSelectedMissionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSelectedMissionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_LevelSchematicIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSelectedMissionInfo" },
		{ "ModuleRelativePath", "Public/SBZSelectedMissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_LevelSchematicIdx = { "LevelSchematicIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSelectedMissionInfo, LevelSchematicIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_LevelSchematicIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_LevelSchematicIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_DifficultyIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSelectedMissionInfo" },
		{ "ModuleRelativePath", "Public/SBZSelectedMissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSelectedMissionInfo, DifficultyIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_DifficultyIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_DifficultyIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_LevelSchematicIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::NewProp_DifficultyIdx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSelectedMissionInfo",
		sizeof(FSBZSelectedMissionInfo),
		alignof(FSBZSelectedMissionInfo),
		Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSelectedMissionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSelectedMissionInfo"), sizeof(FSBZSelectedMissionInfo), Get_Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSelectedMissionInfo_Hash() { return 860694492U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
