// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZNiagaraWwiseComponent_generated_h
#error "SBZNiagaraWwiseComponent.generated.h already included, missing '#pragma once' in SBZNiagaraWwiseComponent.h"
#endif
#define STARBREEZE_SBZNiagaraWwiseComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateComponent); \
	DECLARE_FUNCTION(execDeactivateComponent); \
	DECLARE_FUNCTION(execDestroyComponents); \
	DECLARE_FUNCTION(execPlayEffectsLoop); \
	DECLARE_FUNCTION(execPlayEffectsOneShot); \
	DECLARE_FUNCTION(execStopEffectsLoop); \
	DECLARE_FUNCTION(execUpdateRtpc);


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateComponent); \
	DECLARE_FUNCTION(execDeactivateComponent); \
	DECLARE_FUNCTION(execDestroyComponents); \
	DECLARE_FUNCTION(execPlayEffectsLoop); \
	DECLARE_FUNCTION(execPlayEffectsOneShot); \
	DECLARE_FUNCTION(execStopEffectsLoop); \
	DECLARE_FUNCTION(execUpdateRtpc);


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZNiagaraWwiseComponent(); \
	friend struct Z_Construct_UClass_USBZNiagaraWwiseComponent_Statics; \
public: \
	DECLARE_CLASS(USBZNiagaraWwiseComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNiagaraWwiseComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZNiagaraWwiseComponent(); \
	friend struct Z_Construct_UClass_USBZNiagaraWwiseComponent_Statics; \
public: \
	DECLARE_CLASS(USBZNiagaraWwiseComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNiagaraWwiseComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZNiagaraWwiseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNiagaraWwiseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNiagaraWwiseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNiagaraWwiseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNiagaraWwiseComponent(USBZNiagaraWwiseComponent&&); \
	NO_API USBZNiagaraWwiseComponent(const USBZNiagaraWwiseComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNiagaraWwiseComponent(USBZNiagaraWwiseComponent&&); \
	NO_API USBZNiagaraWwiseComponent(const USBZNiagaraWwiseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNiagaraWwiseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNiagaraWwiseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNiagaraWwiseComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__NiagaraComponent() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, NiagaraComponent); } \
	FORCEINLINE static uint32 __PPO__bPlayFromBeginning() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, bPlayFromBeginning); } \
	FORCEINLINE static uint32 __PPO__bOneShotEffect() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, bOneShotEffect); } \
	FORCEINLINE static uint32 __PPO__bUpdateRtpc() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, bUpdateRtpc); } \
	FORCEINLINE static uint32 __PPO__RtpcUpdateValue() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, RtpcUpdateValue); } \
	FORCEINLINE static uint32 __PPO__RtpcInterpolationTimerMS() { return STRUCT_OFFSET(USBZNiagaraWwiseComponent, RtpcInterpolationTimerMS); }


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZNiagaraWwiseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
