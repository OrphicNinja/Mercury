// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
class USBZMainMenuCrimeNetHeistMapIcon;
enum class EUINavigation : uint8;
class USBZMainMenuCrimeNetHeistButton;
struct FSBZHeistCollectionWithOwnership;
#ifdef STARBREEZE_SBZMainMenuCrimeNet_generated_h
#error "SBZMainMenuCrimeNet.generated.h already included, missing '#pragma once' in SBZMainMenuCrimeNet.h"
#endif
#define STARBREEZE_SBZMainMenuCrimeNet_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecrementHeistCollection); \
	DECLARE_FUNCTION(execIncrementHeistCollection); \
	DECLARE_FUNCTION(execNativeOnHeistButtonFocused); \
	DECLARE_FUNCTION(execNativeOnHeistButtonHovered); \
	DECLARE_FUNCTION(execNativeOnHeistButtonSelected); \
	DECLARE_FUNCTION(execNativeOnHeistMapIconClicked); \
	DECLARE_FUNCTION(execOnHeistButtonNavigation); \
	DECLARE_FUNCTION(execRefreshCollections); \
	DECLARE_FUNCTION(execSetActiveHeistCollection); \
	DECLARE_FUNCTION(execToggleStoryModeFilter); \
	DECLARE_FUNCTION(execUpdateHeistCollection);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecrementHeistCollection); \
	DECLARE_FUNCTION(execIncrementHeistCollection); \
	DECLARE_FUNCTION(execNativeOnHeistButtonFocused); \
	DECLARE_FUNCTION(execNativeOnHeistButtonHovered); \
	DECLARE_FUNCTION(execNativeOnHeistButtonSelected); \
	DECLARE_FUNCTION(execNativeOnHeistMapIconClicked); \
	DECLARE_FUNCTION(execOnHeistButtonNavigation); \
	DECLARE_FUNCTION(execRefreshCollections); \
	DECLARE_FUNCTION(execSetActiveHeistCollection); \
	DECLARE_FUNCTION(execToggleStoryModeFilter); \
	DECLARE_FUNCTION(execUpdateHeistCollection);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_EVENT_PARMS \
	struct SBZMainMenuCrimeNet_eventOnHeistButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuCrimeNet_eventOnHeistButtonSelected_Parms \
	{ \
		USBZMainMenuCrimeNetHeistButton* SelectedButton; \
	}; \
	struct SBZMainMenuCrimeNet_eventOnHeistCollectionChanged_Parms \
	{ \
		FSBZHeistCollectionWithOwnership ActiveHeistCollection; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCrimeNet(); \
	friend struct Z_Construct_UClass_USBZMainMenuCrimeNet_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCrimeNet, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCrimeNet)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCrimeNet(); \
	friend struct Z_Construct_UClass_USBZMainMenuCrimeNet_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCrimeNet, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCrimeNet)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCrimeNet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCrimeNet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCrimeNet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCrimeNet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCrimeNet(USBZMainMenuCrimeNet&&); \
	NO_API USBZMainMenuCrimeNet(const USBZMainMenuCrimeNet&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCrimeNet(USBZMainMenuCrimeNet&&); \
	NO_API USBZMainMenuCrimeNet(const USBZMainMenuCrimeNet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCrimeNet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCrimeNet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCrimeNet)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeistButtonClass() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistButtonClass); } \
	FORCEINLINE static uint32 __PPO__StoryModeButtonClass() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, StoryModeButtonClass); } \
	FORCEINLINE static uint32 __PPO__HorizontalBox_HeistButtons() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HorizontalBox_HeistButtons); } \
	FORCEINLINE static uint32 __PPO__HeistButtonPadding() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistButtonPadding); } \
	FORCEINLINE static uint32 __PPO__HeistMapIconClass() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistMapIconClass); } \
	FORCEINLINE static uint32 __PPO__CanvasPanel_HeistMapIcons() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, CanvasPanel_HeistMapIcons); } \
	FORCEINLINE static uint32 __PPO__SelectedHeistButton() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, SelectedHeistButton); } \
	FORCEINLINE static uint32 __PPO__ActiveHeistButtons() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, ActiveHeistButtons); } \
	FORCEINLINE static uint32 __PPO__ActiveHeistCollectionIndex() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, ActiveHeistCollectionIndex); } \
	FORCEINLINE static uint32 __PPO__HeistCollections() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistCollections); } \
	FORCEINLINE static uint32 __PPO__HeistButtonPool() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistButtonPool); } \
	FORCEINLINE static uint32 __PPO__HeistMapIconsPool() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, HeistMapIconsPool); } \
	FORCEINLINE static uint32 __PPO__StoryModeButtonPool() { return STRUCT_OFFSET(USBZMainMenuCrimeNet, StoryModeButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCrimeNet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCrimeNet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
