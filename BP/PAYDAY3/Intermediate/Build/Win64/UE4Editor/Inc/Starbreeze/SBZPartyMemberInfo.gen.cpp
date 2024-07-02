// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyMemberInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyMemberInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMemberInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FSBZPartyMemberInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPartyMemberInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPartyMemberInfo"), sizeof(FSBZPartyMemberInfo), Get_Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPartyMemberInfo>()
{
	return FSBZPartyMemberInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPartyMemberInfo(FSBZPartyMemberInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPartyMemberInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMemberInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMemberInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPartyMemberInfo>(FName(TEXT("SBZPartyMemberInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMemberInfo;
	struct Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerUId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nickname;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyMemberInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPartyMemberInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_PlayerUId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMemberInfo" },
		{ "ModuleRelativePath", "Public/SBZPartyMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_PlayerUId = { "PlayerUId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMemberInfo, PlayerUId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_PlayerUId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_PlayerUId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_Nickname_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMemberInfo" },
		{ "ModuleRelativePath", "Public/SBZPartyMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMemberInfo, Nickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_Nickname_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_PlayerUId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::NewProp_Nickname,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPartyMemberInfo",
		sizeof(FSBZPartyMemberInfo),
		alignof(FSBZPartyMemberInfo),
		Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMemberInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPartyMemberInfo"), sizeof(FSBZPartyMemberInfo), Get_Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMemberInfo_Hash() { return 3464895029U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
