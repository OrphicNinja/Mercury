// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerLoadoutConfig;
#ifdef STARBREEZE_SBZMainMenuPrePlaningLoadoutSelection_generated_h
#error "SBZMainMenuPrePlaningLoadoutSelection.generated.h already included, missing '#pragma once' in SBZMainMenuPrePlaningLoadoutSelection.h"
#endif
#define STARBREEZE_SBZMainMenuPrePlaningLoadoutSelection_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindGamepadActions); \
	DECLARE_FUNCTION(execGetFocusedPlayerLoadoutIndex); \
	DECLARE_FUNCTION(execIsFocusedPlayerLoadoutValid); \
	DECLARE_FUNCTION(execNativeOnActiveLoadoutChanged); \
	DECLARE_FUNCTION(execNativeOnFocusedPlayerLoadoutConfigChanged); \
	DECLARE_FUNCTION(execOnLocalLoadoutUpdated); \
	DECLARE_FUNCTION(execSetFocusedPlayerLoadoutIndex); \
	DECLARE_FUNCTION(execUnbindGamepadActions);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindGamepadActions); \
	DECLARE_FUNCTION(execGetFocusedPlayerLoadoutIndex); \
	DECLARE_FUNCTION(execIsFocusedPlayerLoadoutValid); \
	DECLARE_FUNCTION(execNativeOnActiveLoadoutChanged); \
	DECLARE_FUNCTION(execNativeOnFocusedPlayerLoadoutConfigChanged); \
	DECLARE_FUNCTION(execOnLocalLoadoutUpdated); \
	DECLARE_FUNCTION(execSetFocusedPlayerLoadoutIndex); \
	DECLARE_FUNCTION(execUnbindGamepadActions);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_EVENT_PARMS \
	struct SBZMainMenuPrePlaningLoadoutSelection_eventActiveLoadoutChanged_Parms \
	{ \
		int32 NewActiveLoadoutIndex; \
	}; \
	struct SBZMainMenuPrePlaningLoadoutSelection_eventFocusedPlayerLoadoutConfigChanged_Parms \
	{ \
		FSBZPlayerLoadoutConfig NewPlayerLoadout; \
	}; \
	struct SBZMainMenuPrePlaningLoadoutSelection_eventOnInputTypeChangedToGamepad_Parms \
	{ \
		bool bIsGamepad; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPrePlaningLoadoutSelection(); \
	friend struct Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPrePlaningLoadoutSelection, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPrePlaningLoadoutSelection)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPrePlaningLoadoutSelection(); \
	friend struct Z_Construct_UClass_USBZMainMenuPrePlaningLoadoutSelection_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPrePlaningLoadoutSelection, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPrePlaningLoadoutSelection)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuPrePlaningLoadoutSelection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuPrePlaningLoadoutSelection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPrePlaningLoadoutSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPrePlaningLoadoutSelection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPrePlaningLoadoutSelection(USBZMainMenuPrePlaningLoadoutSelection&&); \
	NO_API USBZMainMenuPrePlaningLoadoutSelection(const USBZMainMenuPrePlaningLoadoutSelection&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPrePlaningLoadoutSelection(USBZMainMenuPrePlaningLoadoutSelection&&); \
	NO_API USBZMainMenuPrePlaningLoadoutSelection(const USBZMainMenuPrePlaningLoadoutSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPrePlaningLoadoutSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPrePlaningLoadoutSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuPrePlaningLoadoutSelection)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnFocusedPlayerLoadoutConfigChanged() { return STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, OnFocusedPlayerLoadoutConfigChanged); } \
	FORCEINLINE static uint32 __PPO__FocusedPlayerLoadoutIndex() { return STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, FocusedPlayerLoadoutIndex); } \
	FORCEINLINE static uint32 __PPO__bIsValidLoadout() { return STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, bIsValidLoadout); } \
	FORCEINLINE static uint32 __PPO__MoveForwardActionName() { return STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, MoveForwardActionName); } \
	FORCEINLINE static uint32 __PPO__MoveBackwardActionName() { return STRUCT_OFFSET(USBZMainMenuPrePlaningLoadoutSelection, MoveBackwardActionName); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuPrePlaningLoadoutSelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlaningLoadoutSelection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
