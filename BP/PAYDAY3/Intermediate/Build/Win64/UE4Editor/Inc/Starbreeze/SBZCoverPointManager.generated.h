// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZCoverPointManager;
class ASBZCoverPoint;
class AActor;
struct FBoxSphereBounds;
struct FSBZCoverShootingPoints;
#ifdef STARBREEZE_SBZCoverPointManager_generated_h
#error "SBZCoverPointManager.generated.h already included, missing '#pragma once' in SBZCoverPointManager.h"
#endif
#define STARBREEZE_SBZCoverPointManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetCoverSafeness); \
	DECLARE_FUNCTION(execGetCoverWithinBounds); \
	DECLARE_FUNCTION(execGetShootingPoints);


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetCoverSafeness); \
	DECLARE_FUNCTION(execGetCoverWithinBounds); \
	DECLARE_FUNCTION(execGetShootingPoints);


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCoverPointManager(); \
	friend struct Z_Construct_UClass_USBZCoverPointManager_Statics; \
public: \
	DECLARE_CLASS(USBZCoverPointManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCoverPointManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCoverPointManager(); \
	friend struct Z_Construct_UClass_USBZCoverPointManager_Statics; \
public: \
	DECLARE_CLASS(USBZCoverPointManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCoverPointManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCoverPointManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCoverPointManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCoverPointManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCoverPointManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCoverPointManager(USBZCoverPointManager&&); \
	NO_API USBZCoverPointManager(const USBZCoverPointManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCoverPointManager(USBZCoverPointManager&&); \
	NO_API USBZCoverPointManager(const USBZCoverPointManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCoverPointManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCoverPointManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCoverPointManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCoverPointManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCoverPointManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
