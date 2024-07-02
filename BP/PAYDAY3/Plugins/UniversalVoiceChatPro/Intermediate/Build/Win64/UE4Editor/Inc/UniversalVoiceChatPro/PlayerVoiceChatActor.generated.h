// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef UNIVERSALVOICECHATPRO_PlayerVoiceChatActor_generated_h
#error "PlayerVoiceChatActor.generated.h already included, missing '#pragma once' in PlayerVoiceChatActor.h"
#endif
#define UNIVERSALVOICECHATPRO_PlayerVoiceChatActor_generated_h

#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_SPARSE_DATA
#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_RPC_WRAPPERS \
	virtual void RPCClientAskAddChannel_Implementation(int32 channelToAdd); \
	virtual void RPCClientAskRemoveChannel_Implementation(int32 channelToRemove); \
	virtual void RPCClientSetMicrophoneVolume_Implementation(float volume); \
	virtual void RPCServerUpdatePosAudioComp_Implementation(FVector worldPos); \
 \
	DECLARE_FUNCTION(execDelegateEndPlayOwner); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execRepNotifyAttenuationAsset); \
	DECLARE_FUNCTION(execRepNotifyMicComp); \
	DECLARE_FUNCTION(execRepNotifyVoiceVolume); \
	DECLARE_FUNCTION(execRPCClientAskAddChannel); \
	DECLARE_FUNCTION(execRPCClientAskRemoveChannel); \
	DECLARE_FUNCTION(execRPCClientSetMicrophoneVolume); \
	DECLARE_FUNCTION(execRPCServerUpdatePosAudioComp); \
	DECLARE_FUNCTION(execServerAddChannel); \
	DECLARE_FUNCTION(execServerRemoveChannel); \
	DECLARE_FUNCTION(execServerSetAllowUseGlobal); \
	DECLARE_FUNCTION(execServerSetAllowUseProximity); \
	DECLARE_FUNCTION(execServerSetAttenuation); \
	DECLARE_FUNCTION(execServerSetMaxProximityRange);


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCClientAskAddChannel_Implementation(int32 channelToAdd); \
	virtual void RPCClientAskRemoveChannel_Implementation(int32 channelToRemove); \
	virtual void RPCClientSetMicrophoneVolume_Implementation(float volume); \
	virtual void RPCServerUpdatePosAudioComp_Implementation(FVector worldPos); \
 \
	DECLARE_FUNCTION(execDelegateEndPlayOwner); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execRepNotifyAttenuationAsset); \
	DECLARE_FUNCTION(execRepNotifyMicComp); \
	DECLARE_FUNCTION(execRepNotifyVoiceVolume); \
	DECLARE_FUNCTION(execRPCClientAskAddChannel); \
	DECLARE_FUNCTION(execRPCClientAskRemoveChannel); \
	DECLARE_FUNCTION(execRPCClientSetMicrophoneVolume); \
	DECLARE_FUNCTION(execRPCServerUpdatePosAudioComp); \
	DECLARE_FUNCTION(execServerAddChannel); \
	DECLARE_FUNCTION(execServerRemoveChannel); \
	DECLARE_FUNCTION(execServerSetAllowUseGlobal); \
	DECLARE_FUNCTION(execServerSetAllowUseProximity); \
	DECLARE_FUNCTION(execServerSetAttenuation); \
	DECLARE_FUNCTION(execServerSetMaxProximityRange);


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_EVENT_PARMS \
	struct PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms \
	{ \
		int32 channelToAdd; \
	}; \
	struct PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms \
	{ \
		int32 channelToRemove; \
	}; \
	struct PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms \
	{ \
		float volume; \
	}; \
	struct PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms \
	{ \
		FVector worldPos; \
	};


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerVoiceChatActor(); \
	friend struct Z_Construct_UClass_APlayerVoiceChatActor_Statics; \
public: \
	DECLARE_CLASS(APlayerVoiceChatActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(APlayerVoiceChatActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		microphoneSpeakComponent=NETFIELD_REP_START, \
		ownerPlayerState, \
		idVoiceChat, \
		voiceVolume, \
		radioChannelSubscribed, \
		pathToAttenuationAsset, \
		NETFIELD_REP_END=pathToAttenuationAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerVoiceChatActor(); \
	friend struct Z_Construct_UClass_APlayerVoiceChatActor_Statics; \
public: \
	DECLARE_CLASS(APlayerVoiceChatActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(APlayerVoiceChatActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		microphoneSpeakComponent=NETFIELD_REP_START, \
		ownerPlayerState, \
		idVoiceChat, \
		voiceVolume, \
		radioChannelSubscribed, \
		pathToAttenuationAsset, \
		NETFIELD_REP_END=pathToAttenuationAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerVoiceChatActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerVoiceChatActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerVoiceChatActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerVoiceChatActor(APlayerVoiceChatActor&&); \
	NO_API APlayerVoiceChatActor(const APlayerVoiceChatActor&); \
public:


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerVoiceChatActor(APlayerVoiceChatActor&&); \
	NO_API APlayerVoiceChatActor(const APlayerVoiceChatActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerVoiceChatActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerVoiceChatActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerVoiceChatActor)


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_12_PROLOG \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_EVENT_PARMS


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_SPARSE_DATA \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_RPC_WRAPPERS \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_INCLASS \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_SPARSE_DATA \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<class APlayerVoiceChatActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
