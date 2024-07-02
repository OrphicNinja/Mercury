// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZLocalPlayerFeedbackParameters;
class AActor;
struct FVector;
class UObject;
class USBZMiniGameComponent;
struct FSBZDetectionData;
struct FGameplayTag;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
enum class EPD3MiniGameState : uint8;
struct FSBZPlayerInEscapeChangedEvent;
#ifdef STARBREEZE_SBZPlayerCharacter_generated_h
#error "SBZPlayerCharacter.generated.h already included, missing '#pragma once' in SBZPlayerCharacter.h"
#endif
#define STARBREEZE_SBZPlayerCharacter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_RPC_WRAPPERS \
	virtual void Client_PlayOverHealGainedEffect_Implementation(); \
	virtual void Client_PlayOverHealRestoredEffect_Implementation(); \
	virtual void Client_SetDetectionData_Implementation(uint32 PackedData); \
	virtual void Client_SetDetector_Implementation(uint8 Index, AActor* Detector); \
	virtual void Client_SetEscortCircleActive_Implementation(bool bActive, AActor* EscortInstigator); \
	virtual void Client_SetEscortCircleAttachment_Implementation(AActor* EscortCircleHolder); \
	virtual void Client_SetObserved_Implementation(bool bObserved); \
	virtual void Client_Teleport_Implementation(FVector const& Location, const float Yaw); \
	virtual void Multicast_AbortPhoneInteraction_Implementation(bool bWasCompleted); \
	virtual void Multicast_PauseDefeatTime_Implementation(); \
	virtual void Multicast_PlayEmoteMontage_Implementation(FGameplayTag const& MontageTag); \
	virtual void Multicast_PlayRequestOverkillAnimation_Implementation(); \
	virtual void Multicast_ResumeDefeatTime_Implementation(float InDefeatTime); \
	virtual void Multicast_ReviveInteractionStarted_Implementation(float EndTime); \
	virtual void Multicast_SetDefeatTime_Implementation(float InDefeatTime); \
	virtual void Multicast_StopCurrentEmoteMontage_Implementation(float BlendOutTime); \
	virtual void Server_OnMaskInputAbilityComplete_Implementation(); \
	virtual void Server_PlayEmoteMontage_Implementation(FGameplayTag const& MontageTag); \
	virtual void Server_SetPhoneInteractionFlow_Implementation(bool bInPhoneInteractionFlow); \
	virtual void Server_StopCurrentEmoteMontage_Implementation(float BlendOutTime); \
	virtual void ServerStartEquipOverkillWeapon_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyCameraFeedback); \
	DECLARE_FUNCTION(execClient_PlayOverHealGainedEffect); \
	DECLARE_FUNCTION(execClient_PlayOverHealRestoredEffect); \
	DECLARE_FUNCTION(execClient_SetDetectionData); \
	DECLARE_FUNCTION(execClient_SetDetector); \
	DECLARE_FUNCTION(execClient_SetEscortCircleActive); \
	DECLARE_FUNCTION(execClient_SetEscortCircleAttachment); \
	DECLARE_FUNCTION(execClient_SetObserved); \
	DECLARE_FUNCTION(execClient_Teleport); \
	DECLARE_FUNCTION(execFadeOutCameraFeedback); \
	DECLARE_FUNCTION(execGetArmorAttributes); \
	DECLARE_FUNCTION(execGetCurrentMiniGameComponent); \
	DECLARE_FUNCTION(execGetDetectionData); \
	DECLARE_FUNCTION(execGetHealthAttributes); \
	DECLARE_FUNCTION(execIsSeenByAI); \
	DECLARE_FUNCTION(execMulticast_AbortPhoneInteraction); \
	DECLARE_FUNCTION(execMulticast_PauseDefeatTime); \
	DECLARE_FUNCTION(execMulticast_PlayEmoteMontage); \
	DECLARE_FUNCTION(execMulticast_PlayRequestOverkillAnimation); \
	DECLARE_FUNCTION(execMulticast_ResumeDefeatTime); \
	DECLARE_FUNCTION(execMulticast_ReviveInteractionStarted); \
	DECLARE_FUNCTION(execMulticast_SetDefeatTime); \
	DECLARE_FUNCTION(execMulticast_StopCurrentEmoteMontage); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnDefeatTimerDone); \
	DECLARE_FUNCTION(execOnOwnMiniGameStateChanged); \
	DECLARE_FUNCTION(execOnPlayersInEscapeChanged); \
	DECLARE_FUNCTION(execOnPlayerStateDestroyed); \
	DECLARE_FUNCTION(execOnRep_DefeatTime); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnServerEndInteraction); \
	DECLARE_FUNCTION(execOnServerStartInteraction); \
	DECLARE_FUNCTION(execOnUndoPlaceableAmmoChange); \
	DECLARE_FUNCTION(execOnUndoThrowableAmmoChange); \
	DECLARE_FUNCTION(execOnUndoToolAmmoChange); \
	DECLARE_FUNCTION(execOnUndoToolPlaceableAmmoChange); \
	DECLARE_FUNCTION(execOnUpdateDefeatTime); \
	DECLARE_FUNCTION(execRemoveCameraFeedback); \
	DECLARE_FUNCTION(execServer_OnMaskInputAbilityComplete); \
	DECLARE_FUNCTION(execServer_PlayEmoteMontage); \
	DECLARE_FUNCTION(execServer_SetPhoneInteractionFlow); \
	DECLARE_FUNCTION(execServer_StopCurrentEmoteMontage); \
	DECLARE_FUNCTION(execServerStartEquipOverkillWeapon); \
	DECLARE_FUNCTION(execSetCameraFeedbackIntensity); \
	DECLARE_FUNCTION(execStartCurrentEquippableInspect); \
	DECLARE_FUNCTION(execStartEmote);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_PlayOverHealGainedEffect_Implementation(); \
	virtual void Client_PlayOverHealRestoredEffect_Implementation(); \
	virtual void Client_SetDetectionData_Implementation(uint32 PackedData); \
	virtual void Client_SetDetector_Implementation(uint8 Index, AActor* Detector); \
	virtual void Client_SetEscortCircleActive_Implementation(bool bActive, AActor* EscortInstigator); \
	virtual void Client_SetEscortCircleAttachment_Implementation(AActor* EscortCircleHolder); \
	virtual void Client_SetObserved_Implementation(bool bObserved); \
	virtual void Client_Teleport_Implementation(FVector const& Location, const float Yaw); \
	virtual void Multicast_AbortPhoneInteraction_Implementation(bool bWasCompleted); \
	virtual void Multicast_PauseDefeatTime_Implementation(); \
	virtual void Multicast_PlayEmoteMontage_Implementation(FGameplayTag const& MontageTag); \
	virtual void Multicast_PlayRequestOverkillAnimation_Implementation(); \
	virtual void Multicast_ResumeDefeatTime_Implementation(float InDefeatTime); \
	virtual void Multicast_ReviveInteractionStarted_Implementation(float EndTime); \
	virtual void Multicast_SetDefeatTime_Implementation(float InDefeatTime); \
	virtual void Multicast_StopCurrentEmoteMontage_Implementation(float BlendOutTime); \
	virtual void Server_OnMaskInputAbilityComplete_Implementation(); \
	virtual void Server_PlayEmoteMontage_Implementation(FGameplayTag const& MontageTag); \
	virtual void Server_SetPhoneInteractionFlow_Implementation(bool bInPhoneInteractionFlow); \
	virtual void Server_StopCurrentEmoteMontage_Implementation(float BlendOutTime); \
	virtual void ServerStartEquipOverkillWeapon_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyCameraFeedback); \
	DECLARE_FUNCTION(execClient_PlayOverHealGainedEffect); \
	DECLARE_FUNCTION(execClient_PlayOverHealRestoredEffect); \
	DECLARE_FUNCTION(execClient_SetDetectionData); \
	DECLARE_FUNCTION(execClient_SetDetector); \
	DECLARE_FUNCTION(execClient_SetEscortCircleActive); \
	DECLARE_FUNCTION(execClient_SetEscortCircleAttachment); \
	DECLARE_FUNCTION(execClient_SetObserved); \
	DECLARE_FUNCTION(execClient_Teleport); \
	DECLARE_FUNCTION(execFadeOutCameraFeedback); \
	DECLARE_FUNCTION(execGetArmorAttributes); \
	DECLARE_FUNCTION(execGetCurrentMiniGameComponent); \
	DECLARE_FUNCTION(execGetDetectionData); \
	DECLARE_FUNCTION(execGetHealthAttributes); \
	DECLARE_FUNCTION(execIsSeenByAI); \
	DECLARE_FUNCTION(execMulticast_AbortPhoneInteraction); \
	DECLARE_FUNCTION(execMulticast_PauseDefeatTime); \
	DECLARE_FUNCTION(execMulticast_PlayEmoteMontage); \
	DECLARE_FUNCTION(execMulticast_PlayRequestOverkillAnimation); \
	DECLARE_FUNCTION(execMulticast_ResumeDefeatTime); \
	DECLARE_FUNCTION(execMulticast_ReviveInteractionStarted); \
	DECLARE_FUNCTION(execMulticast_SetDefeatTime); \
	DECLARE_FUNCTION(execMulticast_StopCurrentEmoteMontage); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnDefeatTimerDone); \
	DECLARE_FUNCTION(execOnOwnMiniGameStateChanged); \
	DECLARE_FUNCTION(execOnPlayersInEscapeChanged); \
	DECLARE_FUNCTION(execOnPlayerStateDestroyed); \
	DECLARE_FUNCTION(execOnRep_DefeatTime); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnServerEndInteraction); \
	DECLARE_FUNCTION(execOnServerStartInteraction); \
	DECLARE_FUNCTION(execOnUndoPlaceableAmmoChange); \
	DECLARE_FUNCTION(execOnUndoThrowableAmmoChange); \
	DECLARE_FUNCTION(execOnUndoToolAmmoChange); \
	DECLARE_FUNCTION(execOnUndoToolPlaceableAmmoChange); \
	DECLARE_FUNCTION(execOnUpdateDefeatTime); \
	DECLARE_FUNCTION(execRemoveCameraFeedback); \
	DECLARE_FUNCTION(execServer_OnMaskInputAbilityComplete); \
	DECLARE_FUNCTION(execServer_PlayEmoteMontage); \
	DECLARE_FUNCTION(execServer_SetPhoneInteractionFlow); \
	DECLARE_FUNCTION(execServer_StopCurrentEmoteMontage); \
	DECLARE_FUNCTION(execServerStartEquipOverkillWeapon); \
	DECLARE_FUNCTION(execSetCameraFeedbackIntensity); \
	DECLARE_FUNCTION(execStartCurrentEquippableInspect); \
	DECLARE_FUNCTION(execStartEmote);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_EVENT_PARMS \
	struct SBZPlayerCharacter_eventClient_SetDetectionData_Parms \
	{ \
		uint32 PackedData; \
	}; \
	struct SBZPlayerCharacter_eventClient_SetDetector_Parms \
	{ \
		uint8 Index; \
		AActor* Detector; \
	}; \
	struct SBZPlayerCharacter_eventClient_SetEscortCircleActive_Parms \
	{ \
		bool bActive; \
		AActor* EscortInstigator; \
	}; \
	struct SBZPlayerCharacter_eventClient_SetEscortCircleAttachment_Parms \
	{ \
		AActor* EscortCircleHolder; \
	}; \
	struct SBZPlayerCharacter_eventClient_SetObserved_Parms \
	{ \
		bool bObserved; \
	}; \
	struct SBZPlayerCharacter_eventClient_Teleport_Parms \
	{ \
		FVector Location; \
		float Yaw; \
	}; \
	struct SBZPlayerCharacter_eventMulticast_AbortPhoneInteraction_Parms \
	{ \
		bool bWasCompleted; \
	}; \
	struct SBZPlayerCharacter_eventMulticast_PlayEmoteMontage_Parms \
	{ \
		FGameplayTag MontageTag; \
	}; \
	struct SBZPlayerCharacter_eventMulticast_ResumeDefeatTime_Parms \
	{ \
		float InDefeatTime; \
	}; \
	struct SBZPlayerCharacter_eventMulticast_ReviveInteractionStarted_Parms \
	{ \
		float EndTime; \
	}; \
	struct SBZPlayerCharacter_eventMulticast_SetDefeatTime_Parms \
	{ \
		float InDefeatTime; \
	}; \
	struct SBZPlayerCharacter_eventMulticast_StopCurrentEmoteMontage_Parms \
	{ \
		float BlendOutTime; \
	}; \
	struct SBZPlayerCharacter_eventServer_PlayEmoteMontage_Parms \
	{ \
		FGameplayTag MontageTag; \
	}; \
	struct SBZPlayerCharacter_eventServer_SetPhoneInteractionFlow_Parms \
	{ \
		bool bInPhoneInteractionFlow; \
	}; \
	struct SBZPlayerCharacter_eventServer_StopCurrentEmoteMontage_Parms \
	{ \
		float BlendOutTime; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerCharacter(); \
	friend struct Z_Construct_UClass_ASBZPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerCharacter, ASBZCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DesiredAcceleration=NETFIELD_REP_START, \
		CurrentCarryNetID, \
		DefeatTime, \
		NETFIELD_REP_END=DefeatTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerCharacter(); \
	friend struct Z_Construct_UClass_ASBZPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerCharacter, ASBZCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DesiredAcceleration=NETFIELD_REP_START, \
		CurrentCarryNetID, \
		DefeatTime, \
		NETFIELD_REP_END=DefeatTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerCharacter(ASBZPlayerCharacter&&); \
	NO_API ASBZPlayerCharacter(const ASBZPlayerCharacter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerCharacter(ASBZPlayerCharacter&&); \
	NO_API ASBZPlayerCharacter(const ASBZPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShoutDownTime() { return STRUCT_OFFSET(ASBZPlayerCharacter, ShoutDownTime); } \
	FORCEINLINE static uint32 __PPO__ShoutDownRange() { return STRUCT_OFFSET(ASBZPlayerCharacter, ShoutDownRange); } \
	FORCEINLINE static uint32 __PPO__IntimidationRange() { return STRUCT_OFFSET(ASBZPlayerCharacter, IntimidationRange); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponVODelay() { return STRUCT_OFFSET(ASBZPlayerCharacter, OverkillWeaponVODelay); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponVORate() { return STRUCT_OFFSET(ASBZPlayerCharacter, OverkillWeaponVORate); } \
	FORCEINLINE static uint32 __PPO__FPCameraAttachment() { return STRUCT_OFFSET(ASBZPlayerCharacter, FPCameraAttachment); } \
	FORCEINLINE static uint32 __PPO__RecoilComponent() { return STRUCT_OFFSET(ASBZPlayerCharacter, RecoilComponent); } \
	FORCEINLINE static uint32 __PPO__AimAssistComponent() { return STRUCT_OFFSET(ASBZPlayerCharacter, AimAssistComponent); } \
	FORCEINLINE static uint32 __PPO__CharacterComponent() { return STRUCT_OFFSET(ASBZPlayerCharacter, CharacterComponent); } \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ASBZPlayerCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__Mesh1PBody() { return STRUCT_OFFSET(ASBZPlayerCharacter, Mesh1PBody); } \
	FORCEINLINE static uint32 __PPO__Mesh1PSuit() { return STRUCT_OFFSET(ASBZPlayerCharacter, Mesh1PSuit); } \
	FORCEINLINE static uint32 __PPO__Mesh1PGloves() { return STRUCT_OFFSET(ASBZPlayerCharacter, Mesh1PGloves); } \
	FORCEINLINE static uint32 __PPO__Interactor() { return STRUCT_OFFSET(ASBZPlayerCharacter, Interactor); } \
	FORCEINLINE static uint32 __PPO__DefaultAnimationCollectionFPP() { return STRUCT_OFFSET(ASBZPlayerCharacter, DefaultAnimationCollectionFPP); } \
	FORCEINLINE static uint32 __PPO__AnimationCollectionFPP() { return STRUCT_OFFSET(ASBZPlayerCharacter, AnimationCollectionFPP); } \
	FORCEINLINE static uint32 __PPO__CasingEyeHeight() { return STRUCT_OFFSET(ASBZPlayerCharacter, CasingEyeHeight); } \
	FORCEINLINE static uint32 __PPO__SubduedEyeHeight() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedEyeHeight); } \
	FORCEINLINE static uint32 __PPO__DownedEyeHeight() { return STRUCT_OFFSET(ASBZPlayerCharacter, DownedEyeHeight); } \
	FORCEINLINE static uint32 __PPO__BleedoutEyeHeight() { return STRUCT_OFFSET(ASBZPlayerCharacter, BleedoutEyeHeight); } \
	FORCEINLINE static uint32 __PPO__SlideEyeHeight() { return STRUCT_OFFSET(ASBZPlayerCharacter, SlideEyeHeight); } \
	FORCEINLINE static uint32 __PPO__CarryTiltSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, CarryTiltSpeed); } \
	FORCEINLINE static uint32 __PPO__CarryTiltDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, CarryTiltDegrees); } \
	FORCEINLINE static uint32 __PPO__CarryAdditionalTiltDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, CarryAdditionalTiltDegrees); } \
	FORCEINLINE static uint32 __PPO__WhizzbyActorClass() { return STRUCT_OFFSET(ASBZPlayerCharacter, WhizzbyActorClass); } \
	FORCEINLINE static uint32 __PPO__WhizzbyActor() { return STRUCT_OFFSET(ASBZPlayerCharacter, WhizzbyActor); } \
	FORCEINLINE static uint32 __PPO__LandedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, LandedFeedback); } \
	FORCEINLINE static uint32 __PPO__JumpedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, JumpedFeedback); } \
	FORCEINLINE static uint32 __PPO__ArmorDepletedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, ArmorDepletedFeedback); } \
	FORCEINLINE static uint32 __PPO__ArmorReplenishedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, ArmorReplenishedFeedback); } \
	FORCEINLINE static uint32 __PPO__ArmorDamageFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, ArmorDamageFeedback); } \
	FORCEINLINE static uint32 __PPO__DodgeDepletedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, DodgeDepletedFeedback); } \
	FORCEINLINE static uint32 __PPO__DodgeReplenishedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, DodgeReplenishedFeedback); } \
	FORCEINLINE static uint32 __PPO__DodgeDamageFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, DodgeDamageFeedback); } \
	FORCEINLINE static uint32 __PPO__HealthDamageFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, HealthDamageFeedback); } \
	FORCEINLINE static uint32 __PPO__SubduedDamageFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedDamageFeedback); } \
	FORCEINLINE static uint32 __PPO__DefeatFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, DefeatFeedback); } \
	FORCEINLINE static uint32 __PPO__SlideFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, SlideFeedback); } \
	FORCEINLINE static uint32 __PPO__HumanShieldReachSlotFeedBack() { return STRUCT_OFFSET(ASBZPlayerCharacter, HumanShieldReachSlotFeedBack); } \
	FORCEINLINE static uint32 __PPO__TraverseFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, TraverseFeedback); } \
	FORCEINLINE static uint32 __PPO__RunFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, RunFeedback); } \
	FORCEINLINE static uint32 __PPO__OverHealDamageFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, OverHealDamageFeedback); } \
	FORCEINLINE static uint32 __PPO__OverHealGainedFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, OverHealGainedFeedback); } \
	FORCEINLINE static uint32 __PPO__OverHealRestoredFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, OverHealRestoredFeedback); } \
	FORCEINLINE static uint32 __PPO__ShieldFlashFeedback() { return STRUCT_OFFSET(ASBZPlayerCharacter, ShieldFlashFeedback); } \
	FORCEINLINE static uint32 __PPO__DesiredAcceleration() { return STRUCT_OFFSET(ASBZPlayerCharacter, DesiredAcceleration); } \
	FORCEINLINE static uint32 __PPO__CameraModifiers() { return STRUCT_OFFSET(ASBZPlayerCharacter, CameraModifiers); } \
	FORCEINLINE static uint32 __PPO__RevivedComment() { return STRUCT_OFFSET(ASBZPlayerCharacter, RevivedComment); } \
	FORCEINLINE static uint32 __PPO__UncuffedComment() { return STRUCT_OFFSET(ASBZPlayerCharacter, UncuffedComment); } \
	FORCEINLINE static uint32 __PPO__StealthMaskOnComment() { return STRUCT_OFFSET(ASBZPlayerCharacter, StealthMaskOnComment); } \
	FORCEINLINE static uint32 __PPO__LoudMaskOnComment() { return STRUCT_OFFSET(ASBZPlayerCharacter, LoudMaskOnComment); } \
	FORCEINLINE static uint32 __PPO__LowHealthComment() { return STRUCT_OFFSET(ASBZPlayerCharacter, LowHealthComment); } \
	FORCEINLINE static uint32 __PPO__LowHealthLimit() { return STRUCT_OFFSET(ASBZPlayerCharacter, LowHealthLimit); } \
	FORCEINLINE static uint32 __PPO__DownedDialog() { return STRUCT_OFFSET(ASBZPlayerCharacter, DownedDialog); } \
	FORCEINLINE static uint32 __PPO__InCustodyDialog() { return STRUCT_OFFSET(ASBZPlayerCharacter, InCustodyDialog); } \
	FORCEINLINE static uint32 __PPO__BackFromCustodyDialog() { return STRUCT_OFFSET(ASBZPlayerCharacter, BackFromCustodyDialog); } \
	FORCEINLINE static uint32 __PPO__CuffedDialog() { return STRUCT_OFFSET(ASBZPlayerCharacter, CuffedDialog); } \
	FORCEINLINE static uint32 __PPO__TasedDialog() { return STRUCT_OFFSET(ASBZPlayerCharacter, TasedDialog); } \
	FORCEINLINE static uint32 __PPO__SubduedDialog() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedDialog); } \
	FORCEINLINE static uint32 __PPO__CurrentCarryNetID() { return STRUCT_OFFSET(ASBZPlayerCharacter, CurrentCarryNetID); } \
	FORCEINLINE static uint32 __PPO__HumanShieldInstigatorLockCameraData() { return STRUCT_OFFSET(ASBZPlayerCharacter, HumanShieldInstigatorLockCameraData); } \
	FORCEINLINE static uint32 __PPO__NormalTargetingHumanShieldMagnification() { return STRUCT_OFFSET(ASBZPlayerCharacter, NormalTargetingHumanShieldMagnification); } \
	FORCEINLINE static uint32 __PPO__OnTopTargetingHumanShieldMagnification() { return STRUCT_OFFSET(ASBZPlayerCharacter, OnTopTargetingHumanShieldMagnification); } \
	FORCEINLINE static uint32 __PPO__EscortCircleEffect() { return STRUCT_OFFSET(ASBZPlayerCharacter, EscortCircleEffect); } \
	FORCEINLINE static uint32 __PPO__UnequippedWeaponData() { return STRUCT_OFFSET(ASBZPlayerCharacter, UnequippedWeaponData); } \
	FORCEINLINE static uint32 __PPO__FPZiplineMotorClass() { return STRUCT_OFFSET(ASBZPlayerCharacter, FPZiplineMotorClass); } \
	FORCEINLINE static uint32 __PPO__EmoteData() { return STRUCT_OFFSET(ASBZPlayerCharacter, EmoteData); } \
	FORCEINLINE static uint32 __PPO__PlayerAbilitySystem() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerAbilitySystem); } \
	FORCEINLINE static uint32 __PPO__CancelOnDamageTagContainer() { return STRUCT_OFFSET(ASBZPlayerCharacter, CancelOnDamageTagContainer); } \
	FORCEINLINE static uint32 __PPO__IgnoreMovementTags() { return STRUCT_OFFSET(ASBZPlayerCharacter, IgnoreMovementTags); } \
	FORCEINLINE static uint32 __PPO__OnTopBaseFOV() { return STRUCT_OFFSET(ASBZPlayerCharacter, OnTopBaseFOV); } \
	FORCEINLINE static uint32 __PPO__VisualDetectors() { return STRUCT_OFFSET(ASBZPlayerCharacter, VisualDetectors); } \
	FORCEINLINE static uint32 __PPO__VisualDetectionData() { return STRUCT_OFFSET(ASBZPlayerCharacter, VisualDetectionData); } \
	FORCEINLINE static uint32 __PPO__DefeatState() { return STRUCT_OFFSET(ASBZPlayerCharacter, DefeatState); } \
	FORCEINLINE static uint32 __PPO__OldDefeatState() { return STRUCT_OFFSET(ASBZPlayerCharacter, OldDefeatState); } \
	FORCEINLINE static uint32 __PPO__DefeatTime() { return STRUCT_OFFSET(ASBZPlayerCharacter, DefeatTime); } \
	FORCEINLINE static uint32 __PPO__ReviveMarker() { return STRUCT_OFFSET(ASBZPlayerCharacter, ReviveMarker); } \
	FORCEINLINE static uint32 __PPO__TasedMarker() { return STRUCT_OFFSET(ASBZPlayerCharacter, TasedMarker); } \
	FORCEINLINE static uint32 __PPO__CuffedMarker() { return STRUCT_OFFSET(ASBZPlayerCharacter, CuffedMarker); } \
	FORCEINLINE static uint32 __PPO__SubduedMarker() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedMarker); } \
	FORCEINLINE static uint32 __PPO__ReviveInvulnerableDuration() { return STRUCT_OFFSET(ASBZPlayerCharacter, ReviveInvulnerableDuration); } \
	FORCEINLINE static uint32 __PPO__RemoveReviveInvulnerableTagContainer() { return STRUCT_OFFSET(ASBZPlayerCharacter, RemoveReviveInvulnerableTagContainer); } \
	FORCEINLINE static uint32 __PPO__PlayerMarkerAsset() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__PlayerMarkerOffset() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerMarkerOffset); } \
	FORCEINLINE static uint32 __PPO__PlayerMarkerSocketName() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerMarkerSocketName); } \
	FORCEINLINE static uint32 __PPO__DownedOutline() { return STRUCT_OFFSET(ASBZPlayerCharacter, DownedOutline); } \
	FORCEINLINE static uint32 __PPO__SBZPlayerState() { return STRUCT_OFFSET(ASBZPlayerCharacter, SBZPlayerState); } \
	FORCEINLINE static uint32 __PPO__OldSBZPlayerState() { return STRUCT_OFFSET(ASBZPlayerCharacter, OldSBZPlayerState); } \
	FORCEINLINE static uint32 __PPO__PlayerAttributeSet() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerAttributeSet); } \
	FORCEINLINE static uint32 __PPO__TiltCameraModifier() { return STRUCT_OFFSET(ASBZPlayerCharacter, TiltCameraModifier); } \
	FORCEINLINE static uint32 __PPO__PitchLookCameraModifier() { return STRUCT_OFFSET(ASBZPlayerCharacter, PitchLookCameraModifier); } \
	FORCEINLINE static uint32 __PPO__HeightTransitionCameraModifier() { return STRUCT_OFFSET(ASBZPlayerCharacter, HeightTransitionCameraModifier); } \
	FORCEINLINE static uint32 __PPO__FloorHeightCameraModifier() { return STRUCT_OFFSET(ASBZPlayerCharacter, FloorHeightCameraModifier); } \
	FORCEINLINE static uint32 __PPO__SubduedTiltSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedTiltSpeed); } \
	FORCEINLINE static uint32 __PPO__SubduedTiltDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedTiltDegrees); } \
	FORCEINLINE static uint32 __PPO__DownedTiltSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, DownedTiltSpeed); } \
	FORCEINLINE static uint32 __PPO__DownedTiltDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, DownedTiltDegrees); } \
	FORCEINLINE static uint32 __PPO__BleedOutTiltSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, BleedOutTiltSpeed); } \
	FORCEINLINE static uint32 __PPO__BleedOutTiltDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, BleedOutTiltDegrees); } \
	FORCEINLINE static uint32 __PPO__SubduedPitchLookSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedPitchLookSpeed); } \
	FORCEINLINE static uint32 __PPO__SubduedPitchDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, SubduedPitchDegrees); } \
	FORCEINLINE static uint32 __PPO__BleedOutPitchLookSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, BleedOutPitchLookSpeed); } \
	FORCEINLINE static uint32 __PPO__BleedOutPitchDegrees() { return STRUCT_OFFSET(ASBZPlayerCharacter, BleedOutPitchDegrees); } \
	FORCEINLINE static uint32 __PPO__ReviveTiltSpeed() { return STRUCT_OFFSET(ASBZPlayerCharacter, ReviveTiltSpeed); } \
	FORCEINLINE static uint32 __PPO__RequestOverkillWeaponAnimationTime() { return STRUCT_OFFSET(ASBZPlayerCharacter, RequestOverkillWeaponAnimationTime); } \
	FORCEINLINE static uint32 __PPO__FirstAidKitOverHealAmount() { return STRUCT_OFFSET(ASBZPlayerCharacter, FirstAidKitOverHealAmount); } \
	FORCEINLINE static uint32 __PPO__FallDamageCurve() { return STRUCT_OFFSET(ASBZPlayerCharacter, FallDamageCurve); } \
	FORCEINLINE static uint32 __PPO__MagnificationInputCurve() { return STRUCT_OFFSET(ASBZPlayerCharacter, MagnificationInputCurve); } \
	FORCEINLINE static uint32 __PPO__FallingStartHeight() { return STRUCT_OFFSET(ASBZPlayerCharacter, FallingStartHeight); } \
	FORCEINLINE static uint32 __PPO__bHasTriggeredCoupDeGraceSkill() { return STRUCT_OFFSET(ASBZPlayerCharacter, bHasTriggeredCoupDeGraceSkill); } \
	FORCEINLINE static uint32 __PPO__CurrentFollowersArray() { return STRUCT_OFFSET(ASBZPlayerCharacter, CurrentFollowersArray); } \
	FORCEINLINE static uint32 __PPO__MiniGameDetectionMultiplier() { return STRUCT_OFFSET(ASBZPlayerCharacter, MiniGameDetectionMultiplier); } \
	FORCEINLINE static uint32 __PPO__CuttingToolDetectionMultiplier() { return STRUCT_OFFSET(ASBZPlayerCharacter, CuttingToolDetectionMultiplier); } \
	FORCEINLINE static uint32 __PPO__GadgetDetectionMultiplier() { return STRUCT_OFFSET(ASBZPlayerCharacter, GadgetDetectionMultiplier); } \
	FORCEINLINE static uint32 __PPO__bIsGadgetPlacingIllegal() { return STRUCT_OFFSET(ASBZPlayerCharacter, bIsGadgetPlacingIllegal); } \
	FORCEINLINE static uint32 __PPO__bIsCurrentNavLocationValid() { return STRUCT_OFFSET(ASBZPlayerCharacter, bIsCurrentNavLocationValid); } \
	FORCEINLINE static uint32 __PPO__NavLocationSaveInterval() { return STRUCT_OFFSET(ASBZPlayerCharacter, NavLocationSaveInterval); } \
	FORCEINLINE static uint32 __PPO__NavigationZAxisLocationOffset() { return STRUCT_OFFSET(ASBZPlayerCharacter, NavigationZAxisLocationOffset); } \
	FORCEINLINE static uint32 __PPO__ModifiedToolDataArray() { return STRUCT_OFFSET(ASBZPlayerCharacter, ModifiedToolDataArray); } \
	FORCEINLINE static uint32 __PPO__PrimaryTool() { return STRUCT_OFFSET(ASBZPlayerCharacter, PrimaryTool); } \
	FORCEINLINE static uint32 __PPO__CuttingTool() { return STRUCT_OFFSET(ASBZPlayerCharacter, CuttingTool); } \
	FORCEINLINE static uint32 __PPO__CurrentReplicatedPlaceableTool() { return STRUCT_OFFSET(ASBZPlayerCharacter, CurrentReplicatedPlaceableTool); } \
	FORCEINLINE static uint32 __PPO__SlideFeedbackID() { return STRUCT_OFFSET(ASBZPlayerCharacter, SlideFeedbackID); } \
	FORCEINLINE static uint32 __PPO__RunFeedbackID() { return STRUCT_OFFSET(ASBZPlayerCharacter, RunFeedbackID); } \
	FORCEINLINE static uint32 __PPO__LastAttackerData() { return STRUCT_OFFSET(ASBZPlayerCharacter, LastAttackerData); } \
	FORCEINLINE static uint32 __PPO__TasedData() { return STRUCT_OFFSET(ASBZPlayerCharacter, TasedData); } \
	FORCEINLINE static uint32 __PPO__PlayerMicroCameraOffset() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerMicroCameraOffset); } \
	FORCEINLINE static uint32 __PPO__PlayerMicroCameraSocketName() { return STRUCT_OFFSET(ASBZPlayerCharacter, PlayerMicroCameraSocketName); } \
	FORCEINLINE static uint32 __PPO__MiniGameComponent() { return STRUCT_OFFSET(ASBZPlayerCharacter, MiniGameComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentMiniGameComponent() { return STRUCT_OFFSET(ASBZPlayerCharacter, CurrentMiniGameComponent); } \
	FORCEINLINE static uint32 __PPO__IntimidateCiviliansWithinRangeArray() { return STRUCT_OFFSET(ASBZPlayerCharacter, IntimidateCiviliansWithinRangeArray); } \
	FORCEINLINE static uint32 __PPO__IntimidateCiviliansInterval() { return STRUCT_OFFSET(ASBZPlayerCharacter, IntimidateCiviliansInterval); } \
	FORCEINLINE static uint32 __PPO__bIsLocalKillingHumanShield() { return STRUCT_OFFSET(ASBZPlayerCharacter, bIsLocalKillingHumanShield); } \
	FORCEINLINE static uint32 __PPO__HumanShieldStartTime() { return STRUCT_OFFSET(ASBZPlayerCharacter, HumanShieldStartTime); } \
	FORCEINLINE static uint32 __PPO__DefeatControlsReference() { return STRUCT_OFFSET(ASBZPlayerCharacter, DefeatControlsReference); } \
	FORCEINLINE static uint32 __PPO__DefeatControlsReferenceID() { return STRUCT_OFFSET(ASBZPlayerCharacter, DefeatControlsReferenceID); } \
	FORCEINLINE static uint32 __PPO__MinLandingSlideWalkToRunLerp() { return STRUCT_OFFSET(ASBZPlayerCharacter, MinLandingSlideWalkToRunLerp); } \
	FORCEINLINE static uint32 __PPO__LastCuttableActor() { return STRUCT_OFFSET(ASBZPlayerCharacter, LastCuttableActor); } \
	FORCEINLINE static uint32 __PPO__LastHackedActor() { return STRUCT_OFFSET(ASBZPlayerCharacter, LastHackedActor); } \
	FORCEINLINE static uint32 __PPO__SpawnAnimationTag() { return STRUCT_OFFSET(ASBZPlayerCharacter, SpawnAnimationTag); } \
	FORCEINLINE static uint32 __PPO__ClientUpdateLandHitResult() { return STRUCT_OFFSET(ASBZPlayerCharacter, ClientUpdateLandHitResult); } \
	FORCEINLINE static uint32 __PPO__PostProcessFadeInBlendCurve() { return STRUCT_OFFSET(ASBZPlayerCharacter, PostProcessFadeInBlendCurve); } \
	FORCEINLINE static uint32 __PPO__PostProcessFadeOutBlendCurve() { return STRUCT_OFFSET(ASBZPlayerCharacter, PostProcessFadeOutBlendCurve); } \
	FORCEINLINE static uint32 __PPO__ReflectorShieldMaxBlindedDuration() { return STRUCT_OFFSET(ASBZPlayerCharacter, ReflectorShieldMaxBlindedDuration); } \
	FORCEINLINE static uint32 __PPO__ReflectorShieldCooldownTime() { return STRUCT_OFFSET(ASBZPlayerCharacter, ReflectorShieldCooldownTime); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_64_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
