// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWhisperInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWhisperInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWhisperInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FSBZWhisperInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWhisperInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWhisperInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWhisperInfo"), sizeof(FSBZWhisperInfo), Get_Z_Construct_UScriptStruct_FSBZWhisperInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWhisperInfo>()
{
	return FSBZWhisperInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWhisperInfo(FSBZWhisperInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWhisperInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWhisperInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWhisperInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZWhisperInfo>(FName(TEXT("SBZWhisperInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWhisperInfo;
	struct Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedUniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWhisperInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWhisperInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_ReplicatedUniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWhisperInfo" },
		{ "ModuleRelativePath", "Public/SBZWhisperInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_ReplicatedUniqueID = { "ReplicatedUniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWhisperInfo, ReplicatedUniqueID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_ReplicatedUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_ReplicatedUniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWhisperInfo" },
		{ "ModuleRelativePath", "Public/SBZWhisperInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWhisperInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_ReplicatedUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWhisperInfo",
		sizeof(FSBZWhisperInfo),
		alignof(FSBZWhisperInfo),
		Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWhisperInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWhisperInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWhisperInfo"), sizeof(FSBZWhisperInfo), Get_Z_Construct_UScriptStruct_FSBZWhisperInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWhisperInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWhisperInfo_Hash() { return 2520932868U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
