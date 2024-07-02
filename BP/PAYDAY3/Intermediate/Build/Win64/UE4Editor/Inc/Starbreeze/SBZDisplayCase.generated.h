// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class ESBZDisplayCaseState : uint8;
enum class EPD3MiniGameState : uint8;
enum class EPD3HeistState : uint8;
class UActorComponent;
struct FSBZPropDamageContext;
#ifdef STARBREEZE_SBZDisplayCase_generated_h
#error "SBZDisplayCase.generated.h already included, missing '#pragma once' in SBZDisplayCase.h"
#endif
#define STARBREEZE_SBZDisplayCase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_RPC_WRAPPERS \
	virtual void Multicast_SetIsLarmed_Implementation(bool bInIsLarmed); \
	virtual void Multicast_SetIsLocked_Implementation(bool bInIsLocked); \
	virtual void Multicast_SetState_Implementation(ESBZDisplayCaseState NewState); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execMulticast_SetIsLarmed); \
	DECLARE_FUNCTION(execMulticast_SetIsLocked); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnDoorTimelineDone); \
	DECLARE_FUNCTION(execOnHackingStateChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnLockpickStateChanged); \
	DECLARE_FUNCTION(execOnPropDamageHits); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetDisplayCaseLarmed); \
	DECLARE_FUNCTION(execSetDisplayCaseLocked); \
	DECLARE_FUNCTION(execSetLockdownActive); \
	DECLARE_FUNCTION(execSetLockdownEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetIsLarmed_Implementation(bool bInIsLarmed); \
	virtual void Multicast_SetIsLocked_Implementation(bool bInIsLocked); \
	virtual void Multicast_SetState_Implementation(ESBZDisplayCaseState NewState); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execMulticast_SetIsLarmed); \
	DECLARE_FUNCTION(execMulticast_SetIsLocked); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnDoorTimelineDone); \
	DECLARE_FUNCTION(execOnHackingStateChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnLockpickStateChanged); \
	DECLARE_FUNCTION(execOnPropDamageHits); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetDisplayCaseLarmed); \
	DECLARE_FUNCTION(execSetDisplayCaseLocked); \
	DECLARE_FUNCTION(execSetLockdownActive); \
	DECLARE_FUNCTION(execSetLockdownEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_EVENT_PARMS \
	struct SBZDisplayCase_eventBP_OnGlassBroken_Parms \
	{ \
		bool bDoCosmetics; \
	}; \
	struct SBZDisplayCase_eventBP_OnStateChanged_Parms \
	{ \
		ESBZDisplayCaseState OldState; \
		ESBZDisplayCaseState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZDisplayCase_eventMulticast_SetIsLarmed_Parms \
	{ \
		bool bInIsLarmed; \
	}; \
	struct SBZDisplayCase_eventMulticast_SetIsLocked_Parms \
	{ \
		bool bInIsLocked; \
	}; \
	struct SBZDisplayCase_eventMulticast_SetState_Parms \
	{ \
		ESBZDisplayCaseState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZDisplayCase(); \
	friend struct Z_Construct_UClass_ASBZDisplayCase_Statics; \
public: \
	DECLARE_CLASS(ASBZDisplayCase, ASBZCuttableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDisplayCase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZDisplayCase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsLocked=NETFIELD_REP_START, \
		bIsLarmed, \
		CurrentState, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASBZDisplayCase(); \
	friend struct Z_Construct_UClass_ASBZDisplayCase_Statics; \
public: \
	DECLARE_CLASS(ASBZDisplayCase, ASBZCuttableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDisplayCase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZDisplayCase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsLocked=NETFIELD_REP_START, \
		bIsLarmed, \
		CurrentState, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZDisplayCase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDisplayCase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDisplayCase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDisplayCase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDisplayCase(ASBZDisplayCase&&); \
	NO_API ASBZDisplayCase(const ASBZDisplayCase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDisplayCase(ASBZDisplayCase&&); \
	NO_API ASBZDisplayCase(const ASBZDisplayCase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDisplayCase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDisplayCase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDisplayCase)


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasLock() { return STRUCT_OFFSET(ASBZDisplayCase, bHasLock); } \
	FORCEINLINE static uint32 __PPO__bHasAlarm() { return STRUCT_OFFSET(ASBZDisplayCase, bHasAlarm); } \
	FORCEINLINE static uint32 __PPO__bHasLockdown() { return STRUCT_OFFSET(ASBZDisplayCase, bHasLockdown); } \
	FORCEINLINE static uint32 __PPO__bShouldHackLiftLockdown() { return STRUCT_OFFSET(ASBZDisplayCase, bShouldHackLiftLockdown); } \
	FORCEINLINE static uint32 __PPO__bCanBeClosed() { return STRUCT_OFFSET(ASBZDisplayCase, bCanBeClosed); } \
	FORCEINLINE static uint32 __PPO__LockActorArray() { return STRUCT_OFFSET(ASBZDisplayCase, LockActorArray); } \
	FORCEINLINE static uint32 __PPO__bMustLockpickAllLocks() { return STRUCT_OFFSET(ASBZDisplayCase, bMustLockpickAllLocks); } \
	FORCEINLINE static uint32 __PPO__bIsLocksDisabledOnLockdown() { return STRUCT_OFFSET(ASBZDisplayCase, bIsLocksDisabledOnLockdown); } \
	FORCEINLINE static uint32 __PPO__BreachSoundTag() { return STRUCT_OFFSET(ASBZDisplayCase, BreachSoundTag); } \
	FORCEINLINE static uint32 __PPO__SoundRange() { return STRUCT_OFFSET(ASBZDisplayCase, SoundRange); } \
	FORCEINLINE static uint32 __PPO__bIsLocked() { return STRUCT_OFFSET(ASBZDisplayCase, bIsLocked); } \
	FORCEINLINE static uint32 __PPO__bIsLarmed() { return STRUCT_OFFSET(ASBZDisplayCase, bIsLarmed); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZDisplayCase, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__AlarmActorArray() { return STRUCT_OFFSET(ASBZDisplayCase, AlarmActorArray); } \
	FORCEINLINE static uint32 __PPO__AlarmNotificationAsset() { return STRUCT_OFFSET(ASBZDisplayCase, AlarmNotificationAsset); } \
	FORCEINLINE static uint32 __PPO__ShutterMesh() { return STRUCT_OFFSET(ASBZDisplayCase, ShutterMesh); } \
	FORCEINLINE static uint32 __PPO__DefaultLock() { return STRUCT_OFFSET(ASBZDisplayCase, DefaultLock); } \
	FORCEINLINE static uint32 __PPO__DefaultAlarm() { return STRUCT_OFFSET(ASBZDisplayCase, DefaultAlarm); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZDisplayCase, CurrentState); } \
	FORCEINLINE static uint32 __PPO__PropDamage() { return STRUCT_OFFSET(ASBZDisplayCase, PropDamage); } \
	FORCEINLINE static uint32 __PPO__BrokenMesh() { return STRUCT_OFFSET(ASBZDisplayCase, BrokenMesh); } \
	FORCEINLINE static uint32 __PPO__PreviousState() { return STRUCT_OFFSET(ASBZDisplayCase, PreviousState); } \
	FORCEINLINE static uint32 __PPO__TargetState() { return STRUCT_OFFSET(ASBZDisplayCase, TargetState); } \
	FORCEINLINE static uint32 __PPO__LockAttachSelector() { return STRUCT_OFFSET(ASBZDisplayCase, LockAttachSelector); } \
	FORCEINLINE static uint32 __PPO__AlarmAttachSelector() { return STRUCT_OFFSET(ASBZDisplayCase, AlarmAttachSelector); } \
	FORCEINLINE static uint32 __PPO__LootAttachComponent() { return STRUCT_OFFSET(ASBZDisplayCase, LootAttachComponent); } \
	FORCEINLINE static uint32 __PPO__AttachedLoot() { return STRUCT_OFFSET(ASBZDisplayCase, AttachedLoot); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_25_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZDisplayCase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDisplayCase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
