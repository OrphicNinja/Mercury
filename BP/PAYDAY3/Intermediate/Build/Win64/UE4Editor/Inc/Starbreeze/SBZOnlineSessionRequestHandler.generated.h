// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnlineSessionInfo : uint8;
#ifdef STARBREEZE_SBZOnlineSessionRequestHandler_generated_h
#error "SBZOnlineSessionRequestHandler.generated.h already included, missing '#pragma once' in SBZOnlineSessionRequestHandler.h"
#endif
#define STARBREEZE_SBZOnlineSessionRequestHandler_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSessionInfo);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSessionInfo);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineSessionRequestHandler(); \
	friend struct Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSessionRequestHandler, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSessionRequestHandler) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineSessionRequestHandler(); \
	friend struct Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSessionRequestHandler, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSessionRequestHandler) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineSessionRequestHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineSessionRequestHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSessionRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSessionRequestHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSessionRequestHandler(USBZOnlineSessionRequestHandler&&); \
	NO_API USBZOnlineSessionRequestHandler(const USBZOnlineSessionRequestHandler&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSessionRequestHandler(USBZOnlineSessionRequestHandler&&); \
	NO_API USBZOnlineSessionRequestHandler(const USBZOnlineSessionRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSessionRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSessionRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineSessionRequestHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SBZOnlineSessionUtils() { return STRUCT_OFFSET(USBZOnlineSessionRequestHandler, SBZOnlineSessionUtils); } \
	FORCEINLINE static uint32 __PPO__SessionRequestTimeoutDuration() { return STRUCT_OFFSET(USBZOnlineSessionRequestHandler, SessionRequestTimeoutDuration); } \
	FORCEINLINE static uint32 __PPO__SBZOnlineSession() { return STRUCT_OFFSET(USBZOnlineSessionRequestHandler, SBZOnlineSession); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineSessionRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
