// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBTTask_MoveTo_generated_h
#error "SBZBTTask_MoveTo.generated.h already included, missing '#pragma once' in SBZBTTask_MoveTo.h"
#endif
#define STARBREEZE_SBZBTTask_MoveTo_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSBZPathOffset_Statics; \
	STARBREEZE_API static class UScriptStruct* StaticStruct();


template<> STARBREEZE_API UScriptStruct* StaticStruct<struct FSBZPathOffset>();

#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBTTask_MoveTo(); \
	friend struct Z_Construct_UClass_USBZBTTask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(USBZBTTask_MoveTo, UBTTask_MoveTo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBTTask_MoveTo)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBTTask_MoveTo(); \
	friend struct Z_Construct_UClass_USBZBTTask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(USBZBTTask_MoveTo, UBTTask_MoveTo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBTTask_MoveTo)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBTTask_MoveTo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBTTask_MoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBTTask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBTTask_MoveTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBTTask_MoveTo(USBZBTTask_MoveTo&&); \
	NO_API USBZBTTask_MoveTo(const USBZBTTask_MoveTo&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBTTask_MoveTo(USBZBTTask_MoveTo&&); \
	NO_API USBZBTTask_MoveTo(const USBZBTTask_MoveTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBTTask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBTTask_MoveTo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBTTask_MoveTo)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeMovedKey() { return STRUCT_OFFSET(USBZBTTask_MoveTo, TimeMovedKey); } \
	FORCEINLINE static uint32 __PPO__bAutoUncrouch() { return STRUCT_OFFSET(USBZBTTask_MoveTo, bAutoUncrouch); } \
	FORCEINLINE static uint32 __PPO__bAutoRun() { return STRUCT_OFFSET(USBZBTTask_MoveTo, bAutoRun); } \
	FORCEINLINE static uint32 __PPO__UncrouchDist() { return STRUCT_OFFSET(USBZBTTask_MoveTo, UncrouchDist); } \
	FORCEINLINE static uint32 __PPO__RunDist() { return STRUCT_OFFSET(USBZBTTask_MoveTo, RunDist); } \
	FORCEINLINE static uint32 __PPO__bOverrideCanRunWhileFocusing() { return STRUCT_OFFSET(USBZBTTask_MoveTo, bOverrideCanRunWhileFocusing); } \
	FORCEINLINE static uint32 __PPO__MovementThreshold() { return STRUCT_OFFSET(USBZBTTask_MoveTo, MovementThreshold); } \
	FORCEINLINE static uint32 __PPO__PathObservationTickInterval() { return STRUCT_OFFSET(USBZBTTask_MoveTo, PathObservationTickInterval); } \
	FORCEINLINE static uint32 __PPO__PathObservationDistance() { return STRUCT_OFFSET(USBZBTTask_MoveTo, PathObservationDistance); } \
	FORCEINLINE static uint32 __PPO__PathObservationTetherDistance() { return STRUCT_OFFSET(USBZBTTask_MoveTo, PathObservationTetherDistance); } \
	FORCEINLINE static uint32 __PPO__bOffsetPathFromCorners() { return STRUCT_OFFSET(USBZBTTask_MoveTo, bOffsetPathFromCorners); } \
	FORCEINLINE static uint32 __PPO__PathOffset() { return STRUCT_OFFSET(USBZBTTask_MoveTo, PathOffset); } \
	FORCEINLINE static uint32 __PPO__PartialPathMaxRange() { return STRUCT_OFFSET(USBZBTTask_MoveTo, PartialPathMaxRange); } \
	FORCEINLINE static uint32 __PPO__bCheckPathEndToGoalHeight() { return STRUCT_OFFSET(USBZBTTask_MoveTo, bCheckPathEndToGoalHeight); } \
	FORCEINLINE static uint32 __PPO__MaxPathEndToGoalHeightDistance() { return STRUCT_OFFSET(USBZBTTask_MoveTo, MaxPathEndToGoalHeightDistance); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_20_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBTTask_MoveTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBTTask_MoveTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
