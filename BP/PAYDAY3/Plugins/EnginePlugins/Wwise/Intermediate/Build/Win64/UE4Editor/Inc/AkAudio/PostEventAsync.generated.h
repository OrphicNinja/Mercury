// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAkAudioEvent;
class AActor;
struct FAkExternalSourceInfo;
class UPostEventAsync;
#ifdef AKAUDIO_PostEventAsync_generated_h
#error "PostEventAsync.generated.h already included, missing '#pragma once' in PostEventAsync.h"
#endif
#define AKAUDIO_PostEventAsync_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPostEventAsync)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_14_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
