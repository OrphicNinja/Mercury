// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZNegotiationManager;
#ifdef STARBREEZE_PD3HeistGameMode_generated_h
#error "PD3HeistGameMode.generated.h already included, missing '#pragma once' in PD3HeistGameMode.h"
#endif
#define STARBREEZE_PD3HeistGameMode_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNegotiationManager);


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNegotiationManager);


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPD3HeistGameMode(); \
	friend struct Z_Construct_UClass_APD3HeistGameMode_Statics; \
public: \
	DECLARE_CLASS(APD3HeistGameMode, ASBZMissionGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPD3HeistGameMode(); \
	friend struct Z_Construct_UClass_APD3HeistGameMode_Statics; \
public: \
	DECLARE_CLASS(APD3HeistGameMode, ASBZMissionGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APD3HeistGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APD3HeistGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APD3HeistGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APD3HeistGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APD3HeistGameMode(APD3HeistGameMode&&); \
	NO_API APD3HeistGameMode(const APD3HeistGameMode&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APD3HeistGameMode(APD3HeistGameMode&&); \
	NO_API APD3HeistGameMode(const APD3HeistGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APD3HeistGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APD3HeistGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NegotiationManager() { return STRUCT_OFFSET(APD3HeistGameMode, NegotiationManager); } \
	FORCEINLINE static uint32 __PPO__AssaultManager() { return STRUCT_OFFSET(APD3HeistGameMode, AssaultManager); } \
	FORCEINLINE static uint32 __PPO__AISquadManager() { return STRUCT_OFFSET(APD3HeistGameMode, AISquadManager); } \
	FORCEINLINE static uint32 __PPO__CivilianManager() { return STRUCT_OFFSET(APD3HeistGameMode, CivilianManager); } \
	FORCEINLINE static uint32 __PPO__NavLinkManager() { return STRUCT_OFFSET(APD3HeistGameMode, NavLinkManager); } \
	FORCEINLINE static uint32 __PPO__ChatInGame() { return STRUCT_OFFSET(APD3HeistGameMode, ChatInGame); } \
	FORCEINLINE static uint32 __PPO__TrafficManager() { return STRUCT_OFFSET(APD3HeistGameMode, TrafficManager); } \
	FORCEINLINE static uint32 __PPO__SearchManager() { return STRUCT_OFFSET(APD3HeistGameMode, SearchManager); } \
	FORCEINLINE static uint32 __PPO__GlobalModifiers() { return STRUCT_OFFSET(APD3HeistGameMode, GlobalModifiers); } \
	FORCEINLINE static uint32 __PPO__TransporterBrutalCarrySkillPlayerSet() { return STRUCT_OFFSET(APD3HeistGameMode, TransporterBrutalCarrySkillPlayerSet); } \
	FORCEINLINE static uint32 __PPO__TransporterBrutalCarrySkillAISet() { return STRUCT_OFFSET(APD3HeistGameMode, TransporterBrutalCarrySkillAISet); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class APD3HeistGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HeistGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
