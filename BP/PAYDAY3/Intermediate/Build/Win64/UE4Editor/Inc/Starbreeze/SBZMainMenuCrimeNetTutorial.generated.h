// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
class USBZMainMenuCrimeNetHeistButton;
#ifdef STARBREEZE_SBZMainMenuCrimeNetTutorial_generated_h
#error "SBZMainMenuCrimeNetTutorial.generated.h already included, missing '#pragma once' in SBZMainMenuCrimeNetTutorial.h"
#endif
#define STARBREEZE_SBZMainMenuCrimeNetTutorial_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePartyChanged); \
	DECLARE_FUNCTION(execNativeOnDisabledHeistButtonSelected); \
	DECLARE_FUNCTION(execNativeOnHeistButtonFocused); \
	DECLARE_FUNCTION(execNativeOnHeistButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePartyChanged); \
	DECLARE_FUNCTION(execNativeOnDisabledHeistButtonSelected); \
	DECLARE_FUNCTION(execNativeOnHeistButtonFocused); \
	DECLARE_FUNCTION(execNativeOnHeistButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_EVENT_PARMS \
	struct SBZMainMenuCrimeNetTutorial_eventDisableHeistButtons_Parms \
	{ \
		bool bDisabled; \
	}; \
	struct SBZMainMenuCrimeNetTutorial_eventOnDisabledHeistButtonSelected_Parms \
	{ \
		USBZMainMenuCrimeNetHeistButton* SelectedButton; \
	}; \
	struct SBZMainMenuCrimeNetTutorial_eventOnHeistButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuCrimeNetTutorial_eventOnHeistButtonSelected_Parms \
	{ \
		USBZMainMenuCrimeNetHeistButton* SelectedButton; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCrimeNetTutorial(); \
	friend struct Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCrimeNetTutorial, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCrimeNetTutorial)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCrimeNetTutorial(); \
	friend struct Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCrimeNetTutorial, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCrimeNetTutorial)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCrimeNetTutorial(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCrimeNetTutorial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCrimeNetTutorial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCrimeNetTutorial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCrimeNetTutorial(USBZMainMenuCrimeNetTutorial&&); \
	NO_API USBZMainMenuCrimeNetTutorial(const USBZMainMenuCrimeNetTutorial&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCrimeNetTutorial(USBZMainMenuCrimeNetTutorial&&); \
	NO_API USBZMainMenuCrimeNetTutorial(const USBZMainMenuCrimeNetTutorial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCrimeNetTutorial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCrimeNetTutorial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCrimeNetTutorial)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeistButtonClass() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, HeistButtonClass); } \
	FORCEINLINE static uint32 __PPO__VerticalBox_HeistButtons() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, VerticalBox_HeistButtons); } \
	FORCEINLINE static uint32 __PPO__HeistButtonPadding() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, HeistButtonPadding); } \
	FORCEINLINE static uint32 __PPO__SelectedHeistButton() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, SelectedHeistButton); } \
	FORCEINLINE static uint32 __PPO__HeistButtonPool() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, HeistButtonPool); } \
	FORCEINLINE static uint32 __PPO__TutorialLevelPaths() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, TutorialLevelPaths); } \
	FORCEINLINE static uint32 __PPO__bHasDisabledButtons() { return STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, bHasDisabledButtons); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCrimeNetTutorial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNetTutorial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
