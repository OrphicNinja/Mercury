// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZVehicleAudioComponent_generated_h
#error "SBZVehicleAudioComponent.generated.h already included, missing '#pragma once' in SBZVehicleAudioComponent.h"
#endif
#define STARBREEZE_SBZVehicleAudioComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableSounds); \
	DECLARE_FUNCTION(execPlayBrakeSound); \
	DECLARE_FUNCTION(execPlayEngineSound); \
	DECLARE_FUNCTION(execPlayEngineSounds); \
	DECLARE_FUNCTION(execPlayTireCollisionSounds); \
	DECLARE_FUNCTION(execPlayTyreFrictionSound); \
	DECLARE_FUNCTION(execPlayVehicleCollisionSounds); \
	DECLARE_FUNCTION(execPlayVehicleHornSounds); \
	DECLARE_FUNCTION(execPlayVehicleRadioSounds); \
	DECLARE_FUNCTION(execSetBodyCollisionImpact); \
	DECLARE_FUNCTION(execSetCarVehicleEngineSpeed); \
	DECLARE_FUNCTION(execSetHelicopterVehicleEngineSpeed); \
	DECLARE_FUNCTION(execSetTyreCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreFriction); \
	DECLARE_FUNCTION(execStopBrakeSound); \
	DECLARE_FUNCTION(execStopEngineSound); \
	DECLARE_FUNCTION(execStopTyreFrictionSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableSounds); \
	DECLARE_FUNCTION(execPlayBrakeSound); \
	DECLARE_FUNCTION(execPlayEngineSound); \
	DECLARE_FUNCTION(execPlayEngineSounds); \
	DECLARE_FUNCTION(execPlayTireCollisionSounds); \
	DECLARE_FUNCTION(execPlayTyreFrictionSound); \
	DECLARE_FUNCTION(execPlayVehicleCollisionSounds); \
	DECLARE_FUNCTION(execPlayVehicleHornSounds); \
	DECLARE_FUNCTION(execPlayVehicleRadioSounds); \
	DECLARE_FUNCTION(execSetBodyCollisionImpact); \
	DECLARE_FUNCTION(execSetCarVehicleEngineSpeed); \
	DECLARE_FUNCTION(execSetHelicopterVehicleEngineSpeed); \
	DECLARE_FUNCTION(execSetTyreCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreFriction); \
	DECLARE_FUNCTION(execStopBrakeSound); \
	DECLARE_FUNCTION(execStopEngineSound); \
	DECLARE_FUNCTION(execStopTyreFrictionSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVehicleAudioComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleAudioComponent, USBZAmbientSoundComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVehicleAudioComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleAudioComponent, USBZAmbientSoundComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleAudioComponent(USBZVehicleAudioComponent&&); \
	NO_API USBZVehicleAudioComponent(const USBZVehicleAudioComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleAudioComponent(USBZVehicleAudioComponent&&); \
	NO_API USBZVehicleAudioComponent(const USBZVehicleAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EngineSoundMultiplicationValue() { return STRUCT_OFFSET(USBZVehicleAudioComponent, EngineSoundMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__BrakeSoundMultiplicationValue() { return STRUCT_OFFSET(USBZVehicleAudioComponent, BrakeSoundMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__TyreSoundMultiplicationValue() { return STRUCT_OFFSET(USBZVehicleAudioComponent, TyreSoundMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__BladeSoundMultiplicationValue() { return STRUCT_OFFSET(USBZVehicleAudioComponent, BladeSoundMultiplicationValue); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
