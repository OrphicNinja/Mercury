// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZEquippableLoadoutSlot : uint8;
class USBZMenuButton;
class USBZWeaponPartDataAsset;
#ifdef STARBREEZE_SBZMainMenuWeaponProgressionScreen_generated_h
#error "SBZMainMenuWeaponProgressionScreen.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponProgressionScreen.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponProgressionScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayWeaponProgressionScreen); \
	DECLARE_FUNCTION(execOnWeaponPartProgressionButtonFocusedChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayWeaponProgressionScreen); \
	DECLARE_FUNCTION(execOnWeaponPartProgressionButtonFocusedChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_EVENT_PARMS \
	struct SBZMainMenuWeaponProgressionScreen_eventFocusedWeaponPartChanged_Parms \
	{ \
		const USBZWeaponPartDataAsset* FocusedWeaponPart; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponProgressionScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponProgressionScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponProgressionScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponProgressionScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponProgressionScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponProgressionScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponProgressionScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponProgressionScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponProgressionScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponProgressionScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponProgressionScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponProgressionScreen(USBZMainMenuWeaponProgressionScreen&&); \
	NO_API USBZMainMenuWeaponProgressionScreen(const USBZMainMenuWeaponProgressionScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponProgressionScreen(USBZMainMenuWeaponProgressionScreen&&); \
	NO_API USBZMainMenuWeaponProgressionScreen(const USBZMainMenuWeaponProgressionScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponProgressionScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponProgressionScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponProgressionScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_WeaponProgressionPartButtons() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, Panel_WeaponProgressionPartButtons); } \
	FORCEINLINE static uint32 __PPO__Widget_WeaponProgressionDisplay() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, Widget_WeaponProgressionDisplay); } \
	FORCEINLINE static uint32 __PPO__WeaponPartProgressionButtonClass() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, WeaponPartProgressionButtonClass); } \
	FORCEINLINE static uint32 __PPO__DefaultButtonMargin() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, DefaultButtonMargin); } \
	FORCEINLINE static uint32 __PPO__WeaponPartProgressionButtonPool() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionScreen, WeaponPartProgressionButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponProgressionScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
