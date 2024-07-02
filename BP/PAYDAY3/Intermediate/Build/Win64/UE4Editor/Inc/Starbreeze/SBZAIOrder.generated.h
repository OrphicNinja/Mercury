// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APawn;
#ifdef STARBREEZE_SBZAIOrder_generated_h
#error "SBZAIOrder.generated.h already included, missing '#pragma once' in SBZAIOrder.h"
#endif
#define STARBREEZE_SBZAIOrder_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_RPC_WRAPPERS \
	virtual bool ExecPredicate_Implementation(const UObject* Owner) const; \
 \
	DECLARE_FUNCTION(execExecPredicate);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ExecPredicate_Implementation(const UObject* Owner) const; \
 \
	DECLARE_FUNCTION(execExecPredicate);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_EVENT_PARMS \
	struct SBZAIOrder_eventExecPredicate_Parms \
	{ \
		const UObject* Owner; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZAIOrder_eventExecPredicate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SBZAIOrder_eventOnCompletedBP_Parms \
	{ \
		APawn* Pawn; \
		TEnumAsByte<EBTNodeResult::Type> NodeResult; \
	}; \
	struct SBZAIOrder_eventOnStartedBP_Parms \
	{ \
		APawn* Pawn; \
	}; \
	struct SBZAIOrder_eventOnStoppedBP_Parms \
	{ \
		APawn* Pawn; \
		TEnumAsByte<EBTNodeResult::Type> NodeResult; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIOrder(); \
	friend struct Z_Construct_UClass_USBZAIOrder_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIOrder(); \
	friend struct Z_Construct_UClass_USBZAIOrder_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIOrder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIOrder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder(USBZAIOrder&&); \
	NO_API USBZAIOrder(const USBZAIOrder&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder(USBZAIOrder&&); \
	NO_API USBZAIOrder(const USBZAIOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIOrder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OrderTypes() { return STRUCT_OFFSET(USBZAIOrder, OrderTypes); } \
	FORCEINLINE static uint32 __PPO__OverrideTypes() { return STRUCT_OFFSET(USBZAIOrder, OverrideTypes); } \
	FORCEINLINE static uint32 __PPO__ApplicablePawnTypes() { return STRUCT_OFFSET(USBZAIOrder, ApplicablePawnTypes); } \
	FORCEINLINE static uint32 __PPO__Tags() { return STRUCT_OFFSET(USBZAIOrder, Tags); } \
	FORCEINLINE static uint32 __PPO__bShouldRemoveTagsOnStopped() { return STRUCT_OFFSET(USBZAIOrder, bShouldRemoveTagsOnStopped); } \
	FORCEINLINE static uint32 __PPO__Mode() { return STRUCT_OFFSET(USBZAIOrder, Mode); } \
	FORCEINLINE static uint32 __PPO__bIsInstanced() { return STRUCT_OFFSET(USBZAIOrder, bIsInstanced); } \
	FORCEINLINE static uint32 __PPO__bIsPersistent() { return STRUCT_OFFSET(USBZAIOrder, bIsPersistent); } \
	FORCEINLINE static uint32 __PPO__DefaultSelectionScore() { return STRUCT_OFFSET(USBZAIOrder, DefaultSelectionScore); } \
	FORCEINLINE static uint32 __PPO__DefaultUtilityScore() { return STRUCT_OFFSET(USBZAIOrder, DefaultUtilityScore); } \
	FORCEINLINE static uint32 __PPO__Behavior() { return STRUCT_OFFSET(USBZAIOrder, Behavior); } \
	FORCEINLINE static uint32 __PPO__Category() { return STRUCT_OFFSET(USBZAIOrder, Category); } \
	FORCEINLINE static uint32 __PPO__OrderOwner() { return STRUCT_OFFSET(USBZAIOrder, OrderOwner); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(USBZAIOrder, TargetActor); } \
	FORCEINLINE static uint32 __PPO__bCompleteOnStop() { return STRUCT_OFFSET(USBZAIOrder, bCompleteOnStop); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
