// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
enum class ESBZEquippableLoadoutSlot : uint8;
class USBZEquippableData;
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZMainMenuLoadoutWeaponSlotButton_generated_h
#error "SBZMainMenuLoadoutWeaponSlotButton.generated.h already included, missing '#pragma once' in SBZMainMenuLoadoutWeaponSlotButton.h"
#endif
#define STARBREEZE_SBZMainMenuLoadoutWeaponSlotButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEntitlementAndWeaponID); \
	DECLARE_FUNCTION(execGetEquippableSlot); \
	DECLARE_FUNCTION(execGetWeaponInSlot); \
	DECLARE_FUNCTION(execGetWeaponInSlotLevel); \
	DECLARE_FUNCTION(execGetWeaponInventoryData); \
	DECLARE_FUNCTION(execGetWeaponSlotIndex); \
	DECLARE_FUNCTION(execInitializeWeaponSlot); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsPresetWeaponSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEntitlementAndWeaponID); \
	DECLARE_FUNCTION(execGetEquippableSlot); \
	DECLARE_FUNCTION(execGetWeaponInSlot); \
	DECLARE_FUNCTION(execGetWeaponInSlotLevel); \
	DECLARE_FUNCTION(execGetWeaponInventoryData); \
	DECLARE_FUNCTION(execGetWeaponSlotIndex); \
	DECLARE_FUNCTION(execInitializeWeaponSlot); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsPresetWeaponSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_EVENT_PARMS \
	struct SBZMainMenuLoadoutWeaponSlotButton_eventSetActiveWeaponSlot_Parms \
	{ \
		bool bIsActiveWeaponSlot; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutWeaponSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutWeaponSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutWeaponSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutWeaponSlotButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutWeaponSlotButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutWeaponSlotButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutWeaponSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuLoadoutWeaponSlotButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuLoadoutWeaponSlotButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutWeaponSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutWeaponSlotButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutWeaponSlotButton(USBZMainMenuLoadoutWeaponSlotButton&&); \
	NO_API USBZMainMenuLoadoutWeaponSlotButton(const USBZMainMenuLoadoutWeaponSlotButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutWeaponSlotButton(USBZMainMenuLoadoutWeaponSlotButton&&); \
	NO_API USBZMainMenuLoadoutWeaponSlotButton(const USBZMainMenuLoadoutWeaponSlotButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutWeaponSlotButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutWeaponSlotButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuLoadoutWeaponSlotButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSlot() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponSlotButton, WeaponSlot); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponSlotButton, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponSlotButton, WeaponSlotIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuLoadoutWeaponSlotButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponSlotButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
