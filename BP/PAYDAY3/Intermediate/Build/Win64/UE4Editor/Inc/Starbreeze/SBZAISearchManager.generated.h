// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZAISearchManager;
class AActor;
struct FSBZInvestigationRequest;
enum class EPD3HeistState : uint8;
class USBZAIOrder;
class APawn;
#ifdef STARBREEZE_SBZAISearchManager_generated_h
#error "SBZAISearchManager.generated.h already included, missing '#pragma once' in SBZAISearchManager.h"
#endif
#define STARBREEZE_SBZAISearchManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execHasPendingInvestigationFor); \
	DECLARE_FUNCTION(execInvestigate); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnInvestigationCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execHasPendingInvestigationFor); \
	DECLARE_FUNCTION(execInvestigate); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnInvestigationCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAISearchManager(); \
	friend struct Z_Construct_UClass_USBZAISearchManager_Statics; \
public: \
	DECLARE_CLASS(USBZAISearchManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISearchManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAISearchManager(); \
	friend struct Z_Construct_UClass_USBZAISearchManager_Statics; \
public: \
	DECLARE_CLASS(USBZAISearchManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISearchManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAISearchManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAISearchManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISearchManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISearchManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISearchManager(USBZAISearchManager&&); \
	NO_API USBZAISearchManager(const USBZAISearchManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISearchManager(USBZAISearchManager&&); \
	NO_API USBZAISearchManager(const USBZAISearchManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISearchManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISearchManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAISearchManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InvestigateOrder() { return STRUCT_OFFSET(USBZAISearchManager, InvestigateOrder); } \
	FORCEINLINE static uint32 __PPO__MaximumSearchSquadSize() { return STRUCT_OFFSET(USBZAISearchManager, MaximumSearchSquadSize); } \
	FORCEINLINE static uint32 __PPO__SearchOrder() { return STRUCT_OFFSET(USBZAISearchManager, SearchOrder); } \
	FORCEINLINE static uint32 __PPO__CivilianEvacuateDelay() { return STRUCT_OFFSET(USBZAISearchManager, CivilianEvacuateDelay); } \
	FORCEINLINE static uint32 __PPO__PercentageEvacutingCivilians() { return STRUCT_OFFSET(USBZAISearchManager, PercentageEvacutingCivilians); } \
	FORCEINLINE static uint32 __PPO__NumInvestigateUpdatesBeforeArrest() { return STRUCT_OFFSET(USBZAISearchManager, NumInvestigateUpdatesBeforeArrest); } \
	FORCEINLINE static uint32 __PPO__CivilianEvacuateOrder() { return STRUCT_OFFSET(USBZAISearchManager, CivilianEvacuateOrder); } \
	FORCEINLINE static uint32 __PPO__SearchSquads() { return STRUCT_OFFSET(USBZAISearchManager, SearchSquads); } \
	FORCEINLINE static uint32 __PPO__SearchOriginRoom() { return STRUCT_OFFSET(USBZAISearchManager, SearchOriginRoom); } \
	FORCEINLINE static uint32 __PPO__CheckedRooms() { return STRUCT_OFFSET(USBZAISearchManager, CheckedRooms); } \
	FORCEINLINE static uint32 __PPO__InvestigationData() { return STRUCT_OFFSET(USBZAISearchManager, InvestigationData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_21_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAISearchManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAISearchManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
