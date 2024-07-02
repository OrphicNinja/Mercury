// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZChallengeCategoryData;
struct FSBZChallengeData;
class USBZChallengeCategoryManager;
#ifdef STARBREEZE_SBZChallengeCategoryManager_generated_h
#error "SBZChallengeCategoryManager.generated.h already included, missing '#pragma once' in SBZChallengeCategoryManager.h"
#endif
#define STARBREEZE_SBZChallengeCategoryManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChallengeCategoryData); \
	DECLARE_FUNCTION(execGetChallengeCategoryForChallenge); \
	DECLARE_FUNCTION(execGetChallengeCategoryForTag); \
	DECLARE_FUNCTION(execGetChallengeCategoryManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChallengeCategoryData); \
	DECLARE_FUNCTION(execGetChallengeCategoryForChallenge); \
	DECLARE_FUNCTION(execGetChallengeCategoryForTag); \
	DECLARE_FUNCTION(execGetChallengeCategoryManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZChallengeCategoryManager(); \
	friend struct Z_Construct_UClass_USBZChallengeCategoryManager_Statics; \
public: \
	DECLARE_CLASS(USBZChallengeCategoryManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChallengeCategoryManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZChallengeCategoryManager(); \
	friend struct Z_Construct_UClass_USBZChallengeCategoryManager_Statics; \
public: \
	DECLARE_CLASS(USBZChallengeCategoryManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChallengeCategoryManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZChallengeCategoryManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZChallengeCategoryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChallengeCategoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChallengeCategoryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChallengeCategoryManager(USBZChallengeCategoryManager&&); \
	NO_API USBZChallengeCategoryManager(const USBZChallengeCategoryManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChallengeCategoryManager(USBZChallengeCategoryManager&&); \
	NO_API USBZChallengeCategoryManager(const USBZChallengeCategoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChallengeCategoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChallengeCategoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZChallengeCategoryManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChallengeCategoryData() { return STRUCT_OFFSET(USBZChallengeCategoryManager, ChallengeCategoryData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZChallengeCategoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZChallengeCategoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
