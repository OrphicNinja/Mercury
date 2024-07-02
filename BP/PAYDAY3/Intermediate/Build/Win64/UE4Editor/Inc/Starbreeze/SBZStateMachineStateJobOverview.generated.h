// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FSBZPlayerStateAddedEvent;
struct FSBZPlayerStateRemovedEvent;
enum class EBlackScreenTransitionType : uint8;
class ASBZPlayerController;
class ASBZLevelScriptActor;
#ifdef STARBREEZE_SBZStateMachineStateJobOverview_generated_h
#error "SBZStateMachineStateJobOverview.generated.h already included, missing '#pragma once' in SBZStateMachineStateJobOverview.h"
#endif
#define STARBREEZE_SBZStateMachineStateJobOverview_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execClientDisconnected); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execEnableReadyButton); \
	DECLARE_FUNCTION(execEndIntroSequence); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execIntroSequenceTimedOut); \
	DECLARE_FUNCTION(execMoveToActionPhase); \
	DECLARE_FUNCTION(execNetworkDisconnected); \
	DECLARE_FUNCTION(execOnAllPlayersReady); \
	DECLARE_FUNCTION(execOnLocalPlayerStateReady); \
	DECLARE_FUNCTION(execOnPlayerBeginPlayState); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived); \
	DECLARE_FUNCTION(execPlayerStartTravel); \
	DECLARE_FUNCTION(execPlayerWaitForReady); \
	DECLARE_FUNCTION(execRandomizedRoomLoadingComplete); \
	DECLARE_FUNCTION(execReadyPlayer); \
	DECLARE_FUNCTION(execStartIntroSequence); \
	DECLARE_FUNCTION(execUnregisterClient); \
	DECLARE_FUNCTION(execWaitForRandomizedRooms);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execClientDisconnected); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execEnableReadyButton); \
	DECLARE_FUNCTION(execEndIntroSequence); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execIntroSequenceTimedOut); \
	DECLARE_FUNCTION(execMoveToActionPhase); \
	DECLARE_FUNCTION(execNetworkDisconnected); \
	DECLARE_FUNCTION(execOnAllPlayersReady); \
	DECLARE_FUNCTION(execOnLocalPlayerStateReady); \
	DECLARE_FUNCTION(execOnPlayerBeginPlayState); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived); \
	DECLARE_FUNCTION(execPlayerStartTravel); \
	DECLARE_FUNCTION(execPlayerWaitForReady); \
	DECLARE_FUNCTION(execRandomizedRoomLoadingComplete); \
	DECLARE_FUNCTION(execReadyPlayer); \
	DECLARE_FUNCTION(execStartIntroSequence); \
	DECLARE_FUNCTION(execUnregisterClient); \
	DECLARE_FUNCTION(execWaitForRandomizedRooms);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateJobOverview(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateJobOverview, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateJobOverview)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateJobOverview(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateJobOverview_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateJobOverview, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateJobOverview)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateJobOverview(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateJobOverview) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateJobOverview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateJobOverview); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateJobOverview(USBZStateMachineStateJobOverview&&); \
	NO_API USBZStateMachineStateJobOverview(const USBZStateMachineStateJobOverview&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateJobOverview(USBZStateMachineStateJobOverview&&); \
	NO_API USBZStateMachineStateJobOverview(const USBZStateMachineStateJobOverview&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateJobOverview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateJobOverview); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateJobOverview)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__JobOverviewWidget() { return STRUCT_OFFSET(USBZStateMachineStateJobOverview, JobOverviewWidget); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateJobOverview>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateJobOverview_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
