// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalVoiceChatPro/Public/MicrophoneSpeakComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicrophoneSpeakComponent() {}
// Cross Module References
	UNIVERSALVOICECHATPRO_API UFunction* Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UMicrophoneSpeakComponent();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UniversalVoiceChatPro();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics
	{
		struct MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms
		{
			TArray<uint8> data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "DataMicrophoneReceived__DelegateSignature", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms), Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execendSpeaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->endSpeaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execinitAudioResources)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_voiceSampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param__voiceNumChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->initAudioResources(Z_Param_voiceSampleRate,Z_Param__voiceNumChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execisPlayingAudioVoice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isPlayingAudioVoice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execmuteAudio)
	{
		P_GET_UBOOL(Z_Param__isMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->muteAudio(Z_Param__isMuted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execpayloadReceivedVoiceData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_dataEncoded);
		P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
		P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->payloadReceivedVoiceData(Z_Param_Out_dataEncoded,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execRPCClientTransmitVoiceData)
	{
		P_GET_TARRAY(uint8,Z_Param_data);
		P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
		P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
		P_GET_UBOOL(Z_Param__isGlobal);
		P_GET_PROPERTY(FIntProperty,Z_Param__radioChannel);
		P_GET_UBOOL(Z_Param__useRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param__maxRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientTransmitVoiceData_Implementation(Z_Param_data,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize,Z_Param__isGlobal,Z_Param__radioChannel,Z_Param__useRange,Z_Param__maxRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execRPCReceiveVoiceFromServer)
	{
		P_GET_OBJECT(UMicrophoneSpeakComponent,Z_Param_compToOutputVoice);
		P_GET_TARRAY(uint8,Z_Param_dataEncoded);
		P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
		P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCReceiveVoiceFromServer_Implementation(Z_Param_compToOutputVoice,Z_Param_dataEncoded,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execRPCServerBroadcastVoiceData)
	{
		P_GET_TARRAY(uint8,Z_Param_data);
		P_GET_PROPERTY(FIntProperty,Z_Param_sampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_numchannels);
		P_GET_PROPERTY(FIntProperty,Z_Param_PCMSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCServerBroadcastVoiceData_Implementation(Z_Param_data,Z_Param_sampleRate,Z_Param_numchannels,Z_Param_PCMSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execsetAttenuationAssetPath)
	{
		P_GET_UBOOL(Z_Param_enableAttenuation);
		P_GET_PROPERTY(FStrProperty,Z_Param__pathToAttenuationAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setAttenuationAssetPath(Z_Param_enableAttenuation,Z_Param__pathToAttenuationAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execSetVoiceVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrophoneSpeakComponent::execstartSpeaking)
	{
		P_GET_UBOOL(Z_Param__shouldHearMyOwnVoice);
		P_GET_UBOOL(Z_Param_isGlobal);
		P_GET_PROPERTY(FIntProperty,Z_Param_radioChannel);
		P_GET_UBOOL(Z_Param_useRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->startSpeaking(Z_Param__shouldHearMyOwnVoice,Z_Param_isGlobal,Z_Param_radioChannel,Z_Param_useRange,Z_Param_maxRange);
		P_NATIVE_END;
	}
	static FName NAME_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData = FName(TEXT("RPCClientTransmitVoiceData"));
	void UMicrophoneSpeakComponent::RPCClientTransmitVoiceData(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange)
	{
		MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms Parms;
		Parms.data=data;
		Parms.sampleRate=sampleRate;
		Parms.numchannels=numchannels;
		Parms.PCMSize=PCMSize;
		Parms._isGlobal=_isGlobal ? true : false;
		Parms._radioChannel=_radioChannel;
		Parms._useRange=_useRange ? true : false;
		Parms._maxRange=_maxRange;
		ProcessEvent(FindFunctionChecked(NAME_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData),&Parms);
	}
	static FName NAME_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer = FName(TEXT("RPCReceiveVoiceFromServer"));
	void UMicrophoneSpeakComponent::RPCReceiveVoiceFromServer(UMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize)
	{
		MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms Parms;
		Parms.compToOutputVoice=compToOutputVoice;
		Parms.dataEncoded=dataEncoded;
		Parms.sampleRate=sampleRate;
		Parms.numchannels=numchannels;
		Parms.PCMSize=PCMSize;
		ProcessEvent(FindFunctionChecked(NAME_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer),&Parms);
	}
	static FName NAME_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData = FName(TEXT("RPCServerBroadcastVoiceData"));
	void UMicrophoneSpeakComponent::RPCServerBroadcastVoiceData(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize)
	{
		MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms Parms;
		Parms.data=data;
		Parms.sampleRate=sampleRate;
		Parms.numchannels=numchannels;
		Parms.PCMSize=PCMSize;
		ProcessEvent(FindFunctionChecked(NAME_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData),&Parms);
	}
	void UMicrophoneSpeakComponent::StaticRegisterNativesUMicrophoneSpeakComponent()
	{
		UClass* Class = UMicrophoneSpeakComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "endSpeaking", &UMicrophoneSpeakComponent::execendSpeaking },
			{ "initAudioResources", &UMicrophoneSpeakComponent::execinitAudioResources },
			{ "isPlayingAudioVoice", &UMicrophoneSpeakComponent::execisPlayingAudioVoice },
			{ "muteAudio", &UMicrophoneSpeakComponent::execmuteAudio },
			{ "payloadReceivedVoiceData", &UMicrophoneSpeakComponent::execpayloadReceivedVoiceData },
			{ "RPCClientTransmitVoiceData", &UMicrophoneSpeakComponent::execRPCClientTransmitVoiceData },
			{ "RPCReceiveVoiceFromServer", &UMicrophoneSpeakComponent::execRPCReceiveVoiceFromServer },
			{ "RPCServerBroadcastVoiceData", &UMicrophoneSpeakComponent::execRPCServerBroadcastVoiceData },
			{ "setAttenuationAssetPath", &UMicrophoneSpeakComponent::execsetAttenuationAssetPath },
			{ "SetVoiceVolume", &UMicrophoneSpeakComponent::execSetVoiceVolume },
			{ "startSpeaking", &UMicrophoneSpeakComponent::execstartSpeaking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "endSpeaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics
	{
		struct MicrophoneSpeakComponent_eventinitAudioResources_Parms
		{
			int32 voiceSampleRate;
			int32 _voiceNumChannels;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_voiceSampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__voiceNumChannels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp_voiceSampleRate = { "voiceSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventinitAudioResources_Parms, voiceSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp__voiceNumChannels = { "_voiceNumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventinitAudioResources_Parms, _voiceNumChannels), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventinitAudioResources_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventinitAudioResources_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp_voiceSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp__voiceNumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "initAudioResources", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventinitAudioResources_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics
	{
		struct MicrophoneSpeakComponent_eventisPlayingAudioVoice_Parms
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
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventisPlayingAudioVoice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventisPlayingAudioVoice_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "isPlayingAudioVoice", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventisPlayingAudioVoice_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics
	{
		struct MicrophoneSpeakComponent_eventmuteAudio_Parms
		{
			bool _isMuted;
		};
		static void NewProp__isMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMuted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::NewProp__isMuted_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventmuteAudio_Parms*)Obj)->_isMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::NewProp__isMuted = { "_isMuted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventmuteAudio_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::NewProp__isMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::NewProp__isMuted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "muteAudio", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventmuteAudio_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics
	{
		struct MicrophoneSpeakComponent_eventpayloadReceivedVoiceData_Parms
		{
			TArray<uint8> dataEncoded;
			int32 sampleRate;
			int32 numchannels;
			int32 PCMSize;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_dataEncoded_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataEncoded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dataEncoded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numchannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PCMSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded_Inner = { "dataEncoded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded = { "dataEncoded", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventpayloadReceivedVoiceData_Parms, dataEncoded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventpayloadReceivedVoiceData_Parms, sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventpayloadReceivedVoiceData_Parms, numchannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventpayloadReceivedVoiceData_Parms, PCMSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_dataEncoded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_numchannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::NewProp_PCMSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "payloadReceivedVoiceData", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventpayloadReceivedVoiceData_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numchannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PCMSize;
		static void NewProp__isGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isGlobal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__radioChannel;
		static void NewProp__useRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, numchannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, PCMSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__isGlobal_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms*)Obj)->_isGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__isGlobal = { "_isGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__isGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__radioChannel = { "_radioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, _radioChannel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__useRange_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms*)Obj)->_useRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__useRange = { "_useRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__useRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__maxRange = { "_maxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms, _maxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_numchannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp_PCMSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__isGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__radioChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__useRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::NewProp__maxRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "RPCClientTransmitVoiceData", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_compToOutputVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_compToOutputVoice;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_dataEncoded_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataEncoded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dataEncoded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numchannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PCMSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice = { "compToOutputVoice", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, compToOutputVoice), Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_Inner = { "dataEncoded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded = { "dataEncoded", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, dataEncoded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, numchannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms, PCMSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_compToOutputVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_dataEncoded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_numchannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::NewProp_PCMSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "RPCReceiveVoiceFromServer", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numchannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PCMSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_numchannels = { "numchannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, numchannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_PCMSize = { "PCMSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms, PCMSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_numchannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::NewProp_PCMSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "RPCServerBroadcastVoiceData", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics
	{
		struct MicrophoneSpeakComponent_eventsetAttenuationAssetPath_Parms
		{
			bool enableAttenuation;
			FString _pathToAttenuationAsset;
		};
		static void NewProp_enableAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enableAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathToAttenuationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pathToAttenuationAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp_enableAttenuation_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventsetAttenuationAssetPath_Parms*)Obj)->enableAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp_enableAttenuation = { "enableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventsetAttenuationAssetPath_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp_enableAttenuation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp__pathToAttenuationAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp__pathToAttenuationAsset = { "_pathToAttenuationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventsetAttenuationAssetPath_Parms, _pathToAttenuationAsset), METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp__pathToAttenuationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp__pathToAttenuationAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp_enableAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::NewProp__pathToAttenuationAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "setAttenuationAssetPath", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventsetAttenuationAssetPath_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics
	{
		struct MicrophoneSpeakComponent_eventSetVoiceVolume_Parms
		{
			float volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventSetVoiceVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "SetVoiceVolume", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventSetVoiceVolume_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics
	{
		struct MicrophoneSpeakComponent_eventstartSpeaking_Parms
		{
			bool _shouldHearMyOwnVoice;
			bool isGlobal;
			int32 radioChannel;
			bool useRange;
			float maxRange;
			bool ReturnValue;
		};
		static void NewProp__shouldHearMyOwnVoice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldHearMyOwnVoice;
		static void NewProp_isGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGlobal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_radioChannel;
		static void NewProp_useRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useRange;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp__shouldHearMyOwnVoice_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventstartSpeaking_Parms*)Obj)->_shouldHearMyOwnVoice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp__shouldHearMyOwnVoice = { "_shouldHearMyOwnVoice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventstartSpeaking_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp__shouldHearMyOwnVoice_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_isGlobal_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventstartSpeaking_Parms*)Obj)->isGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_isGlobal = { "isGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventstartSpeaking_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_isGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_radioChannel = { "radioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventstartSpeaking_Parms, radioChannel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_useRange_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventstartSpeaking_Parms*)Obj)->useRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_useRange = { "useRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventstartSpeaking_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_useRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_maxRange = { "maxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrophoneSpeakComponent_eventstartSpeaking_Parms, maxRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrophoneSpeakComponent_eventstartSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrophoneSpeakComponent_eventstartSpeaking_Parms), &Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp__shouldHearMyOwnVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_isGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_radioChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_useRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_maxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrophoneSpeakComponent, nullptr, "startSpeaking", nullptr, nullptr, sizeof(MicrophoneSpeakComponent_eventstartSpeaking_Parms), Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister()
	{
		return UMicrophoneSpeakComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMicrophoneSpeakComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDataMicrophoneReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataMicrophoneReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCaptureAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceCaptureAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCaptureSoundWaveProcedural_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceCaptureSoundWaveProcedural;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalVoiceChatPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature, "DataMicrophoneReceived__DelegateSignature" }, // 1080963645
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_endSpeaking, "endSpeaking" }, // 4106989992
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_initAudioResources, "initAudioResources" }, // 1929617379
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_isPlayingAudioVoice, "isPlayingAudioVoice" }, // 106230270
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_muteAudio, "muteAudio" }, // 3286848994
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_payloadReceivedVoiceData, "payloadReceivedVoiceData" }, // 2230160993
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCClientTransmitVoiceData, "RPCClientTransmitVoiceData" }, // 3591786305
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCReceiveVoiceFromServer, "RPCReceiveVoiceFromServer" }, // 1594070042
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_RPCServerBroadcastVoiceData, "RPCServerBroadcastVoiceData" }, // 4278732904
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_setAttenuationAssetPath, "setAttenuationAssetPath" }, // 3825538816
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_SetVoiceVolume, "SetVoiceVolume" }, // 3007289186
		{ &Z_Construct_UFunction_UMicrophoneSpeakComponent_startSpeaking, "startSpeaking" }, // 1217155022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MicrophoneSpeakComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MicrophoneSpeakComponent" },
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived = { "OnDataMicrophoneReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrophoneSpeakComponent, OnDataMicrophoneReceived), Z_Construct_UDelegateFunction_UMicrophoneSpeakComponent_DataMicrophoneReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MicrophoneSpeakComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureAudioComponent = { "VoiceCaptureAudioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrophoneSpeakComponent, VoiceCaptureAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureSoundWaveProcedural_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MicrophoneSpeakComponent" },
		{ "ModuleRelativePath", "Public/MicrophoneSpeakComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureSoundWaveProcedural = { "VoiceCaptureSoundWaveProcedural", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrophoneSpeakComponent, VoiceCaptureSoundWaveProcedural), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureSoundWaveProcedural_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureSoundWaveProcedural_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_OnDataMicrophoneReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::NewProp_VoiceCaptureSoundWaveProcedural,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicrophoneSpeakComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::ClassParams = {
		&UMicrophoneSpeakComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMicrophoneSpeakComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMicrophoneSpeakComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMicrophoneSpeakComponent, 1280928047);
	template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<UMicrophoneSpeakComponent>()
	{
		return UMicrophoneSpeakComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMicrophoneSpeakComponent(Z_Construct_UClass_UMicrophoneSpeakComponent, &UMicrophoneSpeakComponent::StaticClass, TEXT("/Script/UniversalVoiceChatPro"), TEXT("UMicrophoneSpeakComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicrophoneSpeakComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
