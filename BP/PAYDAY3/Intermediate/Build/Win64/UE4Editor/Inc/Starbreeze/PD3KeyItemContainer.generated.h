// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZKeyItemCountChangedEvent;
struct FSBZSharedKeyItemTagChangedEvent;
#ifdef STARBREEZE_PD3KeyItemContainer_generated_h
#error "PD3KeyItemContainer.generated.h already included, missing '#pragma once' in PD3KeyItemContainer.h"
#endif
#define STARBREEZE_PD3KeyItemContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnKeyItemCountChanged); \
	DECLARE_FUNCTION(execOnSharedKeyItemCountChanged);


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnKeyItemCountChanged); \
	DECLARE_FUNCTION(execOnSharedKeyItemCountChanged);


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3KeyItemContainer(); \
	friend struct Z_Construct_UClass_UPD3KeyItemContainer_Statics; \
public: \
	DECLARE_CLASS(UPD3KeyItemContainer, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3KeyItemContainer)


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPD3KeyItemContainer(); \
	friend struct Z_Construct_UClass_UPD3KeyItemContainer_Statics; \
public: \
	DECLARE_CLASS(UPD3KeyItemContainer, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3KeyItemContainer)


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3KeyItemContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3KeyItemContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3KeyItemContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3KeyItemContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3KeyItemContainer(UPD3KeyItemContainer&&); \
	NO_API UPD3KeyItemContainer(const UPD3KeyItemContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3KeyItemContainer(UPD3KeyItemContainer&&); \
	NO_API UPD3KeyItemContainer(const UPD3KeyItemContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3KeyItemContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3KeyItemContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3KeyItemContainer)


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_KeyItems() { return STRUCT_OFFSET(UPD3KeyItemContainer, Panel_KeyItems); } \
	FORCEINLINE static uint32 __PPO__MaxDisplayedKeyItems() { return STRUCT_OFFSET(UPD3KeyItemContainer, MaxDisplayedKeyItems); } \
	FORCEINLINE static uint32 __PPO__bIsShared() { return STRUCT_OFFSET(UPD3KeyItemContainer, bIsShared); } \
	FORCEINLINE static uint32 __PPO__KeyItemWidgetClass() { return STRUCT_OFFSET(UPD3KeyItemContainer, KeyItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO__OnKeyItemCountChangedDelegate() { return STRUCT_OFFSET(UPD3KeyItemContainer, OnKeyItemCountChangedDelegate); } \
	FORCEINLINE static uint32 __PPO__KeyItemWidgets() { return STRUCT_OFFSET(UPD3KeyItemContainer, KeyItemWidgets); }


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3KeyItemContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3KeyItemContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
