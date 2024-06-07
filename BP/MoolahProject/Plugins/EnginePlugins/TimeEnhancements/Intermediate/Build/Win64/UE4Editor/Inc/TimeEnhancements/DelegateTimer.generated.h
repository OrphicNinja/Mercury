// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDelegateTimer;
class UObject;
#ifdef TIMEENHANCEMENTS_DelegateTimer_generated_h
#error "DelegateTimer.generated.h already included, missing '#pragma once' in DelegateTimer.h"
#endif
#define TIMEENHANCEMENTS_DelegateTimer_generated_h

#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_13_DELEGATE \
struct _Script_TimeEnhancements_eventDelegateTimerExec_Parms \
{ \
	const UDelegateTimer* Timer; \
	float ElapsedTime; \
	float TimeSinceLast; \
}; \
static inline void FDelegateTimerExec_DelegateWrapper(const FMulticastScriptDelegate& DelegateTimerExec, const UDelegateTimer* Timer, float ElapsedTime, float TimeSinceLast) \
{ \
	_Script_TimeEnhancements_eventDelegateTimerExec_Parms Parms; \
	Parms.Timer=Timer; \
	Parms.ElapsedTime=ElapsedTime; \
	Parms.TimeSinceLast=TimeSinceLast; \
	DelegateTimerExec.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_SPARSE_DATA
#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDelegateTimer);


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDelegateTimer);


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDelegateTimer(); \
	friend struct Z_Construct_UClass_UDelegateTimer_Statics; \
public: \
	DECLARE_CLASS(UDelegateTimer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeEnhancements"), NO_API) \
	DECLARE_SERIALIZER(UDelegateTimer)


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDelegateTimer(); \
	friend struct Z_Construct_UClass_UDelegateTimer_Statics; \
public: \
	DECLARE_CLASS(UDelegateTimer, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeEnhancements"), NO_API) \
	DECLARE_SERIALIZER(UDelegateTimer)


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDelegateTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDelegateTimer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDelegateTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelegateTimer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDelegateTimer(UDelegateTimer&&); \
	NO_API UDelegateTimer(const UDelegateTimer&); \
public:


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDelegateTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDelegateTimer(UDelegateTimer&&); \
	NO_API UDelegateTimer(const UDelegateTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDelegateTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelegateTimer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDelegateTimer)


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_20_PROLOG
#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_RPC_WRAPPERS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_INCLASS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEENHANCEMENTS_API UClass* StaticClass<class UDelegateTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_TimeEnhancements_Source_TimeEnhancements_Public_DelegateTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
