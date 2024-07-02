// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESBZDifficulty : uint8;
enum class EPD3HeistState : uint8;
enum class ESBZNegotiationTradeType : uint8;
struct FSBZTrafficControl;
struct FSBZECMCountData;
enum class ESBZStealthBranch : uint8;
#ifdef STARBREEZE_PD3HeistGameState_generated_h
#error "PD3HeistGameState.generated.h already included, missing '#pragma once' in PD3HeistGameState.h"
#endif
#define STARBREEZE_PD3HeistGameState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_RPC_WRAPPERS \
	virtual void Multicast_ProcessTrafficControls_Implementation(TArray<FSBZTrafficControl> const& TrafficControlArray); \
	virtual void Multicast_SetCurrentECMJammerCount_Implementation(FSBZECMCountData const& InCountData); \
	virtual void Multicast_SetHeistState_Implementation(EPD3HeistState HeistState); \
	virtual void Multicast_SetHostagesDemand_Implementation(uint8 Count); \
	virtual void Multicast_SetNegotiationEndTime_Implementation(float EndTime); \
	virtual void Multicast_SetNegotiationTradeType_Implementation(ESBZNegotiationTradeType Type); \
	virtual void Multicast_SetPagerEnabled_Implementation(uint32 NetID, bool bIsEnabled, bool bIsTimedOut); \
	virtual void Multicast_SuspenseValueChanged_Implementation(uint8 NewSuspenseValue); \
 \
	DECLARE_FUNCTION(execDifficultyBranch); \
	DECLARE_FUNCTION(execGetCurrentHeistState); \
	DECLARE_FUNCTION(execGetHostageDemand); \
	DECLARE_FUNCTION(execGetNegotiationEndTime); \
	DECLARE_FUNCTION(execGetNegotiationTradeType); \
	DECLARE_FUNCTION(execHeistStateBranch); \
	DECLARE_FUNCTION(execIncreaseSuspense); \
	DECLARE_FUNCTION(execIsActiveAssaultState); \
	DECLARE_FUNCTION(execIsAssaultActive); \
	DECLARE_FUNCTION(execMulticast_ProcessTrafficControls); \
	DECLARE_FUNCTION(execMulticast_SetCurrentECMJammerCount); \
	DECLARE_FUNCTION(execMulticast_SetHeistState); \
	DECLARE_FUNCTION(execMulticast_SetHostagesDemand); \
	DECLARE_FUNCTION(execMulticast_SetNegotiationEndTime); \
	DECLARE_FUNCTION(execMulticast_SetNegotiationTradeType); \
	DECLARE_FUNCTION(execMulticast_SetPagerEnabled); \
	DECLARE_FUNCTION(execMulticast_SuspenseValueChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentHeistState); \
	DECLARE_FUNCTION(execOnRep_ECMCountData); \
	DECLARE_FUNCTION(execOnRep_NegotiationEndTime); \
	DECLARE_FUNCTION(execOnRep_NegotiationTradeType); \
	DECLARE_FUNCTION(execOnRep_NrHostagesDemand); \
	DECLARE_FUNCTION(execOnRep_SpawnedCarryDataArray); \
	DECLARE_FUNCTION(execOnStateMachineStateLeft); \
	DECLARE_FUNCTION(execSetHeistState); \
	DECLARE_FUNCTION(execStealthBranch);


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ProcessTrafficControls_Implementation(TArray<FSBZTrafficControl> const& TrafficControlArray); \
	virtual void Multicast_SetCurrentECMJammerCount_Implementation(FSBZECMCountData const& InCountData); \
	virtual void Multicast_SetHeistState_Implementation(EPD3HeistState HeistState); \
	virtual void Multicast_SetHostagesDemand_Implementation(uint8 Count); \
	virtual void Multicast_SetNegotiationEndTime_Implementation(float EndTime); \
	virtual void Multicast_SetNegotiationTradeType_Implementation(ESBZNegotiationTradeType Type); \
	virtual void Multicast_SetPagerEnabled_Implementation(uint32 NetID, bool bIsEnabled, bool bIsTimedOut); \
	virtual void Multicast_SuspenseValueChanged_Implementation(uint8 NewSuspenseValue); \
 \
	DECLARE_FUNCTION(execDifficultyBranch); \
	DECLARE_FUNCTION(execGetCurrentHeistState); \
	DECLARE_FUNCTION(execGetHostageDemand); \
	DECLARE_FUNCTION(execGetNegotiationEndTime); \
	DECLARE_FUNCTION(execGetNegotiationTradeType); \
	DECLARE_FUNCTION(execHeistStateBranch); \
	DECLARE_FUNCTION(execIncreaseSuspense); \
	DECLARE_FUNCTION(execIsActiveAssaultState); \
	DECLARE_FUNCTION(execIsAssaultActive); \
	DECLARE_FUNCTION(execMulticast_ProcessTrafficControls); \
	DECLARE_FUNCTION(execMulticast_SetCurrentECMJammerCount); \
	DECLARE_FUNCTION(execMulticast_SetHeistState); \
	DECLARE_FUNCTION(execMulticast_SetHostagesDemand); \
	DECLARE_FUNCTION(execMulticast_SetNegotiationEndTime); \
	DECLARE_FUNCTION(execMulticast_SetNegotiationTradeType); \
	DECLARE_FUNCTION(execMulticast_SetPagerEnabled); \
	DECLARE_FUNCTION(execMulticast_SuspenseValueChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentHeistState); \
	DECLARE_FUNCTION(execOnRep_ECMCountData); \
	DECLARE_FUNCTION(execOnRep_NegotiationEndTime); \
	DECLARE_FUNCTION(execOnRep_NegotiationTradeType); \
	DECLARE_FUNCTION(execOnRep_NrHostagesDemand); \
	DECLARE_FUNCTION(execOnRep_SpawnedCarryDataArray); \
	DECLARE_FUNCTION(execOnStateMachineStateLeft); \
	DECLARE_FUNCTION(execSetHeistState); \
	DECLARE_FUNCTION(execStealthBranch);


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_EVENT_PARMS \
	struct PD3HeistGameState_eventMulticast_ProcessTrafficControls_Parms \
	{ \
		TArray<FSBZTrafficControl> TrafficControlArray; \
	}; \
	struct PD3HeistGameState_eventMulticast_SetCurrentECMJammerCount_Parms \
	{ \
		FSBZECMCountData InCountData; \
	}; \
	struct PD3HeistGameState_eventMulticast_SetHeistState_Parms \
	{ \
		EPD3HeistState HeistState; \
	}; \
	struct PD3HeistGameState_eventMulticast_SetHostagesDemand_Parms \
	{ \
		uint8 Count; \
	}; \
	struct PD3HeistGameState_eventMulticast_SetNegotiationEndTime_Parms \
	{ \
		float EndTime; \
	}; \
	struct PD3HeistGameState_eventMulticast_SetNegotiationTradeType_Parms \
	{ \
		ESBZNegotiationTradeType Type; \
	}; \
	struct PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms \
	{ \
		uint32 NetID; \
		bool bIsEnabled; \
		bool bIsTimedOut; \
	}; \
	struct PD3HeistGameState_eventMulticast_SuspenseValueChanged_Parms \
	{ \
		uint8 NewSuspenseValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPD3HeistGameState(); \
	friend struct Z_Construct_UClass_APD3HeistGameState_Statics; \
public: \
	DECLARE_CLASS(APD3HeistGameState, ASBZMissionState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(APD3HeistGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSuspenseValue=NETFIELD_REP_START, \
		CurrentThreatLevel, \
		CurrentHeistState, \
		SpawnedCarryDataArray, \
		NegotiationEndTime, \
		NrHostagesDemand, \
		AnswerPagerCount, \
		NegotiationTradeType, \
		ECMCountData, \
		NETFIELD_REP_END=ECMCountData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAPD3HeistGameState(); \
	friend struct Z_Construct_UClass_APD3HeistGameState_Statics; \
public: \
	DECLARE_CLASS(APD3HeistGameState, ASBZMissionState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(APD3HeistGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSuspenseValue=NETFIELD_REP_START, \
		CurrentThreatLevel, \
		CurrentHeistState, \
		SpawnedCarryDataArray, \
		NegotiationEndTime, \
		NrHostagesDemand, \
		AnswerPagerCount, \
		NegotiationTradeType, \
		ECMCountData, \
		NETFIELD_REP_END=ECMCountData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APD3HeistGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APD3HeistGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APD3HeistGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APD3HeistGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APD3HeistGameState(APD3HeistGameState&&); \
	NO_API APD3HeistGameState(const APD3HeistGameState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APD3HeistGameState(APD3HeistGameState&&); \
	NO_API APD3HeistGameState(const APD3HeistGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APD3HeistGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APD3HeistGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APD3HeistGameState)


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHeistState() { return STRUCT_OFFSET(APD3HeistGameState, CurrentHeistState); } \
	FORCEINLINE static uint32 __PPO__GameIntensityAnalyzer() { return STRUCT_OFFSET(APD3HeistGameState, GameIntensityAnalyzer); } \
	FORCEINLINE static uint32 __PPO__Dispatcher() { return STRUCT_OFFSET(APD3HeistGameState, Dispatcher); } \
	FORCEINLINE static uint32 __PPO__RoomPathFinder() { return STRUCT_OFFSET(APD3HeistGameState, RoomPathFinder); } \
	FORCEINLINE static uint32 __PPO__MissionFailedTimeoutSeconds() { return STRUCT_OFFSET(APD3HeistGameState, MissionFailedTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__SpawnedCarryDataArray() { return STRUCT_OFFSET(APD3HeistGameState, SpawnedCarryDataArray); } \
	FORCEINLINE static uint32 __PPO__PendingUsingCarryMap() { return STRUCT_OFFSET(APD3HeistGameState, PendingUsingCarryMap); } \
	FORCEINLINE static uint32 __PPO__SpawnedCarryActorMap() { return STRUCT_OFFSET(APD3HeistGameState, SpawnedCarryActorMap); } \
	FORCEINLINE static uint32 __PPO__NegotiationEndTime() { return STRUCT_OFFSET(APD3HeistGameState, NegotiationEndTime); } \
	FORCEINLINE static uint32 __PPO__NrHostagesDemand() { return STRUCT_OFFSET(APD3HeistGameState, NrHostagesDemand); } \
	FORCEINLINE static uint32 __PPO__AnswerPagerCount() { return STRUCT_OFFSET(APD3HeistGameState, AnswerPagerCount); } \
	FORCEINLINE static uint32 __PPO__PagerHeistDataArray() { return STRUCT_OFFSET(APD3HeistGameState, PagerHeistDataArray); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponBoxClass() { return STRUCT_OFFSET(APD3HeistGameState, DefaultWeaponBoxClass); } \
	FORCEINLINE static uint32 __PPO__MaxCrewCount() { return STRUCT_OFFSET(APD3HeistGameState, MaxCrewCount); } \
	FORCEINLINE static uint32 __PPO__AICrewCharacterClassSet() { return STRUCT_OFFSET(APD3HeistGameState, AICrewCharacterClassSet); } \
	FORCEINLINE static uint32 __PPO__GlobalMaterialParameterCollection() { return STRUCT_OFFSET(APD3HeistGameState, GlobalMaterialParameterCollection); } \
	FORCEINLINE static uint32 __PPO__GlobalNiagaraParameterCollection() { return STRUCT_OFFSET(APD3HeistGameState, GlobalNiagaraParameterCollection); } \
	FORCEINLINE static uint32 __PPO__AlarmThreatLevel() { return STRUCT_OFFSET(APD3HeistGameState, AlarmThreatLevel); } \
	FORCEINLINE static uint32 __PPO__NegotiationThreatLevel() { return STRUCT_OFFSET(APD3HeistGameState, NegotiationThreatLevel); } \
	FORCEINLINE static uint32 __PPO__AssaultThreatLevel() { return STRUCT_OFFSET(APD3HeistGameState, AssaultThreatLevel); } \
	FORCEINLINE static uint32 __PPO__AssaultThreatLevelIncrease() { return STRUCT_OFFSET(APD3HeistGameState, AssaultThreatLevelIncrease); } \
	FORCEINLINE static uint32 __PPO__PlayerPositionUpdateFrequency() { return STRUCT_OFFSET(APD3HeistGameState, PlayerPositionUpdateFrequency); } \
	FORCEINLINE static uint32 __PPO__GlobalMaterialCollectionInstance() { return STRUCT_OFFSET(APD3HeistGameState, GlobalMaterialCollectionInstance); } \
	FORCEINLINE static uint32 __PPO__GlobalNiagaraCollectionInstance() { return STRUCT_OFFSET(APD3HeistGameState, GlobalNiagaraCollectionInstance); } \
	FORCEINLINE static uint32 __PPO__bIsAICrewSpawned() { return STRUCT_OFFSET(APD3HeistGameState, bIsAICrewSpawned); } \
	FORCEINLINE static uint32 __PPO__bIsAssaultStarted() { return STRUCT_OFFSET(APD3HeistGameState, bIsAssaultStarted); } \
	FORCEINLINE static uint32 __PPO__SavedCustodyTime() { return STRUCT_OFFSET(APD3HeistGameState, SavedCustodyTime); } \
	FORCEINLINE static uint32 __PPO__HostageDemandReduction() { return STRUCT_OFFSET(APD3HeistGameState, HostageDemandReduction); } \
	FORCEINLINE static uint32 __PPO__NegotiationTradeType() { return STRUCT_OFFSET(APD3HeistGameState, NegotiationTradeType); } \
	FORCEINLINE static uint32 __PPO__TradeHostagePickupAssetArray() { return STRUCT_OFFSET(APD3HeistGameState, TradeHostagePickupAssetArray); } \
	FORCEINLINE static uint32 __PPO__ECMCountData() { return STRUCT_OFFSET(APD3HeistGameState, ECMCountData); } \
	FORCEINLINE static uint32 __PPO__JammerTimeSeconds() { return STRUCT_OFFSET(APD3HeistGameState, JammerTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__ECMJammerRadioBasePercentageIncrease() { return STRUCT_OFFSET(APD3HeistGameState, ECMJammerRadioBasePercentageIncrease); } \
	FORCEINLINE static uint32 __PPO__ECMJammerCameraBasePercentageIncrease() { return STRUCT_OFFSET(APD3HeistGameState, ECMJammerCameraBasePercentageIncrease); } \
	FORCEINLINE static uint32 __PPO__ECMJammerPagerBasePercentageIncrease() { return STRUCT_OFFSET(APD3HeistGameState, ECMJammerPagerBasePercentageIncrease); } \
	FORCEINLINE static uint32 __PPO__ECMJammerAdditionalIncreasePercentagePerJammer() { return STRUCT_OFFSET(APD3HeistGameState, ECMJammerAdditionalIncreasePercentagePerJammer); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_36_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class APD3HeistGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HeistGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
