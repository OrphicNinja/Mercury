// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetBlueprintComponent_generated_h
#error "HoudiniAssetBlueprintComponent.generated.h already included, missing '#pragma once' in HoudiniAssetBlueprintComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetBlueprintComponent_generated_h

#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_SPARSE_DATA
#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetToggleValueAt);


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetToggleValueAt);


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniAssetBlueprintComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetBlueprintComponent, UHoudiniAssetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetBlueprintComponent)


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetBlueprintComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetBlueprintComponent, UHoudiniAssetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetBlueprintComponent)


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetBlueprintComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetBlueprintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetBlueprintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetBlueprintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetBlueprintComponent(UHoudiniAssetBlueprintComponent&&); \
	NO_API UHoudiniAssetBlueprintComponent(const UHoudiniAssetBlueprintComponent&); \
public:


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetBlueprintComponent(UHoudiniAssetBlueprintComponent&&); \
	NO_API UHoudiniAssetBlueprintComponent(const UHoudiniAssetBlueprintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetBlueprintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetBlueprintComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniAssetBlueprintComponent)


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FauxBPProperty() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, FauxBPProperty); } \
	FORCEINLINE static uint32 __PPO__bHoudiniAssetChanged() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bHoudiniAssetChanged); } \
	FORCEINLINE static uint32 __PPO__bUpdatedFromTemplate() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bUpdatedFromTemplate); } \
	FORCEINLINE static uint32 __PPO__bIsInBlueprintEditor() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bIsInBlueprintEditor); } \
	FORCEINLINE static uint32 __PPO__bCanDeleteHoudiniNodes() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bCanDeleteHoudiniNodes); } \
	FORCEINLINE static uint32 __PPO__bHasRegisteredComponentTemplate() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, bHasRegisteredComponentTemplate); } \
	FORCEINLINE static uint32 __PPO__CachedOutputNodes() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedOutputNodes); } \
	FORCEINLINE static uint32 __PPO__CachedInputNodes() { return STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedInputNodes); }


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_8_PROLOG
#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_RPC_WRAPPERS \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_INCLASS \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniAssetBlueprintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
