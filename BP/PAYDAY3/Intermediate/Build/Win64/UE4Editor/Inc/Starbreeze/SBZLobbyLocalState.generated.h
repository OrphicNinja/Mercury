// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef STARBREEZE_SBZLobbyLocalState_generated_h
#error "SBZLobbyLocalState.generated.h already included, missing '#pragma once' in SBZLobbyLocalState.h"
#endif
#define STARBREEZE_SBZLobbyLocalState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerAvatar); \
	DECLARE_FUNCTION(execHandleGameStateEnter); \
	DECLARE_FUNCTION(execHandleGameStateLeft); \
	DECLARE_FUNCTION(execSendInfoToServer);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerAvatar); \
	DECLARE_FUNCTION(execHandleGameStateEnter); \
	DECLARE_FUNCTION(execHandleGameStateLeft); \
	DECLARE_FUNCTION(execSendInfoToServer);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLobbyLocalState(); \
	friend struct Z_Construct_UClass_USBZLobbyLocalState_Statics; \
public: \
	DECLARE_CLASS(USBZLobbyLocalState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLobbyLocalState)


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLobbyLocalState(); \
	friend struct Z_Construct_UClass_USBZLobbyLocalState_Statics; \
public: \
	DECLARE_CLASS(USBZLobbyLocalState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLobbyLocalState)


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLobbyLocalState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLobbyLocalState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLobbyLocalState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLobbyLocalState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLobbyLocalState(USBZLobbyLocalState&&); \
	NO_API USBZLobbyLocalState(const USBZLobbyLocalState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLobbyLocalState(USBZLobbyLocalState&&); \
	NO_API USBZLobbyLocalState(const USBZLobbyLocalState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLobbyLocalState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLobbyLocalState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLobbyLocalState)


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerInfos() { return STRUCT_OFFSET(USBZLobbyLocalState, PlayerInfos); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLobbyLocalState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLobbyLocalState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
