// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef STARBREEZE_SBZVotingManager_generated_h
#error "SBZVotingManager.generated.h already included, missing '#pragma once' in SBZVotingManager.h"
#endif
#define STARBREEZE_SBZVotingManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePlayableLevelInitialized);


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayableLevelInitialized);


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVotingManager(); \
	friend struct Z_Construct_UClass_USBZVotingManager_Statics; \
public: \
	DECLARE_CLASS(USBZVotingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVotingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVotingManager(); \
	friend struct Z_Construct_UClass_USBZVotingManager_Statics; \
public: \
	DECLARE_CLASS(USBZVotingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVotingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVotingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVotingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVotingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVotingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVotingManager(USBZVotingManager&&); \
	NO_API USBZVotingManager(const USBZVotingManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVotingManager(USBZVotingManager&&); \
	NO_API USBZVotingManager(const USBZVotingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVotingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVotingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVotingManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedProxy() { return STRUCT_OFFSET(USBZVotingManager, ReplicatedProxy); } \
	FORCEINLINE static uint32 __PPO__VoteFactory() { return STRUCT_OFFSET(USBZVotingManager, VoteFactory); } \
	FORCEINLINE static uint32 __PPO__CurrentVote() { return STRUCT_OFFSET(USBZVotingManager, CurrentVote); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVotingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVotingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
