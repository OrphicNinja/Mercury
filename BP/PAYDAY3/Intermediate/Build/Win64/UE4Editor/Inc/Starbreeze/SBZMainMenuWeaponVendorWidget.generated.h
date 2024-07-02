// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
struct FGuid;
struct FSBZWeaponStoreItem;
struct FSBZWeaponPresetStoreItem;
struct FGuid; struct FSBZWeaponPresetStoreItem;
struct FGuid; struct FSBZWeaponStoreItem;
#ifdef STARBREEZE_SBZMainMenuWeaponVendorWidget_generated_h
#error "SBZMainMenuWeaponVendorWidget.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponVendorWidget.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponVendorWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnBuyWeaponDone); \
	DECLARE_FUNCTION(execNativeOnBuyWeaponPresetDone); \
	DECLARE_FUNCTION(execTryBuyWeapon); \
	DECLARE_FUNCTION(execTryBuyWeaponPreset);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnBuyWeaponDone); \
	DECLARE_FUNCTION(execNativeOnBuyWeaponPresetDone); \
	DECLARE_FUNCTION(execTryBuyWeapon); \
	DECLARE_FUNCTION(execTryBuyWeaponPreset);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_EVENT_PARMS \
	struct SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponDone_Parms \
	{ \
		bool bWasSuccess; \
	}; \
	struct SBZMainMenuWeaponVendorWidget_eventOnBuyWeaponPresetDone_Parms \
	{ \
		bool bWasSuccess; \
	}; \
	struct SBZMainMenuWeaponVendorWidget_eventOnWeaponPresetStoreItemsUpdated_Parms \
	{ \
		TMap<FGuid,FSBZWeaponPresetStoreItem> InWeaponPresetStoreMap; \
	}; \
	struct SBZMainMenuWeaponVendorWidget_eventOnWeaponStoreItemsUpdated_Parms \
	{ \
		TMap<FGuid,FSBZWeaponStoreItem> InWeaponStoreMap; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponVendorWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponVendorWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponVendorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponVendorWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponVendorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponVendorWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponVendorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponVendorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponVendorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponVendorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponVendorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponVendorWidget(USBZMainMenuWeaponVendorWidget&&); \
	NO_API USBZMainMenuWeaponVendorWidget(const USBZMainMenuWeaponVendorWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponVendorWidget(USBZMainMenuWeaponVendorWidget&&); \
	NO_API USBZMainMenuWeaponVendorWidget(const USBZMainMenuWeaponVendorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponVendorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponVendorWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponVendorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponVendorWidget, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__WeaponStoreMap() { return STRUCT_OFFSET(USBZMainMenuWeaponVendorWidget, WeaponStoreMap); } \
	FORCEINLINE static uint32 __PPO__WeaponPresetStoreMap() { return STRUCT_OFFSET(USBZMainMenuWeaponVendorWidget, WeaponPresetStoreMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponVendorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponVendorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
