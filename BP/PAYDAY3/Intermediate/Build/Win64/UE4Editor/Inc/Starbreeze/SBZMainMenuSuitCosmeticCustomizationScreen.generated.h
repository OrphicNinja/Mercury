// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMainMenuCosmeticItemButton;
class USBZCosmeticsDataAsset;
#ifdef STARBREEZE_SBZMainMenuSuitCosmeticCustomizationScreen_generated_h
#error "SBZMainMenuSuitCosmeticCustomizationScreen.generated.h already included, missing '#pragma once' in SBZMainMenuSuitCosmeticCustomizationScreen.h"
#endif
#define STARBREEZE_SBZMainMenuSuitCosmeticCustomizationScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCosmeticPanelButtonSelected); \
	DECLARE_FUNCTION(execCosmeticPanelDefaultButtonSelected); \
	DECLARE_FUNCTION(execOnPopUpClosed);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCosmeticPanelButtonSelected); \
	DECLARE_FUNCTION(execCosmeticPanelDefaultButtonSelected); \
	DECLARE_FUNCTION(execOnPopUpClosed);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_EVENT_PARMS \
	struct SBZMainMenuSuitCosmeticCustomizationScreen_eventEquippedItemChanged_Parms \
	{ \
		const USBZCosmeticsDataAsset* InEquippedItem; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuSuitCosmeticCustomizationScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuSuitCosmeticCustomizationScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuSuitCosmeticCustomizationScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuSuitCosmeticCustomizationScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuSuitCosmeticCustomizationScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuSuitCosmeticCustomizationScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuSuitCosmeticCustomizationScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuSuitCosmeticCustomizationScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuSuitCosmeticCustomizationScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuSuitCosmeticCustomizationScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuSuitCosmeticCustomizationScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuSuitCosmeticCustomizationScreen(USBZMainMenuSuitCosmeticCustomizationScreen&&); \
	NO_API USBZMainMenuSuitCosmeticCustomizationScreen(const USBZMainMenuSuitCosmeticCustomizationScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuSuitCosmeticCustomizationScreen(USBZMainMenuSuitCosmeticCustomizationScreen&&); \
	NO_API USBZMainMenuSuitCosmeticCustomizationScreen(const USBZMainMenuSuitCosmeticCustomizationScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuSuitCosmeticCustomizationScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuSuitCosmeticCustomizationScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuSuitCosmeticCustomizationScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_CosmeticPanel() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, Widget_CosmeticPanel); } \
	FORCEINLINE static uint32 __PPO__SuitPartConfig() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, SuitPartConfig); } \
	FORCEINLINE static uint32 __PPO__CosmeticPartSlot() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, CosmeticPartSlot); } \
	FORCEINLINE static uint32 __PPO__SuitSlotIndex() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, SuitSlotIndex); } \
	FORCEINLINE static uint32 __PPO__DefaultButtonParams() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, DefaultButtonParams); } \
	FORCEINLINE static uint32 __PPO__PopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PopUpHeader() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpHeader); } \
	FORCEINLINE static uint32 __PPO__PopUpAcceptAction() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__PopUpCancelAction() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__PreviousEquippedConfig() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PreviousEquippedConfig); } \
	FORCEINLINE static uint32 __PPO__PopUpBody() { return STRUCT_OFFSET(USBZMainMenuSuitCosmeticCustomizationScreen, PopUpBody); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_16_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuSuitCosmeticCustomizationScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitCosmeticCustomizationScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
