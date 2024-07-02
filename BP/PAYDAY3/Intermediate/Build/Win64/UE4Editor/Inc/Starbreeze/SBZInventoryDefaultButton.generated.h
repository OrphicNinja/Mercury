// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZInventoryDefaultButton_generated_h
#error "SBZInventoryDefaultButton.generated.h already included, missing '#pragma once' in SBZInventoryDefaultButton.h"
#endif
#define STARBREEZE_SBZInventoryDefaultButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeDefaultEquipped);


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeDefaultEquipped);


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_EVENT_PARMS \
	struct SBZInventoryDefaultButton_eventDefaultEquipped_Parms \
	{ \
		bool bEquipped; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInventoryDefaultButton(); \
	friend struct Z_Construct_UClass_USBZInventoryDefaultButton_Statics; \
public: \
	DECLARE_CLASS(USBZInventoryDefaultButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInventoryDefaultButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInventoryDefaultButton(); \
	friend struct Z_Construct_UClass_USBZInventoryDefaultButton_Statics; \
public: \
	DECLARE_CLASS(USBZInventoryDefaultButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInventoryDefaultButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInventoryDefaultButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInventoryDefaultButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInventoryDefaultButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInventoryDefaultButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInventoryDefaultButton(USBZInventoryDefaultButton&&); \
	NO_API USBZInventoryDefaultButton(const USBZInventoryDefaultButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInventoryDefaultButton(USBZInventoryDefaultButton&&); \
	NO_API USBZInventoryDefaultButton(const USBZInventoryDefaultButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInventoryDefaultButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInventoryDefaultButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInventoryDefaultButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsEquipped() { return STRUCT_OFFSET(USBZInventoryDefaultButton, bIsEquipped); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInventoryDefaultButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInventoryDefaultButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
