// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZHurtReactionPrediction;
#ifdef STARBREEZE_SBZAIAbilitySystemComponent_generated_h
#error "SBZAIAbilitySystemComponent.generated.h already included, missing '#pragma once' in SBZAIAbilitySystemComponent.h"
#endif
#define STARBREEZE_SBZAIAbilitySystemComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_RPC_WRAPPERS \
	virtual void Multicast_ApplyHurtInterrupt_Implementation(FSBZHurtReactionPrediction const& HurtReactionPrediction); \
 \
	DECLARE_FUNCTION(execMulticast_ApplyHurtInterrupt);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ApplyHurtInterrupt_Implementation(FSBZHurtReactionPrediction const& HurtReactionPrediction); \
 \
	DECLARE_FUNCTION(execMulticast_ApplyHurtInterrupt);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_EVENT_PARMS \
	struct SBZAIAbilitySystemComponent_eventMulticast_ApplyHurtInterrupt_Parms \
	{ \
		FSBZHurtReactionPrediction HurtReactionPrediction; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIAbilitySystemComponent, USBZAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAbilitySystemComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIAbilitySystemComponent, USBZAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAbilitySystemComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAbilitySystemComponent(USBZAIAbilitySystemComponent&&); \
	NO_API USBZAIAbilitySystemComponent(const USBZAIAbilitySystemComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAbilitySystemComponent(USBZAIAbilitySystemComponent&&); \
	NO_API USBZAIAbilitySystemComponent(const USBZAIAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAbilitySystemComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
