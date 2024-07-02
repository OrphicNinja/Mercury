// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZGloveData;
#ifdef STARBREEZE_SBZMainMenuInventoryGloveSlotButton_generated_h
#error "SBZMainMenuInventoryGloveSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryGloveSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryGloveSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGloveInSlot); \
	DECLARE_FUNCTION(execGetGloveSlotIndex); \
	DECLARE_FUNCTION(execInitializeGloveSlot); \
	DECLARE_FUNCTION(execIsEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGloveInSlot); \
	DECLARE_FUNCTION(execGetGloveSlotIndex); \
	DECLARE_FUNCTION(execInitializeGloveSlot); \
	DECLARE_FUNCTION(execIsEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_EVENT_PARMS \
	struct SBZMainMenuInventoryGloveSlotButton_eventSetActiveGloveSlot_Parms \
	{ \
		bool bIsActiveGloveSlot; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryGloveSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryGloveSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryGloveSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryGloveSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryGloveSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryGloveSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryGloveSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryGloveSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryGloveSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryGloveSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryGloveSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryGloveSlotButton(USBZMainMenuInventoryGloveSlotButton&&); \
	NO_API USBZMainMenuInventoryGloveSlotButton(const USBZMainMenuInventoryGloveSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryGloveSlotButton(USBZMainMenuInventoryGloveSlotButton&&); \
	NO_API USBZMainMenuInventoryGloveSlotButton(const USBZMainMenuInventoryGloveSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryGloveSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryGloveSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryGloveSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GloveSlot() { return STRUCT_OFFSET(USBZMainMenuInventoryGloveSlotButton, GloveSlot); } \
	FORCEINLINE static uint32 __PPO__GloveSlotIndex() { return STRUCT_OFFSET(USBZMainMenuInventoryGloveSlotButton, GloveSlotIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryGloveSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryGloveSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
