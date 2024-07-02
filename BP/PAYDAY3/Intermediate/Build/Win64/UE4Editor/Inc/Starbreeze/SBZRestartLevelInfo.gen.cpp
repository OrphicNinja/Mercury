// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRestartLevelInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRestartLevelInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRestartLevelInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZRestartLevelInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRestartLevelInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRestartLevelInfo"), sizeof(FSBZRestartLevelInfo), Get_Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRestartLevelInfo>()
{
	return FSBZRestartLevelInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRestartLevelInfo(FSBZRestartLevelInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRestartLevelInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRestartLevelInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRestartLevelInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZRestartLevelInfo>(FName(TEXT("SBZRestartLevelInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRestartLevelInfo;
	struct Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRestartLevelInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRestartLevelInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRestartLevelInfo" },
		{ "ModuleRelativePath", "Public/SBZRestartLevelInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRestartLevelInfo, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::NewProp_LevelIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::NewProp_LevelIdx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRestartLevelInfo",
		sizeof(FSBZRestartLevelInfo),
		alignof(FSBZRestartLevelInfo),
		Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRestartLevelInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRestartLevelInfo"), sizeof(FSBZRestartLevelInfo), Get_Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRestartLevelInfo_Hash() { return 376940940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
