// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZTimerState : uint8;
#ifdef STARBREEZE_SBZModifiableTimerComponent_generated_h
#error "SBZModifiableTimerComponent.generated.h already included, missing '#pragma once' in SBZModifiableTimerComponent.h"
#endif
#define STARBREEZE_SBZModifiableTimerComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_ResetTimer_Implementation(bool bStartTimer); \
	virtual void Multicast_SetTimerSpeed_Implementation(float NewSpeed); \
	virtual void Multicast_SetTimerState_Implementation(ESBZTimerState NewState); \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetProgressMade); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_ResetTimer); \
	DECLARE_FUNCTION(execMulticast_SetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_SetTimerState); \
	DECLARE_FUNCTION(execOnRep_CurrentSpeed); \
	DECLARE_FUNCTION(execOnRep_NextProgressionValueIndex); \
	DECLARE_FUNCTION(execOnRep_TimerState); \
	DECLARE_FUNCTION(execServerPauseTimer); \
	DECLARE_FUNCTION(execServerResetTimer); \
	DECLARE_FUNCTION(execServerSetTimerSpeed); \
	DECLARE_FUNCTION(execServerStartTimer);


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ResetTimer_Implementation(bool bStartTimer); \
	virtual void Multicast_SetTimerSpeed_Implementation(float NewSpeed); \
	virtual void Multicast_SetTimerState_Implementation(ESBZTimerState NewState); \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetProgressMade); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_ResetTimer); \
	DECLARE_FUNCTION(execMulticast_SetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_SetTimerState); \
	DECLARE_FUNCTION(execOnRep_CurrentSpeed); \
	DECLARE_FUNCTION(execOnRep_NextProgressionValueIndex); \
	DECLARE_FUNCTION(execOnRep_TimerState); \
	DECLARE_FUNCTION(execServerPauseTimer); \
	DECLARE_FUNCTION(execServerResetTimer); \
	DECLARE_FUNCTION(execServerSetTimerSpeed); \
	DECLARE_FUNCTION(execServerStartTimer);


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_EVENT_PARMS \
	struct SBZModifiableTimerComponent_eventMulticast_ResetTimer_Parms \
	{ \
		bool bStartTimer; \
	}; \
	struct SBZModifiableTimerComponent_eventMulticast_SetTimerSpeed_Parms \
	{ \
		float NewSpeed; \
	}; \
	struct SBZModifiableTimerComponent_eventMulticast_SetTimerState_Parms \
	{ \
		ESBZTimerState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZModifiableTimerComponent(); \
	friend struct Z_Construct_UClass_USBZModifiableTimerComponent_Statics; \
public: \
	DECLARE_CLASS(USBZModifiableTimerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZModifiableTimerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimeElapsed=NETFIELD_REP_START, \
		CurrentSpeed, \
		NextProgressionValueIndex, \
		CurrentState, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZModifiableTimerComponent(); \
	friend struct Z_Construct_UClass_USBZModifiableTimerComponent_Statics; \
public: \
	DECLARE_CLASS(USBZModifiableTimerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZModifiableTimerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimeElapsed=NETFIELD_REP_START, \
		CurrentSpeed, \
		NextProgressionValueIndex, \
		CurrentState, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZModifiableTimerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZModifiableTimerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZModifiableTimerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZModifiableTimerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZModifiableTimerComponent(USBZModifiableTimerComponent&&); \
	NO_API USBZModifiableTimerComponent(const USBZModifiableTimerComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZModifiableTimerComponent(USBZModifiableTimerComponent&&); \
	NO_API USBZModifiableTimerComponent(const USBZModifiableTimerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZModifiableTimerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZModifiableTimerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZModifiableTimerComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(USBZModifiableTimerComponent, Duration); } \
	FORCEINLINE static uint32 __PPO__ProgressionValuesToBroadcast() { return STRUCT_OFFSET(USBZModifiableTimerComponent, ProgressionValuesToBroadcast); } \
	FORCEINLINE static uint32 __PPO__SabotagePoint() { return STRUCT_OFFSET(USBZModifiableTimerComponent, SabotagePoint); } \
	FORCEINLINE static uint32 __PPO__TimeElapsed() { return STRUCT_OFFSET(USBZModifiableTimerComponent, TimeElapsed); } \
	FORCEINLINE static uint32 __PPO__CurrentSpeed() { return STRUCT_OFFSET(USBZModifiableTimerComponent, CurrentSpeed); } \
	FORCEINLINE static uint32 __PPO__NextProgressionValueIndex() { return STRUCT_OFFSET(USBZModifiableTimerComponent, NextProgressionValueIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(USBZModifiableTimerComponent, CurrentState); } \
	FORCEINLINE static uint32 __PPO__OnTimerSpeedChanged() { return STRUCT_OFFSET(USBZModifiableTimerComponent, OnTimerSpeedChanged); } \
	FORCEINLINE static uint32 __PPO__OnProgressionReached() { return STRUCT_OFFSET(USBZModifiableTimerComponent, OnProgressionReached); } \
	FORCEINLINE static uint32 __PPO__OnTimerStateChanged() { return STRUCT_OFFSET(USBZModifiableTimerComponent, OnTimerStateChanged); }


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZModifiableTimerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
