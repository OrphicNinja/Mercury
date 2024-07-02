// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
#ifdef STARBREEZE_SBZAmbientSoundComponent_generated_h
#error "SBZAmbientSoundComponent.generated.h already included, missing '#pragma once' in SBZAmbientSoundComponent.h"
#endif
#define STARBREEZE_SBZAmbientSoundComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableAmbientSoundComponent); \
	DECLARE_FUNCTION(execEnableAmbientSoundComponent); \
	DECLARE_FUNCTION(execGetAttenuation); \
	DECLARE_FUNCTION(execIsAmbientSoundComponentEnabled); \
	DECLARE_FUNCTION(execSetAudioEvent); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSwitchState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableAmbientSoundComponent); \
	DECLARE_FUNCTION(execEnableAmbientSoundComponent); \
	DECLARE_FUNCTION(execGetAttenuation); \
	DECLARE_FUNCTION(execIsAmbientSoundComponentEnabled); \
	DECLARE_FUNCTION(execSetAudioEvent); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSwitchState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAmbientSoundComponent(); \
	friend struct Z_Construct_UClass_USBZAmbientSoundComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAmbientSoundComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAmbientSoundComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAmbientSoundComponent(); \
	friend struct Z_Construct_UClass_USBZAmbientSoundComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAmbientSoundComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAmbientSoundComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAmbientSoundComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAmbientSoundComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAmbientSoundComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAmbientSoundComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAmbientSoundComponent(USBZAmbientSoundComponent&&); \
	NO_API USBZAmbientSoundComponent(const USBZAmbientSoundComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAmbientSoundComponent(USBZAmbientSoundComponent&&); \
	NO_API USBZAmbientSoundComponent(const USBZAmbientSoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAmbientSoundComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAmbientSoundComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAmbientSoundComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventName() { return STRUCT_OFFSET(USBZAmbientSoundComponent, EventName); } \
	FORCEINLINE static uint32 __PPO__ActiveAreaAttenuationScale() { return STRUCT_OFFSET(USBZAmbientSoundComponent, ActiveAreaAttenuationScale); } \
	FORCEINLINE static uint32 __PPO__DefaultAttenuation() { return STRUCT_OFFSET(USBZAmbientSoundComponent, DefaultAttenuation); } \
	FORCEINLINE static uint32 __PPO__bUseDefaultAttenuation() { return STRUCT_OFFSET(USBZAmbientSoundComponent, bUseDefaultAttenuation); } \
	FORCEINLINE static uint32 __PPO__AudioSwitches() { return STRUCT_OFFSET(USBZAmbientSoundComponent, AudioSwitches); } \
	FORCEINLINE static uint32 __PPO__StartPoint() { return STRUCT_OFFSET(USBZAmbientSoundComponent, StartPoint); } \
	FORCEINLINE static uint32 __PPO__EndPoint() { return STRUCT_OFFSET(USBZAmbientSoundComponent, EndPoint); } \
	FORCEINLINE static uint32 __PPO__bHasEndpoints() { return STRUCT_OFFSET(USBZAmbientSoundComponent, bHasEndpoints); } \
	FORCEINLINE static uint32 __PPO__AttenuationSquared() { return STRUCT_OFFSET(USBZAmbientSoundComponent, AttenuationSquared); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAmbientSoundComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAmbientSoundComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
