// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCameraViewRestriction;
struct FSBZLockCameraData;
struct FRotator;
class UNiagaraSystem;
class UNiagaraComponent;
#ifdef STARBREEZE_SBZPlayerCameraManager_generated_h
#error "SBZPlayerCameraManager.generated.h already included, missing '#pragma once' in SBZPlayerCameraManager.h"
#endif
#define STARBREEZE_SBZPlayerCameraManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOrUpdateCameraViewRestriction); \
	DECLARE_FUNCTION(execIsCameraLocked); \
	DECLARE_FUNCTION(execLockCamera); \
	DECLARE_FUNCTION(execRemoveCameraViewRestriction); \
	DECLARE_FUNCTION(execSetCameraLockedReferenceRotation); \
	DECLARE_FUNCTION(execSpawnLensParticleEffect); \
	DECLARE_FUNCTION(execUnlockCamera);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOrUpdateCameraViewRestriction); \
	DECLARE_FUNCTION(execIsCameraLocked); \
	DECLARE_FUNCTION(execLockCamera); \
	DECLARE_FUNCTION(execRemoveCameraViewRestriction); \
	DECLARE_FUNCTION(execSetCameraLockedReferenceRotation); \
	DECLARE_FUNCTION(execSpawnLensParticleEffect); \
	DECLARE_FUNCTION(execUnlockCamera);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerCameraManager(); \
	friend struct Z_Construct_UClass_ASBZPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerCameraManager, ASBZBasePlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerCameraManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerCameraManager(); \
	friend struct Z_Construct_UClass_ASBZPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerCameraManager, ASBZBasePlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerCameraManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerCameraManager(ASBZPlayerCameraManager&&); \
	NO_API ASBZPlayerCameraManager(const ASBZPlayerCameraManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerCameraManager(ASBZPlayerCameraManager&&); \
	NO_API ASBZPlayerCameraManager(const ASBZPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerCameraManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SBZCameraModifierList() { return STRUCT_OFFSET(ASBZPlayerCameraManager, SBZCameraModifierList); } \
	FORCEINLINE static uint32 __PPO__ClampCameraModifier() { return STRUCT_OFFSET(ASBZPlayerCameraManager, ClampCameraModifier); } \
	FORCEINLINE static uint32 __PPO__LensEffectParent() { return STRUCT_OFFSET(ASBZPlayerCameraManager, LensEffectParent); } \
	FORCEINLINE static uint32 __PPO__ActiveCameraViewRestrictions() { return STRUCT_OFFSET(ASBZPlayerCameraManager, ActiveCameraViewRestrictions); } \
	FORCEINLINE static uint32 __PPO__ActiveCameraViewRestrictionId() { return STRUCT_OFFSET(ASBZPlayerCameraManager, ActiveCameraViewRestrictionId); } \
	FORCEINLINE static uint32 __PPO__ForwardTraceResult() { return STRUCT_OFFSET(ASBZPlayerCameraManager, ForwardTraceResult); } \
	FORCEINLINE static uint32 __PPO__ForwardTraceLength() { return STRUCT_OFFSET(ASBZPlayerCameraManager, ForwardTraceLength); } \
	FORCEINLINE static uint32 __PPO__bUseDynFocalDistanceWhenUnequipped() { return STRUCT_OFFSET(ASBZPlayerCameraManager, bUseDynFocalDistanceWhenUnequipped); } \
	FORCEINLINE static uint32 __PPO__AudioRaycasting() { return STRUCT_OFFSET(ASBZPlayerCameraManager, AudioRaycasting); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
