// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMaskData;
struct FSBZMaskInventorySlot;
#ifdef STARBREEZE_SBZMainMenuInventoryMaskSlotButton_generated_h
#error "SBZMainMenuInventoryMaskSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryMaskSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryMaskSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaskInSlot); \
	DECLARE_FUNCTION(execGetMaskSlot); \
	DECLARE_FUNCTION(execGetMaskSlotIndex); \
	DECLARE_FUNCTION(execInitializeMaskSlot); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsPreconfigMaskSlot); \
	DECLARE_FUNCTION(execIsPresetMaskSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaskInSlot); \
	DECLARE_FUNCTION(execGetMaskSlot); \
	DECLARE_FUNCTION(execGetMaskSlotIndex); \
	DECLARE_FUNCTION(execInitializeMaskSlot); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsPreconfigMaskSlot); \
	DECLARE_FUNCTION(execIsPresetMaskSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_EVENT_PARMS \
	struct SBZMainMenuInventoryMaskSlotButton_eventSetActiveMaskSlot_Parms \
	{ \
		bool bIsActiveMaskSlot; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryMaskSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryMaskSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryMaskSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryMaskSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryMaskSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryMaskSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryMaskSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryMaskSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryMaskSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryMaskSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryMaskSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryMaskSlotButton(USBZMainMenuInventoryMaskSlotButton&&); \
	NO_API USBZMainMenuInventoryMaskSlotButton(const USBZMainMenuInventoryMaskSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryMaskSlotButton(USBZMainMenuInventoryMaskSlotButton&&); \
	NO_API USBZMainMenuInventoryMaskSlotButton(const USBZMainMenuInventoryMaskSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryMaskSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryMaskSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryMaskSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaskSlot() { return STRUCT_OFFSET(USBZMainMenuInventoryMaskSlotButton, MaskSlot); } \
	FORCEINLINE static uint32 __PPO__MaskSlotIndex() { return STRUCT_OFFSET(USBZMainMenuInventoryMaskSlotButton, MaskSlotIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryMaskSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryMaskSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
