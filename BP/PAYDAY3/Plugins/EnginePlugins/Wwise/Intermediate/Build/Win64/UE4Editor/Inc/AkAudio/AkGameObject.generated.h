// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkRtpc;
enum class ERTPCValueType : uint8;
class UAkAudioEvent;
struct FAkExternalSourceInfo;
class UObject;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkGameObject_generated_h
#error "AkGameObject.generated.h already included, missing '#pragma once' in AkGameObject.h"
#endif
#define AKAUDIO_AkGameObject_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkGameObject)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_14_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
