// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AssaultPlatformSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AssaultPlatformSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FPD3AssaultPlatformSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3AssaultPlatformSettings"), sizeof(FPD3AssaultPlatformSettings), Get_Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3AssaultPlatformSettings>()
{
	return FPD3AssaultPlatformSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3AssaultPlatformSettings(FPD3AssaultPlatformSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3AssaultPlatformSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultPlatformSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultPlatformSettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3AssaultPlatformSettings>(FName(TEXT("PD3AssaultPlatformSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultPlatformSettings;
	struct Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTotalAISpawnCountModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTotalAISpawnCountModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAliveAISpawnCountModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAliveAISpawnCountModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnGroupQueryCountModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpawnGroupQueryCountModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3AssaultPlatformSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3AssaultPlatformSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxTotalAISpawnCountModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultPlatformSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxTotalAISpawnCountModifier = { "MaxTotalAISpawnCountModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultPlatformSettings, MaxTotalAISpawnCountModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxTotalAISpawnCountModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxTotalAISpawnCountModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxAliveAISpawnCountModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultPlatformSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxAliveAISpawnCountModifier = { "MaxAliveAISpawnCountModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultPlatformSettings, MaxAliveAISpawnCountModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxAliveAISpawnCountModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxAliveAISpawnCountModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxSpawnGroupQueryCountModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultPlatformSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxSpawnGroupQueryCountModifier = { "MaxSpawnGroupQueryCountModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultPlatformSettings, MaxSpawnGroupQueryCountModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxSpawnGroupQueryCountModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxSpawnGroupQueryCountModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxTotalAISpawnCountModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxAliveAISpawnCountModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::NewProp_MaxSpawnGroupQueryCountModifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3AssaultPlatformSettings",
		sizeof(FPD3AssaultPlatformSettings),
		alignof(FPD3AssaultPlatformSettings),
		Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3AssaultPlatformSettings"), sizeof(FPD3AssaultPlatformSettings), Get_Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultPlatformSettings_Hash() { return 2162945290U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
