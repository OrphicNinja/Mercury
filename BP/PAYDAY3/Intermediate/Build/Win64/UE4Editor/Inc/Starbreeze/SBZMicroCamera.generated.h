// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
class APawn;
#ifdef STARBREEZE_SBZMicroCamera_generated_h
#error "SBZMicroCamera.generated.h already included, missing '#pragma once' in SBZMicroCamera.h"
#endif
#define STARBREEZE_SBZMicroCamera_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_RPC_WRAPPERS \
	virtual void Multicast_OverloadMicroCamera_Implementation(); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetArmed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OverloadMicroCamera); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetArmed); \
	DECLARE_FUNCTION(execOnAICharacterKilled);


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OverloadMicroCamera_Implementation(); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetArmed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OverloadMicroCamera); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetArmed); \
	DECLARE_FUNCTION(execOnAICharacterKilled);


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_EVENT_PARMS \
	struct SBZMicroCamera_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMicroCamera(); \
	friend struct Z_Construct_UClass_ASBZMicroCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZMicroCamera, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMicroCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZMicroCamera*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASBZMicroCamera(); \
	friend struct Z_Construct_UClass_ASBZMicroCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZMicroCamera, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMicroCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZMicroCamera*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMicroCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMicroCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMicroCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMicroCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMicroCamera(ASBZMicroCamera&&); \
	NO_API ASBZMicroCamera(const ASBZMicroCamera&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMicroCamera(ASBZMicroCamera&&); \
	NO_API ASBZMicroCamera(const ASBZMicroCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMicroCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMicroCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMicroCamera)


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__YawLimit() { return STRUCT_OFFSET(ASBZMicroCamera, YawLimit); } \
	FORCEINLINE static uint32 __PPO__PitchLimit() { return STRUCT_OFFSET(ASBZMicroCamera, PitchLimit); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ASBZMicroCamera, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZMicroCamera, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZMicroCamera, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__MicroCameraTasedEffectClass() { return STRUCT_OFFSET(ASBZMicroCamera, MicroCameraTasedEffectClass); } \
	FORCEINLINE static uint32 __PPO__MicroCameraExplodedEvent() { return STRUCT_OFFSET(ASBZMicroCamera, MicroCameraExplodedEvent); } \
	FORCEINLINE static uint32 __PPO__DetonationEffect() { return STRUCT_OFFSET(ASBZMicroCamera, DetonationEffect); } \
	FORCEINLINE static uint32 __PPO__TaseDuration() { return STRUCT_OFFSET(ASBZMicroCamera, TaseDuration); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRange() { return STRUCT_OFFSET(ASBZMicroCamera, AIExplosionRange); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRange() { return STRUCT_OFFSET(ASBZMicroCamera, PlayerExplosionRange); } \
	FORCEINLINE static uint32 __PPO__bExplosionAffectsAIOnly() { return STRUCT_OFFSET(ASBZMicroCamera, bExplosionAffectsAIOnly); } \
	FORCEINLINE static uint32 __PPO__AutoMarkTickInterval() { return STRUCT_OFFSET(ASBZMicroCamera, AutoMarkTickInterval); } \
	FORCEINLINE static uint32 __PPO__ViewExtents() { return STRUCT_OFFSET(ASBZMicroCamera, ViewExtents); } \
	FORCEINLINE static uint32 __PPO__OverloadStartEvent() { return STRUCT_OFFSET(ASBZMicroCamera, OverloadStartEvent); } \
	FORCEINLINE static uint32 __PPO__StopOverloadStopEvent() { return STRUCT_OFFSET(ASBZMicroCamera, StopOverloadStopEvent); } \
	FORCEINLINE static uint32 __PPO__ArmedEvent() { return STRUCT_OFFSET(ASBZMicroCamera, ArmedEvent); } \
	FORCEINLINE static uint32 __PPO__OverloadSoundDuration() { return STRUCT_OFFSET(ASBZMicroCamera, OverloadSoundDuration); } \
	FORCEINLINE static uint32 __PPO__AkComponent() { return STRUCT_OFFSET(ASBZMicroCamera, AkComponent); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZMicroCamera, HurtReactionData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMicroCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMicroCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
