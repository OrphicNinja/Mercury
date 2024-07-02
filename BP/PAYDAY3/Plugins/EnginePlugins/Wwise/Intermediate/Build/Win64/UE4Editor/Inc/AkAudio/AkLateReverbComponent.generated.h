// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAcousticTextureSetComponent;
#ifdef AKAUDIO_AkLateReverbComponent_generated_h
#error "AkLateReverbComponent.generated.h already included, missing '#pragma once' in AkLateReverbComponent.h"
#endif
#define AKAUDIO_AkLateReverbComponent_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssociateAkTextureSetComponent);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssociateAkTextureSetComponent);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLateReverbComponent(); \
	friend struct Z_Construct_UClass_UAkLateReverbComponent_Statics; \
public: \
	DECLARE_CLASS(UAkLateReverbComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLateReverbComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAkLateReverbComponent(); \
	friend struct Z_Construct_UClass_UAkLateReverbComponent_Statics; \
public: \
	DECLARE_CLASS(UAkLateReverbComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLateReverbComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkLateReverbComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLateReverbComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLateReverbComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLateReverbComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkLateReverbComponent(UAkLateReverbComponent&&); \
	NO_API UAkLateReverbComponent(const UAkLateReverbComponent&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkLateReverbComponent(UAkLateReverbComponent&&); \
	NO_API UAkLateReverbComponent(const UAkLateReverbComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLateReverbComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLateReverbComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkLateReverbComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AuxBusManual() { return STRUCT_OFFSET(UAkLateReverbComponent, AuxBusManual); }


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_9_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkLateReverbComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
