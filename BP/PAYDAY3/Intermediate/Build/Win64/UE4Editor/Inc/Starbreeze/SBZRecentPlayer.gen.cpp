// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRecentPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRecentPlayer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRecentPlayer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZRecentPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRecentPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRecentPlayer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRecentPlayer"), sizeof(FSBZRecentPlayer), Get_Z_Construct_UScriptStruct_FSBZRecentPlayer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRecentPlayer>()
{
	return FSBZRecentPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRecentPlayer(FSBZRecentPlayer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRecentPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecentPlayer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecentPlayer()
	{
		UScriptStruct::DeferCppStructOps<FSBZRecentPlayer>(FName(TEXT("SBZRecentPlayer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecentPlayer;
	struct Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRecentPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecentPlayer" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecentPlayer, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecentPlayer" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecentPlayer, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecentPlayer" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformUserName = { "PlatformUserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecentPlayer, PlatformUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecentPlayer" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformIcon = { "PlatformIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecentPlayer, PlatformIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_NebulaIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecentPlayer" },
		{ "ModuleRelativePath", "Public/SBZRecentPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_NebulaIcon = { "NebulaIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecentPlayer, NebulaIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_NebulaIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_NebulaIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_PlatformIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::NewProp_NebulaIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRecentPlayer",
		sizeof(FSBZRecentPlayer),
		alignof(FSBZRecentPlayer),
		Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRecentPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRecentPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRecentPlayer"), sizeof(FSBZRecentPlayer), Get_Z_Construct_UScriptStruct_FSBZRecentPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRecentPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRecentPlayer_Hash() { return 1163961799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
