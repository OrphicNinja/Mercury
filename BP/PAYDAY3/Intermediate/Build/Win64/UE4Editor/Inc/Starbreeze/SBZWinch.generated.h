// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZWinchState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZWinch_generated_h
#error "SBZWinch.generated.h already included, missing '#pragma once' in SBZWinch.h"
#endif
#define STARBREEZE_SBZWinch_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_RPC_WRAPPERS \
	virtual void Multicast_SetWinchState_Implementation(ESBZWinchState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetWinchState); \
	DECLARE_FUNCTION(execOnAckActivationInteractionComplete); \
	DECLARE_FUNCTION(execOnAckHookAttachInteractionComplete); \
	DECLARE_FUNCTION(execOnAckHookInteractionComplete); \
	DECLARE_FUNCTION(execOnRep_WinchState); \
	DECLARE_FUNCTION(execOnWinchSabotaged); \
	DECLARE_FUNCTION(execSetWinchEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetWinchState_Implementation(ESBZWinchState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetWinchState); \
	DECLARE_FUNCTION(execOnAckActivationInteractionComplete); \
	DECLARE_FUNCTION(execOnAckHookAttachInteractionComplete); \
	DECLARE_FUNCTION(execOnAckHookInteractionComplete); \
	DECLARE_FUNCTION(execOnRep_WinchState); \
	DECLARE_FUNCTION(execOnWinchSabotaged); \
	DECLARE_FUNCTION(execSetWinchEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_EVENT_PARMS \
	struct SBZWinch_eventBP_OnWinchStateChanged_Parms \
	{ \
		ESBZWinchState OldState; \
		ESBZWinchState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZWinch_eventMulticast_SetWinchState_Parms \
	{ \
		ESBZWinchState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZWinch(); \
	friend struct Z_Construct_UClass_ASBZWinch_Statics; \
public: \
	DECLARE_CLASS(ASBZWinch, ASBZBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWinch) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWinchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentWinchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZWinch(); \
	friend struct Z_Construct_UClass_ASBZWinch_Statics; \
public: \
	DECLARE_CLASS(ASBZWinch, ASBZBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWinch) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWinchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentWinchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZWinch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWinch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWinch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWinch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWinch(ASBZWinch&&); \
	NO_API ASBZWinch(const ASBZWinch&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWinch(ASBZWinch&&); \
	NO_API ASBZWinch(const ASBZWinch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWinch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWinch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWinch)


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartInteraction() { return STRUCT_OFFSET(ASBZWinch, StartInteraction); } \
	FORCEINLINE static uint32 __PPO__GrabInteraction() { return STRUCT_OFFSET(ASBZWinch, GrabInteraction); } \
	FORCEINLINE static uint32 __PPO__AttachInteraction() { return STRUCT_OFFSET(ASBZWinch, AttachInteraction); } \
	FORCEINLINE static uint32 __PPO__SabotagePointArray() { return STRUCT_OFFSET(ASBZWinch, SabotagePointArray); } \
	FORCEINLINE static uint32 __PPO__bIsInterruptedExternally() { return STRUCT_OFFSET(ASBZWinch, bIsInterruptedExternally); } \
	FORCEINLINE static uint32 __PPO__InterruptionInterval() { return STRUCT_OFFSET(ASBZWinch, InterruptionInterval); } \
	FORCEINLINE static uint32 __PPO__bEnableSabotagePointsOnNeedsAdjusting() { return STRUCT_OFFSET(ASBZWinch, bEnableSabotagePointsOnNeedsAdjusting); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZWinch, Seed); } \
	FORCEINLINE static uint32 __PPO__CurrentWinchState() { return STRUCT_OFFSET(ASBZWinch, CurrentWinchState); } \
	FORCEINLINE static uint32 __PPO__bHasBeenInterrupted() { return STRUCT_OFFSET(ASBZWinch, bHasBeenInterrupted); } \
	FORCEINLINE static uint32 __PPO__bIsExternallySabotaged() { return STRUCT_OFFSET(ASBZWinch, bIsExternallySabotaged); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWinch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZWinch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWinch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
