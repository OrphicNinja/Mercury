// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZGameplayAbility_generated_h
#error "SBZGameplayAbility.generated.h already included, missing '#pragma once' in SBZGameplayAbility.h"
#endif
#define STARBREEZE_SBZGameplayAbility_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameplayAbility(); \
	friend struct Z_Construct_UClass_USBZGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USBZGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameplayAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameplayAbility(); \
	friend struct Z_Construct_UClass_USBZGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USBZGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameplayAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameplayAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameplayAbility(USBZGameplayAbility&&); \
	NO_API USBZGameplayAbility(const USBZGameplayAbility&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameplayAbility(USBZGameplayAbility&&); \
	NO_API USBZGameplayAbility(const USBZGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameplayAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CancelAbilitiesOnActivationAttemptTag() { return STRUCT_OFFSET(USBZGameplayAbility, CancelAbilitiesOnActivationAttemptTag); } \
	FORCEINLINE static uint32 __PPO__bCancelAbilitiesOnFailedActivation() { return STRUCT_OFFSET(USBZGameplayAbility, bCancelAbilitiesOnFailedActivation); } \
	FORCEINLINE static uint32 __PPO__CancelOnOwnerTagGranted() { return STRUCT_OFFSET(USBZGameplayAbility, CancelOnOwnerTagGranted); } \
	FORCEINLINE static uint32 __PPO__CancelOnInputPressed() { return STRUCT_OFFSET(USBZGameplayAbility, CancelOnInputPressed); } \
	FORCEINLINE static uint32 __PPO__CancelOnInputPressedActivates() { return STRUCT_OFFSET(USBZGameplayAbility, CancelOnInputPressedActivates); } \
	FORCEINLINE static uint32 __PPO__PostCancelOnInputPressed() { return STRUCT_OFFSET(USBZGameplayAbility, PostCancelOnInputPressed); } \
	FORCEINLINE static uint32 __PPO__QueuedOwnerTags() { return STRUCT_OFFSET(USBZGameplayAbility, QueuedOwnerTags); } \
	FORCEINLINE static uint32 __PPO__QueuePriority() { return STRUCT_OFFSET(USBZGameplayAbility, QueuePriority); } \
	FORCEINLINE static uint32 __PPO__InputPriority() { return STRUCT_OFFSET(USBZGameplayAbility, InputPriority); } \
	FORCEINLINE static uint32 __PPO__Input() { return STRUCT_OFFSET(USBZGameplayAbility, Input); } \
	FORCEINLINE static uint32 __PPO__CooldownTimeTags() { return STRUCT_OFFSET(USBZGameplayAbility, CooldownTimeTags); } \
	FORCEINLINE static uint32 __PPO__TagCooldownSeconds() { return STRUCT_OFFSET(USBZGameplayAbility, TagCooldownSeconds); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
