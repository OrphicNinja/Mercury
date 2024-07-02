// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3DramaSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3DramaSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3DramaSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
class UScriptStruct* FPD3DramaSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3DramaSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3DramaSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3DramaSettings"), sizeof(FPD3DramaSettings), Get_Z_Construct_UScriptStruct_FPD3DramaSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3DramaSettings>()
{
	return FPD3DramaSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3DramaSettings(FPD3DramaSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3DramaSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3DramaSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3DramaSettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3DramaSettings>(FName(TEXT("PD3DramaSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3DramaSettings;
	struct Z_Construct_UScriptStruct_FPD3DramaSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyDecaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyDecaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHurtChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHurtChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHurtDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerHurtDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDefeatedChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerDefeatedChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKilledChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerKilledChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIKillDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIKillDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIKillDramaIncreaseAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIKillDramaIncreaseAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AITypesToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AITypesToIgnore;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DramaAlivePlayersModifier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DramaAlivePlayersModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DramaAlivePlayersModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DramaCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DramaCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DramaSpawnModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DramaSpawnModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3DramaSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_FullyDecaySeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_FullyDecaySeconds = { "FullyDecaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, FullyDecaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_FullyDecaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_FullyDecaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DecayDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DecayDelayTime = { "DecayDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, DecayDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DecayDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DecayDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtChange = { "PlayerHurtChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, PlayerHurtChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtDistanceMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtDistanceMultiplier = { "PlayerHurtDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, PlayerHurtDistanceMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerDefeatedChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerDefeatedChange = { "PlayerDefeatedChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, PlayerDefeatedChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerDefeatedChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerDefeatedChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerKilledChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerKilledChange = { "PlayerKilledChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, PlayerKilledChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerKilledChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerKilledChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDistance = { "AIKillDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, AIKillDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDramaIncreaseAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDramaIncreaseAmount = { "AIKillDramaIncreaseAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, AIKillDramaIncreaseAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDramaIncreaseAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDramaIncreaseAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AITypesToIgnore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AITypesToIgnore = { "AITypesToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, AITypesToIgnore), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AITypesToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AITypesToIgnore_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier_Inner = { "DramaAlivePlayersModifier", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier = { "DramaAlivePlayersModifier", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, DramaAlivePlayersModifier), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaCooldownTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaCooldownTime = { "DramaCooldownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, DramaCooldownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaSpawnModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DramaSettings" },
		{ "ModuleRelativePath", "Public/PD3DramaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaSpawnModifier = { "DramaSpawnModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3DramaSettings, DramaSpawnModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaSpawnModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaSpawnModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_FullyDecaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DecayDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerHurtDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerDefeatedChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_PlayerKilledChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AIKillDramaIncreaseAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_AITypesToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaAlivePlayersModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::NewProp_DramaSpawnModifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3DramaSettings",
		sizeof(FPD3DramaSettings),
		alignof(FPD3DramaSettings),
		Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3DramaSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3DramaSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3DramaSettings"), sizeof(FPD3DramaSettings), Get_Z_Construct_UScriptStruct_FPD3DramaSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3DramaSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3DramaSettings_Hash() { return 545066084U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
