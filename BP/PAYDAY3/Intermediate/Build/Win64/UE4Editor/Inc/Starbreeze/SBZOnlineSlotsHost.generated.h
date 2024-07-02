// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZOnlineSlotsHost_generated_h
#error "SBZOnlineSlotsHost.generated.h already included, missing '#pragma once' in SBZOnlineSlotsHost.h"
#endif
#define STARBREEZE_SBZOnlineSlotsHost_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIndividualReadyTimerTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIndividualReadyTimerTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineSlotsHost(); \
	friend struct Z_Construct_UClass_USBZOnlineSlotsHost_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSlotsHost, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSlotsHost) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineSlotsHost(); \
	friend struct Z_Construct_UClass_USBZOnlineSlotsHost_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSlotsHost, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSlotsHost) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineSlotsHost(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineSlotsHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSlotsHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSlotsHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSlotsHost(USBZOnlineSlotsHost&&); \
	NO_API USBZOnlineSlotsHost(const USBZOnlineSlotsHost&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSlotsHost(USBZOnlineSlotsHost&&); \
	NO_API USBZOnlineSlotsHost(const USBZOnlineSlotsHost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSlotsHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSlotsHost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineSlotsHost)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SlotsSync() { return STRUCT_OFFSET(USBZOnlineSlotsHost, SlotsSync); } \
	FORCEINLINE static uint32 __PPO__PreMatchReadyTimer() { return STRUCT_OFFSET(USBZOnlineSlotsHost, PreMatchReadyTimer); } \
	FORCEINLINE static uint32 __PPO__PreTravelTimer() { return STRUCT_OFFSET(USBZOnlineSlotsHost, PreTravelTimer); } \
	FORCEINLINE static uint32 __PPO__PreMatchLongReadyTimeLimit() { return STRUCT_OFFSET(USBZOnlineSlotsHost, PreMatchLongReadyTimeLimit); } \
	FORCEINLINE static uint32 __PPO__PreMatchShortReadyTimeLimit() { return STRUCT_OFFSET(USBZOnlineSlotsHost, PreMatchShortReadyTimeLimit); } \
	FORCEINLINE static uint32 __PPO__PreTravelTimeLimit() { return STRUCT_OFFSET(USBZOnlineSlotsHost, PreTravelTimeLimit); } \
	FORCEINLINE static uint32 __PPO__OnlineSession() { return STRUCT_OFFSET(USBZOnlineSlotsHost, OnlineSession); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineSlotsHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
