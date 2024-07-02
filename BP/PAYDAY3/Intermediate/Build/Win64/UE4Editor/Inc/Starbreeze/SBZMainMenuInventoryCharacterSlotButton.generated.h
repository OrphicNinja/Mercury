// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCharacterInventoryData;
#ifdef STARBREEZE_SBZMainMenuInventoryCharacterSlotButton_generated_h
#error "SBZMainMenuInventoryCharacterSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryCharacterSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryCharacterSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeselectPreferredCharacter); \
	DECLARE_FUNCTION(execGetCharacterSlotData); \
	DECLARE_FUNCTION(execGetDisplayPreferredIndex); \
	DECLARE_FUNCTION(execInitializeCharacterSlotData); \
	DECLARE_FUNCTION(execIsPreferredCharacter); \
	DECLARE_FUNCTION(execSetPreferredValueIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeselectPreferredCharacter); \
	DECLARE_FUNCTION(execGetCharacterSlotData); \
	DECLARE_FUNCTION(execGetDisplayPreferredIndex); \
	DECLARE_FUNCTION(execInitializeCharacterSlotData); \
	DECLARE_FUNCTION(execIsPreferredCharacter); \
	DECLARE_FUNCTION(execSetPreferredValueIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryCharacterSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryCharacterSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryCharacterSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryCharacterSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryCharacterSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryCharacterSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryCharacterSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryCharacterSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryCharacterSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryCharacterSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryCharacterSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryCharacterSlotButton(USBZMainMenuInventoryCharacterSlotButton&&); \
	NO_API USBZMainMenuInventoryCharacterSlotButton(const USBZMainMenuInventoryCharacterSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryCharacterSlotButton(USBZMainMenuInventoryCharacterSlotButton&&); \
	NO_API USBZMainMenuInventoryCharacterSlotButton(const USBZMainMenuInventoryCharacterSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryCharacterSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryCharacterSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryCharacterSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterSlotData() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterSlotButton, CharacterSlotData); } \
	FORCEINLINE static uint32 __PPO__InventoryIndex() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterSlotButton, InventoryIndex); } \
	FORCEINLINE static uint32 __PPO__PreferredValueIndex() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterSlotButton, PreferredValueIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryCharacterSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
