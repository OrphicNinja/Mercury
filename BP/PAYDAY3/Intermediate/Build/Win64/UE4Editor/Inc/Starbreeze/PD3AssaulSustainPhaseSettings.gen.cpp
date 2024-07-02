// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AssaulSustainPhaseSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AssaulSustainPhaseSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FPD3AssaulSustainPhaseSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3AssaulSustainPhaseSettings"), sizeof(FPD3AssaulSustainPhaseSettings), Get_Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3AssaulSustainPhaseSettings>()
{
	return FPD3AssaulSustainPhaseSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3AssaulSustainPhaseSettings(FPD3AssaulSustainPhaseSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3AssaulSustainPhaseSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaulSustainPhaseSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaulSustainPhaseSettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3AssaulSustainPhaseSettings>(FName(TEXT("PD3AssaulSustainPhaseSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaulSustainPhaseSettings;
	struct Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainPhaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainPhaseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3AssaulSustainPhaseSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3AssaulSustainPhaseSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_StartAtProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaulSustainPhaseSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaulSustainPhaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_StartAtProgression = { "StartAtProgression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaulSustainPhaseSettings, StartAtProgression), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_StartAtProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_StartAtProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_SustainPhaseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaulSustainPhaseSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaulSustainPhaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_SustainPhaseDuration = { "SustainPhaseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaulSustainPhaseSettings, SustainPhaseDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_SustainPhaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_SustainPhaseDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_StartAtProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::NewProp_SustainPhaseDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3AssaulSustainPhaseSettings",
		sizeof(FPD3AssaulSustainPhaseSettings),
		alignof(FPD3AssaulSustainPhaseSettings),
		Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3AssaulSustainPhaseSettings"), sizeof(FPD3AssaulSustainPhaseSettings), Get_Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3AssaulSustainPhaseSettings_Hash() { return 3855111065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
