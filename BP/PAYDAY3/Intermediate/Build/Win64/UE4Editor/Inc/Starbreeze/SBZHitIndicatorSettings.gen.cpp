// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHitIndicatorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHitIndicatorSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHitIndicatorSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FSBZHitIndicatorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHitIndicatorSettings"), sizeof(FSBZHitIndicatorSettings), Get_Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHitIndicatorSettings>()
{
	return FSBZHitIndicatorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHitIndicatorSettings(FSBZHitIndicatorSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHitIndicatorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitIndicatorSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitIndicatorSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZHitIndicatorSettings>(FName(TEXT("SBZHitIndicatorSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitIndicatorSettings;
	struct Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorColorHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorColorHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorColorCrit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorColorCrit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorColorKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorColorKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitIndicatorScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHitIndicatorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHitIndicatorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitIndicatorSettings" },
		{ "ModuleRelativePath", "Public/SBZHitIndicatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorHit = { "HitIndicatorColorHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitIndicatorSettings, HitIndicatorColorHit), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorCrit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitIndicatorSettings" },
		{ "ModuleRelativePath", "Public/SBZHitIndicatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorCrit = { "HitIndicatorColorCrit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitIndicatorSettings, HitIndicatorColorCrit), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorCrit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorCrit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorKill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitIndicatorSettings" },
		{ "ModuleRelativePath", "Public/SBZHitIndicatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorKill = { "HitIndicatorColorKill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitIndicatorSettings, HitIndicatorColorKill), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitIndicatorSettings" },
		{ "ModuleRelativePath", "Public/SBZHitIndicatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorScale = { "HitIndicatorScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitIndicatorSettings, HitIndicatorScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorCrit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorColorKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::NewProp_HitIndicatorScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHitIndicatorSettings",
		sizeof(FSBZHitIndicatorSettings),
		alignof(FSBZHitIndicatorSettings),
		Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHitIndicatorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHitIndicatorSettings"), sizeof(FSBZHitIndicatorSettings), Get_Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHitIndicatorSettings_Hash() { return 201747754U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
