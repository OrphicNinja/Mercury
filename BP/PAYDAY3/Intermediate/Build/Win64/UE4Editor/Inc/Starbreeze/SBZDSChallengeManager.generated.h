// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
class UObject;
class USBZDSChallengeManager;
#ifdef STARBREEZE_SBZDSChallengeManager_generated_h
#error "SBZDSChallengeManager.generated.h already included, missing '#pragma once' in SBZDSChallengeManager.h"
#endif
#define STARBREEZE_SBZDSChallengeManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCompletedChallengesDuringMission); \
	DECLARE_FUNCTION(execGetDSChallengeManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCompletedChallengesDuringMission); \
	DECLARE_FUNCTION(execGetDSChallengeManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDSChallengeManager(); \
	friend struct Z_Construct_UClass_USBZDSChallengeManager_Statics; \
public: \
	DECLARE_CLASS(USBZDSChallengeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDSChallengeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDSChallengeManager(); \
	friend struct Z_Construct_UClass_USBZDSChallengeManager_Statics; \
public: \
	DECLARE_CLASS(USBZDSChallengeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDSChallengeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDSChallengeManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDSChallengeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDSChallengeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDSChallengeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDSChallengeManager(USBZDSChallengeManager&&); \
	NO_API USBZDSChallengeManager(const USBZDSChallengeManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDSChallengeManager(USBZDSChallengeManager&&); \
	NO_API USBZDSChallengeManager(const USBZDSChallengeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDSChallengeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDSChallengeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZDSChallengeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChallengeRecordCaches() { return STRUCT_OFFSET(USBZDSChallengeManager, ChallengeRecordCaches); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDSChallengeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDSChallengeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
