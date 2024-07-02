// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
enum class ESBZVotingAnswer : uint8;
enum class ESBZVotingType : uint8;
struct FDateTime;
#ifdef STARBREEZE_SBZVotingReplicatedProxy_generated_h
#error "SBZVotingReplicatedProxy.generated.h already included, missing '#pragma once' in SBZVotingReplicatedProxy.h"
#endif
#define STARBREEZE_SBZVotingReplicatedProxy_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_RPC_WRAPPERS \
	virtual void MulticastClearCurrentVote_Implementation(); \
	virtual void MulticastExecuteAction_Implementation(); \
	virtual void MulticastReceiveChatMessage_Implementation(const FString& Message); \
	virtual void MulticastReceiveClientDisconnected_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void MulticastReceiveLocalizedChatMessage_Implementation(const FString& FormatTableId, const FString& FormatLocaleKey, TArray<FString> const& ExportedArgsNames, TArray<FString> const& ExportedArgsStrings, TArray<FString> const& ArgsToLocalizeNames, TArray<FString> const& ArgsToLocalizeTableIds, TArray<FString> const& ArgsToLocalizeLocaleKeys); \
	virtual void MulticastReceiveVoteAnswer_Implementation(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer); \
	virtual void MulticastReceiveVoteInitiate_Implementation(ESBZVotingType VoteType, TArray<FString> const& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FUniqueNetIdRepl PlayerTargeted, FDateTime TimeStarted, TArray<FUniqueNetIdRepl> const& PlayersPending); \
	virtual void MulticastReceiveVoteRecall_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void Server_NotifyClientDisconnected_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void Server_NotifySendVoteAnswer_Implementation(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer); \
	virtual void Server_NotifySendVoteInitiate_Implementation(ESBZVotingType VoteType, TArray<FString> const& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FUniqueNetIdRepl PlayerTargeted, bool bVotePositive); \
	virtual void Server_NotifySendVoteRecall_Implementation(FUniqueNetIdRepl PlayerId); \
 \
	DECLARE_FUNCTION(execMulticastClearCurrentVote); \
	DECLARE_FUNCTION(execMulticastExecuteAction); \
	DECLARE_FUNCTION(execMulticastReceiveChatMessage); \
	DECLARE_FUNCTION(execMulticastReceiveClientDisconnected); \
	DECLARE_FUNCTION(execMulticastReceiveLocalizedChatMessage); \
	DECLARE_FUNCTION(execMulticastReceiveVoteAnswer); \
	DECLARE_FUNCTION(execMulticastReceiveVoteInitiate); \
	DECLARE_FUNCTION(execMulticastReceiveVoteRecall); \
	DECLARE_FUNCTION(execServer_NotifyClientDisconnected); \
	DECLARE_FUNCTION(execServer_NotifySendVoteAnswer); \
	DECLARE_FUNCTION(execServer_NotifySendVoteInitiate); \
	DECLARE_FUNCTION(execServer_NotifySendVoteRecall);


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastClearCurrentVote_Implementation(); \
	virtual void MulticastExecuteAction_Implementation(); \
	virtual void MulticastReceiveChatMessage_Implementation(const FString& Message); \
	virtual void MulticastReceiveClientDisconnected_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void MulticastReceiveLocalizedChatMessage_Implementation(const FString& FormatTableId, const FString& FormatLocaleKey, TArray<FString> const& ExportedArgsNames, TArray<FString> const& ExportedArgsStrings, TArray<FString> const& ArgsToLocalizeNames, TArray<FString> const& ArgsToLocalizeTableIds, TArray<FString> const& ArgsToLocalizeLocaleKeys); \
	virtual void MulticastReceiveVoteAnswer_Implementation(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer); \
	virtual void MulticastReceiveVoteInitiate_Implementation(ESBZVotingType VoteType, TArray<FString> const& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FUniqueNetIdRepl PlayerTargeted, FDateTime TimeStarted, TArray<FUniqueNetIdRepl> const& PlayersPending); \
	virtual void MulticastReceiveVoteRecall_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void Server_NotifyClientDisconnected_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void Server_NotifySendVoteAnswer_Implementation(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer); \
	virtual void Server_NotifySendVoteInitiate_Implementation(ESBZVotingType VoteType, TArray<FString> const& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FUniqueNetIdRepl PlayerTargeted, bool bVotePositive); \
	virtual void Server_NotifySendVoteRecall_Implementation(FUniqueNetIdRepl PlayerId); \
 \
	DECLARE_FUNCTION(execMulticastClearCurrentVote); \
	DECLARE_FUNCTION(execMulticastExecuteAction); \
	DECLARE_FUNCTION(execMulticastReceiveChatMessage); \
	DECLARE_FUNCTION(execMulticastReceiveClientDisconnected); \
	DECLARE_FUNCTION(execMulticastReceiveLocalizedChatMessage); \
	DECLARE_FUNCTION(execMulticastReceiveVoteAnswer); \
	DECLARE_FUNCTION(execMulticastReceiveVoteInitiate); \
	DECLARE_FUNCTION(execMulticastReceiveVoteRecall); \
	DECLARE_FUNCTION(execServer_NotifyClientDisconnected); \
	DECLARE_FUNCTION(execServer_NotifySendVoteAnswer); \
	DECLARE_FUNCTION(execServer_NotifySendVoteInitiate); \
	DECLARE_FUNCTION(execServer_NotifySendVoteRecall);


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_EVENT_PARMS \
	struct SBZVotingReplicatedProxy_eventMulticastReceiveChatMessage_Parms \
	{ \
		FString Message; \
	}; \
	struct SBZVotingReplicatedProxy_eventMulticastReceiveClientDisconnected_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct SBZVotingReplicatedProxy_eventMulticastReceiveLocalizedChatMessage_Parms \
	{ \
		FString FormatTableId; \
		FString FormatLocaleKey; \
		TArray<FString> ExportedArgsNames; \
		TArray<FString> ExportedArgsStrings; \
		TArray<FString> ArgsToLocalizeNames; \
		TArray<FString> ArgsToLocalizeTableIds; \
		TArray<FString> ArgsToLocalizeLocaleKeys; \
	}; \
	struct SBZVotingReplicatedProxy_eventMulticastReceiveVoteAnswer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
		ESBZVotingAnswer VotingAnswer; \
	}; \
	struct SBZVotingReplicatedProxy_eventMulticastReceiveVoteInitiate_Parms \
	{ \
		ESBZVotingType VoteType; \
		TArray<FString> VoteInitArgs; \
		FUniqueNetIdRepl PlayerInitiated; \
		FUniqueNetIdRepl PlayerTargeted; \
		FDateTime TimeStarted; \
		TArray<FUniqueNetIdRepl> PlayersPending; \
	}; \
	struct SBZVotingReplicatedProxy_eventMulticastReceiveVoteRecall_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct SBZVotingReplicatedProxy_eventServer_NotifyClientDisconnected_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct SBZVotingReplicatedProxy_eventServer_NotifySendVoteAnswer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
		ESBZVotingAnswer VotingAnswer; \
	}; \
	struct SBZVotingReplicatedProxy_eventServer_NotifySendVoteInitiate_Parms \
	{ \
		ESBZVotingType VoteType; \
		TArray<FString> VoteInitArgs; \
		FUniqueNetIdRepl PlayerInitiated; \
		FUniqueNetIdRepl PlayerTargeted; \
		bool bVotePositive; \
	}; \
	struct SBZVotingReplicatedProxy_eventServer_NotifySendVoteRecall_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZVotingReplicatedProxy(); \
	friend struct Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics; \
public: \
	DECLARE_CLASS(ASBZVotingReplicatedProxy, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZVotingReplicatedProxy) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDummy=NETFIELD_REP_START, \
		NETFIELD_REP_END=bDummy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZVotingReplicatedProxy(); \
	friend struct Z_Construct_UClass_ASBZVotingReplicatedProxy_Statics; \
public: \
	DECLARE_CLASS(ASBZVotingReplicatedProxy, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZVotingReplicatedProxy) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDummy=NETFIELD_REP_START, \
		NETFIELD_REP_END=bDummy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZVotingReplicatedProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZVotingReplicatedProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZVotingReplicatedProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZVotingReplicatedProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZVotingReplicatedProxy(ASBZVotingReplicatedProxy&&); \
	NO_API ASBZVotingReplicatedProxy(const ASBZVotingReplicatedProxy&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZVotingReplicatedProxy(ASBZVotingReplicatedProxy&&); \
	NO_API ASBZVotingReplicatedProxy(const ASBZVotingReplicatedProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZVotingReplicatedProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZVotingReplicatedProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZVotingReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZVotingReplicatedProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVotingReplicatedProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
