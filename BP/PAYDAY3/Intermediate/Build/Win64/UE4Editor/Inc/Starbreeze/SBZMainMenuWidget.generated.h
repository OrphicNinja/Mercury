// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInventoryBaseData;
enum class ESBZEquippableLoadoutSlot : uint8;
enum class ESBZMainMenuCosmeticType : uint8;
struct FFilePath;
class UPD3HeistDataAsset;
enum class ESBZItemLoadoutSlot : uint8;
class USBZCosmeticsPartSlot;
class USBZSuitPartConfig;
class USBZWeaponPartSlot;
enum class ESBZBlackMarketVendorType : uint8;
#ifdef STARBREEZE_SBZMainMenuWidget_generated_h
#error "SBZMainMenuWidget.generated.h already included, missing '#pragma once' in SBZMainMenuWidget.h"
#endif
#define STARBREEZE_SBZMainMenuWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanInspectInventoryItem); \
	DECLARE_FUNCTION(execCustomizeLoadout); \
	DECLARE_FUNCTION(execCustomizeWeaponInSlot); \
	DECLARE_FUNCTION(execCustomizeWeaponInSlotTemp); \
	DECLARE_FUNCTION(execDisplayBlackmarketInspectScreen); \
	DECLARE_FUNCTION(execDisplayCosmeticScreen); \
	DECLARE_FUNCTION(execDisplayFullscreenVideoScreen); \
	DECLARE_FUNCTION(execDisplayHeistInpectScreen); \
	DECLARE_FUNCTION(execDisplayItemInventoryScreen); \
	DECLARE_FUNCTION(execDisplayMaskCustomizationScreen); \
	DECLARE_FUNCTION(execDisplayMaskGenericSlotScreen); \
	DECLARE_FUNCTION(execDisplaySkillsSelection); \
	DECLARE_FUNCTION(execDisplaySuitCosmeticCustomizationScreen); \
	DECLARE_FUNCTION(execDisplaySuitCustomizationScreen); \
	DECLARE_FUNCTION(execDisplayWeaponInventoryScreen); \
	DECLARE_FUNCTION(execDisplayWeaponModiferScreen); \
	DECLARE_FUNCTION(execDisplayWeaponProgressionScreen); \
	DECLARE_FUNCTION(execGetVendorTypeToOpen); \
	DECLARE_FUNCTION(execOnCrossplayPopUpClosed); \
	DECLARE_FUNCTION(execOnGameSensePopUpClosed); \
	DECLARE_FUNCTION(execOnLoadoutChangePopupClosed); \
	DECLARE_FUNCTION(execOnMainMenuInitializeComplete); \
	DECLARE_FUNCTION(execOnTelemetryPopUpClosed); \
	DECLARE_FUNCTION(execOnTutorialPopUpClosed); \
	DECLARE_FUNCTION(execRequestRemoveBackgroundBlur); \
	DECLARE_FUNCTION(execSetVendorTypeToOpen); \
	DECLARE_FUNCTION(execShowCrossplayPopup); \
	DECLARE_FUNCTION(execShowGameSensePopup); \
	DECLARE_FUNCTION(execShowTelemetryPopup); \
	DECLARE_FUNCTION(execShowTutorialPopup);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInspectInventoryItem); \
	DECLARE_FUNCTION(execCustomizeLoadout); \
	DECLARE_FUNCTION(execCustomizeWeaponInSlot); \
	DECLARE_FUNCTION(execCustomizeWeaponInSlotTemp); \
	DECLARE_FUNCTION(execDisplayBlackmarketInspectScreen); \
	DECLARE_FUNCTION(execDisplayCosmeticScreen); \
	DECLARE_FUNCTION(execDisplayFullscreenVideoScreen); \
	DECLARE_FUNCTION(execDisplayHeistInpectScreen); \
	DECLARE_FUNCTION(execDisplayItemInventoryScreen); \
	DECLARE_FUNCTION(execDisplayMaskCustomizationScreen); \
	DECLARE_FUNCTION(execDisplayMaskGenericSlotScreen); \
	DECLARE_FUNCTION(execDisplaySkillsSelection); \
	DECLARE_FUNCTION(execDisplaySuitCosmeticCustomizationScreen); \
	DECLARE_FUNCTION(execDisplaySuitCustomizationScreen); \
	DECLARE_FUNCTION(execDisplayWeaponInventoryScreen); \
	DECLARE_FUNCTION(execDisplayWeaponModiferScreen); \
	DECLARE_FUNCTION(execDisplayWeaponProgressionScreen); \
	DECLARE_FUNCTION(execGetVendorTypeToOpen); \
	DECLARE_FUNCTION(execOnCrossplayPopUpClosed); \
	DECLARE_FUNCTION(execOnGameSensePopUpClosed); \
	DECLARE_FUNCTION(execOnLoadoutChangePopupClosed); \
	DECLARE_FUNCTION(execOnMainMenuInitializeComplete); \
	DECLARE_FUNCTION(execOnTelemetryPopUpClosed); \
	DECLARE_FUNCTION(execOnTutorialPopUpClosed); \
	DECLARE_FUNCTION(execRequestRemoveBackgroundBlur); \
	DECLARE_FUNCTION(execSetVendorTypeToOpen); \
	DECLARE_FUNCTION(execShowCrossplayPopup); \
	DECLARE_FUNCTION(execShowGameSensePopup); \
	DECLARE_FUNCTION(execShowTelemetryPopup); \
	DECLARE_FUNCTION(execShowTutorialPopup);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWidget, USBZBaseMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWidget, USBZBaseMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWidget(USBZMainMenuWidget&&); \
	NO_API USBZMainMenuWidget(const USBZMainMenuWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWidget(USBZMainMenuWidget&&); \
	NO_API USBZMainMenuWidget(const USBZMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_LoadoutCustomization() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_LoadoutCustomization); } \
	FORCEINLINE static uint32 __PPO__Widget_WeaponCustomization() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponCustomization); } \
	FORCEINLINE static uint32 __PPO__Widget_WeaponCustomizationTemp() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponCustomizationTemp); } \
	FORCEINLINE static uint32 __PPO__Widget_WeaponInventory() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponInventory); } \
	FORCEINLINE static uint32 __PPO__Widget_ItemInventory() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_ItemInventory); } \
	FORCEINLINE static uint32 __PPO__Widget_SkillsSelection() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_SkillsSelection); } \
	FORCEINLINE static uint32 __PPO__Widget_WeaponProgression() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponProgression); } \
	FORCEINLINE static uint32 __PPO__Widget_MaskCustomization() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_MaskCustomization); } \
	FORCEINLINE static uint32 __PPO__Widget_WeaponModifiers() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_WeaponModifiers); } \
	FORCEINLINE static uint32 __PPO__Widget_SuitCustomization() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_SuitCustomization); } \
	FORCEINLINE static uint32 __PPO__Widget_SuitCosmeticCustomization() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_SuitCosmeticCustomization); } \
	FORCEINLINE static uint32 __PPO__Widget_BlackMarketInspect() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_BlackMarketInspect); } \
	FORCEINLINE static uint32 __PPO__Widget_Cosmetic() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_Cosmetic); } \
	FORCEINLINE static uint32 __PPO__Widget_HeistInspect() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_HeistInspect); } \
	FORCEINLINE static uint32 __PPO__Widget_FullscreenVideo() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_FullscreenVideo); } \
	FORCEINLINE static uint32 __PPO__Widget_MainMenuNavbar() { return STRUCT_OFFSET(USBZMainMenuWidget, Widget_MainMenuNavbar); } \
	FORCEINLINE static uint32 __PPO__CosmeticItemButtonClass() { return STRUCT_OFFSET(USBZMainMenuWidget, CosmeticItemButtonClass); } \
	FORCEINLINE static uint32 __PPO__CrossplayPopupWidgetClass() { return STRUCT_OFFSET(USBZMainMenuWidget, CrossplayPopupWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TutorialPopupWidgetClass() { return STRUCT_OFFSET(USBZMainMenuWidget, TutorialPopupWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TutorialPopupHeaderText() { return STRUCT_OFFSET(USBZMainMenuWidget, TutorialPopupHeaderText); } \
	FORCEINLINE static uint32 __PPO__CrossplayPopupHeaderText() { return STRUCT_OFFSET(USBZMainMenuWidget, CrossplayPopupHeaderText); } \
	FORCEINLINE static uint32 __PPO__CrossplayPopupBodyText() { return STRUCT_OFFSET(USBZMainMenuWidget, CrossplayPopupBodyText); } \
	FORCEINLINE static uint32 __PPO__PopUpPlayTutorialAction() { return STRUCT_OFFSET(USBZMainMenuWidget, PopUpPlayTutorialAction); } \
	FORCEINLINE static uint32 __PPO__PopUpSkipTutorialAction() { return STRUCT_OFFSET(USBZMainMenuWidget, PopUpSkipTutorialAction); } \
	FORCEINLINE static uint32 __PPO__PopUpOptInAction() { return STRUCT_OFFSET(USBZMainMenuWidget, PopUpOptInAction); } \
	FORCEINLINE static uint32 __PPO__PopUpOptOutAction() { return STRUCT_OFFSET(USBZMainMenuWidget, PopUpOptOutAction); } \
	FORCEINLINE static uint32 __PPO__TelemetryHeaderText() { return STRUCT_OFFSET(USBZMainMenuWidget, TelemetryHeaderText); } \
	FORCEINLINE static uint32 __PPO__TelemetryBodyText() { return STRUCT_OFFSET(USBZMainMenuWidget, TelemetryBodyText); } \
	FORCEINLINE static uint32 __PPO__GameSenseHeaderText() { return STRUCT_OFFSET(USBZMainMenuWidget, GameSenseHeaderText); } \
	FORCEINLINE static uint32 __PPO__GameSenseBodyText() { return STRUCT_OFFSET(USBZMainMenuWidget, GameSenseBodyText); } \
	FORCEINLINE static uint32 __PPO__PopUpData() { return STRUCT_OFFSET(USBZMainMenuWidget, PopUpData); } \
	FORCEINLINE static uint32 __PPO__PopUpBody() { return STRUCT_OFFSET(USBZMainMenuWidget, PopUpBody); } \
	FORCEINLINE static uint32 __PPO__TutorialObjectPath() { return STRUCT_OFFSET(USBZMainMenuWidget, TutorialObjectPath); } \
	FORCEINLINE static uint32 __PPO__LoadoutChangePopupWidgetClass() { return STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupWidgetClass); } \
	FORCEINLINE static uint32 __PPO__LoadoutChangePopupHeaderText() { return STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupHeaderText); } \
	FORCEINLINE static uint32 __PPO__LoadoutChangePopupDescriptionText() { return STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupDescriptionText); } \
	FORCEINLINE static uint32 __PPO__LoadoutChangePopupListText() { return STRUCT_OFFSET(USBZMainMenuWidget, LoadoutChangePopupListText); } \
	FORCEINLINE static uint32 __PPO__CosmeticButtonPool() { return STRUCT_OFFSET(USBZMainMenuWidget, CosmeticButtonPool); } \
	FORCEINLINE static uint32 __PPO__VendorTypeToOpen() { return STRUCT_OFFSET(USBZMainMenuWidget, VendorTypeToOpen); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_40_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
