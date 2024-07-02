// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class ASBZAIVisibilityManager;
struct FSBZAIVisibilityLeafNode;
class ISBZAIVisibilityRelevant;
class AActor;
class ASBZCharacter;
class ASBZCoverPoint;
class USBZAIVisibilityComponent;
#ifdef STARBREEZE_SBZAIVisibilityManager_generated_h
#error "SBZAIVisibilityManager.generated.h already included, missing '#pragma once' in SBZAIVisibilityManager.h"
#endif
#define STARBREEZE_SBZAIVisibilityManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugLocation); \
	DECLARE_FUNCTION(execGetAIVisibilityManager); \
	DECLARE_FUNCTION(execGetAiVisibilityNode); \
	DECLARE_FUNCTION(execHasVisibilityData); \
	DECLARE_FUNCTION(execIsAIVisibilityRelevantSafeFromAIVisibility); \
	DECLARE_FUNCTION(execIsLocationSafeFromLocation); \
	DECLARE_FUNCTION(execIsLocationVisibleFromLocation); \
	DECLARE_FUNCTION(execIsNodeSafeFromActor); \
	DECLARE_FUNCTION(execIsNodeSafeFromLocation); \
	DECLARE_FUNCTION(execIsNodeVisibleFromActor); \
	DECLARE_FUNCTION(execIsNodeVisibleFromLocation); \
	DECLARE_FUNCTION(execRateTargetLocation); \
	DECLARE_FUNCTION(execRegisterCoverPointVisibilityCheck); \
	DECLARE_FUNCTION(execRegisterRandomSublevelVisComponent); \
	DECLARE_FUNCTION(execRegisterRelevantAIVisibilityActor); \
	DECLARE_FUNCTION(execRegisterVisibilityComponent); \
	DECLARE_FUNCTION(execUnregisterCoverPointVisibilityCheck); \
	DECLARE_FUNCTION(execUnregisterRandomSublevelVisComponent); \
	DECLARE_FUNCTION(execUnregisterRelevantAIVisibilityActor); \
	DECLARE_FUNCTION(execUnregisterVisibilityComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugLocation); \
	DECLARE_FUNCTION(execGetAIVisibilityManager); \
	DECLARE_FUNCTION(execGetAiVisibilityNode); \
	DECLARE_FUNCTION(execHasVisibilityData); \
	DECLARE_FUNCTION(execIsAIVisibilityRelevantSafeFromAIVisibility); \
	DECLARE_FUNCTION(execIsLocationSafeFromLocation); \
	DECLARE_FUNCTION(execIsLocationVisibleFromLocation); \
	DECLARE_FUNCTION(execIsNodeSafeFromActor); \
	DECLARE_FUNCTION(execIsNodeSafeFromLocation); \
	DECLARE_FUNCTION(execIsNodeVisibleFromActor); \
	DECLARE_FUNCTION(execIsNodeVisibleFromLocation); \
	DECLARE_FUNCTION(execRateTargetLocation); \
	DECLARE_FUNCTION(execRegisterCoverPointVisibilityCheck); \
	DECLARE_FUNCTION(execRegisterRandomSublevelVisComponent); \
	DECLARE_FUNCTION(execRegisterRelevantAIVisibilityActor); \
	DECLARE_FUNCTION(execRegisterVisibilityComponent); \
	DECLARE_FUNCTION(execUnregisterCoverPointVisibilityCheck); \
	DECLARE_FUNCTION(execUnregisterRandomSublevelVisComponent); \
	DECLARE_FUNCTION(execUnregisterRelevantAIVisibilityActor); \
	DECLARE_FUNCTION(execUnregisterVisibilityComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIVisibilityManager(); \
	friend struct Z_Construct_UClass_ASBZAIVisibilityManager_Statics; \
public: \
	DECLARE_CLASS(ASBZAIVisibilityManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIVisibilityManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIVisibilityManager(); \
	friend struct Z_Construct_UClass_ASBZAIVisibilityManager_Statics; \
public: \
	DECLARE_CLASS(ASBZAIVisibilityManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIVisibilityManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIVisibilityManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIVisibilityManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIVisibilityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIVisibilityManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIVisibilityManager(ASBZAIVisibilityManager&&); \
	NO_API ASBZAIVisibilityManager(const ASBZAIVisibilityManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIVisibilityManager(ASBZAIVisibilityManager&&); \
	NO_API ASBZAIVisibilityManager(const ASBZAIVisibilityManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIVisibilityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIVisibilityManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIVisibilityManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxComputedNodePerFrame() { return STRUCT_OFFSET(ASBZAIVisibilityManager, MaxComputedNodePerFrame); } \
	FORCEINLINE static uint32 __PPO__MaxComputedCoverPointVisibilityPerFrame() { return STRUCT_OFFSET(ASBZAIVisibilityManager, MaxComputedCoverPointVisibilityPerFrame); } \
	FORCEINLINE static uint32 __PPO__MaxDistFromObstacleToBeStandCovered() { return STRUCT_OFFSET(ASBZAIVisibilityManager, MaxDistFromObstacleToBeStandCovered); } \
	FORCEINLINE static uint32 __PPO__MaxDistFromObstacleToBeCrouchCovered() { return STRUCT_OFFSET(ASBZAIVisibilityManager, MaxDistFromObstacleToBeCrouchCovered); } \
	FORCEINLINE static uint32 __PPO__MinDistFromEnemyToBeCrouchCovered() { return STRUCT_OFFSET(ASBZAIVisibilityManager, MinDistFromEnemyToBeCrouchCovered); } \
	FORCEINLINE static uint32 __PPO__MinDistFromEnemyToBeStandCovered() { return STRUCT_OFFSET(ASBZAIVisibilityManager, MinDistFromEnemyToBeStandCovered); } \
	FORCEINLINE static uint32 __PPO__VisibilityComponent() { return STRUCT_OFFSET(ASBZAIVisibilityManager, VisibilityComponent); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityRelevantActorsEveryFrame() { return STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevantActorsEveryFrame); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityRelevantActorsAutomatic() { return STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevantActorsAutomatic); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityRelevants() { return STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevants); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityRelevantActorsToRefreshAfterUpdate() { return STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevantActorsToRefreshAfterUpdate); } \
	FORCEINLINE static uint32 __PPO__CoverPointVisibilityChecks() { return STRUCT_OFFSET(ASBZAIVisibilityManager, CoverPointVisibilityChecks); } \
	FORCEINLINE static uint32 __PPO__RandomSublevelVisComponents() { return STRUCT_OFFSET(ASBZAIVisibilityManager, RandomSublevelVisComponents); } \
	FORCEINLINE static uint32 __PPO__RSLVisComponentTransforms() { return STRUCT_OFFSET(ASBZAIVisibilityManager, RSLVisComponentTransforms); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIVisibilityManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIVisibilityManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
