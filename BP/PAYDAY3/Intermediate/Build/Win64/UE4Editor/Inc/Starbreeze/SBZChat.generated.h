// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZChat;
struct FUniqueNetIdRepl;
struct FSBZWhisperInfo;
struct FAccelByteModelsChatNotif;
struct FSBZChatMessage;
#ifdef STARBREEZE_SBZChat_generated_h
#error "SBZChat.generated.h already included, missing '#pragma once' in SBZChat.h"
#endif
#define STARBREEZE_SBZChat_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChat); \
	DECLARE_FUNCTION(execGetNextWhisperOption); \
	DECLARE_FUNCTION(execGetWhisperOptions); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execOnSessionMessageReceived); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execSendSessionMessage); \
	DECLARE_FUNCTION(execSendSystemChatMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChat); \
	DECLARE_FUNCTION(execGetNextWhisperOption); \
	DECLARE_FUNCTION(execGetWhisperOptions); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execOnSessionMessageReceived); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execSendSessionMessage); \
	DECLARE_FUNCTION(execSendSystemChatMessage);


#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZChat(); \
	friend struct Z_Construct_UClass_USBZChat_Statics; \
public: \
	DECLARE_CLASS(USBZChat, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChat) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZChat(); \
	friend struct Z_Construct_UClass_USBZChat_Statics; \
public: \
	DECLARE_CLASS(USBZChat, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChat) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZChat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZChat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChat(USBZChat&&); \
	NO_API USBZChat(const USBZChat&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChat(USBZChat&&); \
	NO_API USBZChat(const USBZChat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZChat)


#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhisperOptions() { return STRUCT_OFFSET(USBZChat, WhisperOptions); }


#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChat_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZChat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZChat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
