// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZReplayInfo;
#ifdef STARBREEZE_SBZReplayBaseWidget_generated_h
#error "SBZReplayBaseWidget.generated.h already included, missing '#pragma once' in SBZReplayBaseWidget.h"
#endif
#define STARBREEZE_SBZReplayBaseWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCycleNextCameraView); \
	DECLARE_FUNCTION(execCycleNextPlayerView); \
	DECLARE_FUNCTION(execDecreaseReplaySpeed); \
	DECLARE_FUNCTION(execGetElapsedTimeSeconds); \
	DECLARE_FUNCTION(execGetReplayLengthSeconds); \
	DECLARE_FUNCTION(execIncreaseReplaySpeed); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execOnReplayStarted); \
	DECLARE_FUNCTION(execOnReplayStopped); \
	DECLARE_FUNCTION(execOnReplayTimerUpdate); \
	DECLARE_FUNCTION(execPauseReplay); \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execResumeReplay); \
	DECLARE_FUNCTION(execScrubBackward); \
	DECLARE_FUNCTION(execScrubForward); \
	DECLARE_FUNCTION(execSetElapasedTimeSeconds); \
	DECLARE_FUNCTION(execStartReplay); \
	DECLARE_FUNCTION(execStopReplay);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCycleNextCameraView); \
	DECLARE_FUNCTION(execCycleNextPlayerView); \
	DECLARE_FUNCTION(execDecreaseReplaySpeed); \
	DECLARE_FUNCTION(execGetElapsedTimeSeconds); \
	DECLARE_FUNCTION(execGetReplayLengthSeconds); \
	DECLARE_FUNCTION(execIncreaseReplaySpeed); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execOnReplayStarted); \
	DECLARE_FUNCTION(execOnReplayStopped); \
	DECLARE_FUNCTION(execOnReplayTimerUpdate); \
	DECLARE_FUNCTION(execPauseReplay); \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execResumeReplay); \
	DECLARE_FUNCTION(execScrubBackward); \
	DECLARE_FUNCTION(execScrubForward); \
	DECLARE_FUNCTION(execSetElapasedTimeSeconds); \
	DECLARE_FUNCTION(execStartReplay); \
	DECLARE_FUNCTION(execStopReplay);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_EVENT_PARMS \
	struct SBZReplayBaseWidget_eventOnReplayUpdate_Parms \
	{ \
		FString ReplayLength; \
		FString ReplayElapased; \
		float ReplayElapsedPercent; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZReplayBaseWidget(); \
	friend struct Z_Construct_UClass_USBZReplayBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZReplayBaseWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReplayBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZReplayBaseWidget(); \
	friend struct Z_Construct_UClass_USBZReplayBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZReplayBaseWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReplayBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZReplayBaseWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZReplayBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReplayBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReplayBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReplayBaseWidget(USBZReplayBaseWidget&&); \
	NO_API USBZReplayBaseWidget(const USBZReplayBaseWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReplayBaseWidget(USBZReplayBaseWidget&&); \
	NO_API USBZReplayBaseWidget(const USBZReplayBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReplayBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReplayBaseWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZReplayBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(USBZReplayBaseWidget, PlayerController); } \
	FORCEINLINE static uint32 __PPO__ReplaySpeed() { return STRUCT_OFFSET(USBZReplayBaseWidget, ReplaySpeed); } \
	FORCEINLINE static uint32 __PPO__ReplayInfo() { return STRUCT_OFFSET(USBZReplayBaseWidget, ReplayInfo); } \
	FORCEINLINE static uint32 __PPO__ReplayEvents() { return STRUCT_OFFSET(USBZReplayBaseWidget, ReplayEvents); } \
	FORCEINLINE static uint32 __PPO__GameInstance() { return STRUCT_OFFSET(USBZReplayBaseWidget, GameInstance); } \
	FORCEINLINE static uint32 __PPO__ReplayFilePlayer() { return STRUCT_OFFSET(USBZReplayBaseWidget, ReplayFilePlayer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZReplayBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReplayBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
