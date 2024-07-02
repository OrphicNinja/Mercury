// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerState;
#ifdef STARBREEZE_PD3HUDPlayerStatusWidget_generated_h
#error "PD3HUDPlayerStatusWidget.generated.h already included, missing '#pragma once' in PD3HUDPlayerStatusWidget.h"
#endif
#define STARBREEZE_PD3HUDPlayerStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_EVENT_PARMS \
	struct PD3HUDPlayerStatusWidget_eventOnInfamyLevelChanged_Parms \
	{ \
		ASBZPlayerState* InPlayerState; \
	}; \
	struct PD3HUDPlayerStatusWidget_eventOnPlatformChanged_Parms \
	{ \
		ASBZPlayerState* InPlayerState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDPlayerStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPlayerStatusWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPlayerStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDPlayerStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPlayerStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPlayerStatusWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPlayerStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDPlayerStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDPlayerStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPlayerStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPlayerStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPlayerStatusWidget(UPD3HUDPlayerStatusWidget&&); \
	NO_API UPD3HUDPlayerStatusWidget(const UPD3HUDPlayerStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPlayerStatusWidget(UPD3HUDPlayerStatusWidget&&); \
	NO_API UPD3HUDPlayerStatusWidget(const UPD3HUDPlayerStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPlayerStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPlayerStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDPlayerStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_CombinedHealthBar() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_CombinedHealthBar); } \
	FORCEINLINE static uint32 __PPO__Widget_DownedCounter() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_DownedCounter); } \
	FORCEINLINE static uint32 __PPO__Widget_PrimaryWeaponAmmo() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_PrimaryWeaponAmmo); } \
	FORCEINLINE static uint32 __PPO__Widget_SecondaryWeaponAmmo() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_SecondaryWeaponAmmo); } \
	FORCEINLINE static uint32 __PPO__Widget_OverkillWeaponAmmo() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_OverkillWeaponAmmo); } \
	FORCEINLINE static uint32 __PPO__Image_PlayerIcon() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Image_PlayerIcon); } \
	FORCEINLINE static uint32 __PPO__Text_PlayerName() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Text_PlayerName); } \
	FORCEINLINE static uint32 __PPO__Widget_PlayerDefeatState() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_PlayerDefeatState); } \
	FORCEINLINE static uint32 __PPO__Widget_DefeatTimer() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_DefeatTimer); } \
	FORCEINLINE static uint32 __PPO__Widget_CarryStatus() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_CarryStatus); } \
	FORCEINLINE static uint32 __PPO__Widget_Revive() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Revive); } \
	FORCEINLINE static uint32 __PPO__Widget_Reticle() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Reticle); } \
	FORCEINLINE static uint32 __PPO__Widget_Throwable() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Throwable); } \
	FORCEINLINE static uint32 __PPO__Widget_RequestOverkillWeapon() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_RequestOverkillWeapon); } \
	FORCEINLINE static uint32 __PPO__Widget_Placeable() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Placeable); } \
	FORCEINLINE static uint32 __PPO__Widget_ToolStatus() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_ToolStatus); } \
	FORCEINLINE static uint32 __PPO__Widget_RoomStatus() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_RoomStatus); } \
	FORCEINLINE static uint32 __PPO__Widget_Interaction() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_Interaction); } \
	FORCEINLINE static uint32 __PPO__Widget_DetectionMeterContainer() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_DetectionMeterContainer); } \
	FORCEINLINE static uint32 __PPO__Widget_KeyItemContainer() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_KeyItemContainer); } \
	FORCEINLINE static uint32 __PPO__Widget_CharacterEffectsContainer() { return STRUCT_OFFSET(UPD3HUDPlayerStatusWidget, Widget_CharacterEffectsContainer); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_26_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDPlayerStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
