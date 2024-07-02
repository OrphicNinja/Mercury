// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
struct FSBZPlayerChatEvent;
struct FSBZPlayerCallEvent;
#ifdef STARBREEZE_SBZChatInGame_generated_h
#error "SBZChatInGame.generated.h already included, missing '#pragma once' in SBZChatInGame.h"
#endif
#define STARBREEZE_SBZChatInGame_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_RPC_WRAPPERS \
	virtual void ClientSubscribeToChatMessages_Implementation(); \
	virtual void MulticastCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex); \
	virtual void MulticastChatMessageReceived_Implementation(int32 PlayerId, FSBZPlayerChatEvent const& PlayerChatEvent); \
	virtual void ServerCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex); \
	virtual void ServerChatMessageReceived_Implementation(int32 PlayerId, FSBZPlayerChatEvent const& PlayerChatEvent); \
 \
	DECLARE_FUNCTION(execClientSubscribeToChatMessages); \
	DECLARE_FUNCTION(execMulticastCallMessageReceived); \
	DECLARE_FUNCTION(execMulticastChatMessageReceived); \
	DECLARE_FUNCTION(execSendCallMessageToServer); \
	DECLARE_FUNCTION(execSendChatMessageToServer); \
	DECLARE_FUNCTION(execServerCallMessageReceived); \
	DECLARE_FUNCTION(execServerChatMessageReceived);


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientSubscribeToChatMessages_Implementation(); \
	virtual void MulticastCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex); \
	virtual void MulticastChatMessageReceived_Implementation(int32 PlayerId, FSBZPlayerChatEvent const& PlayerChatEvent); \
	virtual void ServerCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex); \
	virtual void ServerChatMessageReceived_Implementation(int32 PlayerId, FSBZPlayerChatEvent const& PlayerChatEvent); \
 \
	DECLARE_FUNCTION(execClientSubscribeToChatMessages); \
	DECLARE_FUNCTION(execMulticastCallMessageReceived); \
	DECLARE_FUNCTION(execMulticastChatMessageReceived); \
	DECLARE_FUNCTION(execSendCallMessageToServer); \
	DECLARE_FUNCTION(execSendChatMessageToServer); \
	DECLARE_FUNCTION(execServerCallMessageReceived); \
	DECLARE_FUNCTION(execServerChatMessageReceived);


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_EVENT_PARMS \
	struct SBZChatInGame_eventMulticastCallMessageReceived_Parms \
	{ \
		APlayerState* PlayerState; \
		uint8 CallIndex; \
	}; \
	struct SBZChatInGame_eventMulticastChatMessageReceived_Parms \
	{ \
		int32 PlayerId; \
		FSBZPlayerChatEvent PlayerChatEvent; \
	}; \
	struct SBZChatInGame_eventServerCallMessageReceived_Parms \
	{ \
		APlayerState* PlayerState; \
		uint8 CallIndex; \
	}; \
	struct SBZChatInGame_eventServerChatMessageReceived_Parms \
	{ \
		int32 PlayerId; \
		FSBZPlayerChatEvent PlayerChatEvent; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZChatInGame(); \
	friend struct Z_Construct_UClass_ASBZChatInGame_Statics; \
public: \
	DECLARE_CLASS(ASBZChatInGame, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZChatInGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZChatInGame(); \
	friend struct Z_Construct_UClass_ASBZChatInGame_Statics; \
public: \
	DECLARE_CLASS(ASBZChatInGame, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZChatInGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZChatInGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZChatInGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZChatInGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZChatInGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZChatInGame(ASBZChatInGame&&); \
	NO_API ASBZChatInGame(const ASBZChatInGame&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZChatInGame(ASBZChatInGame&&); \
	NO_API ASBZChatInGame(const ASBZChatInGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZChatInGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZChatInGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZChatInGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZChatInGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZChatInGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
