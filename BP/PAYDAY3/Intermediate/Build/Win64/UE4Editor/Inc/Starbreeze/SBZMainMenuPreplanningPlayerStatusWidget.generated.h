// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZLobbyCharacterInfoUi;
#ifdef STARBREEZE_SBZMainMenuPreplanningPlayerStatusWidget_generated_h
#error "SBZMainMenuPreplanningPlayerStatusWidget.generated.h already included, missing '#pragma once' in SBZMainMenuPreplanningPlayerStatusWidget.h"
#endif
#define STARBREEZE_SBZMainMenuPreplanningPlayerStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanOpenPlayerProfile); \
	DECLARE_FUNCTION(execOnLoadoutChanged); \
	DECLARE_FUNCTION(execOpenPlayerProfile); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanOpenPlayerProfile); \
	DECLARE_FUNCTION(execOnLoadoutChanged); \
	DECLARE_FUNCTION(execOpenPlayerProfile); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPreplanningPlayerStatusWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPreplanningPlayerStatusWidget, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPreplanningPlayerStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPreplanningPlayerStatusWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPreplanningPlayerStatusWidget, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPreplanningPlayerStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuPreplanningPlayerStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuPreplanningPlayerStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPreplanningPlayerStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPreplanningPlayerStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPreplanningPlayerStatusWidget(USBZMainMenuPreplanningPlayerStatusWidget&&); \
	NO_API USBZMainMenuPreplanningPlayerStatusWidget(const USBZMainMenuPreplanningPlayerStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPreplanningPlayerStatusWidget(USBZMainMenuPreplanningPlayerStatusWidget&&); \
	NO_API USBZMainMenuPreplanningPlayerStatusWidget(const USBZMainMenuPreplanningPlayerStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPreplanningPlayerStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPreplanningPlayerStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuPreplanningPlayerStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerIndex() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, PlayerIndex); } \
	FORCEINLINE static uint32 __PPO__Widget_PrimaryWeaponVisuals() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_PrimaryWeaponVisuals); } \
	FORCEINLINE static uint32 __PPO__Widget_SecondaryWeaponVisuals() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_SecondaryWeaponVisuals); } \
	FORCEINLINE static uint32 __PPO__Widget_ThrowableVisuals() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_ThrowableVisuals); } \
	FORCEINLINE static uint32 __PPO__Widget_PlaceableVisuals() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_PlaceableVisuals); } \
	FORCEINLINE static uint32 __PPO__Widget_ToolVisuals() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_ToolVisuals); } \
	FORCEINLINE static uint32 __PPO__PrimaryWeapon() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, PrimaryWeapon); } \
	FORCEINLINE static uint32 __PPO__SecondaryWeapon() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, SecondaryWeapon); } \
	FORCEINLINE static uint32 __PPO__Tool() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Tool); } \
	FORCEINLINE static uint32 __PPO__Placeable() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Placeable); } \
	FORCEINLINE static uint32 __PPO__Throwable() { return STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Throwable); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuPreplanningPlayerStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreplanningPlayerStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
