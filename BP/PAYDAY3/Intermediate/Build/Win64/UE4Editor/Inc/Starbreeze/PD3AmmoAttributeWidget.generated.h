// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerState;
#ifdef STARBREEZE_PD3AmmoAttributeWidget_generated_h
#error "PD3AmmoAttributeWidget.generated.h already included, missing '#pragma once' in PD3AmmoAttributeWidget.h"
#endif
#define STARBREEZE_PD3AmmoAttributeWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializePlayerState);


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializePlayerState);


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_EVENT_PARMS \
	struct PD3AmmoAttributeWidget_eventOnAmmoUpdated_Parms \
	{ \
		float AmmoLoadedUpdated; \
		float AmmoInventoryUpdated; \
		float AmmoTotal; \
	}; \
	struct PD3AmmoAttributeWidget_eventOnSetup_Parms \
	{ \
		float AmmoLoadedSetup; \
		float AmmoInventorySetup; \
		float AmmoTotal; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3AmmoAttributeWidget(); \
	friend struct Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3AmmoAttributeWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3AmmoAttributeWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPD3AmmoAttributeWidget(); \
	friend struct Z_Construct_UClass_UPD3AmmoAttributeWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3AmmoAttributeWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3AmmoAttributeWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3AmmoAttributeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3AmmoAttributeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3AmmoAttributeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3AmmoAttributeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3AmmoAttributeWidget(UPD3AmmoAttributeWidget&&); \
	NO_API UPD3AmmoAttributeWidget(const UPD3AmmoAttributeWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3AmmoAttributeWidget(UPD3AmmoAttributeWidget&&); \
	NO_API UPD3AmmoAttributeWidget(const UPD3AmmoAttributeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3AmmoAttributeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3AmmoAttributeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3AmmoAttributeWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmmoLoadedGameplayAttribute() { return STRUCT_OFFSET(UPD3AmmoAttributeWidget, AmmoLoadedGameplayAttribute); } \
	FORCEINLINE static uint32 __PPO__AmmoInventoryGameplayAttribute() { return STRUCT_OFFSET(UPD3AmmoAttributeWidget, AmmoInventoryGameplayAttribute); } \
	FORCEINLINE static uint32 __PPO__SBZPlayerState() { return STRUCT_OFFSET(UPD3AmmoAttributeWidget, SBZPlayerState); }


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3AmmoAttributeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3AmmoAttributeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
