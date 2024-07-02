// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveTypeLimit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveTypeLimit() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSpawnWaveTypeLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnWaveTypeLimit"), sizeof(FSBZSpawnWaveTypeLimit), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnWaveTypeLimit>()
{
	return FSBZSpawnWaveTypeLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnWaveTypeLimit(FSBZSpawnWaveTypeLimit::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnWaveTypeLimit"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveTypeLimit
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveTypeLimit()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnWaveTypeLimit>(FName(TEXT("SBZSpawnWaveTypeLimit")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveTypeLimit;
	struct Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KilledCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveTypeLimit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnWaveTypeLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_CountLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveTypeLimit" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveTypeLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_CountLimit = { "CountLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveTypeLimit, CountLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_CountLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_CountLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveTypeLimit" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveTypeLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveTypeLimit, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_KilledCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveTypeLimit" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveTypeLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_KilledCooldown = { "KilledCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveTypeLimit, KilledCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_KilledCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_KilledCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_CountLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::NewProp_KilledCooldown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnWaveTypeLimit",
		sizeof(FSBZSpawnWaveTypeLimit),
		alignof(FSBZSpawnWaveTypeLimit),
		Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnWaveTypeLimit"), sizeof(FSBZSpawnWaveTypeLimit), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit_Hash() { return 1065721807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
