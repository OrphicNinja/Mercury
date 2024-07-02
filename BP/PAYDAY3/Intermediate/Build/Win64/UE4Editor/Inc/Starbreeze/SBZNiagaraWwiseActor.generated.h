// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZNiagaraWwiseActor_generated_h
#error "SBZNiagaraWwiseActor.generated.h already included, missing '#pragma once' in SBZNiagaraWwiseActor.h"
#endif
#define STARBREEZE_SBZNiagaraWwiseActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateActor); \
	DECLARE_FUNCTION(execDeactivateActor); \
	DECLARE_FUNCTION(execDestroyComponents); \
	DECLARE_FUNCTION(execPlayEffectsLoop); \
	DECLARE_FUNCTION(execPlayEffectsOneShot); \
	DECLARE_FUNCTION(execStopEffectsLoop); \
	DECLARE_FUNCTION(execUpdateRtpc);


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateActor); \
	DECLARE_FUNCTION(execDeactivateActor); \
	DECLARE_FUNCTION(execDestroyComponents); \
	DECLARE_FUNCTION(execPlayEffectsLoop); \
	DECLARE_FUNCTION(execPlayEffectsOneShot); \
	DECLARE_FUNCTION(execStopEffectsLoop); \
	DECLARE_FUNCTION(execUpdateRtpc);


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZNiagaraWwiseActor(); \
	friend struct Z_Construct_UClass_ASBZNiagaraWwiseActor_Statics; \
public: \
	DECLARE_CLASS(ASBZNiagaraWwiseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZNiagaraWwiseActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZNiagaraWwiseActor(); \
	friend struct Z_Construct_UClass_ASBZNiagaraWwiseActor_Statics; \
public: \
	DECLARE_CLASS(ASBZNiagaraWwiseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZNiagaraWwiseActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZNiagaraWwiseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZNiagaraWwiseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZNiagaraWwiseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZNiagaraWwiseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZNiagaraWwiseActor(ASBZNiagaraWwiseActor&&); \
	NO_API ASBZNiagaraWwiseActor(const ASBZNiagaraWwiseActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZNiagaraWwiseActor(ASBZNiagaraWwiseActor&&); \
	NO_API ASBZNiagaraWwiseActor(const ASBZNiagaraWwiseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZNiagaraWwiseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZNiagaraWwiseActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZNiagaraWwiseActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__NiagaraComponent() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, NiagaraComponent); } \
	FORCEINLINE static uint32 __PPO__bPlayFromBeginning() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, bPlayFromBeginning); } \
	FORCEINLINE static uint32 __PPO__bOneShotEffect() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, bOneShotEffect); } \
	FORCEINLINE static uint32 __PPO__bUpdateRtpc() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, bUpdateRtpc); } \
	FORCEINLINE static uint32 __PPO__RtpcUpdateValue() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, RtpcUpdateValue); } \
	FORCEINLINE static uint32 __PPO__RtpcInterpolationTimerMS() { return STRUCT_OFFSET(ASBZNiagaraWwiseActor, RtpcInterpolationTimerMS); }


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZNiagaraWwiseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZNiagaraWwiseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
