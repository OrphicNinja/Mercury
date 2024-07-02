// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSecurityCamera;
class ASBZCharacter;
enum class EPD3DefeatState : uint8;
class ASBZAICrewState;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZAICrewCharacter_generated_h
#error "SBZAICrewCharacter.generated.h already included, missing '#pragma once' in SBZAICrewCharacter.h"
#endif
#define STARBREEZE_SBZAICrewCharacter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_RPC_WRAPPERS \
	virtual void Multicast_MarkCamera_Implementation(ASBZSecurityCamera* Camera); \
	virtual void Multicast_MarkTarget_Implementation(ASBZCharacter* Character, bool bShouldPlayPointGesture); \
	virtual void Multicast_PauseDefeatTime_Implementation(); \
	virtual void Multicast_ResumeDefeatTime_Implementation(float InDefeatTime); \
	virtual void Multicast_SetDefeatState_Implementation(EPD3DefeatState InState); \
	virtual void Multicast_SetDefeatTime_Implementation(float InDefeatTime); \
 \
	DECLARE_FUNCTION(execMulticast_MarkCamera); \
	DECLARE_FUNCTION(execMulticast_MarkTarget); \
	DECLARE_FUNCTION(execMulticast_PauseDefeatTime); \
	DECLARE_FUNCTION(execMulticast_ResumeDefeatTime); \
	DECLARE_FUNCTION(execMulticast_SetDefeatState); \
	DECLARE_FUNCTION(execMulticast_SetDefeatTime); \
	DECLARE_FUNCTION(execOnRep_CrewState); \
	DECLARE_FUNCTION(execOnRep_DefeatTime); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnServerEndInteraction); \
	DECLARE_FUNCTION(execOnServerStartInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_MarkCamera_Implementation(ASBZSecurityCamera* Camera); \
	virtual void Multicast_MarkTarget_Implementation(ASBZCharacter* Character, bool bShouldPlayPointGesture); \
	virtual void Multicast_PauseDefeatTime_Implementation(); \
	virtual void Multicast_ResumeDefeatTime_Implementation(float InDefeatTime); \
	virtual void Multicast_SetDefeatState_Implementation(EPD3DefeatState InState); \
	virtual void Multicast_SetDefeatTime_Implementation(float InDefeatTime); \
 \
	DECLARE_FUNCTION(execMulticast_MarkCamera); \
	DECLARE_FUNCTION(execMulticast_MarkTarget); \
	DECLARE_FUNCTION(execMulticast_PauseDefeatTime); \
	DECLARE_FUNCTION(execMulticast_ResumeDefeatTime); \
	DECLARE_FUNCTION(execMulticast_SetDefeatState); \
	DECLARE_FUNCTION(execMulticast_SetDefeatTime); \
	DECLARE_FUNCTION(execOnRep_CrewState); \
	DECLARE_FUNCTION(execOnRep_DefeatTime); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnServerEndInteraction); \
	DECLARE_FUNCTION(execOnServerStartInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_EVENT_PARMS \
	struct SBZAICrewCharacter_eventMulticast_MarkCamera_Parms \
	{ \
		ASBZSecurityCamera* Camera; \
	}; \
	struct SBZAICrewCharacter_eventMulticast_MarkTarget_Parms \
	{ \
		ASBZCharacter* Character; \
		bool bShouldPlayPointGesture; \
	}; \
	struct SBZAICrewCharacter_eventMulticast_ResumeDefeatTime_Parms \
	{ \
		float InDefeatTime; \
	}; \
	struct SBZAICrewCharacter_eventMulticast_SetDefeatState_Parms \
	{ \
		EPD3DefeatState InState; \
	}; \
	struct SBZAICrewCharacter_eventMulticast_SetDefeatTime_Parms \
	{ \
		float InDefeatTime; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAICrewCharacter(); \
	friend struct Z_Construct_UClass_ASBZAICrewCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZAICrewCharacter, ASBZAIBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICrewCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAICrewCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrewState=NETFIELD_REP_START, \
		DefeatTime, \
		NETFIELD_REP_END=DefeatTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_INCLASS \
private: \
	static void StaticRegisterNativesASBZAICrewCharacter(); \
	friend struct Z_Construct_UClass_ASBZAICrewCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZAICrewCharacter, ASBZAIBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICrewCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAICrewCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrewState=NETFIELD_REP_START, \
		DefeatTime, \
		NETFIELD_REP_END=DefeatTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAICrewCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICrewCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICrewCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICrewCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICrewCharacter(ASBZAICrewCharacter&&); \
	NO_API ASBZAICrewCharacter(const ASBZAICrewCharacter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICrewCharacter(ASBZAICrewCharacter&&); \
	NO_API ASBZAICrewCharacter(const ASBZAICrewCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICrewCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICrewCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICrewCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquipmentData() { return STRUCT_OFFSET(ASBZAICrewCharacter, EquipmentData); } \
	FORCEINLINE static uint32 __PPO__HealthReplenishEffectClass() { return STRUCT_OFFSET(ASBZAICrewCharacter, HealthReplenishEffectClass); } \
	FORCEINLINE static uint32 __PPO__TargetPriority() { return STRUCT_OFFSET(ASBZAICrewCharacter, TargetPriority); } \
	FORCEINLINE static uint32 __PPO__CallComment() { return STRUCT_OFFSET(ASBZAICrewCharacter, CallComment); } \
	FORCEINLINE static uint32 __PPO__HelpComment() { return STRUCT_OFFSET(ASBZAICrewCharacter, HelpComment); } \
	FORCEINLINE static uint32 __PPO__CPD00() { return STRUCT_OFFSET(ASBZAICrewCharacter, CPD00); } \
	FORCEINLINE static uint32 __PPO__CPD01() { return STRUCT_OFFSET(ASBZAICrewCharacter, CPD01); } \
	FORCEINLINE static uint32 __PPO__CrewState() { return STRUCT_OFFSET(ASBZAICrewCharacter, CrewState); } \
	FORCEINLINE static uint32 __PPO__DefeatState() { return STRUCT_OFFSET(ASBZAICrewCharacter, DefeatState); } \
	FORCEINLINE static uint32 __PPO__OldDefeatState() { return STRUCT_OFFSET(ASBZAICrewCharacter, OldDefeatState); } \
	FORCEINLINE static uint32 __PPO__DefeatTime() { return STRUCT_OFFSET(ASBZAICrewCharacter, DefeatTime); } \
	FORCEINLINE static uint32 __PPO__ReviveMarker() { return STRUCT_OFFSET(ASBZAICrewCharacter, ReviveMarker); } \
	FORCEINLINE static uint32 __PPO__TasedMarker() { return STRUCT_OFFSET(ASBZAICrewCharacter, TasedMarker); } \
	FORCEINLINE static uint32 __PPO__CuffedMarker() { return STRUCT_OFFSET(ASBZAICrewCharacter, CuffedMarker); } \
	FORCEINLINE static uint32 __PPO__SubduedMarker() { return STRUCT_OFFSET(ASBZAICrewCharacter, SubduedMarker); } \
	FORCEINLINE static uint32 __PPO__DownedOutline() { return STRUCT_OFFSET(ASBZAICrewCharacter, DownedOutline); } \
	FORCEINLINE static uint32 __PPO__RevivedComment() { return STRUCT_OFFSET(ASBZAICrewCharacter, RevivedComment); } \
	FORCEINLINE static uint32 __PPO__UncuffedComment() { return STRUCT_OFFSET(ASBZAICrewCharacter, UncuffedComment); } \
	FORCEINLINE static uint32 __PPO__DownedDialog() { return STRUCT_OFFSET(ASBZAICrewCharacter, DownedDialog); } \
	FORCEINLINE static uint32 __PPO__InCustodyDialog() { return STRUCT_OFFSET(ASBZAICrewCharacter, InCustodyDialog); } \
	FORCEINLINE static uint32 __PPO__BackFromCustodyDialog() { return STRUCT_OFFSET(ASBZAICrewCharacter, BackFromCustodyDialog); } \
	FORCEINLINE static uint32 __PPO__CuffedDialog() { return STRUCT_OFFSET(ASBZAICrewCharacter, CuffedDialog); } \
	FORCEINLINE static uint32 __PPO__TasedDialog() { return STRUCT_OFFSET(ASBZAICrewCharacter, TasedDialog); } \
	FORCEINLINE static uint32 __PPO__SubduedDialog() { return STRUCT_OFFSET(ASBZAICrewCharacter, SubduedDialog); } \
	FORCEINLINE static uint32 __PPO__CurrentWard() { return STRUCT_OFFSET(ASBZAICrewCharacter, CurrentWard); } \
	FORCEINLINE static uint32 __PPO__bIsMaskOn() { return STRUCT_OFFSET(ASBZAICrewCharacter, bIsMaskOn); } \
	FORCEINLINE static uint32 __PPO__bIsLoadoutLoaded() { return STRUCT_OFFSET(ASBZAICrewCharacter, bIsLoadoutLoaded); } \
	FORCEINLINE static uint32 __PPO__MarkingVoicePriority() { return STRUCT_OFFSET(ASBZAICrewCharacter, MarkingVoicePriority); } \
	FORCEINLINE static uint32 __PPO__MarkingDuration() { return STRUCT_OFFSET(ASBZAICrewCharacter, MarkingDuration); } \
	FORCEINLINE static uint32 __PPO__MarkGuardStealth() { return STRUCT_OFFSET(ASBZAICrewCharacter, MarkGuardStealth); } \
	FORCEINLINE static uint32 __PPO__MarkCameraStealth() { return STRUCT_OFFSET(ASBZAICrewCharacter, MarkCameraStealth); } \
	FORCEINLINE static uint32 __PPO__CrewAIColor() { return STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIColor); } \
	FORCEINLINE static uint32 __PPO__CrewAIMarkerAsset() { return STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__CrewAIMarkerOffset() { return STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIMarkerOffset); } \
	FORCEINLINE static uint32 __PPO__CrewAIMarkerSocketName() { return STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIMarkerSocketName); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_26_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAICrewCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICrewCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
