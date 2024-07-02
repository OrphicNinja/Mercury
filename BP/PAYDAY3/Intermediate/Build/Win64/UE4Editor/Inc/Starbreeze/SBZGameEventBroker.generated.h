// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZAICrewDefeatStateChangedData;
struct FSBZAICrewChatEvent;
struct FSBZPlayerChatEvent;
struct FSBZPlayerDefeatStateChangedData;
struct FSBZSystemChatEvent;
struct FSBZPlayerCallEvent;
#ifdef STARBREEZE_SBZGameEventBroker_generated_h
#error "SBZGameEventBroker.generated.h already included, missing '#pragma once' in SBZGameEventBroker.h"
#endif
#define STARBREEZE_SBZGameEventBroker_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostOnAICrewDefeatStateChanged); \
	DECLARE_FUNCTION(execPostOnCrewAIChatMessageReceived); \
	DECLARE_FUNCTION(execPostOnPlayerChatMessageRecieved); \
	DECLARE_FUNCTION(execPostOnPlayerDefeatStateChanged); \
	DECLARE_FUNCTION(execPostOnSystemChatMessageReceived); \
	DECLARE_FUNCTION(execSendCallMessage); \
	DECLARE_FUNCTION(execSendChatMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostOnAICrewDefeatStateChanged); \
	DECLARE_FUNCTION(execPostOnCrewAIChatMessageReceived); \
	DECLARE_FUNCTION(execPostOnPlayerChatMessageRecieved); \
	DECLARE_FUNCTION(execPostOnPlayerDefeatStateChanged); \
	DECLARE_FUNCTION(execPostOnSystemChatMessageReceived); \
	DECLARE_FUNCTION(execSendCallMessage); \
	DECLARE_FUNCTION(execSendChatMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameEventBroker(); \
	friend struct Z_Construct_UClass_USBZGameEventBroker_Statics; \
public: \
	DECLARE_CLASS(USBZGameEventBroker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameEventBroker)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameEventBroker(); \
	friend struct Z_Construct_UClass_USBZGameEventBroker_Statics; \
public: \
	DECLARE_CLASS(USBZGameEventBroker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameEventBroker)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameEventBroker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameEventBroker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameEventBroker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameEventBroker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameEventBroker(USBZGameEventBroker&&); \
	NO_API USBZGameEventBroker(const USBZGameEventBroker&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameEventBroker(USBZGameEventBroker&&); \
	NO_API USBZGameEventBroker(const USBZGameEventBroker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameEventBroker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameEventBroker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameEventBroker)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_39_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameEventBroker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameEventBroker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
