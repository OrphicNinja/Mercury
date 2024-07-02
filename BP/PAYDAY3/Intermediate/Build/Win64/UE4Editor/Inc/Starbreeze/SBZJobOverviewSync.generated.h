// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlackScreenTransitionType : uint8;
struct FUniqueNetIdRepl;
struct FSBZPlayersReadyStatusStateArray;
#ifdef STARBREEZE_SBZJobOverviewSync_generated_h
#error "SBZJobOverviewSync.generated.h already included, missing '#pragma once' in SBZJobOverviewSync.h"
#endif
#define STARBREEZE_SBZJobOverviewSync_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_RPC_WRAPPERS \
	virtual void ClientMoveToBlackScreenReceived_Implementation(EBlackScreenTransitionType BlackScreenTransitionType); \
	virtual void ClientMoveToBlackScreenSinglePlayerReceived_Implementation(FUniqueNetIdRepl const& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType); \
	virtual void ClientWaitsForReadyReceived_Implementation(FUniqueNetIdRepl const& PlayerId); \
	virtual void NotifyActionPhaseReady_Implementation(); \
	virtual void NotifyClientCurrentReadyTimeoutTimeReceived_Implementation(int32 ReadyTimeoutTime); \
	virtual void NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Implementation(FUniqueNetIdRepl const& PlayerId, int32 ReadyTimeoutTime); \
	virtual void NotifyClientMissionEnd_Implementation(); \
	virtual void NotifyClientProceedToActionPhase_Implementation(); \
	virtual void ServerPlayerReadyToEnterActionPhaseReceived_Implementation(FUniqueNetIdRepl const& PlayerId); \
	virtual void ServerSetPlayerJobOverviewReady_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void UpdateReadyClientStatusReceived_Implementation(FSBZPlayersReadyStatusStateArray const& PlayersReadyStatus); \
 \
	DECLARE_FUNCTION(execClientMoveToBlackScreen); \
	DECLARE_FUNCTION(execClientMoveToBlackScreenReceived); \
	DECLARE_FUNCTION(execClientMoveToBlackScreenSinglePlayer); \
	DECLARE_FUNCTION(execClientMoveToBlackScreenSinglePlayerReceived); \
	DECLARE_FUNCTION(execClientWaitsForReady); \
	DECLARE_FUNCTION(execClientWaitsForReadyReceived); \
	DECLARE_FUNCTION(execNotifyActionPhaseReady); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTime); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTimeReceived); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTimeSinglePlayer); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived); \
	DECLARE_FUNCTION(execNotifyClientMissionEnd); \
	DECLARE_FUNCTION(execNotifyClientProceedToActionPhase); \
	DECLARE_FUNCTION(execSendPlayerJobOverviewReady); \
	DECLARE_FUNCTION(execSendServerPlayerReadyToEnterActionPhase); \
	DECLARE_FUNCTION(execServerPlayerReadyToEnterActionPhaseReceived); \
	DECLARE_FUNCTION(execServerSetPlayerJobOverviewReady); \
	DECLARE_FUNCTION(execUpdateReadyClientStatus); \
	DECLARE_FUNCTION(execUpdateReadyClientStatusReceived);


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientMoveToBlackScreenReceived_Implementation(EBlackScreenTransitionType BlackScreenTransitionType); \
	virtual void ClientMoveToBlackScreenSinglePlayerReceived_Implementation(FUniqueNetIdRepl const& PlayerId, EBlackScreenTransitionType BlackScreenTransitionType); \
	virtual void ClientWaitsForReadyReceived_Implementation(FUniqueNetIdRepl const& PlayerId); \
	virtual void NotifyActionPhaseReady_Implementation(); \
	virtual void NotifyClientCurrentReadyTimeoutTimeReceived_Implementation(int32 ReadyTimeoutTime); \
	virtual void NotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Implementation(FUniqueNetIdRepl const& PlayerId, int32 ReadyTimeoutTime); \
	virtual void NotifyClientMissionEnd_Implementation(); \
	virtual void NotifyClientProceedToActionPhase_Implementation(); \
	virtual void ServerPlayerReadyToEnterActionPhaseReceived_Implementation(FUniqueNetIdRepl const& PlayerId); \
	virtual void ServerSetPlayerJobOverviewReady_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void UpdateReadyClientStatusReceived_Implementation(FSBZPlayersReadyStatusStateArray const& PlayersReadyStatus); \
 \
	DECLARE_FUNCTION(execClientMoveToBlackScreen); \
	DECLARE_FUNCTION(execClientMoveToBlackScreenReceived); \
	DECLARE_FUNCTION(execClientMoveToBlackScreenSinglePlayer); \
	DECLARE_FUNCTION(execClientMoveToBlackScreenSinglePlayerReceived); \
	DECLARE_FUNCTION(execClientWaitsForReady); \
	DECLARE_FUNCTION(execClientWaitsForReadyReceived); \
	DECLARE_FUNCTION(execNotifyActionPhaseReady); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTime); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTimeReceived); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTimeSinglePlayer); \
	DECLARE_FUNCTION(execNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived); \
	DECLARE_FUNCTION(execNotifyClientMissionEnd); \
	DECLARE_FUNCTION(execNotifyClientProceedToActionPhase); \
	DECLARE_FUNCTION(execSendPlayerJobOverviewReady); \
	DECLARE_FUNCTION(execSendServerPlayerReadyToEnterActionPhase); \
	DECLARE_FUNCTION(execServerPlayerReadyToEnterActionPhaseReceived); \
	DECLARE_FUNCTION(execServerSetPlayerJobOverviewReady); \
	DECLARE_FUNCTION(execUpdateReadyClientStatus); \
	DECLARE_FUNCTION(execUpdateReadyClientStatusReceived);


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_EVENT_PARMS \
	struct SBZJobOverviewSync_eventClientMoveToBlackScreenReceived_Parms \
	{ \
		EBlackScreenTransitionType BlackScreenTransitionType; \
	}; \
	struct SBZJobOverviewSync_eventClientMoveToBlackScreenSinglePlayerReceived_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
		EBlackScreenTransitionType BlackScreenTransitionType; \
	}; \
	struct SBZJobOverviewSync_eventClientWaitsForReadyReceived_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeReceived_Parms \
	{ \
		int32 ReadyTimeoutTime; \
	}; \
	struct SBZJobOverviewSync_eventNotifyClientCurrentReadyTimeoutTimeSinglePlayerReceived_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
		int32 ReadyTimeoutTime; \
	}; \
	struct SBZJobOverviewSync_eventServerPlayerReadyToEnterActionPhaseReceived_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct SBZJobOverviewSync_eventServerSetPlayerJobOverviewReady_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZJobOverviewSync_eventUpdateReadyClientStatusReceived_Parms \
	{ \
		FSBZPlayersReadyStatusStateArray PlayersReadyStatus; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZJobOverviewSync(); \
	friend struct Z_Construct_UClass_ASBZJobOverviewSync_Statics; \
public: \
	DECLARE_CLASS(ASBZJobOverviewSync, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZJobOverviewSync)


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZJobOverviewSync(); \
	friend struct Z_Construct_UClass_ASBZJobOverviewSync_Statics; \
public: \
	DECLARE_CLASS(ASBZJobOverviewSync, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZJobOverviewSync)


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZJobOverviewSync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZJobOverviewSync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZJobOverviewSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZJobOverviewSync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZJobOverviewSync(ASBZJobOverviewSync&&); \
	NO_API ASBZJobOverviewSync(const ASBZJobOverviewSync&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZJobOverviewSync(ASBZJobOverviewSync&&); \
	NO_API ASBZJobOverviewSync(const ASBZJobOverviewSync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZJobOverviewSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZJobOverviewSync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZJobOverviewSync)


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZJobOverviewSync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZJobOverviewSync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
