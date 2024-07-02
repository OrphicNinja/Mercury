// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZLocalPlayerFeedback_generated_h
#error "SBZLocalPlayerFeedback.generated.h already included, missing '#pragma once' in SBZLocalPlayerFeedback.h"
#endif
#define STARBREEZE_SBZLocalPlayerFeedback_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLocalPlayerFeedback(); \
	friend struct Z_Construct_UClass_USBZLocalPlayerFeedback_Statics; \
public: \
	DECLARE_CLASS(USBZLocalPlayerFeedback, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLocalPlayerFeedback)


#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLocalPlayerFeedback(); \
	friend struct Z_Construct_UClass_USBZLocalPlayerFeedback_Statics; \
public: \
	DECLARE_CLASS(USBZLocalPlayerFeedback, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLocalPlayerFeedback)


#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLocalPlayerFeedback(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLocalPlayerFeedback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLocalPlayerFeedback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLocalPlayerFeedback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLocalPlayerFeedback(USBZLocalPlayerFeedback&&); \
	NO_API USBZLocalPlayerFeedback(const USBZLocalPlayerFeedback&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLocalPlayerFeedback(USBZLocalPlayerFeedback&&); \
	NO_API USBZLocalPlayerFeedback(const USBZLocalPlayerFeedback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLocalPlayerFeedback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLocalPlayerFeedback); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZLocalPlayerFeedback)


#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PostProcessSettings() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessSettings); } \
	FORCEINLINE static uint32 __PPO__Intensity() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, Intensity); } \
	FORCEINLINE static uint32 __PPO__PostProcessFadeInBlendCurve() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessFadeInBlendCurve); } \
	FORCEINLINE static uint32 __PPO__PostProcessBlendCurve() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessBlendCurve); } \
	FORCEINLINE static uint32 __PPO__PostProcessFadeOutBlendCurve() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessFadeOutBlendCurve); } \
	FORCEINLINE static uint32 __PPO__bLoopingCurve() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, bLoopingCurve); } \
	FORCEINLINE static uint32 __PPO__SustainTime() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, SustainTime); } \
	FORCEINLINE static uint32 __PPO__bAutoFadeOut() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, bAutoFadeOut); } \
	FORCEINLINE static uint32 __PPO__ParticleSystem() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, ParticleSystem); } \
	FORCEINLINE static uint32 __PPO__ParticleLifeTime() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, ParticleLifeTime); } \
	FORCEINLINE static uint32 __PPO__CameraShakeClass() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShakeClass); } \
	FORCEINLINE static uint32 __PPO__CameraShakeScale() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShakeScale); } \
	FORCEINLINE static uint32 __PPO__CameraShakeScaleFirstPlay() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShakeScaleFirstPlay); } \
	FORCEINLINE static uint32 __PPO__FieldOfViewAngle() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, FieldOfViewAngle); } \
	FORCEINLINE static uint32 __PPO__TopPassFieldOfViewAngle() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, TopPassFieldOfViewAngle); } \
	FORCEINLINE static uint32 __PPO__FieldOfViewOverridenAngle() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, FieldOfViewOverridenAngle); } \
	FORCEINLINE static uint32 __PPO__CameraPositionModifier() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraPositionModifier); } \
	FORCEINLINE static uint32 __PPO__CameraRotationModifier() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraRotationModifier); } \
	FORCEINLINE static uint32 __PPO__HandRigModifier() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, HandRigModifier); } \
	FORCEINLINE static uint32 __PPO__bIsCameraLocked() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, bIsCameraLocked); } \
	FORCEINLINE static uint32 __PPO__LockCameraData() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, LockCameraData); } \
	FORCEINLINE static uint32 __PPO__AkStartEvent() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, AkStartEvent); } \
	FORCEINLINE static uint32 __PPO__AkStopEvent() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, AkStopEvent); } \
	FORCEINLINE static uint32 __PPO__AkStopEventTime() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, AkStopEventTime); } \
	FORCEINLINE static uint32 __PPO__ForceFeedbackEffect() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, ForceFeedbackEffect); } \
	FORCEINLINE static uint32 __PPO__AudioRTPC() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, AudioRTPC); } \
	FORCEINLINE static uint32 __PPO__AudioRTPCValue() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, AudioRTPCValue); } \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, Priority); } \
	FORCEINLINE static uint32 __PPO__OverridenFOVPriority() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, OverridenFOVPriority); } \
	FORCEINLINE static uint32 __PPO__bRemoveAtEndOfActionPhase() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, bRemoveAtEndOfActionPhase); } \
	FORCEINLINE static uint32 __PPO__CameraOwner() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraOwner); } \
	FORCEINLINE static uint32 __PPO__LensParticleComponent() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, LensParticleComponent); } \
	FORCEINLINE static uint32 __PPO__CameraShake() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShake); } \
	FORCEINLINE static uint32 __PPO__AkComponent() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, AkComponent); } \
	FORCEINLINE static uint32 __PPO__TransformCameraModifier() { return STRUCT_OFFSET(USBZLocalPlayerFeedback, TransformCameraModifier); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_21_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLocalPlayerFeedback>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLocalPlayerFeedback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
