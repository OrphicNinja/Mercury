// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMusicManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMusicManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMusicManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMusicManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMusicManager::execGetMusicManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZMusicManager**)Z_Param__Result=USBZMusicManager::GetMusicManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execIsMuted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMuted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execPlayMusic)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_GET_UBOOL(Z_Param_bStopCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMusic(Z_Param_AudioEvent,Z_Param_bStopCurrent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execPostEndMusicSequence)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioStopEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostEndMusicSequence(Z_Param_AudioStopEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execSetMuted)
	{
		P_GET_UBOOL(Z_Param_bInMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMuted(Z_Param_bInMuted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execSetRTPCValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RTPCValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRTPCValue(Z_Param_RTPC,Z_Param_RTPCValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execSetSwitch)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitch(Z_Param_SwitchGroup,Z_Param_SwitchState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMusicManager::execStopMusic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMusic();
		P_NATIVE_END;
	}
	void USBZMusicManager::StaticRegisterNativesUSBZMusicManager()
	{
		UClass* Class = USBZMusicManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMusicManager", &USBZMusicManager::execGetMusicManager },
			{ "IsMuted", &USBZMusicManager::execIsMuted },
			{ "PlayMusic", &USBZMusicManager::execPlayMusic },
			{ "PostEndMusicSequence", &USBZMusicManager::execPostEndMusicSequence },
			{ "SetMuted", &USBZMusicManager::execSetMuted },
			{ "SetRTPCValue", &USBZMusicManager::execSetRTPCValue },
			{ "SetSwitch", &USBZMusicManager::execSetSwitch },
			{ "SetVolume", &USBZMusicManager::execSetVolume },
			{ "StopMusic", &USBZMusicManager::execStopMusic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics
	{
		struct SBZMusicManager_eventGetMusicManager_Parms
		{
			const UObject* WorldContextObject;
			USBZMusicManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventGetMusicManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventGetMusicManager_Parms, ReturnValue), Z_Construct_UClass_USBZMusicManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "GetMusicManager", nullptr, nullptr, sizeof(SBZMusicManager_eventGetMusicManager_Parms), Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_GetMusicManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_GetMusicManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics
	{
		struct SBZMusicManager_eventIsMuted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMusicManager_eventIsMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMusicManager_eventIsMuted_Parms), &Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "IsMuted", nullptr, nullptr, sizeof(SBZMusicManager_eventIsMuted_Parms), Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_IsMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_IsMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics
	{
		struct SBZMusicManager_eventPlayMusic_Parms
		{
			UAkAudioEvent* AudioEvent;
			bool bStopCurrent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static void NewProp_bStopCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopCurrent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventPlayMusic_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::NewProp_bStopCurrent_SetBit(void* Obj)
	{
		((SBZMusicManager_eventPlayMusic_Parms*)Obj)->bStopCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::NewProp_bStopCurrent = { "bStopCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMusicManager_eventPlayMusic_Parms), &Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::NewProp_bStopCurrent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::NewProp_bStopCurrent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "PlayMusic", nullptr, nullptr, sizeof(SBZMusicManager_eventPlayMusic_Parms), Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_PlayMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_PlayMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics
	{
		struct SBZMusicManager_eventPostEndMusicSequence_Parms
		{
			UAkAudioEvent* AudioStopEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioStopEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::NewProp_AudioStopEvent = { "AudioStopEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventPostEndMusicSequence_Parms, AudioStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::NewProp_AudioStopEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "PostEndMusicSequence", nullptr, nullptr, sizeof(SBZMusicManager_eventPostEndMusicSequence_Parms), Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics
	{
		struct SBZMusicManager_eventSetMuted_Parms
		{
			bool bInMuted;
		};
		static void NewProp_bInMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInMuted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::NewProp_bInMuted_SetBit(void* Obj)
	{
		((SBZMusicManager_eventSetMuted_Parms*)Obj)->bInMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::NewProp_bInMuted = { "bInMuted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMusicManager_eventSetMuted_Parms), &Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::NewProp_bInMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::NewProp_bInMuted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "SetMuted", nullptr, nullptr, sizeof(SBZMusicManager_eventSetMuted_Parms), Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_SetMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_SetMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics
	{
		struct SBZMusicManager_eventSetRTPCValue_Parms
		{
			FName RTPC;
			float RTPCValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventSetRTPCValue_Parms, RTPCValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::NewProp_RTPCValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "SetRTPCValue", nullptr, nullptr, sizeof(SBZMusicManager_eventSetRTPCValue_Parms), Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics
	{
		struct SBZMusicManager_eventSetSwitch_Parms
		{
			FName SwitchGroup;
			FName SwitchState;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::NewProp_SwitchState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "SetSwitch", nullptr, nullptr, sizeof(SBZMusicManager_eventSetSwitch_Parms), Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics
	{
		struct SBZMusicManager_eventSetVolume_Parms
		{
			float NewVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMusicManager_eventSetVolume_Parms, NewVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "SetVolume", nullptr, nullptr, sizeof(SBZMusicManager_eventSetVolume_Parms), Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMusicManager_StopMusic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMusicManager_StopMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMusicManager_StopMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMusicManager, nullptr, "StopMusic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMusicManager_StopMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMusicManager_StopMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMusicManager_StopMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMusicManager_StopMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMusicManager_NoRegister()
	{
		return USBZMusicManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZMusicManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VolumeRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMusicMainMenu_MetaData[];
#endif
		static void NewProp_bIsMusicMainMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMusicMainMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMusicManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMusicManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMusicManager_GetMusicManager, "GetMusicManager" }, // 3100538536
		{ &Z_Construct_UFunction_USBZMusicManager_IsMuted, "IsMuted" }, // 906747848
		{ &Z_Construct_UFunction_USBZMusicManager_PlayMusic, "PlayMusic" }, // 2996318450
		{ &Z_Construct_UFunction_USBZMusicManager_PostEndMusicSequence, "PostEndMusicSequence" }, // 3126364926
		{ &Z_Construct_UFunction_USBZMusicManager_SetMuted, "SetMuted" }, // 224009826
		{ &Z_Construct_UFunction_USBZMusicManager_SetRTPCValue, "SetRTPCValue" }, // 4170044526
		{ &Z_Construct_UFunction_USBZMusicManager_SetSwitch, "SetSwitch" }, // 2051028900
		{ &Z_Construct_UFunction_USBZMusicManager_SetVolume, "SetVolume" }, // 1793457679
		{ &Z_Construct_UFunction_USBZMusicManager_StopMusic, "StopMusic" }, // 404038714
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMusicManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMusicManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMusicManager_Statics::NewProp_VolumeRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMusicManager" },
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMusicManager_Statics::NewProp_VolumeRTPC = { "VolumeRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMusicManager, VolumeRTPC), METADATA_PARAMS(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_VolumeRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_VolumeRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMusicManager_Statics::NewProp_StopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMusicManager" },
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMusicManager_Statics::NewProp_StopEvent = { "StopEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMusicManager, StopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_StopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_StopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMusicManager_Statics::NewProp_CurrentVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMusicManager" },
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMusicManager_Statics::NewProp_CurrentVolume = { "CurrentVolume", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMusicManager, CurrentVolume), METADATA_PARAMS(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_CurrentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_CurrentVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMusicManager" },
		{ "ModuleRelativePath", "Public/SBZMusicManager.h" },
	};
#endif
	void Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu_SetBit(void* Obj)
	{
		((USBZMusicManager*)Obj)->bIsMusicMainMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu = { "bIsMusicMainMenu", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMusicManager), &Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMusicManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMusicManager_Statics::NewProp_VolumeRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMusicManager_Statics::NewProp_StopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMusicManager_Statics::NewProp_CurrentVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMusicManager_Statics::NewProp_bIsMusicMainMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMusicManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMusicManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMusicManager_Statics::ClassParams = {
		&USBZMusicManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMusicManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMusicManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMusicManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMusicManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMusicManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMusicManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMusicManager, 2207070330);
	template<> STARBREEZE_API UClass* StaticClass<USBZMusicManager>()
	{
		return USBZMusicManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMusicManager(Z_Construct_UClass_USBZMusicManager, &USBZMusicManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMusicManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMusicManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
