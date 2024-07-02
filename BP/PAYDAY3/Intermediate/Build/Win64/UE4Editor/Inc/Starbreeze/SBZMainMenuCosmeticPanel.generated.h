// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCosmeticPanelInitParams;
class USBZMenuButton;
class USBZCosmeticsDataAsset;
#ifdef STARBREEZE_SBZMainMenuCosmeticPanel_generated_h
#error "SBZMainMenuCosmeticPanel.generated.h already included, missing '#pragma once' in SBZMainMenuCosmeticPanel.h"
#endif
#define STARBREEZE_SBZMainMenuCosmeticPanel_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGiveKeyboardFocus); \
	DECLARE_FUNCTION(execInitializeCosmeticItemPanel); \
	DECLARE_FUNCTION(execNativeOnCosmeticItemButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeOnCosmeticItemButtonHoverChanged); \
	DECLARE_FUNCTION(execNativeOnCosmeticItemButtonSelected); \
	DECLARE_FUNCTION(execReleaseButtons); \
	DECLARE_FUNCTION(execUpdateStackCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGiveKeyboardFocus); \
	DECLARE_FUNCTION(execInitializeCosmeticItemPanel); \
	DECLARE_FUNCTION(execNativeOnCosmeticItemButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeOnCosmeticItemButtonHoverChanged); \
	DECLARE_FUNCTION(execNativeOnCosmeticItemButtonSelected); \
	DECLARE_FUNCTION(execReleaseButtons); \
	DECLARE_FUNCTION(execUpdateStackCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmeticPanel(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmeticPanel, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmeticPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmeticPanel(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmeticPanel, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmeticPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCosmeticPanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCosmeticPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmeticPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmeticPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmeticPanel(USBZMainMenuCosmeticPanel&&); \
	NO_API USBZMainMenuCosmeticPanel(const USBZMainMenuCosmeticPanel&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmeticPanel(USBZMainMenuCosmeticPanel&&); \
	NO_API USBZMainMenuCosmeticPanel(const USBZMainMenuCosmeticPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmeticPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmeticPanel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCosmeticPanel)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CosmeticButtonMap() { return STRUCT_OFFSET(USBZMainMenuCosmeticPanel, CosmeticButtonMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCosmeticPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
