// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutDroneFogSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutDroneFogSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHoldOutDroneFogSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHoldOutDroneFogSettings"), sizeof(FSBZHoldOutDroneFogSettings), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHoldOutDroneFogSettings>()
{
	return FSBZHoldOutDroneFogSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHoldOutDroneFogSettings(FSBZHoldOutDroneFogSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHoldOutDroneFogSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneFogSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneFogSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZHoldOutDroneFogSettings>(FName(TEXT("SBZHoldOutDroneFogSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneFogSettings;
	struct Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetFogDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogTransitionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogTransitionSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneFogSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHoldOutDroneFogSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_TargetFogDensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneFogSettings" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneFogSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_TargetFogDensity = { "TargetFogDensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutDroneFogSettings, TargetFogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_TargetFogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_TargetFogDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_FogTransitionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneFogSettings" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneFogSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_FogTransitionSpeed = { "FogTransitionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutDroneFogSettings, FogTransitionSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_FogTransitionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_FogTransitionSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_TargetFogDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::NewProp_FogTransitionSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHoldOutDroneFogSettings",
		sizeof(FSBZHoldOutDroneFogSettings),
		alignof(FSBZHoldOutDroneFogSettings),
		Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHoldOutDroneFogSettings"), sizeof(FSBZHoldOutDroneFogSettings), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings_Hash() { return 3954355506U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
