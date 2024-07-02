// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZMainMenuInventoryItemWidget_generated_h
#error "SBZMainMenuInventoryItemWidget.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryItemWidget.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryItemWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_EVENT_PARMS \
	struct SBZMainMenuInventoryItemWidget_eventInitializeItem_Parms \
	{ \
		const USBZInventoryBaseData* InInventoryItemData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryItemWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryItemWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryItemWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryItemWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryItemWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryItemWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryItemWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryItemWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryItemWidget(USBZMainMenuInventoryItemWidget&&); \
	NO_API USBZMainMenuInventoryItemWidget(const USBZMainMenuInventoryItemWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryItemWidget(USBZMainMenuInventoryItemWidget&&); \
	NO_API USBZMainMenuInventoryItemWidget(const USBZMainMenuInventoryItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryItemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryItemWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_ItemName() { return STRUCT_OFFSET(USBZMainMenuInventoryItemWidget, Text_ItemName); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
