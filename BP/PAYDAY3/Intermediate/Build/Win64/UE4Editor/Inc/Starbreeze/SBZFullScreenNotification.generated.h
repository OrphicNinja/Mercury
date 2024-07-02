// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZUIFullscreenNotificationData;
#ifdef STARBREEZE_SBZFullScreenNotification_generated_h
#error "SBZFullScreenNotification.generated.h already included, missing '#pragma once' in SBZFullScreenNotification.h"
#endif
#define STARBREEZE_SBZFullScreenNotification_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDismissActiveNotification); \
	DECLARE_FUNCTION(execOnControlsReferenceClicked);


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDismissActiveNotification); \
	DECLARE_FUNCTION(execOnControlsReferenceClicked);


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_EVENT_PARMS \
	struct SBZFullScreenNotification_eventOnDisplayedNewActiveNotification_Parms \
	{ \
		FSBZUIFullscreenNotificationData NewNotificationData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZFullScreenNotification(); \
	friend struct Z_Construct_UClass_USBZFullScreenNotification_Statics; \
public: \
	DECLARE_CLASS(USBZFullScreenNotification, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFullScreenNotification) \
	virtual UObject* _getUObject() const override { return const_cast<USBZFullScreenNotification*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZFullScreenNotification(); \
	friend struct Z_Construct_UClass_USBZFullScreenNotification_Statics; \
public: \
	DECLARE_CLASS(USBZFullScreenNotification, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFullScreenNotification) \
	virtual UObject* _getUObject() const override { return const_cast<USBZFullScreenNotification*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZFullScreenNotification(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZFullScreenNotification) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFullScreenNotification); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFullScreenNotification); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFullScreenNotification(USBZFullScreenNotification&&); \
	NO_API USBZFullScreenNotification(const USBZFullScreenNotification&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFullScreenNotification(USBZFullScreenNotification&&); \
	NO_API USBZFullScreenNotification(const USBZFullScreenNotification&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFullScreenNotification); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFullScreenNotification); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZFullScreenNotification)


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_Header() { return STRUCT_OFFSET(USBZFullScreenNotification, Text_Header); } \
	FORCEINLINE static uint32 __PPO__Text_Description() { return STRUCT_OFFSET(USBZFullScreenNotification, Text_Description); } \
	FORCEINLINE static uint32 __PPO__Widget_ControlsReference() { return STRUCT_OFFSET(USBZFullScreenNotification, Widget_ControlsReference); } \
	FORCEINLINE static uint32 __PPO__DismissControlsReference() { return STRUCT_OFFSET(USBZFullScreenNotification, DismissControlsReference); } \
	FORCEINLINE static uint32 __PPO__bIsShowing() { return STRUCT_OFFSET(USBZFullScreenNotification, bIsShowing); } \
	FORCEINLINE static uint32 __PPO__Data() { return STRUCT_OFFSET(USBZFullScreenNotification, Data); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZFullScreenNotification>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFullScreenNotification_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
