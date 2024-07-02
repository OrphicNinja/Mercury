// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
#ifdef STARBREEZE_SBZMainMenuChallengeScreenDescriptionPanel_generated_h
#error "SBZMainMenuChallengeScreenDescriptionPanel.generated.h already included, missing '#pragma once' in SBZMainMenuChallengeScreenDescriptionPanel.h"
#endif
#define STARBREEZE_SBZMainMenuChallengeScreenDescriptionPanel_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChallengeData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChallengeData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_EVENT_PARMS \
	struct SBZMainMenuChallengeScreenDescriptionPanel_eventOnChallengeDataUpdated_Parms \
	{ \
		FSBZChallengeData InChallengeData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuChallengeScreenDescriptionPanel(); \
	friend struct Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuChallengeScreenDescriptionPanel, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuChallengeScreenDescriptionPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuChallengeScreenDescriptionPanel(); \
	friend struct Z_Construct_UClass_USBZMainMenuChallengeScreenDescriptionPanel_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuChallengeScreenDescriptionPanel, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuChallengeScreenDescriptionPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuChallengeScreenDescriptionPanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuChallengeScreenDescriptionPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuChallengeScreenDescriptionPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuChallengeScreenDescriptionPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuChallengeScreenDescriptionPanel(USBZMainMenuChallengeScreenDescriptionPanel&&); \
	NO_API USBZMainMenuChallengeScreenDescriptionPanel(const USBZMainMenuChallengeScreenDescriptionPanel&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuChallengeScreenDescriptionPanel(USBZMainMenuChallengeScreenDescriptionPanel&&); \
	NO_API USBZMainMenuChallengeScreenDescriptionPanel(const USBZMainMenuChallengeScreenDescriptionPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuChallengeScreenDescriptionPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuChallengeScreenDescriptionPanel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuChallengeScreenDescriptionPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_ChallengeStats() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, Panel_ChallengeStats); } \
	FORCEINLINE static uint32 __PPO__Panel_ItemRewards() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, Panel_ItemRewards); } \
	FORCEINLINE static uint32 __PPO__ChallengeStatWidgetClass() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, ChallengeStatWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ItemRewardWidgetClass() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, ItemRewardWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MaxStatWidgetsDisplayed() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, MaxStatWidgetsDisplayed); } \
	FORCEINLINE static uint32 __PPO__MaxItemWidgetsDisplayed() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, MaxItemWidgetsDisplayed); } \
	FORCEINLINE static uint32 __PPO__CachedStatWidgets() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, CachedStatWidgets); } \
	FORCEINLINE static uint32 __PPO__CachedItemWidgets() { return STRUCT_OFFSET(USBZMainMenuChallengeScreenDescriptionPanel, CachedItemWidgets); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuChallengeScreenDescriptionPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuChallengeScreenDescriptionPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
