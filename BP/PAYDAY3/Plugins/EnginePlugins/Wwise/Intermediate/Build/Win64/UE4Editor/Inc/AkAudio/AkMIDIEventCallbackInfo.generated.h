// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkMidiCc;
struct FAkMidiChannelAftertouch;
struct FAkMidiGeneric;
struct FAkMidiNoteAftertouch;
struct FAkMidiNoteOnOff;
struct FAkMidiPitchBend;
struct FAkMidiProgramChange;
enum class EAkMidiEventType : uint8;
#ifdef AKAUDIO_AkMIDIEventCallbackInfo_generated_h
#error "AkMIDIEventCallbackInfo.generated.h already included, missing '#pragma once' in AkMIDIEventCallbackInfo.h"
#endif
#define AKAUDIO_AkMIDIEventCallbackInfo_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetType);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetType);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMIDIEventCallbackInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&); \
	NO_API UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&); \
	NO_API UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_14_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMIDIEventCallbackInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
