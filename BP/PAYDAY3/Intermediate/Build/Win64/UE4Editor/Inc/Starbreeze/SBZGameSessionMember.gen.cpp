// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameSessionMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameSessionMember() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameSessionMember();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZGameSessionMember::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameSessionMember_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameSessionMember, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameSessionMember"), sizeof(FSBZGameSessionMember), Get_Z_Construct_UScriptStruct_FSBZGameSessionMember_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameSessionMember>()
{
	return FSBZGameSessionMember::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameSessionMember(FSBZGameSessionMember::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameSessionMember"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameSessionMember
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameSessionMember()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameSessionMember>(FName(TEXT("SBZGameSessionMember")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameSessionMember;
	struct Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalPlayer_MetaData[];
#endif
		static void NewProp_bIsLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameSessionMember>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSessionMember" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameSessionMember, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSessionMember" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameSessionMember, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSessionMember" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformUserName = { "PlatformUserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameSessionMember, PlatformUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSessionMember" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformIcon = { "PlatformIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameSessionMember, PlatformIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_NebulaIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSessionMember" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_NebulaIcon = { "NebulaIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameSessionMember, NebulaIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_NebulaIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_NebulaIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameSessionMember" },
		{ "ModuleRelativePath", "Public/SBZGameSessionMember.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer_SetBit(void* Obj)
	{
		((FSBZGameSessionMember*)Obj)->bIsLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer = { "bIsLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZGameSessionMember), &Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_PlatformIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_NebulaIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::NewProp_bIsLocalPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGameSessionMember",
		sizeof(FSBZGameSessionMember),
		alignof(FSBZGameSessionMember),
		Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameSessionMember()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameSessionMember_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameSessionMember"), sizeof(FSBZGameSessionMember), Get_Z_Construct_UScriptStruct_FSBZGameSessionMember_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameSessionMember_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameSessionMember_Hash() { return 332875674U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
