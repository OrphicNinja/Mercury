// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerChatEvent;
struct FSBZPlayerDefeatStateChangedData;
struct FSBZPlayerCallEvent;
struct FSBZAICrewChatEvent;
struct FSBZKeyItemCountChangedEvent;
struct FSBZAICrewDefeatStateChangedData;
struct FSBZPlayerStateRemovedEvent;
struct FSBZPlayerPingEvent;
struct FSBZSystemChatEvent;
struct FSBZVotingChatEvent;
#ifdef STARBREEZE_SBZHUDChatWidget_generated_h
#error "SBZHUDChatWidget.generated.h already included, missing '#pragma once' in SBZHUDChatWidget.h"
#endif
#define STARBREEZE_SBZHUDChatWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMessageReceived); \
	DECLARE_FUNCTION(execOnPlayerDefeatStateChangedInternal); \
	DECLARE_FUNCTION(execOnTextCommited); \
	DECLARE_FUNCTION(execSetChatActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMessageReceived); \
	DECLARE_FUNCTION(execOnPlayerDefeatStateChangedInternal); \
	DECLARE_FUNCTION(execOnTextCommited); \
	DECLARE_FUNCTION(execSetChatActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_EVENT_PARMS \
	struct SBZHUDChatWidget_eventCallReceived_Parms \
	{ \
		FSBZPlayerCallEvent CallEventData; \
	}; \
	struct SBZHUDChatWidget_eventCrewAIMessageReceived_Parms \
	{ \
		FSBZAICrewChatEvent ChatEventData; \
	}; \
	struct SBZHUDChatWidget_eventKeyItemCountChanged_Parms \
	{ \
		FSBZKeyItemCountChangedEvent KeyItemCountChangedEventData; \
	}; \
	struct SBZHUDChatWidget_eventOnAICrewDefeatStateChanged_Parms \
	{ \
		FSBZAICrewDefeatStateChangedData InData; \
	}; \
	struct SBZHUDChatWidget_eventOnChatDisabledChanged_Parms \
	{ \
		bool bIsDisabled; \
	}; \
	struct SBZHUDChatWidget_eventOnChatFocusChanged_Parms \
	{ \
		bool bHasFocus; \
	}; \
	struct SBZHUDChatWidget_eventOnPlayerDefeatStateChanged_Parms \
	{ \
		FSBZPlayerDefeatStateChangedData InData; \
	}; \
	struct SBZHUDChatWidget_eventOnPlayerJoinedTheHeist_Parms \
	{ \
		FText JoinedPlayerName; \
	}; \
	struct SBZHUDChatWidget_eventOnPlayerStateRemoved_Parms \
	{ \
		FSBZPlayerStateRemovedEvent PlayerStateRemovedData; \
	}; \
	struct SBZHUDChatWidget_eventPingReceived_Parms \
	{ \
		FSBZPlayerPingEvent PingEventData; \
	}; \
	struct SBZHUDChatWidget_eventPlayerMessageReceived_Parms \
	{ \
		FSBZPlayerChatEvent ChatEventData; \
	}; \
	struct SBZHUDChatWidget_eventSystemMessageReceived_Parms \
	{ \
		FSBZSystemChatEvent ChatEventData; \
	}; \
	struct SBZHUDChatWidget_eventVotingMessageReceived_Parms \
	{ \
		FSBZVotingChatEvent ChatEventData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHUDChatWidget(); \
	friend struct Z_Construct_UClass_USBZHUDChatWidget_Statics; \
public: \
	DECLARE_CLASS(USBZHUDChatWidget, USBZHUDWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHUDChatWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHUDChatWidget(); \
	friend struct Z_Construct_UClass_USBZHUDChatWidget_Statics; \
public: \
	DECLARE_CLASS(USBZHUDChatWidget, USBZHUDWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHUDChatWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHUDChatWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHUDChatWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHUDChatWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHUDChatWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHUDChatWidget(USBZHUDChatWidget&&); \
	NO_API USBZHUDChatWidget(const USBZHUDChatWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHUDChatWidget(USBZHUDChatWidget&&); \
	NO_API USBZHUDChatWidget(const USBZHUDChatWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHUDChatWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHUDChatWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHUDChatWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChatStackValue() { return STRUCT_OFFSET(USBZHUDChatWidget, ChatStackValue); } \
	FORCEINLINE static uint32 __PPO__OpenChatActionName() { return STRUCT_OFFSET(USBZHUDChatWidget, OpenChatActionName); } \
	FORCEINLINE static uint32 __PPO__Text_InputText() { return STRUCT_OFFSET(USBZHUDChatWidget, Text_InputText); } \
	FORCEINLINE static uint32 __PPO__bIsChatInputActive() { return STRUCT_OFFSET(USBZHUDChatWidget, bIsChatInputActive); } \
	FORCEINLINE static uint32 __PPO__bIsChatDisabled() { return STRUCT_OFFSET(USBZHUDChatWidget, bIsChatDisabled); } \
	FORCEINLINE static uint32 __PPO__QueuedPlayerDefeatStateChangedDataArray() { return STRUCT_OFFSET(USBZHUDChatWidget, QueuedPlayerDefeatStateChangedDataArray); } \
	FORCEINLINE static uint32 __PPO__PlayerNameChangedHandleMap() { return STRUCT_OFFSET(USBZHUDChatWidget, PlayerNameChangedHandleMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_21_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHUDChatWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHUDChatWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
