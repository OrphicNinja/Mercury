// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChatMessage;
#ifdef STARBREEZE_SBZChatReplicatedProxy_generated_h
#error "SBZChatReplicatedProxy.generated.h already included, missing '#pragma once' in SBZChatReplicatedProxy.h"
#endif
#define STARBREEZE_SBZChatReplicatedProxy_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_RPC_WRAPPERS \
	virtual bool ClientSendChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void ClientSendChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool MulticastReceiveChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void MulticastReceiveChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool ServerSendChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void ServerSendChatMessage_Implementation(FSBZChatMessage const& Message); \
 \
	DECLARE_FUNCTION(execClientSendChatMessage); \
	DECLARE_FUNCTION(execMulticastReceiveChatMessage); \
	DECLARE_FUNCTION(execServerSendChatMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ClientSendChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void ClientSendChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool MulticastReceiveChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void MulticastReceiveChatMessage_Implementation(FSBZChatMessage const& Message); \
	virtual bool ServerSendChatMessage_Validate(FSBZChatMessage const& ); \
	virtual void ServerSendChatMessage_Implementation(FSBZChatMessage const& Message); \
 \
	DECLARE_FUNCTION(execClientSendChatMessage); \
	DECLARE_FUNCTION(execMulticastReceiveChatMessage); \
	DECLARE_FUNCTION(execServerSendChatMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_EVENT_PARMS \
	struct SBZChatReplicatedProxy_eventClientSendChatMessage_Parms \
	{ \
		FSBZChatMessage Message; \
	}; \
	struct SBZChatReplicatedProxy_eventMulticastReceiveChatMessage_Parms \
	{ \
		FSBZChatMessage Message; \
	}; \
	struct SBZChatReplicatedProxy_eventServerSendChatMessage_Parms \
	{ \
		FSBZChatMessage Message; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZChatReplicatedProxy(); \
	friend struct Z_Construct_UClass_ASBZChatReplicatedProxy_Statics; \
public: \
	DECLARE_CLASS(ASBZChatReplicatedProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZChatReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZChatReplicatedProxy(); \
	friend struct Z_Construct_UClass_ASBZChatReplicatedProxy_Statics; \
public: \
	DECLARE_CLASS(ASBZChatReplicatedProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZChatReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZChatReplicatedProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZChatReplicatedProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZChatReplicatedProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZChatReplicatedProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZChatReplicatedProxy(ASBZChatReplicatedProxy&&); \
	NO_API ASBZChatReplicatedProxy(const ASBZChatReplicatedProxy&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZChatReplicatedProxy(ASBZChatReplicatedProxy&&); \
	NO_API ASBZChatReplicatedProxy(const ASBZChatReplicatedProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZChatReplicatedProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZChatReplicatedProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZChatReplicatedProxy)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZChatReplicatedProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZChatReplicatedProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
