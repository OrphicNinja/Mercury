// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FSBZPartyMemberInfo;
#ifdef STARBREEZE_SBZPartyClient_generated_h
#error "SBZPartyClient.generated.h already included, missing '#pragma once' in SBZPartyClient.h"
#endif
#define STARBREEZE_SBZPartyClient_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_RPC_WRAPPERS \
	virtual void ClientLoginAck_Implementation(FUniqueNetIdRepl const& InNetId, bool bWasSuccessful); \
	virtual void ConnectToLobby_Implementation(const FString& InLobbyNetId); \
	virtual void LeaveLobby_Implementation(); \
	virtual bool ServerLogin_Validate(FSBZPartyMemberInfo const& ); \
	virtual void ServerLogin_Implementation(FSBZPartyMemberInfo const& Client); \
	virtual bool ServerNotifyFailedToJoinLobby_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerNotifyFailedToJoinLobby_Implementation(FUniqueNetIdRepl const& ClientId); \
	virtual bool ServerNotifyJoinedLobby_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerNotifyJoinedLobby_Implementation(FUniqueNetIdRepl const& ClientId); \
	virtual bool ServerNotifyLeftLobby_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerNotifyLeftLobby_Implementation(FUniqueNetIdRepl const& ClientId); \
 \
	DECLARE_FUNCTION(execClientLoginAck); \
	DECLARE_FUNCTION(execConnectToLobby); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execOnRep_PartyState); \
	DECLARE_FUNCTION(execServerLogin); \
	DECLARE_FUNCTION(execServerNotifyFailedToJoinLobby); \
	DECLARE_FUNCTION(execServerNotifyJoinedLobby); \
	DECLARE_FUNCTION(execServerNotifyLeftLobby);


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientLoginAck_Implementation(FUniqueNetIdRepl const& InNetId, bool bWasSuccessful); \
	virtual void ConnectToLobby_Implementation(const FString& InLobbyNetId); \
	virtual void LeaveLobby_Implementation(); \
	virtual bool ServerLogin_Validate(FSBZPartyMemberInfo const& ); \
	virtual void ServerLogin_Implementation(FSBZPartyMemberInfo const& Client); \
	virtual bool ServerNotifyFailedToJoinLobby_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerNotifyFailedToJoinLobby_Implementation(FUniqueNetIdRepl const& ClientId); \
	virtual bool ServerNotifyJoinedLobby_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerNotifyJoinedLobby_Implementation(FUniqueNetIdRepl const& ClientId); \
	virtual bool ServerNotifyLeftLobby_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerNotifyLeftLobby_Implementation(FUniqueNetIdRepl const& ClientId); \
 \
	DECLARE_FUNCTION(execClientLoginAck); \
	DECLARE_FUNCTION(execConnectToLobby); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execOnRep_PartyState); \
	DECLARE_FUNCTION(execServerLogin); \
	DECLARE_FUNCTION(execServerNotifyFailedToJoinLobby); \
	DECLARE_FUNCTION(execServerNotifyJoinedLobby); \
	DECLARE_FUNCTION(execServerNotifyLeftLobby);


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_EVENT_PARMS \
	struct SBZPartyClient_eventClientLoginAck_Parms \
	{ \
		FUniqueNetIdRepl InNetId; \
		bool bWasSuccessful; \
	}; \
	struct SBZPartyClient_eventConnectToLobby_Parms \
	{ \
		FString InLobbyNetId; \
	}; \
	struct SBZPartyClient_eventServerLogin_Parms \
	{ \
		FSBZPartyMemberInfo Client; \
	}; \
	struct SBZPartyClient_eventServerNotifyFailedToJoinLobby_Parms \
	{ \
		FUniqueNetIdRepl ClientId; \
	}; \
	struct SBZPartyClient_eventServerNotifyJoinedLobby_Parms \
	{ \
		FUniqueNetIdRepl ClientId; \
	}; \
	struct SBZPartyClient_eventServerNotifyLeftLobby_Parms \
	{ \
		FUniqueNetIdRepl ClientId; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPartyClient(); \
	friend struct Z_Construct_UClass_USBZPartyClient_Statics; \
public: \
	DECLARE_CLASS(USBZPartyClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPartyClient) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PartyState=NETFIELD_REP_START, \
		NETFIELD_REP_END=PartyState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USBZPartyClient) \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPartyClient(); \
	friend struct Z_Construct_UClass_USBZPartyClient_Statics; \
public: \
	DECLARE_CLASS(USBZPartyClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPartyClient) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PartyState=NETFIELD_REP_START, \
		NETFIELD_REP_END=PartyState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USBZPartyClient) \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPartyClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPartyClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPartyClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPartyClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPartyClient(USBZPartyClient&&); \
	NO_API USBZPartyClient(const USBZPartyClient&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPartyClient(USBZPartyClient&&); \
	NO_API USBZPartyClient(const USBZPartyClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPartyClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPartyClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPartyClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PartyState() { return STRUCT_OFFSET(USBZPartyClient, PartyState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPartyClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPartyClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
