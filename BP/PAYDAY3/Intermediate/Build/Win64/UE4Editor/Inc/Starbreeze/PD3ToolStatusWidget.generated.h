// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
#ifdef STARBREEZE_PD3ToolStatusWidget_generated_h
#error "PD3ToolStatusWidget.generated.h already included, missing '#pragma once' in PD3ToolStatusWidget.h"
#endif
#define STARBREEZE_PD3ToolStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_EVENT_PARMS \
	struct PD3ToolStatusWidget_eventOnAmmoInventoryChanged_Parms \
	{ \
		int32 InAmmoInventory; \
	}; \
	struct PD3ToolStatusWidget_eventOnIconChanged_Parms \
	{ \
		TSoftObjectPtr<UPaperSprite> InIcon; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3ToolStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3ToolStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3ToolStatusWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3ToolStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPD3ToolStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3ToolStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3ToolStatusWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3ToolStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3ToolStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3ToolStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3ToolStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3ToolStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3ToolStatusWidget(UPD3ToolStatusWidget&&); \
	NO_API UPD3ToolStatusWidget(const UPD3ToolStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3ToolStatusWidget(UPD3ToolStatusWidget&&); \
	NO_API UPD3ToolStatusWidget(const UPD3ToolStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3ToolStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3ToolStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3ToolStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_AbilityAction() { return STRUCT_OFFSET(UPD3ToolStatusWidget, Widget_AbilityAction); } \
	FORCEINLINE static uint32 __PPO__bHasValidPlaceableIndex() { return STRUCT_OFFSET(UPD3ToolStatusWidget, bHasValidPlaceableIndex); } \
	FORCEINLINE static uint32 __PPO__AmmoInventory() { return STRUCT_OFFSET(UPD3ToolStatusWidget, AmmoInventory); } \
	FORCEINLINE static uint32 __PPO__Icon() { return STRUCT_OFFSET(UPD3ToolStatusWidget, Icon); }


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3ToolStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3ToolStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
