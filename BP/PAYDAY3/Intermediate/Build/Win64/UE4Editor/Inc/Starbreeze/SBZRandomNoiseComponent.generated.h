// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZRandomNoiseComponent_generated_h
#error "SBZRandomNoiseComponent.generated.h already included, missing '#pragma once' in SBZRandomNoiseComponent.h"
#endif
#define STARBREEZE_SBZRandomNoiseComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_RPC_WRAPPERS \
	virtual void MulticastForceSound_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastForceSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastForceSound_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastForceSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZRandomNoiseComponent(); \
	friend struct Z_Construct_UClass_USBZRandomNoiseComponent_Statics; \
public: \
	DECLARE_CLASS(USBZRandomNoiseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRandomNoiseComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZRandomNoiseComponent(); \
	friend struct Z_Construct_UClass_USBZRandomNoiseComponent_Statics; \
public: \
	DECLARE_CLASS(USBZRandomNoiseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRandomNoiseComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRandomNoiseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRandomNoiseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRandomNoiseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRandomNoiseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRandomNoiseComponent(USBZRandomNoiseComponent&&); \
	NO_API USBZRandomNoiseComponent(const USBZRandomNoiseComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRandomNoiseComponent(USBZRandomNoiseComponent&&); \
	NO_API USBZRandomNoiseComponent(const USBZRandomNoiseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRandomNoiseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRandomNoiseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRandomNoiseComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SoundInterval() { return STRUCT_OFFSET(USBZRandomNoiseComponent, SoundInterval); } \
	FORCEINLINE static uint32 __PPO__NoiseToMake() { return STRUCT_OFFSET(USBZRandomNoiseComponent, NoiseToMake); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZRandomNoiseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRandomNoiseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
