// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSurfaceImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSurfaceImpactConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceImpactLod();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSurfaceImpactConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSurfaceImpactConfig"), sizeof(FSBZSurfaceImpactConfig), Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSurfaceImpactConfig>()
{
	return FSBZSurfaceImpactConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSurfaceImpactConfig(FSBZSurfaceImpactConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSurfaceImpactConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceImpactConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceImpactConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZSurfaceImpactConfig>(FName(TEXT("SBZSurfaceImpactConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceImpactConfig;
	struct Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalLod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecalAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalInstanceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecalInstanceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalFadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalFadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleLod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundLod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundRtpc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSurfaceImpactConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalLod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalLod = { "DecalLod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, DecalLod), Z_Construct_UScriptStruct_FSBZSurfaceImpactLod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalAmount = { "DecalAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, DecalAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalInstanceAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalInstanceAmount = { "DecalInstanceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, DecalInstanceAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalInstanceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalInstanceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalFadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalFadeOutDuration = { "DecalFadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, DecalFadeOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalFadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_ParticleLod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_ParticleLod = { "ParticleLod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, ParticleLod), Z_Construct_UScriptStruct_FSBZSurfaceImpactLod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_ParticleLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_ParticleLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundLod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundLod = { "SoundLod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, SoundLod), Z_Construct_UScriptStruct_FSBZSurfaceImpactLod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundEvent = { "SoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, SoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_StopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_StopSoundEvent = { "StopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, StopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_StopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_StopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZSurfaceImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundRtpc = { "SoundRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceImpactConfig, SoundRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundRtpc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalInstanceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_DecalFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_ParticleLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_StopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::NewProp_SoundRtpc,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSurfaceImpactConfig",
		sizeof(FSBZSurfaceImpactConfig),
		alignof(FSBZSurfaceImpactConfig),
		Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSurfaceImpactConfig"), sizeof(FSBZSurfaceImpactConfig), Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceImpactConfig_Hash() { return 2231499393U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
