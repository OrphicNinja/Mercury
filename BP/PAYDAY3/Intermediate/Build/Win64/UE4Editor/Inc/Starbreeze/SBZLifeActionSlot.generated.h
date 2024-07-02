// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
struct FSBZLifeActionRequest;
class UAnimMontage;
struct FVector;
struct FRotator;
struct FTransform;
enum class ESBZLifeActionState : uint8;
struct FGameplayTag;
#ifdef STARBREEZE_SBZLifeActionSlot_generated_h
#error "SBZLifeActionSlot.generated.h already included, missing '#pragma once' in SBZLifeActionSlot.h"
#endif
#define STARBREEZE_SBZLifeActionSlot_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_RPC_WRAPPERS \
	virtual void Multicast_OnSlotFreed_Implementation(ASBZCharacter* InCharacter); \
	virtual void Multicast_OnSlotStart_Implementation(ASBZCharacter* InCharacter); \
 \
	DECLARE_FUNCTION(execCanBeReservedBy); \
	DECLARE_FUNCTION(execGetAcceptableAngle); \
	DECLARE_FUNCTION(execGetAcceptableRadius); \
	DECLARE_FUNCTION(execGetCharacter); \
	DECLARE_FUNCTION(execGetCurrentActionMontage); \
	DECLARE_FUNCTION(execGetCurrentEnterMontage); \
	DECLARE_FUNCTION(execGetCurrentExitMontage); \
	DECLARE_FUNCTION(execGetCurrentReservationID); \
	DECLARE_FUNCTION(execGetMoveToLocation); \
	DECLARE_FUNCTION(execGetMoveToRotation); \
	DECLARE_FUNCTION(execGetMoveToTransform); \
	DECLARE_FUNCTION(execGetPlayingActionMontage); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTag); \
	DECLARE_FUNCTION(execIsFree); \
	DECLARE_FUNCTION(execIsPlayingActionMontage); \
	DECLARE_FUNCTION(execIsPlayingEnterMontage); \
	DECLARE_FUNCTION(execIsPlayingExitMontage); \
	DECLARE_FUNCTION(execIsReadyToStart); \
	DECLARE_FUNCTION(execIsReservedBy); \
	DECLARE_FUNCTION(execIsUsingAnEnterAnimation); \
	DECLARE_FUNCTION(execIsUsingAnExitAnimation); \
	DECLARE_FUNCTION(execMulticast_OnSlotFreed); \
	DECLARE_FUNCTION(execMulticast_OnSlotStart); \
	DECLARE_FUNCTION(execMustBeOccupied); \
	DECLARE_FUNCTION(execOnCharacterAnimEvent); \
	DECLARE_FUNCTION(execOnDesiredDurationReached); \
	DECLARE_FUNCTION(execOnEnterAnimationShouldEnd); \
	DECLARE_FUNCTION(execOnMontageBlendOut); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execStartDialog); \
	DECLARE_FUNCTION(execStopDialog); \
	DECLARE_FUNCTION(execSwitchMontageNextSection); \
	DECLARE_FUNCTION(execSwitchMontageSection);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnSlotFreed_Implementation(ASBZCharacter* InCharacter); \
	virtual void Multicast_OnSlotStart_Implementation(ASBZCharacter* InCharacter); \
 \
	DECLARE_FUNCTION(execCanBeReservedBy); \
	DECLARE_FUNCTION(execGetAcceptableAngle); \
	DECLARE_FUNCTION(execGetAcceptableRadius); \
	DECLARE_FUNCTION(execGetCharacter); \
	DECLARE_FUNCTION(execGetCurrentActionMontage); \
	DECLARE_FUNCTION(execGetCurrentEnterMontage); \
	DECLARE_FUNCTION(execGetCurrentExitMontage); \
	DECLARE_FUNCTION(execGetCurrentReservationID); \
	DECLARE_FUNCTION(execGetMoveToLocation); \
	DECLARE_FUNCTION(execGetMoveToRotation); \
	DECLARE_FUNCTION(execGetMoveToTransform); \
	DECLARE_FUNCTION(execGetPlayingActionMontage); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTag); \
	DECLARE_FUNCTION(execIsFree); \
	DECLARE_FUNCTION(execIsPlayingActionMontage); \
	DECLARE_FUNCTION(execIsPlayingEnterMontage); \
	DECLARE_FUNCTION(execIsPlayingExitMontage); \
	DECLARE_FUNCTION(execIsReadyToStart); \
	DECLARE_FUNCTION(execIsReservedBy); \
	DECLARE_FUNCTION(execIsUsingAnEnterAnimation); \
	DECLARE_FUNCTION(execIsUsingAnExitAnimation); \
	DECLARE_FUNCTION(execMulticast_OnSlotFreed); \
	DECLARE_FUNCTION(execMulticast_OnSlotStart); \
	DECLARE_FUNCTION(execMustBeOccupied); \
	DECLARE_FUNCTION(execOnCharacterAnimEvent); \
	DECLARE_FUNCTION(execOnDesiredDurationReached); \
	DECLARE_FUNCTION(execOnEnterAnimationShouldEnd); \
	DECLARE_FUNCTION(execOnMontageBlendOut); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execStartDialog); \
	DECLARE_FUNCTION(execStopDialog); \
	DECLARE_FUNCTION(execSwitchMontageNextSection); \
	DECLARE_FUNCTION(execSwitchMontageSection);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_EVENT_PARMS \
	struct SBZLifeActionSlot_eventMulticast_OnSlotFreed_Parms \
	{ \
		ASBZCharacter* InCharacter; \
	}; \
	struct SBZLifeActionSlot_eventMulticast_OnSlotStart_Parms \
	{ \
		ASBZCharacter* InCharacter; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLifeActionSlot(); \
	friend struct Z_Construct_UClass_USBZLifeActionSlot_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionSlot, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionSlot)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLifeActionSlot(); \
	friend struct Z_Construct_UClass_USBZLifeActionSlot_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionSlot, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionSlot)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLifeActionSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionSlot(USBZLifeActionSlot&&); \
	NO_API USBZLifeActionSlot(const USBZLifeActionSlot&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionSlot(USBZLifeActionSlot&&); \
	NO_API USBZLifeActionSlot(const USBZLifeActionSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionSlot)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Tag() { return STRUCT_OFFSET(USBZLifeActionSlot, Tag); } \
	FORCEINLINE static uint32 __PPO__GrantedTags() { return STRUCT_OFFSET(USBZLifeActionSlot, GrantedTags); } \
	FORCEINLINE static uint32 __PPO__ConsumedTags() { return STRUCT_OFFSET(USBZLifeActionSlot, ConsumedTags); } \
	FORCEINLINE static uint32 __PPO__NeededTags() { return STRUCT_OFFSET(USBZLifeActionSlot, NeededTags); } \
	FORCEINLINE static uint32 __PPO__ExcludedByTags() { return STRUCT_OFFSET(USBZLifeActionSlot, ExcludedByTags); } \
	FORCEINLINE static uint32 __PPO__bMustBeOccupied() { return STRUCT_OFFSET(USBZLifeActionSlot, bMustBeOccupied); } \
	FORCEINLINE static uint32 __PPO__bNeedOtherSlotsReadyToBeReserved() { return STRUCT_OFFSET(USBZLifeActionSlot, bNeedOtherSlotsReadyToBeReserved); } \
	FORCEINLINE static uint32 __PPO__bOpenForRandomReservation() { return STRUCT_OFFSET(USBZLifeActionSlot, bOpenForRandomReservation); } \
	FORCEINLINE static uint32 __PPO__bUseAcceptableRadius() { return STRUCT_OFFSET(USBZLifeActionSlot, bUseAcceptableRadius); } \
	FORCEINLINE static uint32 __PPO__AcceptableRadius() { return STRUCT_OFFSET(USBZLifeActionSlot, AcceptableRadius); } \
	FORCEINLINE static uint32 __PPO__bUseAcceptableAngle() { return STRUCT_OFFSET(USBZLifeActionSlot, bUseAcceptableAngle); } \
	FORCEINLINE static uint32 __PPO__AcceptableAngle() { return STRUCT_OFFSET(USBZLifeActionSlot, AcceptableAngle); } \
	FORCEINLINE static uint32 __PPO__AngleOffset() { return STRUCT_OFFSET(USBZLifeActionSlot, AngleOffset); } \
	FORCEINLINE static uint32 __PPO__bUseCoolDown() { return STRUCT_OFFSET(USBZLifeActionSlot, bUseCoolDown); } \
	FORCEINLINE static uint32 __PPO__CoolDown() { return STRUCT_OFFSET(USBZLifeActionSlot, CoolDown); } \
	FORCEINLINE static uint32 __PPO__bUseRandomDuration() { return STRUCT_OFFSET(USBZLifeActionSlot, bUseRandomDuration); } \
	FORCEINLINE static uint32 __PPO__RandomDesiredDuration() { return STRUCT_OFFSET(USBZLifeActionSlot, RandomDesiredDuration); } \
	FORCEINLINE static uint32 __PPO__DesiredDuration() { return STRUCT_OFFSET(USBZLifeActionSlot, DesiredDuration); } \
	FORCEINLINE static uint32 __PPO__DialogPlayer() { return STRUCT_OFFSET(USBZLifeActionSlot, DialogPlayer); } \
	FORCEINLINE static uint32 __PPO__RandomAnimationTagsPicker() { return STRUCT_OFFSET(USBZLifeActionSlot, RandomAnimationTagsPicker); } \
	FORCEINLINE static uint32 __PPO__bUseEnterAnimation() { return STRUCT_OFFSET(USBZLifeActionSlot, bUseEnterAnimation); } \
	FORCEINLINE static uint32 __PPO__EnterLocation() { return STRUCT_OFFSET(USBZLifeActionSlot, EnterLocation); } \
	FORCEINLINE static uint32 __PPO__EnterAnimationTag() { return STRUCT_OFFSET(USBZLifeActionSlot, EnterAnimationTag); } \
	FORCEINLINE static uint32 __PPO__bUseExitAnimation() { return STRUCT_OFFSET(USBZLifeActionSlot, bUseExitAnimation); } \
	FORCEINLINE static uint32 __PPO__ExitLocation() { return STRUCT_OFFSET(USBZLifeActionSlot, ExitLocation); } \
	FORCEINLINE static uint32 __PPO__ExitAnimationTag() { return STRUCT_OFFSET(USBZLifeActionSlot, ExitAnimationTag); } \
	FORCEINLINE static uint32 __PPO__bExitOnlyIfActionAnimationIsPlaying() { return STRUCT_OFFSET(USBZLifeActionSlot, bExitOnlyIfActionAnimationIsPlaying); } \
	FORCEINLINE static uint32 __PPO__ActorEvents() { return STRUCT_OFFSET(USBZLifeActionSlot, ActorEvents); } \
	FORCEINLINE static uint32 __PPO__PlayingActionMontage() { return STRUCT_OFFSET(USBZLifeActionSlot, PlayingActionMontage); } \
	FORCEINLINE static uint32 __PPO__PlayingEnterMontage() { return STRUCT_OFFSET(USBZLifeActionSlot, PlayingEnterMontage); } \
	FORCEINLINE static uint32 __PPO__PlayingExitMontage() { return STRUCT_OFFSET(USBZLifeActionSlot, PlayingExitMontage); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(USBZLifeActionSlot, Character); } \
	FORCEINLINE static uint32 __PPO__bIsReady() { return STRUCT_OFFSET(USBZLifeActionSlot, bIsReady); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(USBZLifeActionSlot, State); } \
	FORCEINLINE static uint32 __PPO__CurrentReservationID() { return STRUCT_OFFSET(USBZLifeActionSlot, CurrentReservationID); } \
	FORCEINLINE static uint32 __PPO__CurrentMontageIndex() { return STRUCT_OFFSET(USBZLifeActionSlot, CurrentMontageIndex); } \
	FORCEINLINE static uint32 __PPO__OwningLifeActionInstance() { return STRUCT_OFFSET(USBZLifeActionSlot, OwningLifeActionInstance); } \
	FORCEINLINE static uint32 __PPO__OnTagEvent() { return STRUCT_OFFSET(USBZLifeActionSlot, OnTagEvent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLifeActionSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
