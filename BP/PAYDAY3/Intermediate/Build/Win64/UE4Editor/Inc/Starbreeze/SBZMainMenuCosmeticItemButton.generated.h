// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCosmeticsDataAsset;
#ifdef STARBREEZE_SBZMainMenuCosmeticItemButton_generated_h
#error "SBZMainMenuCosmeticItemButton.generated.h already included, missing '#pragma once' in SBZMainMenuCosmeticItemButton.h"
#endif
#define STARBREEZE_SBZMainMenuCosmeticItemButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCosmeticItemData); \
	DECLARE_FUNCTION(execInitializeCosmeticItem); \
	DECLARE_FUNCTION(execIsDefaultItem); \
	DECLARE_FUNCTION(execSetItemCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCosmeticItemData); \
	DECLARE_FUNCTION(execInitializeCosmeticItem); \
	DECLARE_FUNCTION(execIsDefaultItem); \
	DECLARE_FUNCTION(execSetItemCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_EVENT_PARMS \
	struct SBZMainMenuCosmeticItemButton_eventOnItemCountChanged_Parms \
	{ \
		int32 InItemCount; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmeticItemButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmeticItemButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmeticItemButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmeticItemButton(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmeticItemButton_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmeticItemButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmeticItemButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCosmeticItemButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCosmeticItemButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmeticItemButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmeticItemButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmeticItemButton(USBZMainMenuCosmeticItemButton&&); \
	NO_API USBZMainMenuCosmeticItemButton(const USBZMainMenuCosmeticItemButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmeticItemButton(USBZMainMenuCosmeticItemButton&&); \
	NO_API USBZMainMenuCosmeticItemButton(const USBZMainMenuCosmeticItemButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmeticItemButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmeticItemButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCosmeticItemButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsDefault() { return STRUCT_OFFSET(USBZMainMenuCosmeticItemButton, bIsDefault); } \
	FORCEINLINE static uint32 __PPO__CosmeticItemData() { return STRUCT_OFFSET(USBZMainMenuCosmeticItemButton, CosmeticItemData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCosmeticItemButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmeticItemButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
