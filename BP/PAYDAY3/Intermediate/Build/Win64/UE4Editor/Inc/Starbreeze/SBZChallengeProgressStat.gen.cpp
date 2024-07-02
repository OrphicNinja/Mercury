// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeProgressStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeProgressStat() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressStat();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZChallengeProgressStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeProgressStat, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeProgressStat"), sizeof(FSBZChallengeProgressStat), Get_Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeProgressStat>()
{
	return FSBZChallengeProgressStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeProgressStat(FSBZChallengeProgressStat::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeProgressStat"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeProgressStat
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeProgressStat()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeProgressStat>(FName(TEXT("SBZChallengeProgressStat")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeProgressStat;
	struct Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeProgressStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_StatId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressStat.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_StatId = { "StatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressStat, StatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_StatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_StatId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressStat, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_TargetProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressStat" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_TargetProgress = { "TargetProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressStat, TargetProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_TargetProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_TargetProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_StatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::NewProp_TargetProgress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeProgressStat",
		sizeof(FSBZChallengeProgressStat),
		alignof(FSBZChallengeProgressStat),
		Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeProgressStat"), sizeof(FSBZChallengeProgressStat), Get_Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeProgressStat_Hash() { return 1938060872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
