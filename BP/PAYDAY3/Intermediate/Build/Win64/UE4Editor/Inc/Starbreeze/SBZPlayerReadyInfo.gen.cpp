// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerReadyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerReadyInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerReadyInfo>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FSBZPlayerReadyInfo cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

class UScriptStruct* FSBZPlayerReadyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerReadyInfo"), sizeof(FSBZPlayerReadyInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerReadyInfo>()
{
	return FSBZPlayerReadyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerReadyInfo(FSBZPlayerReadyInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerReadyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerReadyInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerReadyInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerReadyInfo>(FName(TEXT("SBZPlayerReadyInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerReadyInfo;
	struct Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNamePlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerNamePlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNameAccelbyte_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerNameAccelbyte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerReadyStatusValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerReadyStatusValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerReadyStatusValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerReadyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNamePlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNamePlatform = { "PlayerNamePlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, PlayerNamePlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNamePlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNamePlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNameAccelbyte_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNameAccelbyte = { "PlayerNameAccelbyte", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, PlayerNameAccelbyte), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNameAccelbyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNameAccelbyte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserName = { "AccelByteUserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, AccelByteUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteDisplayName = { "AccelByteDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, AccelByteDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserId = { "AccelByteUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, AccelByteUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue = { "PlayerReadyStatusValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, PlayerReadyStatusValue), Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, Platform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerReadyInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerReadyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerReadyInfo, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_InfamyLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNamePlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerNameAccelbyte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_AccelByteUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_PlayerReadyStatusValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::NewProp_InfamyLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"SBZPlayerReadyInfo",
		sizeof(FSBZPlayerReadyInfo),
		alignof(FSBZPlayerReadyInfo),
		Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerReadyInfo"), sizeof(FSBZPlayerReadyInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerReadyInfo_Hash() { return 3165924074U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
