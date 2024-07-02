// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef STARBREEZE_SBZBTService_DozerCharge_generated_h
#error "SBZBTService_DozerCharge.generated.h already included, missing '#pragma once' in SBZBTService_DozerCharge.h"
#endif
#define STARBREEZE_SBZBTService_DozerCharge_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execTickChargeMeleeCheck);


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execTickChargeMeleeCheck);


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBTService_DozerCharge(); \
	friend struct Z_Construct_UClass_USBZBTService_DozerCharge_Statics; \
public: \
	DECLARE_CLASS(USBZBTService_DozerCharge, UBTService, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBTService_DozerCharge)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBTService_DozerCharge(); \
	friend struct Z_Construct_UClass_USBZBTService_DozerCharge_Statics; \
public: \
	DECLARE_CLASS(USBZBTService_DozerCharge, UBTService, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBTService_DozerCharge)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBTService_DozerCharge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBTService_DozerCharge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBTService_DozerCharge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBTService_DozerCharge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBTService_DozerCharge(USBZBTService_DozerCharge&&); \
	NO_API USBZBTService_DozerCharge(const USBZBTService_DozerCharge&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBTService_DozerCharge(USBZBTService_DozerCharge&&); \
	NO_API USBZBTService_DozerCharge(const USBZBTService_DozerCharge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBTService_DozerCharge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBTService_DozerCharge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBTService_DozerCharge)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExtraChargeDistance() { return STRUCT_OFFSET(USBZBTService_DozerCharge, ExtraChargeDistance); } \
	FORCEINLINE static uint32 __PPO__CheckForHitTickRate() { return STRUCT_OFFSET(USBZBTService_DozerCharge, CheckForHitTickRate); } \
	FORCEINLINE static uint32 __PPO__ChargeComment() { return STRUCT_OFFSET(USBZBTService_DozerCharge, ChargeComment); } \
	FORCEINLINE static uint32 __PPO__HurtReactionWeightOnAI() { return STRUCT_OFFSET(USBZBTService_DozerCharge, HurtReactionWeightOnAI); } \
	FORCEINLINE static uint32 __PPO__AIController() { return STRUCT_OFFSET(USBZBTService_DozerCharge, AIController); } \
	FORCEINLINE static uint32 __PPO__CurrentMontage() { return STRUCT_OFFSET(USBZBTService_DozerCharge, CurrentMontage); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBTService_DozerCharge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBTService_DozerCharge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
