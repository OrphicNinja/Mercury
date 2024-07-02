// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
class APlayerState;
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZPartyHost_generated_h
#error "SBZPartyHost.generated.h already included, missing '#pragma once' in SBZPartyHost.h"
#endif
#define STARBREEZE_SBZPartyHost_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastPartyLeftLobby); \
	DECLARE_FUNCTION(execBroadcastPartyTravelled); \
	DECLARE_FUNCTION(execFirePartyUpdated); \
	DECLARE_FUNCTION(execHandlePartyLeaveLobbyTimeout); \
	DECLARE_FUNCTION(execHandlePartyTravelTimeout); \
	DECLARE_FUNCTION(execNotifyClientConnectedToLobby); \
	DECLARE_FUNCTION(execNotifyClientFailedConnectionToLobby); \
	DECLARE_FUNCTION(execNotifyClientLeftLobby);


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastPartyLeftLobby); \
	DECLARE_FUNCTION(execBroadcastPartyTravelled); \
	DECLARE_FUNCTION(execFirePartyUpdated); \
	DECLARE_FUNCTION(execHandlePartyLeaveLobbyTimeout); \
	DECLARE_FUNCTION(execHandlePartyTravelTimeout); \
	DECLARE_FUNCTION(execNotifyClientConnectedToLobby); \
	DECLARE_FUNCTION(execNotifyClientFailedConnectionToLobby); \
	DECLARE_FUNCTION(execNotifyClientLeftLobby);


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPartyHost(); \
	friend struct Z_Construct_UClass_USBZPartyHost_Statics; \
public: \
	DECLARE_CLASS(USBZPartyHost, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPartyHost) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPartyHost(); \
	friend struct Z_Construct_UClass_USBZPartyHost_Statics; \
public: \
	DECLARE_CLASS(USBZPartyHost, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPartyHost) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPartyHost(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPartyHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPartyHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPartyHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPartyHost(USBZPartyHost&&); \
	NO_API USBZPartyHost(const USBZPartyHost&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPartyHost(USBZPartyHost&&); \
	NO_API USBZPartyHost(const USBZPartyHost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPartyHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPartyHost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPartyHost)


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PartyMembers() { return STRUCT_OFFSET(USBZPartyHost, PartyMembers); } \
	FORCEINLINE static uint32 __PPO__PartyTravelTimeout() { return STRUCT_OFFSET(USBZPartyHost, PartyTravelTimeout); } \
	FORCEINLINE static uint32 __PPO__PartyDisconnectTimeout() { return STRUCT_OFFSET(USBZPartyHost, PartyDisconnectTimeout); } \
	FORCEINLINE static uint32 __PPO__TravellingMembers() { return STRUCT_OFFSET(USBZPartyHost, TravellingMembers); } \
	FORCEINLINE static uint32 __PPO__TravelTimeoutTimer() { return STRUCT_OFFSET(USBZPartyHost, TravelTimeoutTimer); } \
	FORCEINLINE static uint32 __PPO__LeavingMembers() { return STRUCT_OFFSET(USBZPartyHost, LeavingMembers); } \
	FORCEINLINE static uint32 __PPO__LeaveLobbyTimeoutTimer() { return STRUCT_OFFSET(USBZPartyHost, LeaveLobbyTimeoutTimer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPartyHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPartyHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
