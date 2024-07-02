// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANavigationData;
#ifdef STARBREEZE_SBZAgentManager_generated_h
#error "SBZAgentManager.generated.h already included, missing '#pragma once' in SBZAgentManager.h"
#endif
#define STARBREEZE_SBZAgentManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_RPC_WRAPPERS \
	virtual bool ClientInitializedRPC_Validate(uint64 ); \
	virtual void ClientInitializedRPC_Implementation(uint64 ClientId); \
	virtual void ClientReliableRPC_Implementation(TArray<uint8> const& Data); \
	virtual void ClientUnreliableRPC_Implementation(TArray<uint8> const& Data); \
	virtual void HandshakeReplyRPC_Implementation(const FString& Challenge, uint64 PrivateId); \
	virtual bool HandshakeRPC_Validate(const FString& ); \
	virtual void HandshakeRPC_Implementation(const FString& Challenge); \
	virtual bool ServerReliableRPC_Validate(uint64 , TArray<uint8> const& ); \
	virtual void ServerReliableRPC_Implementation(uint64 ClientId, TArray<uint8> const& Data); \
	virtual bool ServerUnreliableRPC_Validate(uint64 , TArray<uint8> const& ); \
	virtual void ServerUnreliableRPC_Implementation(uint64 ClientId, TArray<uint8> const& Data); \
 \
	DECLARE_FUNCTION(execClientInitializedRPC); \
	DECLARE_FUNCTION(execClientReliableRPC); \
	DECLARE_FUNCTION(execClientUnreliableRPC); \
	DECLARE_FUNCTION(execHandleNavDataRegistered); \
	DECLARE_FUNCTION(execHandshakeReplyRPC); \
	DECLARE_FUNCTION(execHandshakeRPC); \
	DECLARE_FUNCTION(execServerReliableRPC); \
	DECLARE_FUNCTION(execServerUnreliableRPC);


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ClientInitializedRPC_Validate(uint64 ); \
	virtual void ClientInitializedRPC_Implementation(uint64 ClientId); \
	virtual void ClientReliableRPC_Implementation(TArray<uint8> const& Data); \
	virtual void ClientUnreliableRPC_Implementation(TArray<uint8> const& Data); \
	virtual void HandshakeReplyRPC_Implementation(const FString& Challenge, uint64 PrivateId); \
	virtual bool HandshakeRPC_Validate(const FString& ); \
	virtual void HandshakeRPC_Implementation(const FString& Challenge); \
	virtual bool ServerReliableRPC_Validate(uint64 , TArray<uint8> const& ); \
	virtual void ServerReliableRPC_Implementation(uint64 ClientId, TArray<uint8> const& Data); \
	virtual bool ServerUnreliableRPC_Validate(uint64 , TArray<uint8> const& ); \
	virtual void ServerUnreliableRPC_Implementation(uint64 ClientId, TArray<uint8> const& Data); \
 \
	DECLARE_FUNCTION(execClientInitializedRPC); \
	DECLARE_FUNCTION(execClientReliableRPC); \
	DECLARE_FUNCTION(execClientUnreliableRPC); \
	DECLARE_FUNCTION(execHandleNavDataRegistered); \
	DECLARE_FUNCTION(execHandshakeReplyRPC); \
	DECLARE_FUNCTION(execHandshakeRPC); \
	DECLARE_FUNCTION(execServerReliableRPC); \
	DECLARE_FUNCTION(execServerUnreliableRPC);


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_EVENT_PARMS \
	struct SBZAgentManager_eventClientInitializedRPC_Parms \
	{ \
		uint64 ClientId; \
	}; \
	struct SBZAgentManager_eventClientReliableRPC_Parms \
	{ \
		TArray<uint8> Data; \
	}; \
	struct SBZAgentManager_eventClientUnreliableRPC_Parms \
	{ \
		TArray<uint8> Data; \
	}; \
	struct SBZAgentManager_eventHandshakeReplyRPC_Parms \
	{ \
		FString Challenge; \
		uint64 PrivateId; \
	}; \
	struct SBZAgentManager_eventHandshakeRPC_Parms \
	{ \
		FString Challenge; \
	}; \
	struct SBZAgentManager_eventServerReliableRPC_Parms \
	{ \
		uint64 ClientId; \
		TArray<uint8> Data; \
	}; \
	struct SBZAgentManager_eventServerUnreliableRPC_Parms \
	{ \
		uint64 ClientId; \
		TArray<uint8> Data; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAgentManager(); \
	friend struct Z_Construct_UClass_USBZAgentManager_Statics; \
public: \
	DECLARE_CLASS(USBZAgentManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAgentManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAgentManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAgentManager(); \
	friend struct Z_Construct_UClass_USBZAgentManager_Statics; \
public: \
	DECLARE_CLASS(USBZAgentManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAgentManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAgentManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAgentManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAgentManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAgentManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAgentManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAgentManager(USBZAgentManager&&); \
	NO_API USBZAgentManager(const USBZAgentManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAgentManager(USBZAgentManager&&); \
	NO_API USBZAgentManager(const USBZAgentManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAgentManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAgentManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAgentManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PostPhysicsTickFunction() { return STRUCT_OFFSET(USBZAgentManager, PostPhysicsTickFunction); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAgentManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAgentManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
