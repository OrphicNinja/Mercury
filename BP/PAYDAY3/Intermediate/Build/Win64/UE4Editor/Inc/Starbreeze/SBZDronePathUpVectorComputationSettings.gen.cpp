// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDronePathUpVectorComputationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDronePathUpVectorComputationSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZDronePathUpVectorComputationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDronePathUpVectorComputationSettings"), sizeof(FSBZDronePathUpVectorComputationSettings), Get_Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDronePathUpVectorComputationSettings>()
{
	return FSBZDronePathUpVectorComputationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDronePathUpVectorComputationSettings(FSBZDronePathUpVectorComputationSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDronePathUpVectorComputationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDronePathUpVectorComputationSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDronePathUpVectorComputationSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZDronePathUpVectorComputationSettings>(FName(TEXT("SBZDronePathUpVectorComputationSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDronePathUpVectorComputationSettings;
	struct Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollAheadDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollAheadDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRollAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollStepDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RollStepDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAheadDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAheadDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPitchAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDronePathUpVectorComputationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDronePathUpVectorComputationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollAheadDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathUpVectorComputationSettings" },
		{ "ModuleRelativePath", "Public/SBZDronePathUpVectorComputationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollAheadDistance = { "RollAheadDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDronePathUpVectorComputationSettings, RollAheadDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollAheadDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollAheadDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxRollAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathUpVectorComputationSettings" },
		{ "ModuleRelativePath", "Public/SBZDronePathUpVectorComputationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxRollAngle = { "MaxRollAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDronePathUpVectorComputationSettings, MaxRollAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollStepDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathUpVectorComputationSettings" },
		{ "ModuleRelativePath", "Public/SBZDronePathUpVectorComputationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollStepDistance = { "RollStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDronePathUpVectorComputationSettings, RollStepDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollStepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollStepDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_PitchAheadDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathUpVectorComputationSettings" },
		{ "ModuleRelativePath", "Public/SBZDronePathUpVectorComputationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_PitchAheadDistance = { "PitchAheadDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDronePathUpVectorComputationSettings, PitchAheadDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_PitchAheadDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_PitchAheadDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxPitchAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDronePathUpVectorComputationSettings" },
		{ "ModuleRelativePath", "Public/SBZDronePathUpVectorComputationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxPitchAngle = { "MaxPitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDronePathUpVectorComputationSettings, MaxPitchAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxPitchAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollAheadDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_RollStepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_PitchAheadDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::NewProp_MaxPitchAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDronePathUpVectorComputationSettings",
		sizeof(FSBZDronePathUpVectorComputationSettings),
		alignof(FSBZDronePathUpVectorComputationSettings),
		Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDronePathUpVectorComputationSettings"), sizeof(FSBZDronePathUpVectorComputationSettings), Get_Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDronePathUpVectorComputationSettings_Hash() { return 2596049304U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
