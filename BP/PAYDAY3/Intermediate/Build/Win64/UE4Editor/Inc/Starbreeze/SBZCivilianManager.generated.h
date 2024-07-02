// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZCivilianManager;
class ASBZAIController;
enum class EPD3HeistState : uint8;
class USBZSpawnManager;
class APawn;
#ifdef STARBREEZE_SBZCivilianManager_generated_h
#error "SBZCivilianManager.generated.h already included, missing '#pragma once' in SBZCivilianManager.h"
#endif
#define STARBREEZE_SBZCivilianManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIsAllowedToFlee); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execStopStaying);


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIsAllowedToFlee); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execStopStaying);


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCivilianManager(); \
	friend struct Z_Construct_UClass_USBZCivilianManager_Statics; \
public: \
	DECLARE_CLASS(USBZCivilianManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCivilianManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCivilianManager(); \
	friend struct Z_Construct_UClass_USBZCivilianManager_Statics; \
public: \
	DECLARE_CLASS(USBZCivilianManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCivilianManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCivilianManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCivilianManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCivilianManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCivilianManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCivilianManager(USBZCivilianManager&&); \
	NO_API USBZCivilianManager(const USBZCivilianManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCivilianManager(USBZCivilianManager&&); \
	NO_API USBZCivilianManager(const USBZCivilianManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCivilianManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCivilianManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCivilianManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(USBZCivilianManager, Settings); } \
	FORCEINLINE static uint32 __PPO__SpawnGroupArray() { return STRUCT_OFFSET(USBZCivilianManager, SpawnGroupArray); } \
	FORCEINLINE static uint32 __PPO__StayingCivilians() { return STRUCT_OFFSET(USBZCivilianManager, StayingCivilians); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCivilianManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCivilianManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
