// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
struct FSBZMatchmakingSessionResult;
#ifdef STARBREEZE_SBZStateMachineStateWaitSoloGame_generated_h
#error "SBZStateMachineStateWaitSoloGame.generated.h already included, missing '#pragma once' in SBZStateMachineStateWaitSoloGame.h"
#endif
#define STARBREEZE_SBZStateMachineStateWaitSoloGame_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAsyncLoadAssetDatabaseDone); \
	DECLARE_FUNCTION(execOnFetchMapConfigurationDataDone); \
	DECLARE_FUNCTION(execOnGetSkuToItemIdMappingForItemsToGrantDone); \
	DECLARE_FUNCTION(execOnLoadChallengesDone); \
	DECLARE_FUNCTION(execOnServerGameRecordsReceived); \
	DECLARE_FUNCTION(execOnServerRetrieveEntitlementsDone); \
	DECLARE_FUNCTION(execPlayerSpawnDelay);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAsyncLoadAssetDatabaseDone); \
	DECLARE_FUNCTION(execOnFetchMapConfigurationDataDone); \
	DECLARE_FUNCTION(execOnGetSkuToItemIdMappingForItemsToGrantDone); \
	DECLARE_FUNCTION(execOnLoadChallengesDone); \
	DECLARE_FUNCTION(execOnServerGameRecordsReceived); \
	DECLARE_FUNCTION(execOnServerRetrieveEntitlementsDone); \
	DECLARE_FUNCTION(execPlayerSpawnDelay);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateWaitSoloGame(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateWaitSoloGame, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateWaitSoloGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateWaitSoloGame(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateWaitSoloGame, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateWaitSoloGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateWaitSoloGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateWaitSoloGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateWaitSoloGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateWaitSoloGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateWaitSoloGame(USBZStateMachineStateWaitSoloGame&&); \
	NO_API USBZStateMachineStateWaitSoloGame(const USBZStateMachineStateWaitSoloGame&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateWaitSoloGame(USBZStateMachineStateWaitSoloGame&&); \
	NO_API USBZStateMachineStateWaitSoloGame(const USBZStateMachineStateWaitSoloGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateWaitSoloGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateWaitSoloGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateWaitSoloGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingScreen() { return STRUCT_OFFSET(USBZStateMachineStateWaitSoloGame, LoadingScreen); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateWaitSoloGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitSoloGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
