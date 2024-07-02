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
class ASBZAIController;
class USBZAIOrder;
#ifdef STARBREEZE_SBZAIOrder_FollowTarget_generated_h
#error "SBZAIOrder_FollowTarget.generated.h already included, missing '#pragma once' in SBZAIOrder_FollowTarget.h"
#endif
#define STARBREEZE_SBZAIOrder_FollowTarget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAIPawnKilled); \
	DECLARE_FUNCTION(execOnHitByPlayer); \
	DECLARE_FUNCTION(execOnOwnerInteracted); \
	DECLARE_FUNCTION(execOnOwnerOrderPushed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAIPawnKilled); \
	DECLARE_FUNCTION(execOnHitByPlayer); \
	DECLARE_FUNCTION(execOnOwnerInteracted); \
	DECLARE_FUNCTION(execOnOwnerOrderPushed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_FollowTarget(); \
	friend struct Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_FollowTarget, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_FollowTarget)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_FollowTarget(); \
	friend struct Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_FollowTarget, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_FollowTarget)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIOrder_FollowTarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIOrder_FollowTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_FollowTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_FollowTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_FollowTarget(USBZAIOrder_FollowTarget&&); \
	NO_API USBZAIOrder_FollowTarget(const USBZAIOrder_FollowTarget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_FollowTarget(USBZAIOrder_FollowTarget&&); \
	NO_API USBZAIOrder_FollowTarget(const USBZAIOrder_FollowTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_FollowTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_FollowTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIOrder_FollowTarget)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIOrder_FollowTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FollowTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
