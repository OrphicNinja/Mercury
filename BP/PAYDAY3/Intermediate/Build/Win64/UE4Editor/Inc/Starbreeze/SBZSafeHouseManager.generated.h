// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZSafeHouseManager;
struct FSBZPlayerStateAddedEvent;
#ifdef STARBREEZE_SBZSafeHouseManager_generated_h
#error "SBZSafeHouseManager.generated.h already included, missing '#pragma once' in SBZSafeHouseManager.h"
#endif
#define STARBREEZE_SBZSafeHouseManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugExitSafeHouse); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execTravelToSafeHouse);


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugExitSafeHouse); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execTravelToSafeHouse);


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSafeHouseManager(); \
	friend struct Z_Construct_UClass_USBZSafeHouseManager_Statics; \
public: \
	DECLARE_CLASS(USBZSafeHouseManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSafeHouseManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZSafeHouseManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSafeHouseManager(); \
	friend struct Z_Construct_UClass_USBZSafeHouseManager_Statics; \
public: \
	DECLARE_CLASS(USBZSafeHouseManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSafeHouseManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZSafeHouseManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSafeHouseManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSafeHouseManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSafeHouseManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSafeHouseManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSafeHouseManager(USBZSafeHouseManager&&); \
	NO_API USBZSafeHouseManager(const USBZSafeHouseManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSafeHouseManager(USBZSafeHouseManager&&); \
	NO_API USBZSafeHouseManager(const USBZSafeHouseManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSafeHouseManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSafeHouseManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSafeHouseManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldLoader() { return STRUCT_OFFSET(USBZSafeHouseManager, WorldLoader); } \
	FORCEINLINE static uint32 __PPO__OnSafeHouseLoadStart() { return STRUCT_OFFSET(USBZSafeHouseManager, OnSafeHouseLoadStart); } \
	FORCEINLINE static uint32 __PPO__OnSafeHouseLoadProgressUpdate() { return STRUCT_OFFSET(USBZSafeHouseManager, OnSafeHouseLoadProgressUpdate); } \
	FORCEINLINE static uint32 __PPO__OnSafeHouseLoadComplete() { return STRUCT_OFFSET(USBZSafeHouseManager, OnSafeHouseLoadComplete); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSafeHouseManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSafeHouseManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
