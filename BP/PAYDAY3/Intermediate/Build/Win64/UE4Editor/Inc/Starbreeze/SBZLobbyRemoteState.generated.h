// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZLobbyRemoteState_generated_h
#error "SBZLobbyRemoteState.generated.h already included, missing '#pragma once' in SBZLobbyRemoteState.h"
#endif
#define STARBREEZE_SBZLobbyRemoteState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_RPC_WRAPPERS \
	virtual void BroadcastRemotePlayerAcceptedMatch_Implementation(); \
	virtual void BroadcastWaitGameTimerStarted_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastRemotePlayerAcceptedMatch); \
	DECLARE_FUNCTION(execBroadcastWaitGameTimerStarted); \
	DECLARE_FUNCTION(execHandleGameStateChanged); \
	DECLARE_FUNCTION(execOnRep_LobbyInfo); \
	DECLARE_FUNCTION(execOnRep_LobbyTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BroadcastRemotePlayerAcceptedMatch_Implementation(); \
	virtual void BroadcastWaitGameTimerStarted_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastRemotePlayerAcceptedMatch); \
	DECLARE_FUNCTION(execBroadcastWaitGameTimerStarted); \
	DECLARE_FUNCTION(execHandleGameStateChanged); \
	DECLARE_FUNCTION(execOnRep_LobbyInfo); \
	DECLARE_FUNCTION(execOnRep_LobbyTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLobbyRemoteState(); \
	friend struct Z_Construct_UClass_ASBZLobbyRemoteState_Statics; \
public: \
	DECLARE_CLASS(ASBZLobbyRemoteState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLobbyRemoteState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersJoinInfo=NETFIELD_REP_START, \
		PlayersInfo, \
		LobbyTimeout, \
		NETFIELD_REP_END=LobbyTimeout	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZLobbyRemoteState(); \
	friend struct Z_Construct_UClass_ASBZLobbyRemoteState_Statics; \
public: \
	DECLARE_CLASS(ASBZLobbyRemoteState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLobbyRemoteState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersJoinInfo=NETFIELD_REP_START, \
		PlayersInfo, \
		LobbyTimeout, \
		NETFIELD_REP_END=LobbyTimeout	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLobbyRemoteState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLobbyRemoteState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLobbyRemoteState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLobbyRemoteState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLobbyRemoteState(ASBZLobbyRemoteState&&); \
	NO_API ASBZLobbyRemoteState(const ASBZLobbyRemoteState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLobbyRemoteState(ASBZLobbyRemoteState&&); \
	NO_API ASBZLobbyRemoteState(const ASBZLobbyRemoteState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLobbyRemoteState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLobbyRemoteState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLobbyRemoteState)


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LobbyTravelTimeoutTime() { return STRUCT_OFFSET(ASBZLobbyRemoteState, LobbyTravelTimeoutTime); } \
	FORCEINLINE static uint32 __PPO__CharacterInfoChanged() { return STRUCT_OFFSET(ASBZLobbyRemoteState, CharacterInfoChanged); } \
	FORCEINLINE static uint32 __PPO__LobbyTimeout() { return STRUCT_OFFSET(ASBZLobbyRemoteState, LobbyTimeout); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLobbyRemoteState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLobbyRemoteState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
