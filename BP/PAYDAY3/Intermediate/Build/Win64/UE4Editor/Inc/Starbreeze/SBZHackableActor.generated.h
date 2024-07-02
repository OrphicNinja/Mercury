// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class ESBZHackableActorInterruptReason : uint8;
enum class ESBZHackableActorState : uint8;
enum class ESBZHackableActorUnlockMode : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class AActor;
#ifdef STARBREEZE_SBZHackableActor_generated_h
#error "SBZHackableActor.generated.h already included, missing '#pragma once' in SBZHackableActor.h"
#endif
#define STARBREEZE_SBZHackableActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_RPC_WRAPPERS \
	virtual void Multicast_AddDisplayText_Implementation(); \
	virtual void Multicast_ResetHackableActor_Implementation(bool bKeepCustomMessage); \
	virtual void Multicast_SetState_Implementation(ESBZHackableActorState NewState); \
	virtual void Multicast_SetUnlockMode_Implementation(ESBZHackableActorUnlockMode InUnlockMode); \
	virtual void Multicast_SetUpdateFrequency_Implementation(float NewUpdateFrequency); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execActivateHackableActor); \
	DECLARE_FUNCTION(execAddDisplayText); \
	DECLARE_FUNCTION(execInterruptHacking); \
	DECLARE_FUNCTION(execMulticast_AddDisplayText); \
	DECLARE_FUNCTION(execMulticast_ResetHackableActor); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execMulticast_SetUnlockMode); \
	DECLARE_FUNCTION(execMulticast_SetUpdateFrequency); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnInteractionStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnRep_DisplayTextIndex); \
	DECLARE_FUNCTION(execOnRep_IsDisplayTextAdded); \
	DECLARE_FUNCTION(execOnRep_ProgressData); \
	DECLARE_FUNCTION(execOnRep_UnlockMode); \
	DECLARE_FUNCTION(execResetHackableActor); \
	DECLARE_FUNCTION(execSetInteractionEnabled); \
	DECLARE_FUNCTION(execSetUnlockMode); \
	DECLARE_FUNCTION(execUpdateDisplayTextImportantInformation);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddDisplayText_Implementation(); \
	virtual void Multicast_ResetHackableActor_Implementation(bool bKeepCustomMessage); \
	virtual void Multicast_SetState_Implementation(ESBZHackableActorState NewState); \
	virtual void Multicast_SetUnlockMode_Implementation(ESBZHackableActorUnlockMode InUnlockMode); \
	virtual void Multicast_SetUpdateFrequency_Implementation(float NewUpdateFrequency); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execActivateHackableActor); \
	DECLARE_FUNCTION(execAddDisplayText); \
	DECLARE_FUNCTION(execInterruptHacking); \
	DECLARE_FUNCTION(execMulticast_AddDisplayText); \
	DECLARE_FUNCTION(execMulticast_ResetHackableActor); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execMulticast_SetUnlockMode); \
	DECLARE_FUNCTION(execMulticast_SetUpdateFrequency); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnInteractionStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnRep_DisplayTextIndex); \
	DECLARE_FUNCTION(execOnRep_IsDisplayTextAdded); \
	DECLARE_FUNCTION(execOnRep_ProgressData); \
	DECLARE_FUNCTION(execOnRep_UnlockMode); \
	DECLARE_FUNCTION(execResetHackableActor); \
	DECLARE_FUNCTION(execSetInteractionEnabled); \
	DECLARE_FUNCTION(execSetUnlockMode); \
	DECLARE_FUNCTION(execUpdateDisplayTextImportantInformation);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_EVENT_PARMS \
	struct SBZHackableActor_eventBP_DisplayTextIndexChanged_Parms \
	{ \
		int32 NewIndex; \
	}; \
	struct SBZHackableActor_eventBP_OnHackingStarted_Parms \
	{ \
		FText ProcessText; \
	}; \
	struct SBZHackableActor_eventBP_OnStateChanged_Parms \
	{ \
		ESBZHackableActorState OldState; \
		ESBZHackableActorState NewState; \
	}; \
	struct SBZHackableActor_eventBP_UpdateCustomSuccessText_Parms \
	{ \
		FText SucessText; \
	}; \
	struct SBZHackableActor_eventBP_UpdateProgressBar_Parms \
	{ \
		int32 ProgressDone; \
	}; \
	struct SBZHackableActor_eventMulticast_ResetHackableActor_Parms \
	{ \
		bool bKeepCustomMessage; \
	}; \
	struct SBZHackableActor_eventMulticast_SetState_Parms \
	{ \
		ESBZHackableActorState NewState; \
	}; \
	struct SBZHackableActor_eventMulticast_SetUnlockMode_Parms \
	{ \
		ESBZHackableActorUnlockMode InUnlockMode; \
	}; \
	struct SBZHackableActor_eventMulticast_SetUpdateFrequency_Parms \
	{ \
		float NewUpdateFrequency; \
	}; \
	struct SBZHackableActor_eventVisionPredicate_Parms \
	{ \
		const AActor* Viewer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZHackableActor_eventVisionPredicate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHackableActor(); \
	friend struct Z_Construct_UClass_ASBZHackableActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHackableActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UnlockMode=NETFIELD_REP_START, \
		CurrentState, \
		ProgressData, \
		CurrentDisplayTextIndex, \
		bIsDisplayTextAdded, \
		NETFIELD_REP_END=bIsDisplayTextAdded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_INCLASS \
private: \
	static void StaticRegisterNativesASBZHackableActor(); \
	friend struct Z_Construct_UClass_ASBZHackableActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHackableActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UnlockMode=NETFIELD_REP_START, \
		CurrentState, \
		ProgressData, \
		CurrentDisplayTextIndex, \
		bIsDisplayTextAdded, \
		NETFIELD_REP_END=bIsDisplayTextAdded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHackableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackableActor(ASBZHackableActor&&); \
	NO_API ASBZHackableActor(const ASBZHackableActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackableActor(ASBZHackableActor&&); \
	NO_API ASBZHackableActor(const ASBZHackableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackableActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZHackableActor, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZHackableActor, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZHackableActor, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionComponent() { return STRUCT_OFFSET(ASBZHackableActor, LifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionInstance() { return STRUCT_OFFSET(ASBZHackableActor, LifeActionInstance); } \
	FORCEINLINE static uint32 __PPO__LifeActionSlot() { return STRUCT_OFFSET(ASBZHackableActor, LifeActionSlot); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZHackableActor, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__ShoutTarget() { return STRUCT_OFFSET(ASBZHackableActor, ShoutTarget); } \
	FORCEINLINE static uint32 __PPO__InteractionMarker() { return STRUCT_OFFSET(ASBZHackableActor, InteractionMarker); } \
	FORCEINLINE static uint32 __PPO__FixMarker() { return STRUCT_OFFSET(ASBZHackableActor, FixMarker); } \
	FORCEINLINE static uint32 __PPO__HackingMarker() { return STRUCT_OFFSET(ASBZHackableActor, HackingMarker); } \
	FORCEINLINE static uint32 __PPO__bStartActive() { return STRUCT_OFFSET(ASBZHackableActor, bStartActive); } \
	FORCEINLINE static uint32 __PPO__UnlockMode() { return STRUCT_OFFSET(ASBZHackableActor, UnlockMode); } \
	FORCEINLINE static uint32 __PPO__DurationSeconds() { return STRUCT_OFFSET(ASBZHackableActor, DurationSeconds); } \
	FORCEINLINE static uint32 __PPO__ItemUnlockGameplayInteractionQuery() { return STRUCT_OFFSET(ASBZHackableActor, ItemUnlockGameplayInteractionQuery); } \
	FORCEINLINE static uint32 __PPO__GameplayEffectOnInteract() { return STRUCT_OFFSET(ASBZHackableActor, GameplayEffectOnInteract); } \
	FORCEINLINE static uint32 __PPO__bWillInterrupt() { return STRUCT_OFFSET(ASBZHackableActor, bWillInterrupt); } \
	FORCEINLINE static uint32 __PPO__InterruptionTimeInterval() { return STRUCT_OFFSET(ASBZHackableActor, InterruptionTimeInterval); } \
	FORCEINLINE static uint32 __PPO__CustomProcessText() { return STRUCT_OFFSET(ASBZHackableActor, CustomProcessText); } \
	FORCEINLINE static uint32 __PPO__CustomSuccessText() { return STRUCT_OFFSET(ASBZHackableActor, CustomSuccessText); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZHackableActor, CurrentState); } \
	FORCEINLINE static uint32 __PPO__ProgressData() { return STRUCT_OFFSET(ASBZHackableActor, ProgressData); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZHackableActor, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__DisplayTextArray() { return STRUCT_OFFSET(ASBZHackableActor, DisplayTextArray); } \
	FORCEINLINE static uint32 __PPO__AdditionalDisplayText() { return STRUCT_OFFSET(ASBZHackableActor, AdditionalDisplayText); } \
	FORCEINLINE static uint32 __PPO__AdditionalDisplayTextIndex() { return STRUCT_OFFSET(ASBZHackableActor, AdditionalDisplayTextIndex); } \
	FORCEINLINE static uint32 __PPO__bIsOverwritingIndex() { return STRUCT_OFFSET(ASBZHackableActor, bIsOverwritingIndex); } \
	FORCEINLINE static uint32 __PPO__NumberOfCodesToView() { return STRUCT_OFFSET(ASBZHackableActor, NumberOfCodesToView); } \
	FORCEINLINE static uint32 __PPO__CodeEmailIndex() { return STRUCT_OFFSET(ASBZHackableActor, CodeEmailIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentDisplayTextIndex() { return STRUCT_OFFSET(ASBZHackableActor, CurrentDisplayTextIndex); } \
	FORCEINLINE static uint32 __PPO__bIsDisplayTextAdded() { return STRUCT_OFFSET(ASBZHackableActor, bIsDisplayTextAdded); } \
	FORCEINLINE static uint32 __PPO__ObjectiveInfo() { return STRUCT_OFFSET(ASBZHackableActor, ObjectiveInfo); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_36_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHackableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
