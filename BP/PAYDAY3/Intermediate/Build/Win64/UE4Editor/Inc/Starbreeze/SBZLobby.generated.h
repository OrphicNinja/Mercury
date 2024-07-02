// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZOnlineSessionParams;
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZLobby_generated_h
#error "SBZLobby.generated.h already included, missing '#pragma once' in SBZLobby.h"
#endif
#define STARBREEZE_SBZLobby_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToHost); \
	DECLARE_FUNCTION(execHostLobby); \
	DECLARE_FUNCTION(execHostLobbyComplete); \
	DECLARE_FUNCTION(execHostMigrationSession); \
	DECLARE_FUNCTION(execInitLobbyHostComplete); \
	DECLARE_FUNCTION(execJoinLobbyComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToHost); \
	DECLARE_FUNCTION(execHostLobby); \
	DECLARE_FUNCTION(execHostLobbyComplete); \
	DECLARE_FUNCTION(execHostMigrationSession); \
	DECLARE_FUNCTION(execInitLobbyHostComplete); \
	DECLARE_FUNCTION(execJoinLobbyComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLobby(); \
	friend struct Z_Construct_UClass_USBZLobby_Statics; \
public: \
	DECLARE_CLASS(USBZLobby, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLobby) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLobby(); \
	friend struct Z_Construct_UClass_USBZLobby_Statics; \
public: \
	DECLARE_CLASS(USBZLobby, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLobby) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLobby(USBZLobby&&); \
	NO_API USBZLobby(const USBZLobby&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLobby(USBZLobby&&); \
	NO_API USBZLobby(const USBZLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLobby)


#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultPort() { return STRUCT_OFFSET(USBZLobby, DefaultPort); } \
	FORCEINLINE static uint32 __PPO__LobbyHost() { return STRUCT_OFFSET(USBZLobby, LobbyHost); } \
	FORCEINLINE static uint32 __PPO__LobbyOnlineBeacon() { return STRUCT_OFFSET(USBZLobby, LobbyOnlineBeacon); } \
	FORCEINLINE static uint32 __PPO__BeaconActionPhaseClient() { return STRUCT_OFFSET(USBZLobby, BeaconActionPhaseClient); } \
	FORCEINLINE static uint32 __PPO__BeaconActionPhaseHost() { return STRUCT_OFFSET(USBZLobby, BeaconActionPhaseHost); } \
	FORCEINLINE static uint32 __PPO__ActionPhaseOnlineBeacon() { return STRUCT_OFFSET(USBZLobby, ActionPhaseOnlineBeacon); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobby_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
