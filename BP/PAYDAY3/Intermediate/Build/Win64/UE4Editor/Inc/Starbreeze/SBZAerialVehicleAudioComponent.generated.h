// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAerialVehicleAudioComponent_generated_h
#error "SBZAerialVehicleAudioComponent.generated.h already included, missing '#pragma once' in SBZAerialVehicleAudioComponent.h"
#endif
#define STARBREEZE_SBZAerialVehicleAudioComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableSounds); \
	DECLARE_FUNCTION(execPlayEngineSound); \
	DECLARE_FUNCTION(execPlaySpotlightSound); \
	DECLARE_FUNCTION(execPlayTyreCollisionSound); \
	DECLARE_FUNCTION(execPlayVehicleCollisionSound); \
	DECLARE_FUNCTION(execPlayVehicleRadioSound); \
	DECLARE_FUNCTION(execSetBodyCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreCollisionImpact); \
	DECLARE_FUNCTION(execSetVehicleEngineSpeed); \
	DECLARE_FUNCTION(execStopEngineSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableSounds); \
	DECLARE_FUNCTION(execPlayEngineSound); \
	DECLARE_FUNCTION(execPlaySpotlightSound); \
	DECLARE_FUNCTION(execPlayTyreCollisionSound); \
	DECLARE_FUNCTION(execPlayVehicleCollisionSound); \
	DECLARE_FUNCTION(execPlayVehicleRadioSound); \
	DECLARE_FUNCTION(execSetBodyCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreCollisionImpact); \
	DECLARE_FUNCTION(execSetVehicleEngineSpeed); \
	DECLARE_FUNCTION(execStopEngineSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAerialVehicleAudioComponent(); \
	friend struct Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAerialVehicleAudioComponent, USBZAmbientSoundComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAerialVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAerialVehicleAudioComponent(); \
	friend struct Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAerialVehicleAudioComponent, USBZAmbientSoundComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAerialVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAerialVehicleAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAerialVehicleAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAerialVehicleAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAerialVehicleAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAerialVehicleAudioComponent(USBZAerialVehicleAudioComponent&&); \
	NO_API USBZAerialVehicleAudioComponent(const USBZAerialVehicleAudioComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAerialVehicleAudioComponent(USBZAerialVehicleAudioComponent&&); \
	NO_API USBZAerialVehicleAudioComponent(const USBZAerialVehicleAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAerialVehicleAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAerialVehicleAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAerialVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EngineSoundMultiplicationValue() { return STRUCT_OFFSET(USBZAerialVehicleAudioComponent, EngineSoundMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__TyreSoundMultiplicationValue() { return STRUCT_OFFSET(USBZAerialVehicleAudioComponent, TyreSoundMultiplicationValue); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAerialVehicleAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
