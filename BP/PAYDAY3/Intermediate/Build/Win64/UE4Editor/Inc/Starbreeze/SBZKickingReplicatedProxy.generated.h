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
#ifdef STARBREEZE_SBZKickingReplicatedProxy_generated_h
#error "SBZKickingReplicatedProxy.generated.h already included, missing '#pragma once' in SBZKickingReplicatedProxy.h"
#endif
#define STARBREEZE_SBZKickingReplicatedProxy_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_RPC_WRAPPERS \
	virtual bool InitiateKicking_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void InitiateKicking_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
	virtual bool KickFailed_Validate(FUniqueNetIdRepl , ESBZKickingError ); \
	virtual void KickFailed_Implementation(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode); \
	virtual bool KickPlayerFinal_Validate(FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void KickPlayerFinal_Implementation(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick); \
	virtual bool MulticastReceiveKickingInfo_Validate(FSBZKickingInfo const& ); \
	virtual void MulticastReceiveKickingInfo_Implementation(FSBZKickingInfo const& NewKickingInfo); \
	virtual bool OnKicked_Validate(FSBZKickingInfo ); \
	virtual void OnKicked_Implementation(FSBZKickingInfo NewKickingInfo); \
	virtual bool ServerSendKickingInfo_Validate(FSBZKickingInfo ); \
	virtual void ServerSendKickingInfo_Implementation(FSBZKickingInfo NewKickingInfo); \
	virtual bool VoteToKick_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void VoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
 \
	DECLARE_FUNCTION(execInitiateKicking); \
	DECLARE_FUNCTION(execKickFailed); \
	DECLARE_FUNCTION(execKickPlayerFinal); \
	DECLARE_FUNCTION(execMulticastReceiveKickingInfo); \
	DECLARE_FUNCTION(execOnKicked); \
	DECLARE_FUNCTION(execServerSendKickingInfo); \
	DECLARE_FUNCTION(execVoteToKick);


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool InitiateKicking_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void InitiateKicking_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
	virtual bool KickFailed_Validate(FUniqueNetIdRepl , ESBZKickingError ); \
	virtual void KickFailed_Implementation(FUniqueNetIdRepl PlayerProposed, ESBZKickingError ErrorCode); \
	virtual bool KickPlayerFinal_Validate(FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void KickPlayerFinal_Implementation(FUniqueNetIdRepl PlayerIdToKick, ESBZKickingMode ModeKick); \
	virtual bool MulticastReceiveKickingInfo_Validate(FSBZKickingInfo const& ); \
	virtual void MulticastReceiveKickingInfo_Implementation(FSBZKickingInfo const& NewKickingInfo); \
	virtual bool OnKicked_Validate(FSBZKickingInfo ); \
	virtual void OnKicked_Implementation(FSBZKickingInfo NewKickingInfo); \
	virtual bool ServerSendKickingInfo_Validate(FSBZKickingInfo ); \
	virtual void ServerSendKickingInfo_Implementation(FSBZKickingInfo NewKickingInfo); \
	virtual bool VoteToKick_Validate(FUniqueNetIdRepl , FUniqueNetIdRepl , ESBZKickingMode ); \
	virtual void VoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick); \
 \
	DECLARE_FUNCTION(execInitiateKicking); \
	DECLARE_FUNCTION(execKickFailed); \
	DECLARE_FUNCTION(execKickPlayerFinal); \
	DECLARE_FUNCTION(execMulticastReceiveKickingInfo); \
	DECLARE_FUNCTION(execOnKicked); \
	DECLARE_FUNCTION(execServerSendKickingInfo); \
	DECLARE_FUNCTION(execVoteToKick);


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_EVENT_PARMS \
	struct SBZKickingReplicatedProxy_eventInitiateKicking_Parms \
	{ \
		FUniqueNetIdRepl PlayerIdToKick; \
		FUniqueNetIdRepl PlayerProposingKick; \
		ESBZKickingMode ModeKick; \
	}; \
	struct SBZKickingReplicatedProxy_eventKickFailed_Parms \
	{ \
		FUniqueNetIdRepl PlayerProposed; \
		ESBZKickingError ErrorCode; \
	}; \
	struct SBZKickingReplicatedProxy_eventKickPlayerFinal_Parms \
	{ \
		FUniqueNetIdRepl PlayerIdToKick; \
		ESBZKickingMode ModeKick; \
	}; \
	struct SBZKickingReplicatedProxy_eventMulticastReceiveKickingInfo_Parms \
	{ \
		FSBZKickingInfo NewKickingInfo; \
	}; \
	struct SBZKickingReplicatedProxy_eventOnKicked_Parms \
	{ \
		FSBZKickingInfo NewKickingInfo; \
	}; \
	struct SBZKickingReplicatedProxy_eventServerSendKickingInfo_Parms \
	{ \
		FSBZKickingInfo NewKickingInfo; \
	}; \
	struct SBZKickingReplicatedProxy_eventVoteToKick_Parms \
	{ \
		FUniqueNetIdRepl PlayerIdToKick; \
		FUniqueNetIdRepl PlayerProposingKick; \
		ESBZKickingMode ModeKick; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZKickingReplicatedProxy(); \
	friend struct Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics; \
public: \
	DECLARE_CLASS(ASBZKickingReplicatedProxy, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZKickingReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZKickingReplicatedProxy(); \
	friend struct Z_Construct_UClass_ASBZKickingReplicatedProxy_Statics; \
public: \
	DECLARE_CLASS(ASBZKickingReplicatedProxy, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZKickingReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZKickingReplicatedProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZKickingReplicatedProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZKickingReplicatedProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZKickingReplicatedProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZKickingReplicatedProxy(ASBZKickingReplicatedProxy&&); \
	NO_API ASBZKickingReplicatedProxy(const ASBZKickingReplicatedProxy&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZKickingReplicatedProxy(ASBZKickingReplicatedProxy&&); \
	NO_API ASBZKickingReplicatedProxy(const ASBZKickingReplicatedProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZKickingReplicatedProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZKickingReplicatedProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZKickingReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZKickingReplicatedProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZKickingReplicatedProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
