// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
struct FSBZReplicatedInteractionData;
#ifdef STARBREEZE_SBZInteractorComponent_generated_h
#error "SBZInteractorComponent.generated.h already included, missing '#pragma once' in SBZInteractorComponent.h"
#endif
#define STARBREEZE_SBZInteractorComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_RPC_WRAPPERS \
	virtual void Client_Removed_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Client_StopInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Multicast_AbortInteraction_Implementation(USBZBaseInteractableComponent* Interaction); \
	virtual void Multicast_CompletedInteraction_Implementation(USBZBaseInteractableComponent* Interaction, bool bIsInstant); \
	virtual void Multicast_StartSimulatedInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int8 InModeIndex); \
	virtual void Multicast_StopSimulatedInteraction_Implementation(); \
	virtual bool Server_CompleteInteraction_Validate(USBZBaseInteractableComponent* , int32 ); \
	virtual void Server_CompleteInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Server_PredictionTimeout_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Server_StartInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id, int8 InModeIndex); \
	virtual void Server_StopInteraction_Implementation(USBZBaseInteractableComponent* Interaction); \
 \
	DECLARE_FUNCTION(execBP_GetModeIndex); \
	DECLARE_FUNCTION(execBP_GetProgress); \
	DECLARE_FUNCTION(execClient_Removed); \
	DECLARE_FUNCTION(execClient_StopInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execMulticast_AbortInteraction); \
	DECLARE_FUNCTION(execMulticast_CompletedInteraction); \
	DECLARE_FUNCTION(execMulticast_StartSimulatedInteraction); \
	DECLARE_FUNCTION(execMulticast_StopSimulatedInteraction); \
	DECLARE_FUNCTION(execOnRep_ReplicatedData); \
	DECLARE_FUNCTION(execServer_CompleteInteraction); \
	DECLARE_FUNCTION(execServer_PredictionTimeout); \
	DECLARE_FUNCTION(execServer_StartInteraction); \
	DECLARE_FUNCTION(execServer_StopInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_Removed_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Client_StopInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Multicast_AbortInteraction_Implementation(USBZBaseInteractableComponent* Interaction); \
	virtual void Multicast_CompletedInteraction_Implementation(USBZBaseInteractableComponent* Interaction, bool bIsInstant); \
	virtual void Multicast_StartSimulatedInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int8 InModeIndex); \
	virtual void Multicast_StopSimulatedInteraction_Implementation(); \
	virtual bool Server_CompleteInteraction_Validate(USBZBaseInteractableComponent* , int32 ); \
	virtual void Server_CompleteInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Server_PredictionTimeout_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id); \
	virtual void Server_StartInteraction_Implementation(USBZBaseInteractableComponent* Interaction, int32 Id, int8 InModeIndex); \
	virtual void Server_StopInteraction_Implementation(USBZBaseInteractableComponent* Interaction); \
 \
	DECLARE_FUNCTION(execBP_GetModeIndex); \
	DECLARE_FUNCTION(execBP_GetProgress); \
	DECLARE_FUNCTION(execClient_Removed); \
	DECLARE_FUNCTION(execClient_StopInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execMulticast_AbortInteraction); \
	DECLARE_FUNCTION(execMulticast_CompletedInteraction); \
	DECLARE_FUNCTION(execMulticast_StartSimulatedInteraction); \
	DECLARE_FUNCTION(execMulticast_StopSimulatedInteraction); \
	DECLARE_FUNCTION(execOnRep_ReplicatedData); \
	DECLARE_FUNCTION(execServer_CompleteInteraction); \
	DECLARE_FUNCTION(execServer_PredictionTimeout); \
	DECLARE_FUNCTION(execServer_StartInteraction); \
	DECLARE_FUNCTION(execServer_StopInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_EVENT_PARMS \
	struct SBZInteractorComponent_eventClient_Removed_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		int32 Id; \
	}; \
	struct SBZInteractorComponent_eventClient_StopInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		int32 Id; \
	}; \
	struct SBZInteractorComponent_eventMulticast_AbortInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
	}; \
	struct SBZInteractorComponent_eventMulticast_CompletedInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		bool bIsInstant; \
	}; \
	struct SBZInteractorComponent_eventMulticast_StartSimulatedInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		int8 InModeIndex; \
	}; \
	struct SBZInteractorComponent_eventServer_CompleteInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		int32 Id; \
	}; \
	struct SBZInteractorComponent_eventServer_PredictionTimeout_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		int32 Id; \
	}; \
	struct SBZInteractorComponent_eventServer_StartInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
		int32 Id; \
		int8 InModeIndex; \
	}; \
	struct SBZInteractorComponent_eventServer_StopInteraction_Parms \
	{ \
		USBZBaseInteractableComponent* Interaction; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInteractorComponent(); \
	friend struct Z_Construct_UClass_USBZInteractorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZInteractorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInteractorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedData=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInteractorComponent(); \
	friend struct Z_Construct_UClass_USBZInteractorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZInteractorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInteractorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedData=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInteractorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInteractorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInteractorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInteractorComponent(USBZInteractorComponent&&); \
	NO_API USBZInteractorComponent(const USBZInteractorComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInteractorComponent(USBZInteractorComponent&&); \
	NO_API USBZInteractorComponent(const USBZInteractorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInteractorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInteractorComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedData() { return STRUCT_OFFSET(USBZInteractorComponent, ReplicatedData); } \
	FORCEINLINE static uint32 __PPO__CurrentInteraction() { return STRUCT_OFFSET(USBZInteractorComponent, CurrentInteraction); } \
	FORCEINLINE static uint32 __PPO__LastInteraction() { return STRUCT_OFFSET(USBZInteractorComponent, LastInteraction); } \
	FORCEINLINE static uint32 __PPO__ServerCompletingInteractable() { return STRUCT_OFFSET(USBZInteractorComponent, ServerCompletingInteractable); } \
	FORCEINLINE static uint32 __PPO__TickCompleteDuration() { return STRUCT_OFFSET(USBZInteractorComponent, TickCompleteDuration); } \
	FORCEINLINE static uint32 __PPO__bIsCompletePending() { return STRUCT_OFFSET(USBZInteractorComponent, bIsCompletePending); } \
	FORCEINLINE static uint32 __PPO__InteractId() { return STRUCT_OFFSET(USBZInteractorComponent, InteractId); } \
	FORCEINLINE static uint32 __PPO__ModeIndex() { return STRUCT_OFFSET(USBZInteractorComponent, ModeIndex); } \
	FORCEINLINE static uint32 __PPO__ModeRaw() { return STRUCT_OFFSET(USBZInteractorComponent, ModeRaw); } \
	FORCEINLINE static uint32 __PPO__InteractionTraceResult() { return STRUCT_OFFSET(USBZInteractorComponent, InteractionTraceResult); } \
	FORCEINLINE static uint32 __PPO__bIsInteractionSignalRequired() { return STRUCT_OFFSET(USBZInteractorComponent, bIsInteractionSignalRequired); } \
	FORCEINLINE static uint32 __PPO__bIsScreenInteraction() { return STRUCT_OFFSET(USBZInteractorComponent, bIsScreenInteraction); } \
	FORCEINLINE static uint32 __PPO__ScreenInteractDistance() { return STRUCT_OFFSET(USBZInteractorComponent, ScreenInteractDistance); } \
	FORCEINLINE static uint32 __PPO__MinScreenInteractDegrees() { return STRUCT_OFFSET(USBZInteractorComponent, MinScreenInteractDegrees); } \
	FORCEINLINE static uint32 __PPO__MinScreenInteractDot() { return STRUCT_OFFSET(USBZInteractorComponent, MinScreenInteractDot); } \
	FORCEINLINE static uint32 __PPO__bIsLocallyControlled() { return STRUCT_OFFSET(USBZInteractorComponent, bIsLocallyControlled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInteractorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInteractorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
