// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseSoundDataFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseSoundDataFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[];
#endif
		static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultOcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFitToGeometryCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFitToGeometryCollisionChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AkGeometryMap_ValueProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AkGeometryMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkGeometryMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AkGeometryMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDecayAbsorption_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalDecayAbsorption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbAuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultReverbAuxBus;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentDecayAuxBusMap_ValueProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentDecayAuxBusMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EnvironmentDecayAuxBusMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HFDampingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HFDampingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayEstimateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DecayEstimateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeToFirstReflectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HFDampingRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HFDampingRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayEstimateRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DecayEstimateRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflectionRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TimeToFirstReflectionRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioInputEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AudioInputEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticTextureParamsMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticTextureParamsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureParamsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AcousticTextureParamsMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitSwitchContainerMedia_MetaData[];
#endif
		static void NewProp_SplitSwitchContainerMedia_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplitSwitchContainerMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitMediaPerFolder_MetaData[];
#endif
		static void NewProp_SplitMediaPerFolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplitMediaPerFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseEventBasedPackaging_MetaData[];
#endif
		static void NewProp_UseEventBasedPackaging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseEventBasedPackaging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAutomaticAssetSynchronization_MetaData[];
#endif
		static void NewProp_EnableAutomaticAssetSynchronization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAutomaticAssetSynchronization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandletCommitMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandletCommitMessage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealCultureToWwiseCulture_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UnrealCultureToWwiseCulture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskedToUseNewAssetManagement_MetaData[];
#endif
		static void NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AskedToUseNewAssetManagement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_bEnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiCoreRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MigratedEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MigratedEnableMultiCoreRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixupRedirectorsDuringMigration_MetaData[];
#endif
		static void NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixupRedirectorsDuringMigration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryBudget_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MemoryBudget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterVolumeRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterVolumeRTPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes = { "MaxSimultaneousReverbVolumes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath = { "WwiseProjectPath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder = { "WwiseSoundDataFolder", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseSoundDataFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAutoConnectToWAAPI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel = { "DefaultOcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DefaultOcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel = { "DefaultFitToGeometryCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DefaultFitToGeometryCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_ValueProp = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_Key_KeyProp = { "AkGeometryMap_Key", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0010000000004045, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, AkGeometryMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption = { "GlobalDecayAbsorption", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, GlobalDecayAbsorption), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus = { "DefaultReverbAuxBus", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DefaultReverbAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_ValueProp = { "EnvironmentDecayAuxBusMap", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp = { "EnvironmentDecayAuxBusMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap = { "EnvironmentDecayAuxBusMap", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, EnvironmentDecayAuxBusMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName = { "HFDampingName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, HFDampingName), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName = { "DecayEstimateName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DecayEstimateName), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName = { "TimeToFirstReflectionName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, TimeToFirstReflectionName), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC = { "HFDampingRTPC", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, HFDampingRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC = { "DecayEstimateRTPC", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DecayEstimateRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC = { "TimeToFirstReflectionRTPC", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, TimeToFirstReflectionRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent = { "AudioInputEvent", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, AudioInputEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_ValueProp = { "AcousticTextureParamsMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkAcousticTextureParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_Key_KeyProp = { "AcousticTextureParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap = { "AcousticTextureParamsMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, AcousticTextureParamsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitSwitchContainerMedia = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia = { "SplitSwitchContainerMedia", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitMediaPerFolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder = { "SplitMediaPerFolder", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->UseEventBasedPackaging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging = { "UseEventBasedPackaging", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->EnableAutomaticAssetSynchronization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization = { "EnableAutomaticAssetSynchronization", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage = { "CommandletCommitMessage", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, CommandletCommitMessage), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_ValueProp = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp = { "UnrealCultureToWwiseCulture_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, UnrealCultureToWwiseCulture), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->AskedToUseNewAssetManagement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement = { "AskedToUseNewAssetManagement", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bEnableMultiCoreRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering = { "bEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->MigratedEnableMultiCoreRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering = { "MigratedEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->FixupRedirectorsDuringMigration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration = { "FixupRedirectorsDuringMigration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MemoryBudget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MemoryBudget = { "MemoryBudget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, MemoryBudget), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MemoryBudget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MemoryBudget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MasterVolumeRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSettings" },
		{ "ModuleRelativePath", "Public/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MasterVolumeRTPC = { "MasterVolumeRTPC", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, MasterVolumeRTPC), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MasterVolumeRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MasterVolumeRTPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MemoryBudget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MasterVolumeRTPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSettings_Statics::ClassParams = {
		&UAkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettings, 3478152026);
	template<> AKAUDIO_API UClass* StaticClass<UAkSettings>()
	{
		return UAkSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettings(Z_Construct_UClass_UAkSettings, &UAkSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
