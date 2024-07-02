// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZUIStackChangedEvent;
#ifdef STARBREEZE_SBZPlatformUserManager_generated_h
#error "SBZPlatformUserManager.generated.h already included, missing '#pragma once' in SBZPlatformUserManager.h"
#endif
#define STARBREEZE_SBZPlatformUserManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleUIStackChanged); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmChanges);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleUIStackChanged); \
	DECLARE_FUNCTION(execOnPopUpClosedConfirmChanges);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlatformUserManager(); \
	friend struct Z_Construct_UClass_USBZPlatformUserManager_Statics; \
public: \
	DECLARE_CLASS(USBZPlatformUserManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlatformUserManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlatformUserManager(); \
	friend struct Z_Construct_UClass_USBZPlatformUserManager_Statics; \
public: \
	DECLARE_CLASS(USBZPlatformUserManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlatformUserManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlatformUserManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlatformUserManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlatformUserManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlatformUserManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlatformUserManager(USBZPlatformUserManager&&); \
	NO_API USBZPlatformUserManager(const USBZPlatformUserManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlatformUserManager(USBZPlatformUserManager&&); \
	NO_API USBZPlatformUserManager(const USBZPlatformUserManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlatformUserManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlatformUserManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPlatformUserManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectsHoldingBackReturnToIIS() { return STRUCT_OFFSET(USBZPlatformUserManager, ObjectsHoldingBackReturnToIIS); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlatformUserManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlatformUserManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
