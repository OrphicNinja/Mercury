// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZMainMenuInventoryWidget_generated_h
#error "SBZMainMenuInventoryWidget.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryWidget.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnLoadoutSlotStoreItemTransactionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnLoadoutSlotStoreItemTransactionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_EVENT_PARMS \
	struct SBZMainMenuInventoryWidget_eventLoadoutSlotStorePurchased_Parms \
	{ \
		bool bWasSuccessful; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryWidget(USBZMainMenuInventoryWidget&&); \
	NO_API USBZMainMenuInventoryWidget(const USBZMainMenuInventoryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryWidget(USBZMainMenuInventoryWidget&&); \
	NO_API USBZMainMenuInventoryWidget(const USBZMainMenuInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_LoadoutSlotStoreItem() { return STRUCT_OFFSET(USBZMainMenuInventoryWidget, Button_LoadoutSlotStoreItem); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
