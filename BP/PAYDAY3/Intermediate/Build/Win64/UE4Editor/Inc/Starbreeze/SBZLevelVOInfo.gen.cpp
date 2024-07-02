// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLevelVOInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLevelVOInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLevelVOInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FSBZLevelVOInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLevelVOInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLevelVOInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLevelVOInfo"), sizeof(FSBZLevelVOInfo), Get_Z_Construct_UScriptStruct_FSBZLevelVOInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLevelVOInfo>()
{
	return FSBZLevelVOInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLevelVOInfo(FSBZLevelVOInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLevelVOInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLevelVOInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLevelVOInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZLevelVOInfo>(FName(TEXT("SBZLevelVOInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLevelVOInfo;
	struct Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSheetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GSheetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLevelVOInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLevelVOInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_StringTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelVOInfo" },
		{ "ModuleRelativePath", "Public/SBZLevelVOInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_StringTable = { "StringTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLevelVOInfo, StringTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_StringTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_StringTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_GSheetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelVOInfo" },
		{ "ModuleRelativePath", "Public/SBZLevelVOInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_GSheetId = { "GSheetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLevelVOInfo, GSheetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_GSheetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_GSheetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_StringTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::NewProp_GSheetId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLevelVOInfo",
		sizeof(FSBZLevelVOInfo),
		alignof(FSBZLevelVOInfo),
		Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLevelVOInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLevelVOInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLevelVOInfo"), sizeof(FSBZLevelVOInfo), Get_Z_Construct_UScriptStruct_FSBZLevelVOInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLevelVOInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLevelVOInfo_Hash() { return 3779170974U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
