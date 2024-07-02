// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZAIOrder;
class APawn;
#ifdef STARBREEZE_SBZAIAction_Order_generated_h
#error "SBZAIAction_Order.generated.h already included, missing '#pragma once' in SBZAIAction_Order.h"
#endif
#define STARBREEZE_SBZAIAction_Order_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOrderCompleted); \
	DECLARE_FUNCTION(execOnOrderStarted); \
	DECLARE_FUNCTION(execOnOrderStopped);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOrderCompleted); \
	DECLARE_FUNCTION(execOnOrderStarted); \
	DECLARE_FUNCTION(execOnOrderStopped);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIAction_Order(); \
	friend struct Z_Construct_UClass_USBZAIAction_Order_Statics; \
public: \
	DECLARE_CLASS(USBZAIAction_Order, USBZAIAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAction_Order)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIAction_Order(); \
	friend struct Z_Construct_UClass_USBZAIAction_Order_Statics; \
public: \
	DECLARE_CLASS(USBZAIAction_Order, USBZAIAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAction_Order)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAction_Order(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAction_Order) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAction_Order); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAction_Order); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAction_Order(USBZAIAction_Order&&); \
	NO_API USBZAIAction_Order(const USBZAIAction_Order&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAction_Order(USBZAIAction_Order&&); \
	NO_API USBZAIAction_Order(const USBZAIAction_Order&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAction_Order); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAction_Order); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIAction_Order)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionOrder() { return STRUCT_OFFSET(USBZAIAction_Order, ActionOrder); } \
	FORCEINLINE static uint32 __PPO__OrderInstance() { return STRUCT_OFFSET(USBZAIAction_Order, OrderInstance); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIAction_Order>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAction_Order_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
