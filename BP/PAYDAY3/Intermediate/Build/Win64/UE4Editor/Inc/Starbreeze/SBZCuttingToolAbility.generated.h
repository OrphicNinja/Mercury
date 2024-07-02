// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESBZDisplayCaseState : uint8;
class ASBZGate;
enum class ESBZGateState : uint8;
#ifdef STARBREEZE_SBZCuttingToolAbility_generated_h
#error "SBZCuttingToolAbility.generated.h already included, missing '#pragma once' in SBZCuttingToolAbility.h"
#endif
#define STARBREEZE_SBZCuttingToolAbility_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCuttableActorEndPlay); \
	DECLARE_FUNCTION(execOnDisplayCaseStateChanged); \
	DECLARE_FUNCTION(execOnGateStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCuttableActorEndPlay); \
	DECLARE_FUNCTION(execOnDisplayCaseStateChanged); \
	DECLARE_FUNCTION(execOnGateStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCuttingToolAbility(); \
	friend struct Z_Construct_UClass_USBZCuttingToolAbility_Statics; \
public: \
	DECLARE_CLASS(USBZCuttingToolAbility, USBZGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttingToolAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCuttingToolAbility(); \
	friend struct Z_Construct_UClass_USBZCuttingToolAbility_Statics; \
public: \
	DECLARE_CLASS(USBZCuttingToolAbility, USBZGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttingToolAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCuttingToolAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttingToolAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttingToolAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttingToolAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttingToolAbility(USBZCuttingToolAbility&&); \
	NO_API USBZCuttingToolAbility(const USBZCuttingToolAbility&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttingToolAbility(USBZCuttingToolAbility&&); \
	NO_API USBZCuttingToolAbility(const USBZCuttingToolAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttingToolAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttingToolAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCuttingToolAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayCase() { return STRUCT_OFFSET(USBZCuttingToolAbility, DisplayCase); } \
	FORCEINLINE static uint32 __PPO__InteractableGate() { return STRUCT_OFFSET(USBZCuttingToolAbility, InteractableGate); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(USBZCuttingToolAbility, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__CurrentCuttableComponent() { return STRUCT_OFFSET(USBZCuttingToolAbility, CurrentCuttableComponent); } \
	FORCEINLINE static uint32 __PPO__NoiseGenerationInterval() { return STRUCT_OFFSET(USBZCuttingToolAbility, NoiseGenerationInterval); } \
	FORCEINLINE static uint32 __PPO__NoiseRange() { return STRUCT_OFFSET(USBZCuttingToolAbility, NoiseRange); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCuttingToolAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCuttingToolAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
