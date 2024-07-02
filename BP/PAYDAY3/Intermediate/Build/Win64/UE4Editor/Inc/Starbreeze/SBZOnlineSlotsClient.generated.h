// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnlineSlotsClient_generated_h
#error "SBZOnlineSlotsClient.generated.h already included, missing '#pragma once' in SBZOnlineSlotsClient.h"
#endif
#define STARBREEZE_SBZOnlineSlotsClient_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineSlotsClient(); \
	friend struct Z_Construct_UClass_USBZOnlineSlotsClient_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSlotsClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSlotsClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbeeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineSlotsClient(); \
	friend struct Z_Construct_UClass_USBZOnlineSlotsClient_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSlotsClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSlotsClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbeeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineSlotsClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineSlotsClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSlotsClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSlotsClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSlotsClient(USBZOnlineSlotsClient&&); \
	NO_API USBZOnlineSlotsClient(const USBZOnlineSlotsClient&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSlotsClient(USBZOnlineSlotsClient&&); \
	NO_API USBZOnlineSlotsClient(const USBZOnlineSlotsClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSlotsClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSlotsClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineSlotsClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SlotsData() { return STRUCT_OFFSET(USBZOnlineSlotsClient, SlotsData); } \
	FORCEINLINE static uint32 __PPO__PreMatchReadyTimer() { return STRUCT_OFFSET(USBZOnlineSlotsClient, PreMatchReadyTimer); } \
	FORCEINLINE static uint32 __PPO__CharacterInfoArray() { return STRUCT_OFFSET(USBZOnlineSlotsClient, CharacterInfoArray); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerData() { return STRUCT_OFFSET(USBZOnlineSlotsClient, LocalPlayerData); } \
	FORCEINLINE static uint32 __PPO__PreTravelTimeLimit() { return STRUCT_OFFSET(USBZOnlineSlotsClient, PreTravelTimeLimit); } \
	FORCEINLINE static uint32 __PPO__SoloPreplanningItem() { return STRUCT_OFFSET(USBZOnlineSlotsClient, SoloPreplanningItem); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineSlotsClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineSlotsClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
