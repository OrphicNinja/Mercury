// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZLocalPlayerFeedbackParameters;
struct FUniqueNetIdRepl;
class UObject;
struct FChallengeNotifPayload;
class ISBZViewTargetCollectionInterface;
class AActor;
class UAnimMontage;
struct FVector;
#ifdef STARBREEZE_SBZPlayerController_generated_h
#error "SBZPlayerController.generated.h already included, missing '#pragma once' in SBZPlayerController.h"
#endif
#define STARBREEZE_SBZPlayerController_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_RPC_WRAPPERS \
	virtual void Client_CheckIfPartyLeaderResponse_Implementation(bool bIsPartyLeader, const FString& PartyCode); \
	virtual void Client_RestartAccepted_Implementation(FUniqueNetIdRepl const& PlayerID); \
	virtual void Client_RestartInitiate_Implementation(float SecondsRemaining); \
	virtual void Client_RestartTimeExpired_Implementation(); \
	virtual void Client_SetViewTargetCollection_Implementation(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex); \
	virtual void Client_SkipCreateMergeParty_Implementation(); \
	virtual void Client_UnsetViewTargetCollection_Implementation(); \
	virtual void ClientReceiveReward_Implementation(FChallengeNotifPayload const& ChallengeReward); \
	virtual void Server_CheckIfPartyLeader_Implementation(bool bMergePartySelected, bool bIsPartyLeader, const int32 NumberOfPartyMembers); \
	virtual void Server_DebugPlayMontage_Implementation(AActor* Actor, UAnimMontage* Montage); \
	virtual void Server_DebugTeleportTo_Implementation(FVector const& Location, const float Yaw); \
	virtual void Server_RequestMergeParty_Implementation(bool bIsSelected, TArray<FString> const& PartyMemberPlayerIdArray); \
	virtual void Server_RestartLevel_Implementation(); \
	virtual bool Server_RestartRequested_Validate(FUniqueNetIdRepl ); \
	virtual void Server_RestartRequested_Implementation(FUniqueNetIdRepl PlayerID); \
	virtual void Server_SetCurrentSpectateTargetPlayerID_Implementation(int32 InID); \
	virtual void Server_SetCurrentViewTargetIndex_Implementation(int32 InViewTargetIndex); \
	virtual void Server_SetPartyCode_Implementation(const FString& PartyCode); \
	virtual void Server_SetViewTargetCollection_Implementation(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex); \
	virtual void Server_UnsetViewTargetCollection_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyCameraFeedback); \
	DECLARE_FUNCTION(execClient_CheckIfPartyLeaderResponse); \
	DECLARE_FUNCTION(execClient_RestartAccepted); \
	DECLARE_FUNCTION(execClient_RestartInitiate); \
	DECLARE_FUNCTION(execClient_RestartTimeExpired); \
	DECLARE_FUNCTION(execClient_SetViewTargetCollection); \
	DECLARE_FUNCTION(execClient_SkipCreateMergeParty); \
	DECLARE_FUNCTION(execClient_UnsetViewTargetCollection); \
	DECLARE_FUNCTION(execClientReceiveReward); \
	DECLARE_FUNCTION(execFadeOutCameraFeedback); \
	DECLARE_FUNCTION(execGetViewTargetCollection); \
	DECLARE_FUNCTION(execOnPlayerCameraManagerEndPlay); \
	DECLARE_FUNCTION(execRemoveCameraFeedback); \
	DECLARE_FUNCTION(execServer_CheckIfPartyLeader); \
	DECLARE_FUNCTION(execServer_DebugPlayMontage); \
	DECLARE_FUNCTION(execServer_DebugTeleportTo); \
	DECLARE_FUNCTION(execServer_RequestMergeParty); \
	DECLARE_FUNCTION(execServer_RestartLevel); \
	DECLARE_FUNCTION(execServer_RestartRequested); \
	DECLARE_FUNCTION(execServer_SetCurrentSpectateTargetPlayerID); \
	DECLARE_FUNCTION(execServer_SetCurrentViewTargetIndex); \
	DECLARE_FUNCTION(execServer_SetPartyCode); \
	DECLARE_FUNCTION(execServer_SetViewTargetCollection); \
	DECLARE_FUNCTION(execServer_UnsetViewTargetCollection); \
	DECLARE_FUNCTION(execSetCameraFeedbackIntensity); \
	DECLARE_FUNCTION(execSetViewTargetCollection);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_CheckIfPartyLeaderResponse_Implementation(bool bIsPartyLeader, const FString& PartyCode); \
	virtual void Client_RestartAccepted_Implementation(FUniqueNetIdRepl const& PlayerID); \
	virtual void Client_RestartInitiate_Implementation(float SecondsRemaining); \
	virtual void Client_RestartTimeExpired_Implementation(); \
	virtual void Client_SetViewTargetCollection_Implementation(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex); \
	virtual void Client_SkipCreateMergeParty_Implementation(); \
	virtual void Client_UnsetViewTargetCollection_Implementation(); \
	virtual void ClientReceiveReward_Implementation(FChallengeNotifPayload const& ChallengeReward); \
	virtual void Server_CheckIfPartyLeader_Implementation(bool bMergePartySelected, bool bIsPartyLeader, const int32 NumberOfPartyMembers); \
	virtual void Server_DebugPlayMontage_Implementation(AActor* Actor, UAnimMontage* Montage); \
	virtual void Server_DebugTeleportTo_Implementation(FVector const& Location, const float Yaw); \
	virtual void Server_RequestMergeParty_Implementation(bool bIsSelected, TArray<FString> const& PartyMemberPlayerIdArray); \
	virtual void Server_RestartLevel_Implementation(); \
	virtual bool Server_RestartRequested_Validate(FUniqueNetIdRepl ); \
	virtual void Server_RestartRequested_Implementation(FUniqueNetIdRepl PlayerID); \
	virtual void Server_SetCurrentSpectateTargetPlayerID_Implementation(int32 InID); \
	virtual void Server_SetCurrentViewTargetIndex_Implementation(int32 InViewTargetIndex); \
	virtual void Server_SetPartyCode_Implementation(const FString& PartyCode); \
	virtual void Server_SetViewTargetCollection_Implementation(UObject* InViewTargetCollectionObject, int32 InViewTargetIndex); \
	virtual void Server_UnsetViewTargetCollection_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyCameraFeedback); \
	DECLARE_FUNCTION(execClient_CheckIfPartyLeaderResponse); \
	DECLARE_FUNCTION(execClient_RestartAccepted); \
	DECLARE_FUNCTION(execClient_RestartInitiate); \
	DECLARE_FUNCTION(execClient_RestartTimeExpired); \
	DECLARE_FUNCTION(execClient_SetViewTargetCollection); \
	DECLARE_FUNCTION(execClient_SkipCreateMergeParty); \
	DECLARE_FUNCTION(execClient_UnsetViewTargetCollection); \
	DECLARE_FUNCTION(execClientReceiveReward); \
	DECLARE_FUNCTION(execFadeOutCameraFeedback); \
	DECLARE_FUNCTION(execGetViewTargetCollection); \
	DECLARE_FUNCTION(execOnPlayerCameraManagerEndPlay); \
	DECLARE_FUNCTION(execRemoveCameraFeedback); \
	DECLARE_FUNCTION(execServer_CheckIfPartyLeader); \
	DECLARE_FUNCTION(execServer_DebugPlayMontage); \
	DECLARE_FUNCTION(execServer_DebugTeleportTo); \
	DECLARE_FUNCTION(execServer_RequestMergeParty); \
	DECLARE_FUNCTION(execServer_RestartLevel); \
	DECLARE_FUNCTION(execServer_RestartRequested); \
	DECLARE_FUNCTION(execServer_SetCurrentSpectateTargetPlayerID); \
	DECLARE_FUNCTION(execServer_SetCurrentViewTargetIndex); \
	DECLARE_FUNCTION(execServer_SetPartyCode); \
	DECLARE_FUNCTION(execServer_SetViewTargetCollection); \
	DECLARE_FUNCTION(execServer_UnsetViewTargetCollection); \
	DECLARE_FUNCTION(execSetCameraFeedbackIntensity); \
	DECLARE_FUNCTION(execSetViewTargetCollection);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_EVENT_PARMS \
	struct SBZPlayerController_eventClient_CheckIfPartyLeaderResponse_Parms \
	{ \
		bool bIsPartyLeader; \
		FString PartyCode; \
	}; \
	struct SBZPlayerController_eventClient_RestartAccepted_Parms \
	{ \
		FUniqueNetIdRepl PlayerID; \
	}; \
	struct SBZPlayerController_eventClient_RestartInitiate_Parms \
	{ \
		float SecondsRemaining; \
	}; \
	struct SBZPlayerController_eventClient_SetViewTargetCollection_Parms \
	{ \
		UObject* InViewTargetCollectionObject; \
		int32 InViewTargetIndex; \
	}; \
	struct SBZPlayerController_eventClientReceiveReward_Parms \
	{ \
		FChallengeNotifPayload ChallengeReward; \
	}; \
	struct SBZPlayerController_eventServer_CheckIfPartyLeader_Parms \
	{ \
		bool bMergePartySelected; \
		bool bIsPartyLeader; \
		int32 NumberOfPartyMembers; \
	}; \
	struct SBZPlayerController_eventServer_DebugPlayMontage_Parms \
	{ \
		AActor* Actor; \
		UAnimMontage* Montage; \
	}; \
	struct SBZPlayerController_eventServer_DebugTeleportTo_Parms \
	{ \
		FVector Location; \
		float Yaw; \
	}; \
	struct SBZPlayerController_eventServer_RequestMergeParty_Parms \
	{ \
		bool bIsSelected; \
		TArray<FString> PartyMemberPlayerIdArray; \
	}; \
	struct SBZPlayerController_eventServer_RestartRequested_Parms \
	{ \
		FUniqueNetIdRepl PlayerID; \
	}; \
	struct SBZPlayerController_eventServer_SetCurrentSpectateTargetPlayerID_Parms \
	{ \
		int32 InID; \
	}; \
	struct SBZPlayerController_eventServer_SetCurrentViewTargetIndex_Parms \
	{ \
		int32 InViewTargetIndex; \
	}; \
	struct SBZPlayerController_eventServer_SetPartyCode_Parms \
	{ \
		FString PartyCode; \
	}; \
	struct SBZPlayerController_eventServer_SetViewTargetCollection_Parms \
	{ \
		UObject* InViewTargetCollectionObject; \
		int32 InViewTargetIndex; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerController(); \
	friend struct Z_Construct_UClass_ASBZPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerController, ASBZPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerController*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerController(); \
	friend struct Z_Construct_UClass_ASBZPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerController, ASBZPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerController*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerController(ASBZPlayerController&&); \
	NO_API ASBZPlayerController(const ASBZPlayerController&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerController(ASBZPlayerController&&); \
	NO_API ASBZPlayerController(const ASBZPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerController)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Faction() { return STRUCT_OFFSET(ASBZPlayerController, Faction); } \
	FORCEINLINE static uint32 __PPO__DefeatCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, DefeatCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__MinDefeatCameraFeedbackIntensity() { return STRUCT_OFFSET(ASBZPlayerController, MinDefeatCameraFeedbackIntensity); } \
	FORCEINLINE static uint32 __PPO__TasedCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, TasedCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__SubduedCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, SubduedCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__HealthDamageCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, HealthDamageCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__HealthDamageCameraFeedbackThreshold() { return STRUCT_OFFSET(ASBZPlayerController, HealthDamageCameraFeedbackThreshold); } \
	FORCEINLINE static uint32 __PPO__TagFeedbackClassMap() { return STRUCT_OFFSET(ASBZPlayerController, TagFeedbackClassMap); } \
	FORCEINLINE static uint32 __PPO__TagFeedbackIDMap() { return STRUCT_OFFSET(ASBZPlayerController, TagFeedbackIDMap); } \
	FORCEINLINE static uint32 __PPO__FadedOutTagFeedbackIDMap() { return STRUCT_OFFSET(ASBZPlayerController, FadedOutTagFeedbackIDMap); } \
	FORCEINLINE static uint32 __PPO__ViewTargetCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, ViewTargetCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__DestroyedViewTargetCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, DestroyedViewTargetCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__ChangedViewTargetCameraFeedbackClass() { return STRUCT_OFFSET(ASBZPlayerController, ChangedViewTargetCameraFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__ViewTargetCollection() { return STRUCT_OFFSET(ASBZPlayerController, ViewTargetCollection); } \
	FORCEINLINE static uint32 __PPO__CurrentSpectateTargetPlayerID() { return STRUCT_OFFSET(ASBZPlayerController, CurrentSpectateTargetPlayerID); } \
	FORCEINLINE static uint32 __PPO__InteractionLockCameraData() { return STRUCT_OFFSET(ASBZPlayerController, InteractionLockCameraData); } \
	FORCEINLINE static uint32 __PPO__AppliedDefeatState() { return STRUCT_OFFSET(ASBZPlayerController, AppliedDefeatState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_25_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
