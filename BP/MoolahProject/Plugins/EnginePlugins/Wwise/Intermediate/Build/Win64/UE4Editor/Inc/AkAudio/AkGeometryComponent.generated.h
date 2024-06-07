// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkGeometryComponent_generated_h
#error "AkGeometryComponent.generated.h already included, missing '#pragma once' in AkGeometryComponent.h"
#endif
#define AKAUDIO_AkGeometryComponent_generated_h

#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_SPARSE_DATA
#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertMesh); \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry);


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertMesh); \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry);


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent)


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent)


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGeometryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public:


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkGeometryComponent)


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(UAkGeometryComponent, GeometryData); } \
	FORCEINLINE static uint32 __PPO__SurfaceAreas() { return STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas); }


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_12_PROLOG
#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_RPC_WRAPPERS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_INCLASS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGeometryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
