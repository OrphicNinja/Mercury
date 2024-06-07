// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloatDelegateTimer;
class UDelegateTimer;
class UObject;
class UCurveFloat;
#ifdef TIMEENHANCEMENTS_CurveFloatDelegateTimer_generated_h
#error "CurveFloatDelegateTimer.generated.h already included, missing '#pragma once' in CurveFloatDelegateTimer.h"
#endif
#define TIMEENHANCEMENTS_CurveFloatDelegateTimer_generated_h

#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_13_DELEGATE \
struct _Script_TimeEnhancements_eventDelegateTimerFloatExec_Parms \
{ \
	const UCurveFloatDelegateTimer* CurveFloatTimer; \
	float CurveElapsedTime; \
	float CurveTimeSinceLast; \
	float CurveValue; \
	float CurveTime; \
}; \
static inline void FDelegateTimerFloatExec_DelegateWrapper(const FMulticastScriptDelegate& DelegateTimerFloatExec, const UCurveFloatDelegateTimer* CurveFloatTimer, float CurveElapsedTime, float CurveTimeSinceLast, float CurveValue, float CurveTime) \
{ \
	_Script_TimeEnhancements_eventDelegateTimerFloatExec_Parms Parms; \
	Parms.CurveFloatTimer=CurveFloatTimer; \
	Parms.CurveElapsedTime=CurveElapsedTime; \
	Parms.CurveTimeSinceLast=CurveTimeSinceLast; \
	Parms.CurveValue=CurveValue; \
	Parms.CurveTime=CurveTime; \
	DelegateTimerFloatExec.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_SPARSE_DATA
#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireCurveEvalTick); \
	DECLARE_FUNCTION(execCreateCurveFloatDelegateTimer);


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireCurveEvalTick); \
	DECLARE_FUNCTION(execCreateCurveFloatDelegateTimer);


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveFloatDelegateTimer(); \
	friend struct Z_Construct_UClass_UCurveFloatDelegateTimer_Statics; \
public: \
	DECLARE_CLASS(UCurveFloatDelegateTimer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeEnhancements"), NO_API) \
	DECLARE_SERIALIZER(UCurveFloatDelegateTimer)


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCurveFloatDelegateTimer(); \
	friend struct Z_Construct_UClass_UCurveFloatDelegateTimer_Statics; \
public: \
	DECLARE_CLASS(UCurveFloatDelegateTimer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeEnhancements"), NO_API) \
	DECLARE_SERIALIZER(UCurveFloatDelegateTimer)


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveFloatDelegateTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveFloatDelegateTimer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveFloatDelegateTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveFloatDelegateTimer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveFloatDelegateTimer(UCurveFloatDelegateTimer&&); \
	NO_API UCurveFloatDelegateTimer(const UCurveFloatDelegateTimer&); \
public:


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveFloatDelegateTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveFloatDelegateTimer(UCurveFloatDelegateTimer&&); \
	NO_API UCurveFloatDelegateTimer(const UCurveFloatDelegateTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveFloatDelegateTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveFloatDelegateTimer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveFloatDelegateTimer)


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_20_PROLOG
#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_RPC_WRAPPERS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_INCLASS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEENHANCEMENTS_API UClass* StaticClass<class UCurveFloatDelegateTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_CurveFloatDelegateTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
