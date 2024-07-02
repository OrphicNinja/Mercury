// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIUtilityDecider_generated_h
#error "SBZAIUtilityDecider.generated.h already included, missing '#pragma once' in SBZAIUtilityDecider.h"
#endif
#define STARBREEZE_SBZAIUtilityDecider_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActivated); \
	DECLARE_FUNCTION(execOnDeactivated); \
	DECLARE_FUNCTION(execOnDeselected); \
	DECLARE_FUNCTION(execOnReselected); \
	DECLARE_FUNCTION(execOnSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActivated); \
	DECLARE_FUNCTION(execOnDeactivated); \
	DECLARE_FUNCTION(execOnDeselected); \
	DECLARE_FUNCTION(execOnReselected); \
	DECLARE_FUNCTION(execOnSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_EVENT_PARMS \
	struct SBZAIUtilityDecider_eventOnDeactivatedBP_Parms \
	{ \
		TEnumAsByte<EBTNodeResult::Type> NodeResult; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIUtilityDecider(); \
	friend struct Z_Construct_UClass_USBZAIUtilityDecider_Statics; \
public: \
	DECLARE_CLASS(USBZAIUtilityDecider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIUtilityDecider)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIUtilityDecider(); \
	friend struct Z_Construct_UClass_USBZAIUtilityDecider_Statics; \
public: \
	DECLARE_CLASS(USBZAIUtilityDecider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIUtilityDecider)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIUtilityDecider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIUtilityDecider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIUtilityDecider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIUtilityDecider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIUtilityDecider(USBZAIUtilityDecider&&); \
	NO_API USBZAIUtilityDecider(const USBZAIUtilityDecider&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIUtilityDecider(USBZAIUtilityDecider&&); \
	NO_API USBZAIUtilityDecider(const USBZAIUtilityDecider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIUtilityDecider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIUtilityDecider); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZAIUtilityDecider)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scorers() { return STRUCT_OFFSET(USBZAIUtilityDecider, Scorers); } \
	FORCEINLINE static uint32 __PPO__AlternativeScorers() { return STRUCT_OFFSET(USBZAIUtilityDecider, AlternativeScorers); } \
	FORCEINLINE static uint32 __PPO__Bonus() { return STRUCT_OFFSET(USBZAIUtilityDecider, Bonus); } \
	FORCEINLINE static uint32 __PPO__Modifiers() { return STRUCT_OFFSET(USBZAIUtilityDecider, Modifiers); } \
	FORCEINLINE static uint32 __PPO__Behavior() { return STRUCT_OFFSET(USBZAIUtilityDecider, Behavior); } \
	FORCEINLINE static uint32 __PPO__Category() { return STRUCT_OFFSET(USBZAIUtilityDecider, Category); } \
	FORCEINLINE static uint32 __PPO__AIController() { return STRUCT_OFFSET(USBZAIUtilityDecider, AIController); } \
	FORCEINLINE static uint32 __PPO__TagsToAddOnActivated() { return STRUCT_OFFSET(USBZAIUtilityDecider, TagsToAddOnActivated); } \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(USBZAIUtilityDecider, bEnabled); } \
	FORCEINLINE static uint32 __PPO__MaxUtility() { return STRUCT_OFFSET(USBZAIUtilityDecider, MaxUtility); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIUtilityDecider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityDecider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
