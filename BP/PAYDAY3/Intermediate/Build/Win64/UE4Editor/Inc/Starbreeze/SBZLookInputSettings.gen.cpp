// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLookInputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLookInputSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookInputSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookInputStanceSettings();
// End Cross Module References
class UScriptStruct* FSBZLookInputSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLookInputSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLookInputSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLookInputSettings"), sizeof(FSBZLookInputSettings), Get_Z_Construct_UScriptStruct_FSBZLookInputSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLookInputSettings>()
{
	return FSBZLookInputSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLookInputSettings(FSBZLookInputSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLookInputSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookInputSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookInputSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZLookInputSettings>(FName(TEXT("SBZLookInputSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookInputSettings;
	struct Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSensitivityCurveEnabled_MetaData[];
#endif
		static void NewProp_bIsSensitivityCurveEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSensitivityCurveEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalStance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetingStance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLookInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLookInputSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_InputDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_InputDeadZone = { "InputDeadZone", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputSettings, InputDeadZone), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_InputDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_InputDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled_SetBit(void* Obj)
	{
		((FSBZLookInputSettings*)Obj)->bIsSensitivityCurveEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled = { "bIsSensitivityCurveEnabled", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLookInputSettings), &Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_NormalStance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_NormalStance = { "NormalStance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputSettings, NormalStance), Z_Construct_UScriptStruct_FSBZLookInputStanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_NormalStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_NormalStance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_TargetingStance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_TargetingStance = { "TargetingStance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputSettings, TargetingStance), Z_Construct_UScriptStruct_FSBZLookInputStanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_TargetingStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_TargetingStance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_InputDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_bIsSensitivityCurveEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_NormalStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::NewProp_TargetingStance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLookInputSettings",
		sizeof(FSBZLookInputSettings),
		alignof(FSBZLookInputSettings),
		Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLookInputSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLookInputSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLookInputSettings"), sizeof(FSBZLookInputSettings), Get_Z_Construct_UScriptStruct_FSBZLookInputSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLookInputSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLookInputSettings_Hash() { return 1196292206U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
