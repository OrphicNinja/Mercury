// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZSettingsMenuManager;
#ifdef STARBREEZE_SBZSettingsMenuManager_generated_h
#error "SBZSettingsMenuManager.generated.h already included, missing '#pragma once' in SBZSettingsMenuManager.h"
#endif
#define STARBREEZE_SBZSettingsMenuManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmAllChanges); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmChanges); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmResetToDefault); \
	DECLARE_FUNCTION(execOnPopUpClosedUnappliedChanges);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmAllChanges); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmChanges); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmResetToDefault); \
	DECLARE_FUNCTION(execOnPopUpClosedUnappliedChanges);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSettingsMenuManager(); \
	friend struct Z_Construct_UClass_USBZSettingsMenuManager_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsMenuManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsMenuManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSettingsMenuManager(); \
	friend struct Z_Construct_UClass_USBZSettingsMenuManager_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsMenuManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsMenuManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSettingsMenuManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSettingsMenuManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsMenuManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsMenuManager(USBZSettingsMenuManager&&); \
	NO_API USBZSettingsMenuManager(const USBZSettingsMenuManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsMenuManager(USBZSettingsMenuManager&&); \
	NO_API USBZSettingsMenuManager(const USBZSettingsMenuManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsMenuManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSettingsMenuManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubSettings() { return STRUCT_OFFSET(USBZSettingsMenuManager, SubSettings); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSettingsMenuManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSettingsMenuManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
