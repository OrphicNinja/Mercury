// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
#ifdef STARBREEZE_SBZMeleeComponent_generated_h
#error "SBZMeleeComponent.generated.h already included, missing '#pragma once' in SBZMeleeComponent.h"
#endif
#define STARBREEZE_SBZMeleeComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetEnforcerSolidNetIDArray_Implementation(TArray<int32> const& InEnforcerSolidNetIDArray); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetEnforcerSolidNetIDArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetEnforcerSolidNetIDArray_Implementation(TArray<int32> const& InEnforcerSolidNetIDArray); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetEnforcerSolidNetIDArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_EVENT_PARMS \
	struct SBZMeleeComponent_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZMeleeComponent_eventMulticast_SetEnforcerSolidNetIDArray_Parms \
	{ \
		TArray<int32> InEnforcerSolidNetIDArray; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMeleeComponent(); \
	friend struct Z_Construct_UClass_USBZMeleeComponent_Statics; \
public: \
	DECLARE_CLASS(USBZMeleeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMeleeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZMeleeComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMeleeComponent(); \
	friend struct Z_Construct_UClass_USBZMeleeComponent_Statics; \
public: \
	DECLARE_CLASS(USBZMeleeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMeleeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZMeleeComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMeleeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMeleeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMeleeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMeleeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMeleeComponent(USBZMeleeComponent&&); \
	NO_API USBZMeleeComponent(const USBZMeleeComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMeleeComponent(USBZMeleeComponent&&); \
	NO_API USBZMeleeComponent(const USBZMeleeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMeleeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMeleeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMeleeComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningCharacter() { return STRUCT_OFFSET(USBZMeleeComponent, OwningCharacter); } \
	FORCEINLINE static uint32 __PPO__PostDamagePhysicsEffectData() { return STRUCT_OFFSET(USBZMeleeComponent, PostDamagePhysicsEffectData); } \
	FORCEINLINE static uint32 __PPO__bIsFriendlyFireAllowedOverride() { return STRUCT_OFFSET(USBZMeleeComponent, bIsFriendlyFireAllowedOverride); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMeleeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMeleeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
