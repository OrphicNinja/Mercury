// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBuiltInAnimMontage;
#ifdef STARBREEZE_SBZVehicleAnimation_generated_h
#error "SBZVehicleAnimation.generated.h already included, missing '#pragma once' in SBZVehicleAnimation.h"
#endif
#define STARBREEZE_SBZVehicleAnimation_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayBuiltInAnimMontage); \
	DECLARE_FUNCTION(execStopBuiltInAnimMontage);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayBuiltInAnimMontage); \
	DECLARE_FUNCTION(execStopBuiltInAnimMontage);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVehicleAnimation(); \
	friend struct Z_Construct_UClass_USBZVehicleAnimation_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleAnimation, UVehicleAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleAnimation)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVehicleAnimation(); \
	friend struct Z_Construct_UClass_USBZVehicleAnimation_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleAnimation, UVehicleAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleAnimation)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleAnimation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleAnimation(USBZVehicleAnimation&&); \
	NO_API USBZVehicleAnimation(const USBZVehicleAnimation&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleAnimation(USBZVehicleAnimation&&); \
	NO_API USBZVehicleAnimation(const USBZVehicleAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleAnimation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVehicleAnimation)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BuiltInAnimMontagesHandler() { return STRUCT_OFFSET(USBZVehicleAnimation, BuiltInAnimMontagesHandler); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
