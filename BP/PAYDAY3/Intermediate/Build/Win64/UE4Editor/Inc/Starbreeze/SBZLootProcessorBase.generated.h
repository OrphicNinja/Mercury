// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZLootProcessorState : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class USBZBagType;
#ifdef STARBREEZE_SBZLootProcessorBase_generated_h
#error "SBZLootProcessorBase.generated.h already included, missing '#pragma once' in SBZLootProcessorBase.h"
#endif
#define STARBREEZE_SBZLootProcessorBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_RPC_WRAPPERS \
	virtual void Multicast_SetCurrentProcessingIndex_Implementation(uint8 Index); \
	virtual void Multicast_SetState_Implementation(ESBZLootProcessorState NewState); \
	virtual void Multicast_UpdateBagCount_Implementation(int32 NewBagCount); \
 \
	DECLARE_FUNCTION(execMulticast_SetCurrentProcessingIndex); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execMulticast_UpdateBagCount); \
	DECLARE_FUNCTION(execOnBagBeginOverlap); \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execOnRep_BagCount); \
	DECLARE_FUNCTION(execOnRep_CurrentProcessingIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnSabotagedStateChanged); \
	DECLARE_FUNCTION(execOnServerClaimBagInteractComplete); \
	DECLARE_FUNCTION(execPauseProcessing); \
	DECLARE_FUNCTION(execResumeProcessing); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetCurrentProcessingIndex_Implementation(uint8 Index); \
	virtual void Multicast_SetState_Implementation(ESBZLootProcessorState NewState); \
	virtual void Multicast_UpdateBagCount_Implementation(int32 NewBagCount); \
 \
	DECLARE_FUNCTION(execMulticast_SetCurrentProcessingIndex); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execMulticast_UpdateBagCount); \
	DECLARE_FUNCTION(execOnBagBeginOverlap); \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execOnRep_BagCount); \
	DECLARE_FUNCTION(execOnRep_CurrentProcessingIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnSabotagedStateChanged); \
	DECLARE_FUNCTION(execOnServerClaimBagInteractComplete); \
	DECLARE_FUNCTION(execPauseProcessing); \
	DECLARE_FUNCTION(execResumeProcessing); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_EVENT_PARMS \
	struct SBZLootProcessorBase_eventBP_BagCountUpdated_Parms \
	{ \
		int32 NumOfBags; \
	}; \
	struct SBZLootProcessorBase_eventBP_OnBagProcessed_Parms \
	{ \
		const USBZBagType* OldBagType; \
		const USBZBagType* NewBagType; \
	}; \
	struct SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms \
	{ \
		ESBZLootProcessorState NewState; \
		bool bDoCosmetics; \
		bool bIsDedicatedServer; \
	}; \
	struct SBZLootProcessorBase_eventMulticast_SetCurrentProcessingIndex_Parms \
	{ \
		uint8 Index; \
	}; \
	struct SBZLootProcessorBase_eventMulticast_SetState_Parms \
	{ \
		ESBZLootProcessorState NewState; \
	}; \
	struct SBZLootProcessorBase_eventMulticast_UpdateBagCount_Parms \
	{ \
		int32 NewBagCount; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLootProcessorBase(); \
	friend struct Z_Construct_UClass_ASBZLootProcessorBase_Statics; \
public: \
	DECLARE_CLASS(ASBZLootProcessorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLootProcessorBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		BagCount, \
		CurrentProcessingIndex, \
		NETFIELD_REP_END=CurrentProcessingIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASBZLootProcessorBase(); \
	friend struct Z_Construct_UClass_ASBZLootProcessorBase_Statics; \
public: \
	DECLARE_CLASS(ASBZLootProcessorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLootProcessorBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		BagCount, \
		CurrentProcessingIndex, \
		NETFIELD_REP_END=CurrentProcessingIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLootProcessorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLootProcessorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLootProcessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLootProcessorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLootProcessorBase(ASBZLootProcessorBase&&); \
	NO_API ASBZLootProcessorBase(const ASBZLootProcessorBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLootProcessorBase(ASBZLootProcessorBase&&); \
	NO_API ASBZLootProcessorBase(const ASBZLootProcessorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLootProcessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLootProcessorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLootProcessorBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BagTypeMap() { return STRUCT_OFFSET(ASBZLootProcessorBase, BagTypeMap); } \
	FORCEINLINE static uint32 __PPO__ProcessDuration() { return STRUCT_OFFSET(ASBZLootProcessorBase, ProcessDuration); } \
	FORCEINLINE static uint32 __PPO__bCanQueueProcessing() { return STRUCT_OFFSET(ASBZLootProcessorBase, bCanQueueProcessing); } \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZLootProcessorBase, MarkerAsset); } \
	FORCEINLINE static uint32 __PPO__ClaimBagInteractable() { return STRUCT_OFFSET(ASBZLootProcessorBase, ClaimBagInteractable); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZLootProcessorBase, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZLootProcessorBase, CurrentState); } \
	FORCEINLINE static uint32 __PPO__BagCount() { return STRUCT_OFFSET(ASBZLootProcessorBase, BagCount); } \
	FORCEINLINE static uint32 __PPO__CurrentProcessingIndex() { return STRUCT_OFFSET(ASBZLootProcessorBase, CurrentProcessingIndex); } \
	FORCEINLINE static uint32 __PPO__SabotagePointArray() { return STRUCT_OFFSET(ASBZLootProcessorBase, SabotagePointArray); } \
	FORCEINLINE static uint32 __PPO__SabotagePoint() { return STRUCT_OFFSET(ASBZLootProcessorBase, SabotagePoint); } \
	FORCEINLINE static uint32 __PPO__SabotageRestoreState() { return STRUCT_OFFSET(ASBZLootProcessorBase, SabotageRestoreState); } \
	FORCEINLINE static uint32 __PPO__BagTypeToReturn() { return STRUCT_OFFSET(ASBZLootProcessorBase, BagTypeToReturn); } \
	FORCEINLINE static uint32 __PPO__MarkerID() { return STRUCT_OFFSET(ASBZLootProcessorBase, MarkerID); } \
	FORCEINLINE static uint32 __PPO__MarkerComponentSelector() { return STRUCT_OFFSET(ASBZLootProcessorBase, MarkerComponentSelector); } \
	FORCEINLINE static uint32 __PPO__MarkerComponent() { return STRUCT_OFFSET(ASBZLootProcessorBase, MarkerComponent); } \
	FORCEINLINE static uint32 __PPO__BagFilter() { return STRUCT_OFFSET(ASBZLootProcessorBase, BagFilter); } \
	FORCEINLINE static uint32 __PPO__BagHandleQueue() { return STRUCT_OFFSET(ASBZLootProcessorBase, BagHandleQueue); } \
	FORCEINLINE static uint32 __PPO__CurrentBag() { return STRUCT_OFFSET(ASBZLootProcessorBase, CurrentBag); } \
	FORCEINLINE static uint32 __PPO__AllowedBagTypeArray() { return STRUCT_OFFSET(ASBZLootProcessorBase, AllowedBagTypeArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLootProcessorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLootProcessorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
