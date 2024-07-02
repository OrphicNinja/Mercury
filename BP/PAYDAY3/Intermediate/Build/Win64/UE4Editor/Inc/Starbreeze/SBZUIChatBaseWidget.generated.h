// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChatMessage;
#ifdef STARBREEZE_SBZUIChatBaseWidget_generated_h
#error "SBZUIChatBaseWidget.generated.h already included, missing '#pragma once' in SBZUIChatBaseWidget.h"
#endif
#define STARBREEZE_SBZUIChatBaseWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTimestamp); \
	DECLARE_FUNCTION(execGetUserDisplayName); \
	DECLARE_FUNCTION(execGetUserId); \
	DECLARE_FUNCTION(execOnNewMessageReceived); \
	DECLARE_FUNCTION(execSendMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTimestamp); \
	DECLARE_FUNCTION(execGetUserDisplayName); \
	DECLARE_FUNCTION(execGetUserId); \
	DECLARE_FUNCTION(execOnNewMessageReceived); \
	DECLARE_FUNCTION(execSendMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_EVENT_PARMS \
	struct SBZUIChatBaseWidget_eventOnMessageReceivedEvent_Parms \
	{ \
		FSBZChatMessage ChatMessage; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUIChatBaseWidget(); \
	friend struct Z_Construct_UClass_USBZUIChatBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZUIChatBaseWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIChatBaseWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUIChatBaseWidget(); \
	friend struct Z_Construct_UClass_USBZUIChatBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZUIChatBaseWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIChatBaseWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUIChatBaseWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUIChatBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIChatBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIChatBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIChatBaseWidget(USBZUIChatBaseWidget&&); \
	NO_API USBZUIChatBaseWidget(const USBZUIChatBaseWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIChatBaseWidget(USBZUIChatBaseWidget&&); \
	NO_API USBZUIChatBaseWidget(const USBZUIChatBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIChatBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIChatBaseWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUIChatBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableLobbyChat() { return STRUCT_OFFSET(USBZUIChatBaseWidget, bEnableLobbyChat); } \
	FORCEINLINE static uint32 __PPO__bIsChatDisabled() { return STRUCT_OFFSET(USBZUIChatBaseWidget, bIsChatDisabled); } \
	FORCEINLINE static uint32 __PPO__bIsOnWindows() { return STRUCT_OFFSET(USBZUIChatBaseWidget, bIsOnWindows); } \
	FORCEINLINE static uint32 __PPO__UserDisplayName() { return STRUCT_OFFSET(USBZUIChatBaseWidget, UserDisplayName); } \
	FORCEINLINE static uint32 __PPO__UserId() { return STRUCT_OFFSET(USBZUIChatBaseWidget, UserId); } \
	FORCEINLINE static uint32 __PPO__GameUserSettings() { return STRUCT_OFFSET(USBZUIChatBaseWidget, GameUserSettings); } \
	FORCEINLINE static uint32 __PPO__Chat() { return STRUCT_OFFSET(USBZUIChatBaseWidget, Chat); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUIChatBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUIChatBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
