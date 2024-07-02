// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZSaveManager;
class USBZProgressionSaveChallenges;
class USBZProgressionSaveGame;
#ifdef STARBREEZE_SBZSaveManager_generated_h
#error "SBZSaveManager.generated.h already included, missing '#pragma once' in SBZSaveManager.h"
#endif
#define STARBREEZE_SBZSaveManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetChecked); \
	DECLARE_FUNCTION(execGetProgressionSaveChallenges); \
	DECLARE_FUNCTION(execGetProgressionSaveGame); \
	DECLARE_FUNCTION(execUpdateLoadoutInLobby);


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetChecked); \
	DECLARE_FUNCTION(execGetProgressionSaveChallenges); \
	DECLARE_FUNCTION(execGetProgressionSaveGame); \
	DECLARE_FUNCTION(execUpdateLoadoutInLobby);


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSaveManager(); \
	friend struct Z_Construct_UClass_USBZSaveManager_Statics; \
public: \
	DECLARE_CLASS(USBZSaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSaveManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZSaveManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSaveManager(); \
	friend struct Z_Construct_UClass_USBZSaveManager_Statics; \
public: \
	DECLARE_CLASS(USBZSaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSaveManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZSaveManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSaveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSaveManager(USBZSaveManager&&); \
	NO_API USBZSaveManager(const USBZSaveManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSaveManager(USBZSaveManager&&); \
	NO_API USBZSaveManager(const USBZSaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSaveManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressionSaveGame() { return STRUCT_OFFSET(USBZSaveManager, ProgressionSaveGame); } \
	FORCEINLINE static uint32 __PPO__DefaultProgressionSaveGame() { return STRUCT_OFFSET(USBZSaveManager, DefaultProgressionSaveGame); } \
	FORCEINLINE static uint32 __PPO__ProgressionSaveChallenges() { return STRUCT_OFFSET(USBZSaveManager, ProgressionSaveChallenges); } \
	FORCEINLINE static uint32 __PPO__DefaultProgressionSaveChallenges() { return STRUCT_OFFSET(USBZSaveManager, DefaultProgressionSaveChallenges); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
