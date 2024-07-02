// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZPlayerCharacterData;
#ifdef STARBREEZE_SBZCharacterPreferenceCharacterSlotButton_generated_h
#error "SBZCharacterPreferenceCharacterSlotButton.generated.h already included, missing '#pragma once' in SBZCharacterPreferenceCharacterSlotButton.h"
#endif
#define STARBREEZE_SBZCharacterPreferenceCharacterSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisplayIndex); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetCharacterInSlot); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execSetIndexNone); \
	DECLARE_FUNCTION(execSetLocked);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisplayIndex); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetCharacterInSlot); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execSetIndex); \
	DECLARE_FUNCTION(execSetIndexNone); \
	DECLARE_FUNCTION(execSetLocked);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_EVENT_PARMS \
	struct SBZCharacterPreferenceCharacterSlotButton_eventOnActiveChanged_Parms \
	{ \
		bool bInIsActive; \
	}; \
	struct SBZCharacterPreferenceCharacterSlotButton_eventOnHovered_Parms \
	{ \
		bool bIsHovered; \
	}; \
	struct SBZCharacterPreferenceCharacterSlotButton_eventOnLockedChanged_Parms \
	{ \
		bool bInIsLocked; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterPreferenceCharacterSlotButton(); \
	friend struct Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterPreferenceCharacterSlotButton, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterPreferenceCharacterSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterPreferenceCharacterSlotButton(); \
	friend struct Z_Construct_UClass_USBZCharacterPreferenceCharacterSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterPreferenceCharacterSlotButton, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterPreferenceCharacterSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterPreferenceCharacterSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterPreferenceCharacterSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterPreferenceCharacterSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterPreferenceCharacterSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterPreferenceCharacterSlotButton(USBZCharacterPreferenceCharacterSlotButton&&); \
	NO_API USBZCharacterPreferenceCharacterSlotButton(const USBZCharacterPreferenceCharacterSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterPreferenceCharacterSlotButton(USBZCharacterPreferenceCharacterSlotButton&&); \
	NO_API USBZCharacterPreferenceCharacterSlotButton(const USBZCharacterPreferenceCharacterSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterPreferenceCharacterSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterPreferenceCharacterSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCharacterPreferenceCharacterSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsLocked() { return STRUCT_OFFSET(USBZCharacterPreferenceCharacterSlotButton, bIsLocked); } \
	FORCEINLINE static uint32 __PPO__ItemIndex() { return STRUCT_OFFSET(USBZCharacterPreferenceCharacterSlotButton, ItemIndex); } \
	FORCEINLINE static uint32 __PPO__CharacterInSlot() { return STRUCT_OFFSET(USBZCharacterPreferenceCharacterSlotButton, CharacterInSlot); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterPreferenceCharacterSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterPreferenceCharacterSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
