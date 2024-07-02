// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZSuitData;
struct FSBZSuitConfig;
#ifdef STARBREEZE_SBZMainMenuInventorySuitSlotButton_generated_h
#error "SBZMainMenuInventorySuitSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuInventorySuitSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuInventorySuitSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSuitInSlot); \
	DECLARE_FUNCTION(execGetSuitInSlotConfig); \
	DECLARE_FUNCTION(execGetSuitSlotIndex); \
	DECLARE_FUNCTION(execInitializeSuitSlot); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsPresetSuitSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSuitInSlot); \
	DECLARE_FUNCTION(execGetSuitInSlotConfig); \
	DECLARE_FUNCTION(execGetSuitSlotIndex); \
	DECLARE_FUNCTION(execInitializeSuitSlot); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsPresetSuitSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_EVENT_PARMS \
	struct SBZMainMenuInventorySuitSlotButton_eventSetActiveSuitSlot_Parms \
	{ \
		bool bIsActiveSuitSlot; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventorySuitSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventorySuitSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventorySuitSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventorySuitSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventorySuitSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventorySuitSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventorySuitSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventorySuitSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventorySuitSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventorySuitSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventorySuitSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventorySuitSlotButton(USBZMainMenuInventorySuitSlotButton&&); \
	NO_API USBZMainMenuInventorySuitSlotButton(const USBZMainMenuInventorySuitSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventorySuitSlotButton(USBZMainMenuInventorySuitSlotButton&&); \
	NO_API USBZMainMenuInventorySuitSlotButton(const USBZMainMenuInventorySuitSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventorySuitSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventorySuitSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventorySuitSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuitSlot() { return STRUCT_OFFSET(USBZMainMenuInventorySuitSlotButton, SuitSlot); } \
	FORCEINLINE static uint32 __PPO__SuitSlotIndex() { return STRUCT_OFFSET(USBZMainMenuInventorySuitSlotButton, SuitSlotIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventorySuitSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventorySuitSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
