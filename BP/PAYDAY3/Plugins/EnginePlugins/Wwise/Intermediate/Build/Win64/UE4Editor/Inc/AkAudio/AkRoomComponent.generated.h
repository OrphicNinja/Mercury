// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class UAkAcousticTextureSetComponent;
#ifdef AKAUDIO_AkRoomComponent_generated_h
#error "AkRoomComponent.generated.h already included, missing '#pragma once' in AkRoomComponent.h"
#endif
#define AKAUDIO_AkRoomComponent_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execSetGeometryComponent);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execSetGeometryComponent);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkRoomComponent(); \
	friend struct Z_Construct_UClass_UAkRoomComponent_Statics; \
public: \
	DECLARE_CLASS(UAkRoomComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkRoomComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAkRoomComponent(); \
	friend struct Z_Construct_UClass_UAkRoomComponent_Statics; \
public: \
	DECLARE_CLASS(UAkRoomComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkRoomComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkRoomComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkRoomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkRoomComponent(UAkRoomComponent&&); \
	NO_API UAkRoomComponent(const UAkRoomComponent&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkRoomComponent(UAkRoomComponent&&); \
	NO_API UAkRoomComponent(const UAkRoomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkRoomComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryComponent() { return STRUCT_OFFSET(UAkRoomComponent, GeometryComponent); }


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_9_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkRoomComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
