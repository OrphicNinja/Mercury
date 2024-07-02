// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyMember() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMember();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
// End Cross Module References
class UScriptStruct* FSBZPartyMember::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMember_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPartyMember, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPartyMember"), sizeof(FSBZPartyMember), Get_Z_Construct_UScriptStruct_FSBZPartyMember_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPartyMember>()
{
	return FSBZPartyMember::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPartyMember(FSBZPartyMember::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPartyMember"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMember
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMember()
	{
		UScriptStruct::DeferCppStructOps<FSBZPartyMember>(FName(TEXT("SBZPartyMember")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPartyMember;
	struct Z_Construct_UScriptStruct_FSBZPartyMember_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NebulaIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NebulaIcon;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPartyLeader_MetaData[];
#endif
		static void NewProp_bIsPartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPartyMember>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformUserName = { "PlatformUserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, PlatformUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformIcon = { "PlatformIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, PlatformIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_NebulaIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_NebulaIcon = { "NebulaIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, NebulaIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_NebulaIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_NebulaIcon_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, Platform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPartyMember, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPartyMember" },
		{ "ModuleRelativePath", "Public/SBZPartyMember.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader_SetBit(void* Obj)
	{
		((FSBZPartyMember*)Obj)->bIsPartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader = { "bIsPartyLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPartyMember), &Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPartyMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_PlatformIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_NebulaIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPartyMember_Statics::NewProp_bIsPartyLeader,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPartyMember_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPartyMember",
		sizeof(FSBZPartyMember),
		alignof(FSBZPartyMember),
		Z_Construct_UScriptStruct_FSBZPartyMember_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPartyMember_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyMember()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMember_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPartyMember"), sizeof(FSBZPartyMember), Get_Z_Construct_UScriptStruct_FSBZPartyMember_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPartyMember_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPartyMember_Hash() { return 2705021642U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
