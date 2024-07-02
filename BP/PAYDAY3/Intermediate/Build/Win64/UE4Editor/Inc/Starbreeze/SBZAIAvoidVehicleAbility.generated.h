// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIAvoidVehicleAbility_generated_h
#error "SBZAIAvoidVehicleAbility.generated.h already included, missing '#pragma once' in SBZAIAvoidVehicleAbility.h"
#endif
#define STARBREEZE_SBZAIAvoidVehicleAbility_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIAvoidVehicleAbility(); \
	friend struct Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics; \
public: \
	DECLARE_CLASS(USBZAIAvoidVehicleAbility, USBZGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAvoidVehicleAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIAvoidVehicleAbility(); \
	friend struct Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics; \
public: \
	DECLARE_CLASS(USBZAIAvoidVehicleAbility, USBZGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAvoidVehicleAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAvoidVehicleAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAvoidVehicleAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAvoidVehicleAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAvoidVehicleAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAvoidVehicleAbility(USBZAIAvoidVehicleAbility&&); \
	NO_API USBZAIAvoidVehicleAbility(const USBZAIAvoidVehicleAbility&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAvoidVehicleAbility(USBZAIAvoidVehicleAbility&&); \
	NO_API USBZAIAvoidVehicleAbility(const USBZAIAvoidVehicleAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAvoidVehicleAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAvoidVehicleAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIAvoidVehicleAbility)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AICharacter() { return STRUCT_OFFSET(USBZAIAvoidVehicleAbility, AICharacter); } \
	FORCEINLINE static uint32 __PPO__CurrentVehicle() { return STRUCT_OFFSET(USBZAIAvoidVehicleAbility, CurrentVehicle); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIAvoidVehicleAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAvoidVehicleAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
