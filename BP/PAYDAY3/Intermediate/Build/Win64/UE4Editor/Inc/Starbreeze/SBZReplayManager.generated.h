// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZReplayManager;
#ifdef STARBREEZE_SBZReplayManager_generated_h
#error "SBZReplayManager.generated.h already included, missing '#pragma once' in SBZReplayManager.h"
#endif
#define STARBREEZE_SBZReplayManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteReplay); \
	DECLARE_FUNCTION(execFindReplays); \
	DECLARE_FUNCTION(execGetReplayManager); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsRecording);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteReplay); \
	DECLARE_FUNCTION(execFindReplays); \
	DECLARE_FUNCTION(execGetReplayManager); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsRecording);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZReplayManager(); \
	friend struct Z_Construct_UClass_USBZReplayManager_Statics; \
public: \
	DECLARE_CLASS(USBZReplayManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReplayManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZReplayManager(); \
	friend struct Z_Construct_UClass_USBZReplayManager_Statics; \
public: \
	DECLARE_CLASS(USBZReplayManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReplayManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZReplayManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZReplayManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReplayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReplayManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReplayManager(USBZReplayManager&&); \
	NO_API USBZReplayManager(const USBZReplayManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReplayManager(USBZReplayManager&&); \
	NO_API USBZReplayManager(const USBZReplayManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReplayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReplayManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZReplayManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameInstance() { return STRUCT_OFFSET(USBZReplayManager, GameInstance); } \
	FORCEINLINE static uint32 __PPO__ReplayFilePlayer() { return STRUCT_OFFSET(USBZReplayManager, ReplayFilePlayer); } \
	FORCEINLINE static uint32 __PPO__ReplayFileRecorder() { return STRUCT_OFFSET(USBZReplayManager, ReplayFileRecorder); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZReplayManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReplayManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
