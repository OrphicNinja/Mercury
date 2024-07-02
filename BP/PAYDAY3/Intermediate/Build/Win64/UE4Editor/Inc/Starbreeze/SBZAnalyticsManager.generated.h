// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
enum class ESBZCheaterPolicyType : uint8;
class USBZInfamyManager;
enum class ESBZNotOwningHeistPolicyType : uint8;
#ifdef STARBREEZE_SBZAnalyticsManager_generated_h
#error "SBZAnalyticsManager.generated.h already included, missing '#pragma once' in SBZAnalyticsManager.h"
#endif
#define STARBREEZE_SBZAnalyticsManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendChallengeCompleted); \
	DECLARE_FUNCTION(execSendCheaterDetected); \
	DECLARE_FUNCTION(execSendInfamyChanged); \
	DECLARE_FUNCTION(execSendNotOwningHeistDetected); \
	DECLARE_FUNCTION(execSendStayAsPartySelected); \
	DECLARE_FUNCTION(execSendSyncDLC);


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendChallengeCompleted); \
	DECLARE_FUNCTION(execSendCheaterDetected); \
	DECLARE_FUNCTION(execSendInfamyChanged); \
	DECLARE_FUNCTION(execSendNotOwningHeistDetected); \
	DECLARE_FUNCTION(execSendStayAsPartySelected); \
	DECLARE_FUNCTION(execSendSyncDLC);


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAnalyticsManager(); \
	friend struct Z_Construct_UClass_USBZAnalyticsManager_Statics; \
public: \
	DECLARE_CLASS(USBZAnalyticsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAnalyticsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAnalyticsManager(); \
	friend struct Z_Construct_UClass_USBZAnalyticsManager_Statics; \
public: \
	DECLARE_CLASS(USBZAnalyticsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAnalyticsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAnalyticsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAnalyticsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAnalyticsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAnalyticsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAnalyticsManager(USBZAnalyticsManager&&); \
	NO_API USBZAnalyticsManager(const USBZAnalyticsManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAnalyticsManager(USBZAnalyticsManager&&); \
	NO_API USBZAnalyticsManager(const USBZAnalyticsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAnalyticsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAnalyticsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAnalyticsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnalyticsProvider() { return STRUCT_OFFSET(USBZAnalyticsManager, AnalyticsProvider); } \
	FORCEINLINE static uint32 __PPO__GameLaunchedTimestamp() { return STRUCT_OFFSET(USBZAnalyticsManager, GameLaunchedTimestamp); } \
	FORCEINLINE static uint32 __PPO__LastScreenUpdate() { return STRUCT_OFFSET(USBZAnalyticsManager, LastScreenUpdate); } \
	FORCEINLINE static uint32 __PPO__HeartbeatWorldContextObject() { return STRUCT_OFFSET(USBZAnalyticsManager, HeartbeatWorldContextObject); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAnalyticsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAnalyticsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
