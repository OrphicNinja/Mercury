// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZReactionType : uint8;
enum class ESBZEventReactorState : uint8;
struct FSBZPlayerDefeatStateChangedData;
#ifdef STARBREEZE_SBZPlayerEventReactor_generated_h
#error "SBZPlayerEventReactor.generated.h already included, missing '#pragma once' in SBZPlayerEventReactor.h"
#endif
#define STARBREEZE_SBZPlayerEventReactor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_RPC_WRAPPERS \
	virtual void Multicast_PlayAudioReaction_Implementation(const int32 AudioScreenIndex, ESBZReactionType ReactionType); \
	virtual void Multicast_SetState_Implementation(ESBZEventReactorState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_PlayAudioReaction); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnECMJammerCountChanged); \
	DECLARE_FUNCTION(execOnPlayerDefeatStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayAudioReaction_Implementation(const int32 AudioScreenIndex, ESBZReactionType ReactionType); \
	virtual void Multicast_SetState_Implementation(ESBZEventReactorState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_PlayAudioReaction); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnECMJammerCountChanged); \
	DECLARE_FUNCTION(execOnPlayerDefeatStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_EVENT_PARMS \
	struct SBZPlayerEventReactor_eventMulticast_PlayAudioReaction_Parms \
	{ \
		int32 AudioScreenIndex; \
		ESBZReactionType ReactionType; \
	}; \
	struct SBZPlayerEventReactor_eventMulticast_SetState_Parms \
	{ \
		ESBZEventReactorState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerEventReactor(); \
	friend struct Z_Construct_UClass_ASBZPlayerEventReactor_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerEventReactor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerEventReactor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerEventReactor(); \
	friend struct Z_Construct_UClass_ASBZPlayerEventReactor_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerEventReactor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerEventReactor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerEventReactor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerEventReactor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerEventReactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerEventReactor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerEventReactor(ASBZPlayerEventReactor&&); \
	NO_API ASBZPlayerEventReactor(const ASBZPlayerEventReactor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerEventReactor(ASBZPlayerEventReactor&&); \
	NO_API ASBZPlayerEventReactor(const ASBZPlayerEventReactor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerEventReactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerEventReactor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerEventReactor)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioScreenArray() { return STRUCT_OFFSET(ASBZPlayerEventReactor, AudioScreenArray); } \
	FORCEINLINE static uint32 __PPO__PlayerStateArray() { return STRUCT_OFFSET(ASBZPlayerEventReactor, PlayerStateArray); } \
	FORCEINLINE static uint32 __PPO__EventCooldown() { return STRUCT_OFFSET(ASBZPlayerEventReactor, EventCooldown); } \
	FORCEINLINE static uint32 __PPO__LastPlayedTime() { return STRUCT_OFFSET(ASBZPlayerEventReactor, LastPlayedTime); } \
	FORCEINLINE static uint32 __PPO__EventReactionArray() { return STRUCT_OFFSET(ASBZPlayerEventReactor, EventReactionArray); } \
	FORCEINLINE static uint32 __PPO__ReactorStateArray() { return STRUCT_OFFSET(ASBZPlayerEventReactor, ReactorStateArray); } \
	FORCEINLINE static uint32 __PPO__PlayerCommentDelay() { return STRUCT_OFFSET(ASBZPlayerEventReactor, PlayerCommentDelay); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZPlayerEventReactor, CurrentState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerEventReactor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerEventReactor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
