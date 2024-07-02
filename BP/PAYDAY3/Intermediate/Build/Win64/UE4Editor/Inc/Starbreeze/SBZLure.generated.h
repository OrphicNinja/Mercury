// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class EPD3HeistState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZLure_generated_h
#error "SBZLure.generated.h already included, missing '#pragma once' in SBZLure.h"
#endif
#define STARBREEZE_SBZLure_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_RPC_WRAPPERS \
	virtual void Multicast_StopEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execHandleHeistStateChanged); \
	DECLARE_FUNCTION(execMakeLureNoise); \
	DECLARE_FUNCTION(execMulticast_StopEffects); \
	DECLARE_FUNCTION(execOnClientCompleteInteraction); \
	DECLARE_FUNCTION(execOnRep_IsPlayingEffects); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StopEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execHandleHeistStateChanged); \
	DECLARE_FUNCTION(execMakeLureNoise); \
	DECLARE_FUNCTION(execMulticast_StopEffects); \
	DECLARE_FUNCTION(execOnClientCompleteInteraction); \
	DECLARE_FUNCTION(execOnRep_IsPlayingEffects); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_EVENT_PARMS \
	struct SBZLure_eventOnActiveStateChanged_Parms \
	{ \
		bool bIsActive; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLure(); \
	friend struct Z_Construct_UClass_ASBZLure_Statics; \
public: \
	DECLARE_CLASS(ASBZLure, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLure) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZLure*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPlayingEffects=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPlayingEffects	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASBZLure(); \
	friend struct Z_Construct_UClass_ASBZLure_Statics; \
public: \
	DECLARE_CLASS(ASBZLure, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLure) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZLure*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPlayingEffects=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPlayingEffects	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLure(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLure) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLure); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLure(ASBZLure&&); \
	NO_API ASBZLure(const ASBZLure&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLure(ASBZLure&&); \
	NO_API ASBZLure(const ASBZLure&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLure); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLure)


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LureRange() { return STRUCT_OFFSET(ASBZLure, LureRange); } \
	FORCEINLINE static uint32 __PPO__LureNoiseStartEvent() { return STRUCT_OFFSET(ASBZLure, LureNoiseStartEvent); } \
	FORCEINLINE static uint32 __PPO__LureNoiseStopEvent() { return STRUCT_OFFSET(ASBZLure, LureNoiseStopEvent); } \
	FORCEINLINE static uint32 __PPO__LureActiveEffect() { return STRUCT_OFFSET(ASBZLure, LureActiveEffect); } \
	FORCEINLINE static uint32 __PPO__EffectOffset() { return STRUCT_OFFSET(ASBZLure, EffectOffset); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(ASBZLure, Duration); } \
	FORCEINLINE static uint32 __PPO__InitialDelay() { return STRUCT_OFFSET(ASBZLure, InitialDelay); } \
	FORCEINLINE static uint32 __PPO__bIsRepeatable() { return STRUCT_OFFSET(ASBZLure, bIsRepeatable); } \
	FORCEINLINE static uint32 __PPO__RepeatableCooldown() { return STRUCT_OFFSET(ASBZLure, RepeatableCooldown); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZLure, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZLure, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionComponent() { return STRUCT_OFFSET(ASBZLure, LifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionInstance() { return STRUCT_OFFSET(ASBZLure, LifeActionInstance); } \
	FORCEINLINE static uint32 __PPO__LifeActionSlot() { return STRUCT_OFFSET(ASBZLure, LifeActionSlot); } \
	FORCEINLINE static uint32 __PPO__CurrentInvestigator() { return STRUCT_OFFSET(ASBZLure, CurrentInvestigator); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZLure, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__LureSoundComponent() { return STRUCT_OFFSET(ASBZLure, LureSoundComponent); } \
	FORCEINLINE static uint32 __PPO__EffectComponent() { return STRUCT_OFFSET(ASBZLure, EffectComponent); } \
	FORCEINLINE static uint32 __PPO__bIsPlayingEffects() { return STRUCT_OFFSET(ASBZLure, bIsPlayingEffects); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_24_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLure_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLure>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLure_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
