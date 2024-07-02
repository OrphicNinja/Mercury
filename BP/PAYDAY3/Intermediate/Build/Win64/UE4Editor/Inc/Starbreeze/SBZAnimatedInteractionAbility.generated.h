// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef STARBREEZE_SBZAnimatedInteractionAbility_generated_h
#error "SBZAnimatedInteractionAbility.generated.h already included, missing '#pragma once' in SBZAnimatedInteractionAbility.h"
#endif
#define STARBREEZE_SBZAnimatedInteractionAbility_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMontageEnded);


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMontageEnded);


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAnimatedInteractionAbility(); \
	friend struct Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics; \
public: \
	DECLARE_CLASS(USBZAnimatedInteractionAbility, USBZGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAnimatedInteractionAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAnimatedInteractionAbility(); \
	friend struct Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics; \
public: \
	DECLARE_CLASS(USBZAnimatedInteractionAbility, USBZGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAnimatedInteractionAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAnimatedInteractionAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAnimatedInteractionAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAnimatedInteractionAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAnimatedInteractionAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAnimatedInteractionAbility(USBZAnimatedInteractionAbility&&); \
	NO_API USBZAnimatedInteractionAbility(const USBZAnimatedInteractionAbility&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAnimatedInteractionAbility(USBZAnimatedInteractionAbility&&); \
	NO_API USBZAnimatedInteractionAbility(const USBZAnimatedInteractionAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAnimatedInteractionAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAnimatedInteractionAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAnimatedInteractionAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentInteractionMontage() { return STRUCT_OFFSET(USBZAnimatedInteractionAbility, CurrentInteractionMontage); } \
	FORCEINLINE static uint32 __PPO__CurrentAnimatedInteractionInterface() { return STRUCT_OFFSET(USBZAnimatedInteractionAbility, CurrentAnimatedInteractionInterface); } \
	FORCEINLINE static uint32 __PPO__CurrentAnimatedInteractionData() { return STRUCT_OFFSET(USBZAnimatedInteractionAbility, CurrentAnimatedInteractionData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAnimatedInteractionAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAnimatedInteractionAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
