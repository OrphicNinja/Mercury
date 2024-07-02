// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
struct FUniqueNetIdRepl;
class USBZPreplanningAssetData;
#ifdef STARBREEZE_SBZMainMenuPrePlanningItemSelectionWidget_generated_h
#error "SBZMainMenuPrePlanningItemSelectionWidget.generated.h already included, missing '#pragma once' in SBZMainMenuPrePlanningItemSelectionWidget.h"
#endif
#define STARBREEZE_SBZMainMenuPrePlanningItemSelectionWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnPrePlanningItemButtonSelected); \
	DECLARE_FUNCTION(execNativePreplanningAssetAddedByPlayer); \
	DECLARE_FUNCTION(execNativePreplanningAssetRemovedByPlayer); \
	DECLARE_FUNCTION(execSetPreplanningSelectionEnabled); \
	DECLARE_FUNCTION(execUpdateAvailablePrePlanningAssetList);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnPrePlanningItemButtonSelected); \
	DECLARE_FUNCTION(execNativePreplanningAssetAddedByPlayer); \
	DECLARE_FUNCTION(execNativePreplanningAssetRemovedByPlayer); \
	DECLARE_FUNCTION(execSetPreplanningSelectionEnabled); \
	DECLARE_FUNCTION(execUpdateAvailablePrePlanningAssetList);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_EVENT_PARMS \
	struct SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetAddedByPlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerID; \
		const USBZPreplanningAssetData* PreplanningAsset; \
	}; \
	struct SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningAssetRemovedByPlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerID; \
	}; \
	struct SBZMainMenuPrePlanningItemSelectionWidget_eventOnPrePlanningItemButtonFocused_Parms \
	{ \
		USBZMenuButton* InButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuPrePlanningItemSelectionWidget_eventOnPreplanningSelectionEnabledChanged_Parms \
	{ \
		bool bEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPrePlanningItemSelectionWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPrePlanningItemSelectionWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPrePlanningItemSelectionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPrePlanningItemSelectionWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuPrePlanningItemSelectionWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPrePlanningItemSelectionWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPrePlanningItemSelectionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuPrePlanningItemSelectionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuPrePlanningItemSelectionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPrePlanningItemSelectionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPrePlanningItemSelectionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPrePlanningItemSelectionWidget(USBZMainMenuPrePlanningItemSelectionWidget&&); \
	NO_API USBZMainMenuPrePlanningItemSelectionWidget(const USBZMainMenuPrePlanningItemSelectionWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPrePlanningItemSelectionWidget(USBZMainMenuPrePlanningItemSelectionWidget&&); \
	NO_API USBZMainMenuPrePlanningItemSelectionWidget(const USBZMainMenuPrePlanningItemSelectionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPrePlanningItemSelectionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPrePlanningItemSelectionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuPrePlanningItemSelectionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_ButtonList() { return STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, Panel_ButtonList); } \
	FORCEINLINE static uint32 __PPO__PreplanningItemButtonClass() { return STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, PreplanningItemButtonClass); } \
	FORCEINLINE static uint32 __PPO__ActiveMap() { return STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, ActiveMap); } \
	FORCEINLINE static uint32 __PPO__PrePlanningItemButtonPool() { return STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, PrePlanningItemButtonPool); } \
	FORCEINLINE static uint32 __PPO__CachedPlayerInventory() { return STRUCT_OFFSET(USBZMainMenuPrePlanningItemSelectionWidget, CachedPlayerInventory); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuPrePlanningItemSelectionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPrePlanningItemSelectionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
