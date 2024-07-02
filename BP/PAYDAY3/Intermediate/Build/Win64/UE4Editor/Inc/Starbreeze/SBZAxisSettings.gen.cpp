// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAxisSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAxisSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAxisSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References
class UScriptStruct* FSBZAxisSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAxisSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAxisSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAxisSettings"), sizeof(FSBZAxisSettings), Get_Z_Construct_UScriptStruct_FSBZAxisSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAxisSettings>()
{
	return FSBZAxisSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAxisSettings(FSBZAxisSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAxisSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAxisSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAxisSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZAxisSettings>(FName(TEXT("SBZAxisSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAxisSettings;
	struct Z_Construct_UScriptStruct_FSBZAxisSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_YawRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyOrientationAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyOrientationAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAxisSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAxisSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_YawRotationAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAxisSettings" },
		{ "ModuleRelativePath", "Public/SBZAxisSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_YawRotationAxis = { "YawRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAxisSettings, YawRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_YawRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_YawRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_BodyOrientationAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAxisSettings" },
		{ "ModuleRelativePath", "Public/SBZAxisSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_BodyOrientationAlpha = { "BodyOrientationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAxisSettings, BodyOrientationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_BodyOrientationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_BodyOrientationAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_YawRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::NewProp_BodyOrientationAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAxisSettings",
		sizeof(FSBZAxisSettings),
		alignof(FSBZAxisSettings),
		Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAxisSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAxisSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAxisSettings"), sizeof(FSBZAxisSettings), Get_Z_Construct_UScriptStruct_FSBZAxisSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAxisSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAxisSettings_Hash() { return 1948117685U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
