// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
enum class ESBZKickingMode : uint8;
enum class ESBZKickingError : uint8;
struct FSBZKickingInfo;
struct FSBZChatMessage;
#ifdef STARBREEZE_SBZOnlineBeaconClient_generated_h
#error "SBZOnlineBeaconClient.generated.h already included, missing '#pragma once' in SBZOnlineBeaconClient.h"
#endif
#define STARBREEZE_SBZOnlineBeaconClient_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_RPC_WRAPPERS \
	virtual bool HandleKicked_Validate(); \
	virtual void HandleKicked_Implementation(); \
	virtual bool InitiateKickRequest_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void InitiateKickRequest_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
	virtual bool KickFailed_Validate(ESBZKickingError ); \
	virtual void KickFailed_Implementation(ESBZKickingError KickingError); \
	virtual bool KickingInProgress_Validate(FSBZKickingInfo ); \
	virtual void KickingInProgress_Implementation(FSBZKickingInfo NewKickingInfo); \
	virtual bool ReceiveChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void ReceiveChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool SendChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void SendChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool VoteToKick_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void VoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
 \
	DECLARE_FUNCTION(execHandleKicked); \
	DECLARE_FUNCTION(execInitiateKickRequest); \
	DECLARE_FUNCTION(execKickFailed); \
	DECLARE_FUNCTION(execKickingInProgress); \
	DECLARE_FUNCTION(execReceiveChatMessage); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execVoteToKick);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool HandleKicked_Validate(); \
	virtual void HandleKicked_Implementation(); \
	virtual bool InitiateKickRequest_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void InitiateKickRequest_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
	virtual bool KickFailed_Validate(ESBZKickingError ); \
	virtual void KickFailed_Implementation(ESBZKickingError KickingError); \
	virtual bool KickingInProgress_Validate(FSBZKickingInfo ); \
	virtual void KickingInProgress_Implementation(FSBZKickingInfo NewKickingInfo); \
	virtual bool ReceiveChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void ReceiveChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool SendChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void SendChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool VoteToKick_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void VoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
 \
	DECLARE_FUNCTION(execHandleKicked); \
	DECLARE_FUNCTION(execInitiateKickRequest); \
	DECLARE_FUNCTION(execKickFailed); \
	DECLARE_FUNCTION(execKickingInProgress); \
	DECLARE_FUNCTION(execReceiveChatMessage); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execVoteToKick);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_EVENT_PARMS \
	struct SBZOnlineBeaconClient_eventInitiateKickRequest_Parms \
	{ \
		FUniqueNetIdRepl PlayerIdToKick; \
		FUniqueNetIdRepl PlayerProposingKick; \
		ESBZKickingMode ModeKick; \
	}; \
	struct SBZOnlineBeaconClient_eventKickFailed_Parms \
	{ \
		ESBZKickingError KickingError; \
	}; \
	struct SBZOnlineBeaconClient_eventKickingInProgress_Parms \
	{ \
		FSBZKickingInfo NewKickingInfo; \
	}; \
	struct SBZOnlineBeaconClient_eventReceiveChatMessage_Parms \
	{ \
		FSBZChatMessage Message; \
	}; \
	struct SBZOnlineBeaconClient_eventSendChatMessage_Parms \
	{ \
		FSBZChatMessage Message; \
	}; \
	struct SBZOnlineBeaconClient_eventVoteToKick_Parms \
	{ \
		FUniqueNetIdRepl PlayerIdToKick; \
		FUniqueNetIdRepl PlayerProposingKick; \
		ESBZKickingMode ModeKick; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_ASBZOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASBZOnlineBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZOnlineBeaconClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_ASBZOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASBZOnlineBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZOnlineBeaconClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZOnlineBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZOnlineBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZOnlineBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZOnlineBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZOnlineBeaconClient(ASBZOnlineBeaconClient&&); \
	NO_API ASBZOnlineBeaconClient(const ASBZOnlineBeaconClient&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZOnlineBeaconClient(ASBZOnlineBeaconClient&&); \
	NO_API ASBZOnlineBeaconClient(const ASBZOnlineBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZOnlineBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZOnlineBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZOnlineBeaconClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZOnlineBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineBeaconClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
