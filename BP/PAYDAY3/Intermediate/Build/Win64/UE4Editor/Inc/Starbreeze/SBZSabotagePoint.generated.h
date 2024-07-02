// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class ESBZSabotagePointState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZSabotagePoint_generated_h
#error "SBZSabotagePoint.generated.h already included, missing '#pragma once' in SBZSabotagePoint.h"
#endif
#define STARBREEZE_SBZSabotagePoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_RPC_WRAPPERS \
	virtual void Multicast_SetState_Implementation(ESBZSabotagePointState NewState); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execBroadcastOnSabotaged); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnInteractionStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetState_Implementation(ESBZSabotagePointState NewState); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execBroadcastOnSabotaged); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnInteractionStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_EVENT_PARMS \
	struct SBZSabotagePoint_eventBP_StateChanged_Parms \
	{ \
		ESBZSabotagePointState OldState; \
		ESBZSabotagePointState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZSabotagePoint_eventMulticast_SetState_Parms \
	{ \
		ESBZSabotagePointState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSabotagePoint(); \
	friend struct Z_Construct_UClass_ASBZSabotagePoint_Statics; \
public: \
	DECLARE_CLASS(ASBZSabotagePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSabotagePoint) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSabotagePoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_INCLASS \
private: \
	static void StaticRegisterNativesASBZSabotagePoint(); \
	friend struct Z_Construct_UClass_ASBZSabotagePoint_Statics; \
public: \
	DECLARE_CLASS(ASBZSabotagePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSabotagePoint) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSabotagePoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSabotagePoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSabotagePoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSabotagePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSabotagePoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSabotagePoint(ASBZSabotagePoint&&); \
	NO_API ASBZSabotagePoint(const ASBZSabotagePoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSabotagePoint(ASBZSabotagePoint&&); \
	NO_API ASBZSabotagePoint(const ASBZSabotagePoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSabotagePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSabotagePoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSabotagePoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZSabotagePoint, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZSabotagePoint, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZSabotagePoint, MarkerAsset); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZSabotagePoint, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionComponent() { return STRUCT_OFFSET(ASBZSabotagePoint, LifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionInstance() { return STRUCT_OFFSET(ASBZSabotagePoint, LifeActionInstance); } \
	FORCEINLINE static uint32 __PPO__LifeActionSlot() { return STRUCT_OFFSET(ASBZSabotagePoint, LifeActionSlot); } \
	FORCEINLINE static uint32 __PPO__bIsReplicatingForCosmetics() { return STRUCT_OFFSET(ASBZSabotagePoint, bIsReplicatingForCosmetics); } \
	FORCEINLINE static uint32 __PPO__bIsInteractable() { return STRUCT_OFFSET(ASBZSabotagePoint, bIsInteractable); } \
	FORCEINLINE static uint32 __PPO__SabotageCooldownTime() { return STRUCT_OFFSET(ASBZSabotagePoint, SabotageCooldownTime); } \
	FORCEINLINE static uint32 __PPO__bDesiredEnabledState() { return STRUCT_OFFSET(ASBZSabotagePoint, bDesiredEnabledState); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZSabotagePoint, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__MarkerId() { return STRUCT_OFFSET(ASBZSabotagePoint, MarkerId); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZSabotagePoint, CurrentState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_23_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSabotagePoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSabotagePoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
