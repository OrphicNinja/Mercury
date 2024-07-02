// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZKeyItemData;
#ifdef STARBREEZE_PD3HUDKeyItemWidget_generated_h
#error "PD3HUDKeyItemWidget.generated.h already included, missing '#pragma once' in PD3HUDKeyItemWidget.h"
#endif
#define STARBREEZE_PD3HUDKeyItemWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_EVENT_PARMS \
	struct PD3HUDKeyItemWidget_eventOnKeyItemCountChanged_Parms \
	{ \
		int32 InKeyItemCount; \
	}; \
	struct PD3HUDKeyItemWidget_eventOnKeyItemPickedUp_Parms \
	{ \
		USBZKeyItemData* InKeyItemData; \
		int32 InitialCount; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDKeyItemWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDKeyItemWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDKeyItemWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDKeyItemWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDKeyItemWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDKeyItemWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDKeyItemWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDKeyItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDKeyItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDKeyItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDKeyItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDKeyItemWidget(UPD3HUDKeyItemWidget&&); \
	NO_API UPD3HUDKeyItemWidget(const UPD3HUDKeyItemWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDKeyItemWidget(UPD3HUDKeyItemWidget&&); \
	NO_API UPD3HUDKeyItemWidget(const UPD3HUDKeyItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDKeyItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDKeyItemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDKeyItemWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KeyItemData() { return STRUCT_OFFSET(UPD3HUDKeyItemWidget, KeyItemData); } \
	FORCEINLINE static uint32 __PPO__Image_KeyItem() { return STRUCT_OFFSET(UPD3HUDKeyItemWidget, Image_KeyItem); } \
	FORCEINLINE static uint32 __PPO__KeyItemCount() { return STRUCT_OFFSET(UPD3HUDKeyItemWidget, KeyItemCount); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDKeyItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDKeyItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
