// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZEquippableLoadoutSlot : uint8;
class USBZLoadoutModCategoryButton;
class USBZModularPartSlotBase;
class USBZMenuButton;
#ifdef STARBREEZE_SBZMainMenuLoadoutWeaponModCategoryWidget_generated_h
#error "SBZMainMenuLoadoutWeaponModCategoryWidget.generated.h already included, missing '#pragma once' in SBZMainMenuLoadoutWeaponModCategoryWidget.h"
#endif
#define STARBREEZE_SBZMainMenuLoadoutWeaponModCategoryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomizeWeaponInSlot); \
	DECLARE_FUNCTION(execGetAvailibleButton); \
	DECLARE_FUNCTION(execOnCategoryButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomizeWeaponInSlot); \
	DECLARE_FUNCTION(execGetAvailibleButton); \
	DECLARE_FUNCTION(execOnCategoryButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_EVENT_PARMS \
	struct SBZMainMenuLoadoutWeaponModCategoryWidget_eventOnCategoryButtonFocused_Parms \
	{ \
		USBZMenuButton* InButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutWeaponModCategoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutWeaponModCategoryWidget, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutWeaponModCategoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutWeaponModCategoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutWeaponModCategoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutWeaponModCategoryWidget, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutWeaponModCategoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuLoadoutWeaponModCategoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuLoadoutWeaponModCategoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutWeaponModCategoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutWeaponModCategoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutWeaponModCategoryWidget(USBZMainMenuLoadoutWeaponModCategoryWidget&&); \
	NO_API USBZMainMenuLoadoutWeaponModCategoryWidget(const USBZMainMenuLoadoutWeaponModCategoryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutWeaponModCategoryWidget(USBZMainMenuLoadoutWeaponModCategoryWidget&&); \
	NO_API USBZMainMenuLoadoutWeaponModCategoryWidget(const USBZMainMenuLoadoutWeaponModCategoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutWeaponModCategoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutWeaponModCategoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuLoadoutWeaponModCategoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ButtonClass() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, ButtonClass); } \
	FORCEINLINE static uint32 __PPO__ObjectPoolAmount() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, ObjectPoolAmount); } \
	FORCEINLINE static uint32 __PPO__CategoryParentPanel() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, CategoryParentPanel); } \
	FORCEINLINE static uint32 __PPO__EquippableConfig() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, EquippableConfig); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuLoadoutWeaponModCategoryWidget, WeaponSlotIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuLoadoutWeaponModCategoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutWeaponModCategoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
