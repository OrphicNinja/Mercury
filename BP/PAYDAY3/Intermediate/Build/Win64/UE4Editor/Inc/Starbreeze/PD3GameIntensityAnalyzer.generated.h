// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class URetainerBox;
class UObject;
class UPD3GameIntensityAnalyzer;
struct FSBZBagHandle;
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_PD3GameIntensityAnalyzer_generated_h
#error "PD3GameIntensityAnalyzer.generated.h already included, missing '#pragma once' in PD3GameIntensityAnalyzer.h"
#endif
#define STARBREEZE_PD3GameIntensityAnalyzer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddGlitchEffectSourceActor); \
	DECLARE_FUNCTION(execAddGlitchRetainerBox); \
	DECLARE_FUNCTION(execGetGameIntensityAnalyzer); \
	DECLARE_FUNCTION(execHandleBagSecured); \
	DECLARE_FUNCTION(execHandleGameStateChanged); \
	DECLARE_FUNCTION(execHandleProgressionIndexChanged); \
	DECLARE_FUNCTION(execHandleSuspenseValueChanged); \
	DECLARE_FUNCTION(execOnExitedActionPhase); \
	DECLARE_FUNCTION(execRemoveGlitchEffectSourceActor);


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGlitchEffectSourceActor); \
	DECLARE_FUNCTION(execAddGlitchRetainerBox); \
	DECLARE_FUNCTION(execGetGameIntensityAnalyzer); \
	DECLARE_FUNCTION(execHandleBagSecured); \
	DECLARE_FUNCTION(execHandleGameStateChanged); \
	DECLARE_FUNCTION(execHandleProgressionIndexChanged); \
	DECLARE_FUNCTION(execHandleSuspenseValueChanged); \
	DECLARE_FUNCTION(execOnExitedActionPhase); \
	DECLARE_FUNCTION(execRemoveGlitchEffectSourceActor);


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3GameIntensityAnalyzer(); \
	friend struct Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UPD3GameIntensityAnalyzer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3GameIntensityAnalyzer)


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPD3GameIntensityAnalyzer(); \
	friend struct Z_Construct_UClass_UPD3GameIntensityAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UPD3GameIntensityAnalyzer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3GameIntensityAnalyzer)


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3GameIntensityAnalyzer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3GameIntensityAnalyzer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3GameIntensityAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3GameIntensityAnalyzer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3GameIntensityAnalyzer(UPD3GameIntensityAnalyzer&&); \
	NO_API UPD3GameIntensityAnalyzer(const UPD3GameIntensityAnalyzer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3GameIntensityAnalyzer(UPD3GameIntensityAnalyzer&&); \
	NO_API UPD3GameIntensityAnalyzer(const UPD3GameIntensityAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3GameIntensityAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3GameIntensityAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3GameIntensityAnalyzer)


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SystemStates() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SystemStates); } \
	FORCEINLINE static uint32 __PPO__MusicSwitches() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, MusicSwitches); } \
	FORCEINLINE static uint32 __PPO__SuspenseSwitches() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SuspenseSwitches); } \
	FORCEINLINE static uint32 __PPO__AnticipationDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, AnticipationDialog); } \
	FORCEINLINE static uint32 __PPO__AssaultDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, AssaultDialog); } \
	FORCEINLINE static uint32 __PPO__ControlDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, ControlDialog); } \
	FORCEINLINE static uint32 __PPO__PointOfNoReturnDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, PointOfNoReturnDialog); } \
	FORCEINLINE static uint32 __PPO__PointOfNoReturnReminderDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, PointOfNoReturnReminderDialog); } \
	FORCEINLINE static uint32 __PPO__PointOfNoReturnReminderDelaySeconds() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, PointOfNoReturnReminderDelaySeconds); } \
	FORCEINLINE static uint32 __PPO__ThreatDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, ThreatDialog); } \
	FORCEINLINE static uint32 __PPO__SquadDialog() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SquadDialog); } \
	FORCEINLINE static uint32 __PPO__SecuredBagDialogArray() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SecuredBagDialogArray); } \
	FORCEINLINE static uint32 __PPO__SecuredBagLeftDialogArray() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, SecuredBagLeftDialogArray); } \
	FORCEINLINE static uint32 __PPO__HUDGlitchMaterial() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, HUDGlitchMaterial); } \
	FORCEINLINE static uint32 __PPO__GlitchTickInterval() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchTickInterval); } \
	FORCEINLINE static uint32 __PPO__GlitchStrengthModifier() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchStrengthModifier); } \
	FORCEINLINE static uint32 __PPO__GlitchMinimumDotModifier() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchMinimumDotModifier); } \
	FORCEINLINE static uint32 __PPO__GlitchStrengthParameterName() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchStrengthParameterName); } \
	FORCEINLINE static uint32 __PPO__GlitchTextureParameterName() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchTextureParameterName); } \
	FORCEINLINE static uint32 __PPO__GlitchEffectSourceMap() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchEffectSourceMap); } \
	FORCEINLINE static uint32 __PPO__GlitchRetainerBoxArray() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, GlitchRetainerBoxArray); } \
	FORCEINLINE static uint32 __PPO__HUDGlitchDynamicMaterialInstance() { return STRUCT_OFFSET(UPD3GameIntensityAnalyzer, HUDGlitchDynamicMaterialInstance); }


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_21_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3GameIntensityAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3GameIntensityAnalyzer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
