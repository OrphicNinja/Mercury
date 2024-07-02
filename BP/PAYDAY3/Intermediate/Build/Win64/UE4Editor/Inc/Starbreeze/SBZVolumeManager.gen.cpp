// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVolumeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVolumeManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVolumeTypeSetting();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVolumeType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZVolumeManager::execGetRelativeCinematicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeCinematicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVolumeManager::execGetVolumeManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVolumeManager**)Z_Param__Result=USBZVolumeManager::GetVolumeManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZVolumeManager::StaticRegisterNativesUSBZVolumeManager()
	{
		UClass* Class = USBZVolumeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRelativeCinematicVolume", &USBZVolumeManager::execGetRelativeCinematicVolume },
			{ "GetVolumeManager", &USBZVolumeManager::execGetVolumeManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics
	{
		struct SBZVolumeManager_eventGetRelativeCinematicVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeManager_eventGetRelativeCinematicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeManager, nullptr, "GetRelativeCinematicVolume", nullptr, nullptr, sizeof(SBZVolumeManager_eventGetRelativeCinematicVolume_Parms), Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics
	{
		struct SBZVolumeManager_eventGetVolumeManager_Parms
		{
			UObject* WorldContextObject;
			USBZVolumeManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeManager_eventGetVolumeManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeManager_eventGetVolumeManager_Parms, ReturnValue), Z_Construct_UClass_USBZVolumeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeManager, nullptr, "GetVolumeManager", nullptr, nullptr, sizeof(SBZVolumeManager_eventGetVolumeManager_Parms), Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVolumeManager_NoRegister()
	{
		return USBZVolumeManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZVolumeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MasterVolumeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MusicVolumeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFXVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SFXVolumeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VOVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VOVolumeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDVolumeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoipVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoipVolumeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicVolumeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CinematicVolumeSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PausedMuteSet_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PausedMuteSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PausedMuteSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PausedMuteSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVolumeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVolumeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVolumeManager_GetRelativeCinematicVolume, "GetRelativeCinematicVolume" }, // 1264423047
		{ &Z_Construct_UFunction_USBZVolumeManager_GetVolumeManager, "GetVolumeManager" }, // 3900990772
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVolumeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MasterVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MasterVolumeSetting = { "MasterVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, MasterVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MasterVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MasterVolumeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MusicVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MusicVolumeSetting = { "MusicVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, MusicVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MusicVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MusicVolumeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_SFXVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_SFXVolumeSetting = { "SFXVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, SFXVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_SFXVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_SFXVolumeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VOVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VOVolumeSetting = { "VOVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, VOVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VOVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VOVolumeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_HUDVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_HUDVolumeSetting = { "HUDVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, HUDVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_HUDVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_HUDVolumeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VoipVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VoipVolumeSetting = { "VoipVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, VoipVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VoipVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VoipVolumeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_CinematicVolumeSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_CinematicVolumeSetting = { "CinematicVolumeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, CinematicVolumeSetting), Z_Construct_UScriptStruct_FSBZVolumeTypeSetting, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_CinematicVolumeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_CinematicVolumeSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_ElementProp = { "PausedMuteSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZVolumeType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet = { "PausedMuteSet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, PausedMuteSet), METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PauseEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PauseEvent = { "PauseEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, PauseEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PauseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PauseEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_ResumeEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeManager" },
		{ "ModuleRelativePath", "Public/SBZVolumeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_ResumeEvent = { "ResumeEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVolumeManager, ResumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_ResumeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_ResumeEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVolumeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MasterVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_MusicVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_SFXVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VOVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_HUDVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_VoipVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_CinematicVolumeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PausedMuteSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_PauseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVolumeManager_Statics::NewProp_ResumeEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVolumeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVolumeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVolumeManager_Statics::ClassParams = {
		&USBZVolumeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVolumeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVolumeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVolumeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVolumeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVolumeManager, 3614209795);
	template<> STARBREEZE_API UClass* StaticClass<USBZVolumeManager>()
	{
		return USBZVolumeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVolumeManager(Z_Construct_UClass_USBZVolumeManager, &USBZVolumeManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVolumeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVolumeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
