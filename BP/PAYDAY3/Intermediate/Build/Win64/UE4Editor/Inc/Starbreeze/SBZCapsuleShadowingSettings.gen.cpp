// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCapsuleShadowingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCapsuleShadowingSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZCapsuleShadowingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCapsuleShadowingSettings"), sizeof(FSBZCapsuleShadowingSettings), Get_Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCapsuleShadowingSettings>()
{
	return FSBZCapsuleShadowingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCapsuleShadowingSettings(FSBZCapsuleShadowingSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCapsuleShadowingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCapsuleShadowingSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCapsuleShadowingSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZCapsuleShadowingSettings>(FName(TEXT("SBZCapsuleShadowingSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCapsuleShadowingSettings;
	struct Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleIndirectShadowMinVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleIndirectShadowMinVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZDeactivationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZDeactivationInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCapsuleShadowingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_Quality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleShadowingSettings" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleShadowingSettings, Quality), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleShadowingSettings" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_CapsuleIndirectShadowMinVisibility = { "CapsuleIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleShadowingSettings, CapsuleIndirectShadowMinVisibility), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_UpdateInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleShadowingSettings" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleShadowingSettings, UpdateInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_UpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_UpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_DistanceInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleShadowingSettings" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_DistanceInterval = { "DistanceInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleShadowingSettings, DistanceInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_DistanceInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_DistanceInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_ZDeactivationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCapsuleShadowingSettings" },
		{ "ModuleRelativePath", "Public/SBZCapsuleShadowingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_ZDeactivationInterval = { "ZDeactivationInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCapsuleShadowingSettings, ZDeactivationInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_ZDeactivationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_ZDeactivationInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_CapsuleIndirectShadowMinVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_UpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_DistanceInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::NewProp_ZDeactivationInterval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCapsuleShadowingSettings",
		sizeof(FSBZCapsuleShadowingSettings),
		alignof(FSBZCapsuleShadowingSettings),
		Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCapsuleShadowingSettings"), sizeof(FSBZCapsuleShadowingSettings), Get_Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCapsuleShadowingSettings_Hash() { return 2038094390U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
