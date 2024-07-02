// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZSideBarNotificationData;
#ifdef STARBREEZE_SBZSideBarNotifications_generated_h
#error "SBZSideBarNotifications.generated.h already included, missing '#pragma once' in SBZSideBarNotifications.h"
#endif
#define STARBREEZE_SBZSideBarNotifications_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNewNotification);


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNewNotification);


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_EVENT_PARMS \
	struct SBZSideBarNotifications_eventOnNotificationDisplayed_Parms \
	{ \
		FSBZSideBarNotificationData InNotificationToDisplay; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSideBarNotifications(); \
	friend struct Z_Construct_UClass_USBZSideBarNotifications_Statics; \
public: \
	DECLARE_CLASS(USBZSideBarNotifications, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSideBarNotifications)


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSideBarNotifications(); \
	friend struct Z_Construct_UClass_USBZSideBarNotifications_Statics; \
public: \
	DECLARE_CLASS(USBZSideBarNotifications, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSideBarNotifications)


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSideBarNotifications(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSideBarNotifications) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSideBarNotifications); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSideBarNotifications); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSideBarNotifications(USBZSideBarNotifications&&); \
	NO_API USBZSideBarNotifications(const USBZSideBarNotifications&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSideBarNotifications(USBZSideBarNotifications&&); \
	NO_API USBZSideBarNotifications(const USBZSideBarNotifications&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSideBarNotifications); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSideBarNotifications); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSideBarNotifications)


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsDisplaying() { return STRUCT_OFFSET(USBZSideBarNotifications, bIsDisplaying); } \
	FORCEINLINE static uint32 __PPO__Animation_OpenWidget() { return STRUCT_OFFSET(USBZSideBarNotifications, Animation_OpenWidget); } \
	FORCEINLINE static uint32 __PPO__DisplayTimeLeft() { return STRUCT_OFFSET(USBZSideBarNotifications, DisplayTimeLeft); } \
	FORCEINLINE static uint32 __PPO__SideBarNotifications() { return STRUCT_OFFSET(USBZSideBarNotifications, SideBarNotifications); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSideBarNotifications>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSideBarNotifications_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
