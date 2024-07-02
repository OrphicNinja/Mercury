// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZTimerState : uint8;
#ifdef STARBREEZE_SBZModifiableTimer_generated_h
#error "SBZModifiableTimer.generated.h already included, missing '#pragma once' in SBZModifiableTimer.h"
#endif
#define STARBREEZE_SBZModifiableTimer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_RPC_WRAPPERS \
	virtual void Multicast_ResetTimerAndPause_Implementation(); \
	virtual void Multicast_ResetTimerAndStart_Implementation(); \
	virtual void Multicast_SetDuration_Implementation(float NewDuration); \
	virtual void Multicast_SetTimeElapsed_Implementation(float NewTimeElapsed); \
	virtual void Multicast_SetTimerSpeed_Implementation(float NewSpeed); \
	virtual void Multicast_SetTimerState_Implementation(ESBZTimerState NewState); \
 \
	DECLARE_FUNCTION(execAddTimeElapsed); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetProgressMade); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_ResetTimerAndPause); \
	DECLARE_FUNCTION(execMulticast_ResetTimerAndStart); \
	DECLARE_FUNCTION(execMulticast_SetDuration); \
	DECLARE_FUNCTION(execMulticast_SetTimeElapsed); \
	DECLARE_FUNCTION(execMulticast_SetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_SetTimerState); \
	DECLARE_FUNCTION(execOnRep_TimerState); \
	DECLARE_FUNCTION(execOnSabotaged); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execSetTimerDuration); \
	DECLARE_FUNCTION(execSetTimerSpeed); \
	DECLARE_FUNCTION(execStartTimer);


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ResetTimerAndPause_Implementation(); \
	virtual void Multicast_ResetTimerAndStart_Implementation(); \
	virtual void Multicast_SetDuration_Implementation(float NewDuration); \
	virtual void Multicast_SetTimeElapsed_Implementation(float NewTimeElapsed); \
	virtual void Multicast_SetTimerSpeed_Implementation(float NewSpeed); \
	virtual void Multicast_SetTimerState_Implementation(ESBZTimerState NewState); \
 \
	DECLARE_FUNCTION(execAddTimeElapsed); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetProgressMade); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_ResetTimerAndPause); \
	DECLARE_FUNCTION(execMulticast_ResetTimerAndStart); \
	DECLARE_FUNCTION(execMulticast_SetDuration); \
	DECLARE_FUNCTION(execMulticast_SetTimeElapsed); \
	DECLARE_FUNCTION(execMulticast_SetTimerSpeed); \
	DECLARE_FUNCTION(execMulticast_SetTimerState); \
	DECLARE_FUNCTION(execOnRep_TimerState); \
	DECLARE_FUNCTION(execOnSabotaged); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execSetTimerDuration); \
	DECLARE_FUNCTION(execSetTimerSpeed); \
	DECLARE_FUNCTION(execStartTimer);


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_EVENT_PARMS \
	struct SBZModifiableTimer_eventBP_DurationChanged_Parms \
	{ \
		float NewDuration; \
	}; \
	struct SBZModifiableTimer_eventBP_OnStateChanged_Parms \
	{ \
		ESBZTimerState NewState; \
		ESBZTimerState OldState; \
		bool bDoCosmetics; \
	}; \
	struct SBZModifiableTimer_eventBP_TimeElapsedChanged_Parms \
	{ \
		float NewTimeElapsed; \
	}; \
	struct SBZModifiableTimer_eventBP_TimerSpeedChanged_Parms \
	{ \
		float NewSpeed; \
	}; \
	struct SBZModifiableTimer_eventMulticast_SetDuration_Parms \
	{ \
		float NewDuration; \
	}; \
	struct SBZModifiableTimer_eventMulticast_SetTimeElapsed_Parms \
	{ \
		float NewTimeElapsed; \
	}; \
	struct SBZModifiableTimer_eventMulticast_SetTimerSpeed_Parms \
	{ \
		float NewSpeed; \
	}; \
	struct SBZModifiableTimer_eventMulticast_SetTimerState_Parms \
	{ \
		ESBZTimerState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZModifiableTimer(); \
	friend struct Z_Construct_UClass_ASBZModifiableTimer_Statics; \
public: \
	DECLARE_CLASS(ASBZModifiableTimer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZModifiableTimer) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZModifiableTimer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Duration=NETFIELD_REP_START, \
		TimeElapsed, \
		CurrentSpeed, \
		CurrentTimerState, \
		NETFIELD_REP_END=CurrentTimerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZModifiableTimer(); \
	friend struct Z_Construct_UClass_ASBZModifiableTimer_Statics; \
public: \
	DECLARE_CLASS(ASBZModifiableTimer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZModifiableTimer) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZModifiableTimer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Duration=NETFIELD_REP_START, \
		TimeElapsed, \
		CurrentSpeed, \
		CurrentTimerState, \
		NETFIELD_REP_END=CurrentTimerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZModifiableTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZModifiableTimer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZModifiableTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZModifiableTimer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZModifiableTimer(ASBZModifiableTimer&&); \
	NO_API ASBZModifiableTimer(const ASBZModifiableTimer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZModifiableTimer(ASBZModifiableTimer&&); \
	NO_API ASBZModifiableTimer(const ASBZModifiableTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZModifiableTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZModifiableTimer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZModifiableTimer)


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(ASBZModifiableTimer, Duration); } \
	FORCEINLINE static uint32 __PPO__ProgressionValuesToPost() { return STRUCT_OFFSET(ASBZModifiableTimer, ProgressionValuesToPost); } \
	FORCEINLINE static uint32 __PPO__TimeElapsed() { return STRUCT_OFFSET(ASBZModifiableTimer, TimeElapsed); } \
	FORCEINLINE static uint32 __PPO__CurrentSpeed() { return STRUCT_OFFSET(ASBZModifiableTimer, CurrentSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentTimerState() { return STRUCT_OFFSET(ASBZModifiableTimer, CurrentTimerState); } \
	FORCEINLINE static uint32 __PPO__SabotagePoint() { return STRUCT_OFFSET(ASBZModifiableTimer, SabotagePoint); } \
	FORCEINLINE static uint32 __PPO__NextProgressionToPostIndex() { return STRUCT_OFFSET(ASBZModifiableTimer, NextProgressionToPostIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZModifiableTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModifiableTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
