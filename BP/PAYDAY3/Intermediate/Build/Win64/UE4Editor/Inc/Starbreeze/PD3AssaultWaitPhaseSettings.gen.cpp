// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AssaultWaitPhaseSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AssaultWaitPhaseSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FPD3AssaultWaitPhaseSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3AssaultWaitPhaseSettings"), sizeof(FPD3AssaultWaitPhaseSettings), Get_Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3AssaultWaitPhaseSettings>()
{
	return FPD3AssaultWaitPhaseSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3AssaultWaitPhaseSettings(FPD3AssaultWaitPhaseSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3AssaultWaitPhaseSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultWaitPhaseSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultWaitPhaseSettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3AssaultWaitPhaseSettings>(FName(TEXT("PD3AssaultWaitPhaseSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultWaitPhaseSettings;
	struct Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAtProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartAtProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitPhaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitPhaseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3AssaultWaitPhaseSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3AssaultWaitPhaseSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_StartAtProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultWaitPhaseSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultWaitPhaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_StartAtProgression = { "StartAtProgression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultWaitPhaseSettings, StartAtProgression), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_StartAtProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_StartAtProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_WaitPhaseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultWaitPhaseSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultWaitPhaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_WaitPhaseDuration = { "WaitPhaseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultWaitPhaseSettings, WaitPhaseDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_WaitPhaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_WaitPhaseDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_StartAtProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::NewProp_WaitPhaseDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3AssaultWaitPhaseSettings",
		sizeof(FPD3AssaultWaitPhaseSettings),
		alignof(FPD3AssaultWaitPhaseSettings),
		Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3AssaultWaitPhaseSettings"), sizeof(FPD3AssaultWaitPhaseSettings), Get_Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultWaitPhaseSettings_Hash() { return 4069190187U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
