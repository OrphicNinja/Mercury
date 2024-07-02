// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineMatchmakingParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineMatchmakingParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMatchmakingCommand();
// End Cross Module References
class UScriptStruct* FSBZOnlineMatchmakingParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZOnlineMatchmakingParams"), sizeof(FSBZOnlineMatchmakingParams), Get_Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZOnlineMatchmakingParams>()
{
	return FSBZOnlineMatchmakingParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZOnlineMatchmakingParams(FSBZOnlineMatchmakingParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZOnlineMatchmakingParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineMatchmakingParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineMatchmakingParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZOnlineMatchmakingParams>(FName(TEXT("SBZOnlineMatchmakingParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineMatchmakingParams;
	struct Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuickMatch_MetaData[];
#endif
		static void NewProp_bQuickMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuickMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifficultyIdx;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityCompanies_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityCompanies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecurityCompanies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchmakingRandomSeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Command_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZOnlineMatchmakingParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineMatchmakingParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch_SetBit(void* Obj)
	{
		((FSBZOnlineMatchmakingParams*)Obj)->bQuickMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch = { "bQuickMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZOnlineMatchmakingParams), &Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineMatchmakingParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineMatchmakingParams, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_DifficultyIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineMatchmakingParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineMatchmakingParams, DifficultyIdx), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_DifficultyIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_DifficultyIdx_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_Inner = { "SecurityCompanies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineMatchmakingParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies = { "SecurityCompanies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineMatchmakingParams, SecurityCompanies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_MatchmakingRandomSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineMatchmakingParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_MatchmakingRandomSeed = { "MatchmakingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineMatchmakingParams, MatchmakingRandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_MatchmakingRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_MatchmakingRandomSeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineMatchmakingParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineMatchmakingParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineMatchmakingParams, Command), Z_Construct_UEnum_Starbreeze_ESBZMatchmakingCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_bQuickMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_DifficultyIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_SecurityCompanies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_MatchmakingRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::NewProp_Command,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZOnlineMatchmakingParams",
		sizeof(FSBZOnlineMatchmakingParams),
		alignof(FSBZOnlineMatchmakingParams),
		Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZOnlineMatchmakingParams"), sizeof(FSBZOnlineMatchmakingParams), Get_Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams_Hash() { return 737125979U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
