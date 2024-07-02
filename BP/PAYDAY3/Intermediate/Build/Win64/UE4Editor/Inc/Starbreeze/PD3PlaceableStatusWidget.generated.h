// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
#ifdef STARBREEZE_PD3PlaceableStatusWidget_generated_h
#error "PD3PlaceableStatusWidget.generated.h already included, missing '#pragma once' in PD3PlaceableStatusWidget.h"
#endif
#define STARBREEZE_PD3PlaceableStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_EVENT_PARMS \
	struct PD3PlaceableStatusWidget_eventOnAmmoInventoryChanged_Parms \
	{ \
		int32 InAmmoInventory; \
	}; \
	struct PD3PlaceableStatusWidget_eventOnIconChanged_Parms \
	{ \
		TSoftObjectPtr<UPaperSprite> InIcon; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3PlaceableStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3PlaceableStatusWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3PlaceableStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPD3PlaceableStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3PlaceableStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3PlaceableStatusWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3PlaceableStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3PlaceableStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3PlaceableStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3PlaceableStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3PlaceableStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3PlaceableStatusWidget(UPD3PlaceableStatusWidget&&); \
	NO_API UPD3PlaceableStatusWidget(const UPD3PlaceableStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3PlaceableStatusWidget(UPD3PlaceableStatusWidget&&); \
	NO_API UPD3PlaceableStatusWidget(const UPD3PlaceableStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3PlaceableStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3PlaceableStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3PlaceableStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_AbilityAction() { return STRUCT_OFFSET(UPD3PlaceableStatusWidget, Widget_AbilityAction); } \
	FORCEINLINE static uint32 __PPO__bHasValidPlaceableIndex() { return STRUCT_OFFSET(UPD3PlaceableStatusWidget, bHasValidPlaceableIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentPlaceableIndex() { return STRUCT_OFFSET(UPD3PlaceableStatusWidget, CurrentPlaceableIndex); } \
	FORCEINLINE static uint32 __PPO__AmmoInventory() { return STRUCT_OFFSET(UPD3PlaceableStatusWidget, AmmoInventory); }


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3PlaceableStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3PlaceableStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
