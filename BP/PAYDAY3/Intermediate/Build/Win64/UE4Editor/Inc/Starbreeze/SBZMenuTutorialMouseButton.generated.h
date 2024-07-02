// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMenuTutorialMouseButton_generated_h
#error "SBZMenuTutorialMouseButton.generated.h already included, missing '#pragma once' in SBZMenuTutorialMouseButton.h"
#endif
#define STARBREEZE_SBZMenuTutorialMouseButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsShowingTutorial); \
	DECLARE_FUNCTION(execSetTutorialShowing);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsShowingTutorial); \
	DECLARE_FUNCTION(execSetTutorialShowing);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuTutorialMouseButton(); \
	friend struct Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics; \
public: \
	DECLARE_CLASS(USBZMenuTutorialMouseButton, USBZMenuMouseButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuTutorialMouseButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuTutorialMouseButton(); \
	friend struct Z_Construct_UClass_USBZMenuTutorialMouseButton_Statics; \
public: \
	DECLARE_CLASS(USBZMenuTutorialMouseButton, USBZMenuMouseButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuTutorialMouseButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuTutorialMouseButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuTutorialMouseButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuTutorialMouseButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuTutorialMouseButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuTutorialMouseButton(USBZMenuTutorialMouseButton&&); \
	NO_API USBZMenuTutorialMouseButton(const USBZMenuTutorialMouseButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuTutorialMouseButton(USBZMenuTutorialMouseButton&&); \
	NO_API USBZMenuTutorialMouseButton(const USBZMenuTutorialMouseButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuTutorialMouseButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuTutorialMouseButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuTutorialMouseButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsShowing() { return STRUCT_OFFSET(USBZMenuTutorialMouseButton, bIsShowing); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuTutorialMouseButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuTutorialMouseButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
