// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWheeledVehicleAudioComponent_generated_h
#error "SBZWheeledVehicleAudioComponent.generated.h already included, missing '#pragma once' in SBZWheeledVehicleAudioComponent.h"
#endif
#define STARBREEZE_SBZWheeledVehicleAudioComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayBreakSound); \
	DECLARE_FUNCTION(execPlayEngineSound); \
	DECLARE_FUNCTION(execPlaySirenSound); \
	DECLARE_FUNCTION(execPlayTyreCollisionSound); \
	DECLARE_FUNCTION(execPlayTyreFrictionSound); \
	DECLARE_FUNCTION(execPlayVehicleCollisionSound); \
	DECLARE_FUNCTION(execPlayVehicleHornSound); \
	DECLARE_FUNCTION(execSetBodyCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreFriction); \
	DECLARE_FUNCTION(execSetVehicleBreakIntencity); \
	DECLARE_FUNCTION(execSetVehicleEngineSpeed); \
	DECLARE_FUNCTION(execStopBreakSound); \
	DECLARE_FUNCTION(execStopEngineSound); \
	DECLARE_FUNCTION(execStopSirenSound); \
	DECLARE_FUNCTION(execStopTyreFrictionSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayBreakSound); \
	DECLARE_FUNCTION(execPlayEngineSound); \
	DECLARE_FUNCTION(execPlaySirenSound); \
	DECLARE_FUNCTION(execPlayTyreCollisionSound); \
	DECLARE_FUNCTION(execPlayTyreFrictionSound); \
	DECLARE_FUNCTION(execPlayVehicleCollisionSound); \
	DECLARE_FUNCTION(execPlayVehicleHornSound); \
	DECLARE_FUNCTION(execSetBodyCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreCollisionImpact); \
	DECLARE_FUNCTION(execSetTyreFriction); \
	DECLARE_FUNCTION(execSetVehicleBreakIntencity); \
	DECLARE_FUNCTION(execSetVehicleEngineSpeed); \
	DECLARE_FUNCTION(execStopBreakSound); \
	DECLARE_FUNCTION(execStopEngineSound); \
	DECLARE_FUNCTION(execStopSirenSound); \
	DECLARE_FUNCTION(execStopTyreFrictionSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWheeledVehicleAudioComponent(); \
	friend struct Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZWheeledVehicleAudioComponent, USBZAmbientSoundComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWheeledVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWheeledVehicleAudioComponent(); \
	friend struct Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZWheeledVehicleAudioComponent, USBZAmbientSoundComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWheeledVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWheeledVehicleAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWheeledVehicleAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWheeledVehicleAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWheeledVehicleAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWheeledVehicleAudioComponent(USBZWheeledVehicleAudioComponent&&); \
	NO_API USBZWheeledVehicleAudioComponent(const USBZWheeledVehicleAudioComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWheeledVehicleAudioComponent(USBZWheeledVehicleAudioComponent&&); \
	NO_API USBZWheeledVehicleAudioComponent(const USBZWheeledVehicleAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWheeledVehicleAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWheeledVehicleAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWheeledVehicleAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EngineSoundMultiplicationValue() { return STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, EngineSoundMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__BrakeSoundMultiplicationValue() { return STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, BrakeSoundMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__TyreSoundMultiplicationValue() { return STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, TyreSoundMultiplicationValue); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWheeledVehicleAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
