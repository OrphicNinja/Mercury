// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLookInputStanceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLookInputStanceSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookInputStanceSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FSBZLookInputStanceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLookInputStanceSettings"), sizeof(FSBZLookInputStanceSettings), Get_Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLookInputStanceSettings>()
{
	return FSBZLookInputStanceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLookInputStanceSettings(FSBZLookInputStanceSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLookInputStanceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookInputStanceSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookInputStanceSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZLookInputStanceSettings>(FName(TEXT("SBZLookInputStanceSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookInputStanceSettings;
	struct Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CardinalDeadZoneForXInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CardinalDeadZoneForXInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CardinalDeadZoneForYInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CardinalDeadZoneForYInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSensitivityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalSensitivityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSensitivityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalSensitivityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLookInputStanceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForXInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForXInput = { "CardinalDeadZoneForXInput", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, CardinalDeadZoneForXInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForXInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForXInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForYInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForYInput = { "CardinalDeadZoneForYInput", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, CardinalDeadZoneForYInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForYInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForYInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_HorizontalSensitivityCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_HorizontalSensitivityCurve = { "HorizontalSensitivityCurve", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, HorizontalSensitivityCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_HorizontalSensitivityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_HorizontalSensitivityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_VerticalSensitivityCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_VerticalSensitivityCurve = { "VerticalSensitivityCurve", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, VerticalSensitivityCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_VerticalSensitivityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_VerticalSensitivityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationDeadZone = { "AccelerationDeadZone", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, AccelerationDeadZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationMultiplier = { "AccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, AccelerationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookInputStanceSettings" },
		{ "ModuleRelativePath", "Public/SBZLookInputStanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationTime = { "AccelerationTime", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookInputStanceSettings, AccelerationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForXInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_CardinalDeadZoneForYInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_HorizontalSensitivityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_VerticalSensitivityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::NewProp_AccelerationTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLookInputStanceSettings",
		sizeof(FSBZLookInputStanceSettings),
		alignof(FSBZLookInputStanceSettings),
		Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLookInputStanceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLookInputStanceSettings"), sizeof(FSBZLookInputStanceSettings), Get_Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLookInputStanceSettings_Hash() { return 859810492U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
