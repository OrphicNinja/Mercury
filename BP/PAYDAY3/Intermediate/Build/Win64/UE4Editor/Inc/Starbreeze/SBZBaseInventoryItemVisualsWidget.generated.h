// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInventoryBaseData;
class UPaperSprite;
#ifdef STARBREEZE_SBZBaseInventoryItemVisualsWidget_generated_h
#error "SBZBaseInventoryItemVisualsWidget.generated.h already included, missing '#pragma once' in SBZBaseInventoryItemVisualsWidget.h"
#endif
#define STARBREEZE_SBZBaseInventoryItemVisualsWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeItem); \
	DECLARE_FUNCTION(execNativeOnSpriteLoaded); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeItem); \
	DECLARE_FUNCTION(execNativeOnSpriteLoaded); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_EVENT_PARMS \
	struct SBZBaseInventoryItemVisualsWidget_eventItemInitialized_Parms \
	{ \
		const USBZInventoryBaseData* NewItem; \
	}; \
	struct SBZBaseInventoryItemVisualsWidget_eventOnLoadingChanged_Parms \
	{ \
		bool bIsLoading; \
	}; \
	struct SBZBaseInventoryItemVisualsWidget_eventSpriteLoaded_Parms \
	{ \
		UPaperSprite* OutLoadedSprite; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBaseInventoryItemVisualsWidget(); \
	friend struct Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBaseInventoryItemVisualsWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseInventoryItemVisualsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBaseInventoryItemVisualsWidget(); \
	friend struct Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBaseInventoryItemVisualsWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseInventoryItemVisualsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBaseInventoryItemVisualsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBaseInventoryItemVisualsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseInventoryItemVisualsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseInventoryItemVisualsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseInventoryItemVisualsWidget(USBZBaseInventoryItemVisualsWidget&&); \
	NO_API USBZBaseInventoryItemVisualsWidget(const USBZBaseInventoryItemVisualsWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseInventoryItemVisualsWidget(USBZBaseInventoryItemVisualsWidget&&); \
	NO_API USBZBaseInventoryItemVisualsWidget(const USBZBaseInventoryItemVisualsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseInventoryItemVisualsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseInventoryItemVisualsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBaseInventoryItemVisualsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Item() { return STRUCT_OFFSET(USBZBaseInventoryItemVisualsWidget, Item); } \
	FORCEINLINE static uint32 __PPO__ItemSprite() { return STRUCT_OFFSET(USBZBaseInventoryItemVisualsWidget, ItemSprite); } \
	FORCEINLINE static uint32 __PPO__LastItemSprite() { return STRUCT_OFFSET(USBZBaseInventoryItemVisualsWidget, LastItemSprite); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBaseInventoryItemVisualsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBaseInventoryItemVisualsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
