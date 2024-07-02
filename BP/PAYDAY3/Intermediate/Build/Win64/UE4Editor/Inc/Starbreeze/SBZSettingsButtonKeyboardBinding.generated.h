// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
#ifdef STARBREEZE_SBZSettingsButtonKeyboardBinding_generated_h
#error "SBZSettingsButtonKeyboardBinding.generated.h already included, missing '#pragma once' in SBZSettingsButtonKeyboardBinding.h"
#endif
#define STARBREEZE_SBZSettingsButtonKeyboardBinding_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPrimaryBinding); \
	DECLARE_FUNCTION(execSetSecondaryBinding);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPrimaryBinding); \
	DECLARE_FUNCTION(execSetSecondaryBinding);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSettingsButtonKeyboardBinding(); \
	friend struct Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsButtonKeyboardBinding, USBZSettingsButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsButtonKeyboardBinding)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSettingsButtonKeyboardBinding(); \
	friend struct Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsButtonKeyboardBinding, USBZSettingsButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsButtonKeyboardBinding)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSettingsButtonKeyboardBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSettingsButtonKeyboardBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsButtonKeyboardBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsButtonKeyboardBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsButtonKeyboardBinding(USBZSettingsButtonKeyboardBinding&&); \
	NO_API USBZSettingsButtonKeyboardBinding(const USBZSettingsButtonKeyboardBinding&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsButtonKeyboardBinding(USBZSettingsButtonKeyboardBinding&&); \
	NO_API USBZSettingsButtonKeyboardBinding(const USBZSettingsButtonKeyboardBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsButtonKeyboardBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsButtonKeyboardBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSettingsButtonKeyboardBinding)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrimaryBinding() { return STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, PrimaryBinding); } \
	FORCEINLINE static uint32 __PPO__SecondaryBinding() { return STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, SecondaryBinding); } \
	FORCEINLINE static uint32 __PPO__PrimaryBindingConflictsNames() { return STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, PrimaryBindingConflictsNames); } \
	FORCEINLINE static uint32 __PPO__SecondaryBindingConflictsNames() { return STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, SecondaryBindingConflictsNames); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSettingsButtonKeyboardBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSettingsButtonKeyboardBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
