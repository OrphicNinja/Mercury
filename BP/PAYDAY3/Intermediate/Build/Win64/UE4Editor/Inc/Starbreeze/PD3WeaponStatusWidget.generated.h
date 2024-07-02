// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3AmmoState : uint8;
struct FSBZCombinedReloadState;
#ifdef STARBREEZE_PD3WeaponStatusWidget_generated_h
#error "PD3WeaponStatusWidget.generated.h already included, missing '#pragma once' in PD3WeaponStatusWidget.h"
#endif
#define STARBREEZE_PD3WeaponStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_EVENT_PARMS \
	struct PD3WeaponStatusWidget_eventOnAmmoAdded_Parms \
	{ \
		int32 AmmoAddedCount; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoInventoryChanged_Parms \
	{ \
		int32 AmmoInventoryChanged; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoInventoryStateChanged_Parms \
	{ \
		EPD3AmmoState NewState; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoLoadedChanged_Parms \
	{ \
		int32 AmmoLoadedChanged; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoLoadedStateChanged_Parms \
	{ \
		EPD3AmmoState NewState; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoTotalChanged_Parms \
	{ \
		int32 AmmoTotalChanged; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoTotalStateChanged_Parms \
	{ \
		EPD3AmmoState NewState; \
	}; \
	struct PD3WeaponStatusWidget_eventOnAmmoValuesInitialized_Parms \
	{ \
		int32 AmmoLoadedInit; \
		int32 AmmoInventoryInit; \
		int32 AmmoTotalInit; \
	}; \
	struct PD3WeaponStatusWidget_eventOnEquippedChanged_Parms \
	{ \
		bool bIsEquippedNewValue; \
	}; \
	struct PD3WeaponStatusWidget_eventOnReloadStateChanged_Parms \
	{ \
		FSBZCombinedReloadState OldCombinedState; \
		FSBZCombinedReloadState NewCombinedState; \
		bool bWasPlaying; \
		bool bIsPlaying; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3WeaponStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3WeaponStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3WeaponStatusWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3WeaponStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPD3WeaponStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3WeaponStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3WeaponStatusWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3WeaponStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3WeaponStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3WeaponStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3WeaponStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3WeaponStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3WeaponStatusWidget(UPD3WeaponStatusWidget&&); \
	NO_API UPD3WeaponStatusWidget(const UPD3WeaponStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3WeaponStatusWidget(UPD3WeaponStatusWidget&&); \
	NO_API UPD3WeaponStatusWidget(const UPD3WeaponStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3WeaponStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3WeaponStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3WeaponStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponIndex() { return STRUCT_OFFSET(UPD3WeaponStatusWidget, WeaponIndex); }


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3WeaponStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3WeaponStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
