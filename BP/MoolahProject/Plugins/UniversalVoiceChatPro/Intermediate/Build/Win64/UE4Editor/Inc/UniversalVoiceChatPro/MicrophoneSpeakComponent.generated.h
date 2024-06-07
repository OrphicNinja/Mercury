// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMicrophoneSpeakComponent;
#ifdef UNIVERSALVOICECHATPRO_MicrophoneSpeakComponent_generated_h
#error "MicrophoneSpeakComponent.generated.h already included, missing '#pragma once' in MicrophoneSpeakComponent.h"
#endif
#define UNIVERSALVOICECHATPRO_MicrophoneSpeakComponent_generated_h

#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_14_DELEGATE \
struct MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms \
{ \
	TArray<uint8> data; \
}; \
static inline void FDataMicrophoneReceived_DelegateWrapper(const FMulticastScriptDelegate& DataMicrophoneReceived, TArray<uint8> const& data) \
{ \
	MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms Parms; \
	Parms.data=data; \
	DataMicrophoneReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_SPARSE_DATA
#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_RPC_WRAPPERS \
	virtual void RPCClientTransmitVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange); \
	virtual void RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize); \
	virtual void RPCServerBroadcastVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize); \
 \
	DECLARE_FUNCTION(execendSpeaking); \
	DECLARE_FUNCTION(execinitAudioResources); \
	DECLARE_FUNCTION(execisPlayingAudioVoice); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execpayloadReceivedVoiceData); \
	DECLARE_FUNCTION(execRPCClientTransmitVoiceData); \
	DECLARE_FUNCTION(execRPCReceiveVoiceFromServer); \
	DECLARE_FUNCTION(execRPCServerBroadcastVoiceData); \
	DECLARE_FUNCTION(execsetAttenuationAssetPath); \
	DECLARE_FUNCTION(execSetVoiceVolume); \
	DECLARE_FUNCTION(execstartSpeaking);


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCClientTransmitVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange); \
	virtual void RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize); \
	virtual void RPCServerBroadcastVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize); \
 \
	DECLARE_FUNCTION(execendSpeaking); \
	DECLARE_FUNCTION(execinitAudioResources); \
	DECLARE_FUNCTION(execisPlayingAudioVoice); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execpayloadReceivedVoiceData); \
	DECLARE_FUNCTION(execRPCClientTransmitVoiceData); \
	DECLARE_FUNCTION(execRPCReceiveVoiceFromServer); \
	DECLARE_FUNCTION(execRPCServerBroadcastVoiceData); \
	DECLARE_FUNCTION(execsetAttenuationAssetPath); \
	DECLARE_FUNCTION(execSetVoiceVolume); \
	DECLARE_FUNCTION(execstartSpeaking);


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_EVENT_PARMS \
	struct MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms \
	{ \
		TArray<uint8> data; \
		int32 sampleRate; \
		int32 numchannels; \
		int32 PCMSize; \
		bool _isGlobal; \
		int32 _radioChannel; \
		bool _useRange; \
		float _maxRange; \
	}; \
	struct MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms \
	{ \
		UMicrophoneSpeakComponent* compToOutputVoice; \
		TArray<uint8> dataEncoded; \
		int32 sampleRate; \
		int32 numchannels; \
		int32 PCMSize; \
	}; \
	struct MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms \
	{ \
		TArray<uint8> data; \
		int32 sampleRate; \
		int32 numchannels; \
		int32 PCMSize; \
	};


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_CALLBACK_WRAPPERS
#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMicrophoneSpeakComponent(); \
	friend struct Z_Construct_UClass_UMicrophoneSpeakComponent_Statics; \
public: \
	DECLARE_CLASS(UMicrophoneSpeakComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(UMicrophoneSpeakComponent)


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMicrophoneSpeakComponent(); \
	friend struct Z_Construct_UClass_UMicrophoneSpeakComponent_Statics; \
public: \
	DECLARE_CLASS(UMicrophoneSpeakComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(UMicrophoneSpeakComponent)


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicrophoneSpeakComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicrophoneSpeakComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicrophoneSpeakComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicrophoneSpeakComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicrophoneSpeakComponent(UMicrophoneSpeakComponent&&); \
	NO_API UMicrophoneSpeakComponent(const UMicrophoneSpeakComponent&); \
public:


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicrophoneSpeakComponent(UMicrophoneSpeakComponent&&); \
	NO_API UMicrophoneSpeakComponent(const UMicrophoneSpeakComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicrophoneSpeakComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicrophoneSpeakComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMicrophoneSpeakComponent)


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_10_PROLOG \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_EVENT_PARMS


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_SPARSE_DATA \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_RPC_WRAPPERS \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_CALLBACK_WRAPPERS \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_INCLASS \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_SPARSE_DATA \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_CALLBACK_WRAPPERS \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<class UMicrophoneSpeakComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
