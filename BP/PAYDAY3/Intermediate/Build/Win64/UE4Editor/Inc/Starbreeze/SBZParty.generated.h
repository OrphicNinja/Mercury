// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPartyData;
enum class ESBZOnlineCode : uint8;
struct FSBZOnlineSessionParams;
#ifdef STARBREEZE_SBZParty_generated_h
#error "SBZParty.generated.h already included, missing '#pragma once' in SBZParty.h"
#endif
#define STARBREEZE_SBZParty_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelPartyRestore); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execHandleGameStateEnter); \
	DECLARE_FUNCTION(execHandleGameStateLeft); \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execHostPartyComplete); \
	DECLARE_FUNCTION(execHostPartySession); \
	DECLARE_FUNCTION(execJoinPartyComplete); \
	DECLARE_FUNCTION(execUpdatePartyState);


#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelPartyRestore); \
	DECLARE_FUNCTION(execGetPartyData); \
	DECLARE_FUNCTION(execHandleGameStateEnter); \
	DECLARE_FUNCTION(execHandleGameStateLeft); \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execHostPartyComplete); \
	DECLARE_FUNCTION(execHostPartySession); \
	DECLARE_FUNCTION(execJoinPartyComplete); \
	DECLARE_FUNCTION(execUpdatePartyState);


#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZParty(); \
	friend struct Z_Construct_UClass_USBZParty_Statics; \
public: \
	DECLARE_CLASS(USBZParty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZParty) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZParty(); \
	friend struct Z_Construct_UClass_USBZParty_Statics; \
public: \
	DECLARE_CLASS(USBZParty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZParty) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZParty(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZParty(USBZParty&&); \
	NO_API USBZParty(const USBZParty&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZParty(USBZParty&&); \
	NO_API USBZParty(const USBZParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZParty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZParty)


#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultPort() { return STRUCT_OFFSET(USBZParty, DefaultPort); } \
	FORCEINLINE static uint32 __PPO__PartyRestoreTimeout() { return STRUCT_OFFSET(USBZParty, PartyRestoreTimeout); }


#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZParty_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZParty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZParty_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
