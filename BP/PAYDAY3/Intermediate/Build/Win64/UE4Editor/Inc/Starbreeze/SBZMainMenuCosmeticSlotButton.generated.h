// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCosmeticsPartSlot;
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZMainMenuCosmeticSlotButton_generated_h
#error "SBZMainMenuCosmeticSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuCosmeticSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuCosmeticSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeButton); \
	DECLARE_FUNCTION(execSetCosmeticPartSlot); \
	DECLARE_FUNCTION(execSetItemInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeButton); \
	DECLARE_FUNCTION(execSetCosmeticPartSlot); \
	DECLARE_FUNCTION(execSetItemInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_EVENT_PARMS \
	struct SBZMainMenuCosmeticSlotButton_eventCosmeticPartSlotChanged_Parms \
	{ \
		const USBZCosmeticsPartSlot* InCosmeticPartSlot; \
	}; \
	struct SBZMainMenuCosmeticSlotButton_eventItemInSlotChanged_Parms \
	{ \
		const USBZInventoryBaseData* InItemBaseData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmeticSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmeticSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmeticSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmeticSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmeticSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmeticSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmeticSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCosmeticSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCosmeticSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmeticSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmeticSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmeticSlotButton(USBZMainMenuCosmeticSlotButton&&); \
	NO_API USBZMainMenuCosmeticSlotButton(const USBZMainMenuCosmeticSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmeticSlotButton(USBZMainMenuCosmeticSlotButton&&); \
	NO_API USBZMainMenuCosmeticSlotButton(const USBZMainMenuCosmeticSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmeticSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmeticSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCosmeticSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PartSlot() { return STRUCT_OFFSET(USBZMainMenuCosmeticSlotButton, PartSlot); } \
	FORCEINLINE static uint32 __PPO__ItemInSlot() { return STRUCT_OFFSET(USBZMainMenuCosmeticSlotButton, ItemInSlot); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCosmeticSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
