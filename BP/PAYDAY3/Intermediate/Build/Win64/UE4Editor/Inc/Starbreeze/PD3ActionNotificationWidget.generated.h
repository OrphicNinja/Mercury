// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZHUDNotificationData;
class ASBZCharacter;
struct FSBZReviveEvent;
#ifdef STARBREEZE_PD3ActionNotificationWidget_generated_h
#error "PD3ActionNotificationWidget.generated.h already included, missing '#pragma once' in PD3ActionNotificationWidget.h"
#endif
#define STARBREEZE_PD3ActionNotificationWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNotification); \
	DECLARE_FUNCTION(execOnAICharacterKilled); \
	DECLARE_FUNCTION(execOnRevive);


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNotification); \
	DECLARE_FUNCTION(execOnAICharacterKilled); \
	DECLARE_FUNCTION(execOnRevive);


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_EVENT_PARMS \
	struct PD3ActionNotificationWidget_eventDisplayNotification_Parms \
	{ \
		FSBZHUDNotificationData InNotification; \
	}; \
	struct PD3ActionNotificationWidget_eventOnNotificationAdded_Parms \
	{ \
		FSBZHUDNotificationData InNotificationAdded; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3ActionNotificationWidget(); \
	friend struct Z_Construct_UClass_UPD3ActionNotificationWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3ActionNotificationWidget, USBZPawnWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3ActionNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPD3ActionNotificationWidget(); \
	friend struct Z_Construct_UClass_UPD3ActionNotificationWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3ActionNotificationWidget, USBZPawnWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3ActionNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3ActionNotificationWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3ActionNotificationWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3ActionNotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3ActionNotificationWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3ActionNotificationWidget(UPD3ActionNotificationWidget&&); \
	NO_API UPD3ActionNotificationWidget(const UPD3ActionNotificationWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3ActionNotificationWidget(UPD3ActionNotificationWidget&&); \
	NO_API UPD3ActionNotificationWidget(const UPD3ActionNotificationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3ActionNotificationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3ActionNotificationWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3ActionNotificationWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDNotifications() { return STRUCT_OFFSET(UPD3ActionNotificationWidget, HUDNotifications); } \
	FORCEINLINE static uint32 __PPO__Text_ActionText() { return STRUCT_OFFSET(UPD3ActionNotificationWidget, Text_ActionText); } \
	FORCEINLINE static uint32 __PPO__FadeOutAnimation() { return STRUCT_OFFSET(UPD3ActionNotificationWidget, FadeOutAnimation); } \
	FORCEINLINE static uint32 __PPO__CasingNotification() { return STRUCT_OFFSET(UPD3ActionNotificationWidget, CasingNotification); } \
	FORCEINLINE static uint32 __PPO__CasingControlsReference() { return STRUCT_OFFSET(UPD3ActionNotificationWidget, CasingControlsReference); } \
	FORCEINLINE static uint32 __PPO__KilledCivilianNotification() { return STRUCT_OFFSET(UPD3ActionNotificationWidget, KilledCivilianNotification); }


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3ActionNotificationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3ActionNotificationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
