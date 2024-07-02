// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AssaultDifficultySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AssaultDifficultySettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSquadLimits();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FPD3AssaultDifficultySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3AssaultDifficultySettings"), sizeof(FPD3AssaultDifficultySettings), Get_Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3AssaultDifficultySettings>()
{
	return FPD3AssaultDifficultySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3AssaultDifficultySettings(FPD3AssaultDifficultySettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3AssaultDifficultySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultDifficultySettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultDifficultySettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3AssaultDifficultySettings>(FName(TEXT("PD3AssaultDifficultySettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultDifficultySettings;
	struct Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAliveAISpawnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAliveAISpawnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMixing_MetaData[];
#endif
		static void NewProp_bAllowMixing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMixing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaitPhaseDurationProgressionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitPhaseDurationProgressionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaitPhaseDurationProgressionArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SustainPhaseDurationProgressionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainPhaseDurationProgressionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SustainPhaseDurationProgressionArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadLimits_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SquadLimits_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SquadLimits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TypeLimits_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeLimits_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TypeLimits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3AssaultDifficultySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_MaxAliveAISpawnCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_MaxAliveAISpawnCount = { "MaxAliveAISpawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultDifficultySettings, MaxAliveAISpawnCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_MaxAliveAISpawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_MaxAliveAISpawnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing_SetBit(void* Obj)
	{
		((FPD3AssaultDifficultySettings*)Obj)->bAllowMixing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing = { "bAllowMixing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPD3AssaultDifficultySettings), &Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray_Inner = { "ProgressionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray = { "ProgressionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultDifficultySettings, ProgressionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray_Inner = { "WaitPhaseDurationProgressionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray = { "WaitPhaseDurationProgressionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultDifficultySettings, WaitPhaseDurationProgressionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray_Inner = { "SustainPhaseDurationProgressionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray = { "SustainPhaseDurationProgressionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultDifficultySettings, SustainPhaseDurationProgressionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_ValueProp = { "SquadLimits", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSquadLimits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_Key_KeyProp = { "SquadLimits_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISquadOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits = { "SquadLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultDifficultySettings, SquadLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_ValueProp = { "TypeLimits", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_Key_KeyProp = { "TypeLimits_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultDifficultySettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultDifficultySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits = { "TypeLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultDifficultySettings, TypeLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_MaxAliveAISpawnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_bAllowMixing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_ProgressionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_WaitPhaseDurationProgressionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SustainPhaseDurationProgressionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_SquadLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::NewProp_TypeLimits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3AssaultDifficultySettings",
		sizeof(FPD3AssaultDifficultySettings),
		alignof(FPD3AssaultDifficultySettings),
		Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3AssaultDifficultySettings"), sizeof(FPD3AssaultDifficultySettings), Get_Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultDifficultySettings_Hash() { return 3787941437U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
