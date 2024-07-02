// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFiniteStateMachineComponent;
enum class EFiniteStateMachineStateEvent : uint8;
#ifdef TIMEENHANCEMENTS_FiniteStateMachineComponent_generated_h
#error "FiniteStateMachineComponent.generated.h already included, missing '#pragma once' in FiniteStateMachineComponent.h"
#endif
#define TIMEENHANCEMENTS_FiniteStateMachineComponent_generated_h

#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_18_DELEGATE \
struct _Script_TimeEnhancements_eventStateEventDelegate_Parms \
{ \
	UFiniteStateMachineComponent* FSM; \
	FName State; \
	EFiniteStateMachineStateEvent StateEvent; \
}; \
static inline void FStateEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& StateEventDelegate, UFiniteStateMachineComponent* FSM, FName State, EFiniteStateMachineStateEvent StateEvent) \
{ \
	_Script_TimeEnhancements_eventStateEventDelegate_Parms Parms; \
	Parms.FSM=FSM; \
	Parms.State=State; \
	Parms.StateEvent=StateEvent; \
	StateEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFiniteStateMachineComponent(); \
	friend struct Z_Construct_UClass_UFiniteStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(UFiniteStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimeEnhancements"), NO_API) \
	DECLARE_SERIALIZER(UFiniteStateMachineComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFiniteStateMachineComponent(); \
	friend struct Z_Construct_UClass_UFiniteStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(UFiniteStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimeEnhancements"), NO_API) \
	DECLARE_SERIALIZER(UFiniteStateMachineComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFiniteStateMachineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFiniteStateMachineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFiniteStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFiniteStateMachineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFiniteStateMachineComponent(UFiniteStateMachineComponent&&); \
	NO_API UFiniteStateMachineComponent(const UFiniteStateMachineComponent&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFiniteStateMachineComponent(UFiniteStateMachineComponent&&); \
	NO_API UFiniteStateMachineComponent(const UFiniteStateMachineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFiniteStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFiniteStateMachineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFiniteStateMachineComponent)


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InitialState() { return STRUCT_OFFSET(UFiniteStateMachineComponent, InitialState); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UFiniteStateMachineComponent, State); } \
	FORCEINLINE static uint32 __PPO__LocalState() { return STRUCT_OFFSET(UFiniteStateMachineComponent, LocalState); }


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_20_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEENHANCEMENTS_API UClass* StaticClass<class UFiniteStateMachineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_FiniteStateMachineComponent_h


#define FOREACH_ENUM_EFINITESTATEMACHINESTATEEVENT(op) \
	op(EFiniteStateMachineStateEvent::ENTER) \
	op(EFiniteStateMachineStateEvent::TICK) \
	op(EFiniteStateMachineStateEvent::EXIT) 

enum class EFiniteStateMachineStateEvent : uint8;
template<> TIMEENHANCEMENTS_API UEnum* StaticEnum<EFiniteStateMachineStateEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
