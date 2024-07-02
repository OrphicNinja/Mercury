// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZAIUtilityDecider_AIObjectiveBase_generated_h
#error "SBZAIUtilityDecider_AIObjectiveBase.generated.h already included, missing '#pragma once' in SBZAIUtilityDecider_AIObjectiveBase.h"
#endif
#define STARBREEZE_SBZAIUtilityDecider_AIObjectiveBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execObjectiveInteractableChanged); \
	DECLARE_FUNCTION(execOnDoorInteractionCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execObjectiveInteractableChanged); \
	DECLARE_FUNCTION(execOnDoorInteractionCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIUtilityDecider_AIObjectiveBase(); \
	friend struct Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics; \
public: \
	DECLARE_CLASS(USBZAIUtilityDecider_AIObjectiveBase, USBZAIUtilityDecider, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIUtilityDecider_AIObjectiveBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIUtilityDecider_AIObjectiveBase(); \
	friend struct Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics; \
public: \
	DECLARE_CLASS(USBZAIUtilityDecider_AIObjectiveBase, USBZAIUtilityDecider, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIUtilityDecider_AIObjectiveBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIUtilityDecider_AIObjectiveBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIUtilityDecider_AIObjectiveBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIUtilityDecider_AIObjectiveBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIUtilityDecider_AIObjectiveBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIUtilityDecider_AIObjectiveBase(USBZAIUtilityDecider_AIObjectiveBase&&); \
	NO_API USBZAIUtilityDecider_AIObjectiveBase(const USBZAIUtilityDecider_AIObjectiveBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIUtilityDecider_AIObjectiveBase(USBZAIUtilityDecider_AIObjectiveBase&&); \
	NO_API USBZAIUtilityDecider_AIObjectiveBase(const USBZAIUtilityDecider_AIObjectiveBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIUtilityDecider_AIObjectiveBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIUtilityDecider_AIObjectiveBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZAIUtilityDecider_AIObjectiveBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Gates() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, Gates); } \
	FORCEINLINE static uint32 __PPO__CurrentGate() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, CurrentGate); } \
	FORCEINLINE static uint32 __PPO__StartLocation() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, StartLocation); } \
	FORCEINLINE static uint32 __PPO__PreviousLocation() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, PreviousLocation); } \
	FORCEINLINE static uint32 __PPO__CurrentGoalLocation() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, CurrentGoalLocation); } \
	FORCEINLINE static uint32 __PPO__EndLocation() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, EndLocation); } \
	FORCEINLINE static uint32 __PPO__EndRoom() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, EndRoom); } \
	FORCEINLINE static uint32 __PPO__MoveToLocationBBKey() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, MoveToLocationBBKey); } \
	FORCEINLINE static uint32 __PPO__AcceptableRadius() { return STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, AcceptableRadius); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIUtilityDecider_AIObjectiveBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_AIObjectiveBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
