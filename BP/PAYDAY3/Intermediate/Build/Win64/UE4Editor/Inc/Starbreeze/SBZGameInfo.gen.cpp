// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZGameInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameInfo"), sizeof(FSBZGameInfo), Get_Z_Construct_UScriptStruct_FSBZGameInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameInfo>()
{
	return FSBZGameInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameInfo(FSBZGameInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameInfo>(FName(TEXT("SBZGameInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameInfo;
	struct Z_Construct_UScriptStruct_FSBZGameInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Changelist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Changelist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInfo" },
		{ "ModuleRelativePath", "Public/SBZGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameInfo, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Changelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Changelist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_DateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInfo" },
		{ "ModuleRelativePath", "Public/SBZGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameInfo, DateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_DateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInfo" },
		{ "ModuleRelativePath", "Public/SBZGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameInfo, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInfo" },
		{ "ModuleRelativePath", "Public/SBZGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameInfo, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Changelist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameInfo_Statics::NewProp_Address,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGameInfo",
		sizeof(FSBZGameInfo),
		alignof(FSBZGameInfo),
		Z_Construct_UScriptStruct_FSBZGameInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameInfo"), sizeof(FSBZGameInfo), Get_Z_Construct_UScriptStruct_FSBZGameInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameInfo_Hash() { return 816337672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
