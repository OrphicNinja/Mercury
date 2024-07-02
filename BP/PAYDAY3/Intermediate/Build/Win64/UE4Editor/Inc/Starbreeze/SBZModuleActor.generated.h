// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZModuleActorState : uint8;
class ASBZCuttableActor;
enum class EPD3MiniGameState : uint8;
#ifdef STARBREEZE_SBZModuleActor_generated_h
#error "SBZModuleActor.generated.h already included, missing '#pragma once' in SBZModuleActor.h"
#endif
#define STARBREEZE_SBZModuleActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_RPC_WRAPPERS \
	virtual void Multicast_SetState_Implementation(ESBZModuleActorState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnServerCuttingComplete); \
	DECLARE_FUNCTION(execOnServerHackingStateChanged); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetState_Implementation(ESBZModuleActorState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnServerCuttingComplete); \
	DECLARE_FUNCTION(execOnServerHackingStateChanged); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_EVENT_PARMS \
	struct SBZModuleActor_eventBP_OnStateChanged_Parms \
	{ \
		ESBZModuleActorState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZModuleActor_eventMulticast_SetState_Parms \
	{ \
		ESBZModuleActorState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZModuleActor(); \
	friend struct Z_Construct_UClass_ASBZModuleActor_Statics; \
public: \
	DECLARE_CLASS(ASBZModuleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZModuleActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZModuleActor(); \
	friend struct Z_Construct_UClass_ASBZModuleActor_Statics; \
public: \
	DECLARE_CLASS(ASBZModuleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZModuleActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZModuleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZModuleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZModuleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZModuleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZModuleActor(ASBZModuleActor&&); \
	NO_API ASBZModuleActor(const ASBZModuleActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZModuleActor(ASBZModuleActor&&); \
	NO_API ASBZModuleActor(const ASBZModuleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZModuleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZModuleActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZModuleActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HackingModules() { return STRUCT_OFFSET(ASBZModuleActor, HackingModules); } \
	FORCEINLINE static uint32 __PPO__CuttingModules() { return STRUCT_OFFSET(ASBZModuleActor, CuttingModules); } \
	FORCEINLINE static uint32 __PPO__bMustHackAllModules() { return STRUCT_OFFSET(ASBZModuleActor, bMustHackAllModules); } \
	FORCEINLINE static uint32 __PPO__bMustCutAllModules() { return STRUCT_OFFSET(ASBZModuleActor, bMustCutAllModules); } \
	FORCEINLINE static uint32 __PPO__DefaultCuttingModule() { return STRUCT_OFFSET(ASBZModuleActor, DefaultCuttingModule); } \
	FORCEINLINE static uint32 __PPO__DefaultHackingModule() { return STRUCT_OFFSET(ASBZModuleActor, DefaultHackingModule); } \
	FORCEINLINE static uint32 __PPO__ConnectedGate() { return STRUCT_OFFSET(ASBZModuleActor, ConnectedGate); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZModuleActor, CurrentState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZModuleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModuleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
