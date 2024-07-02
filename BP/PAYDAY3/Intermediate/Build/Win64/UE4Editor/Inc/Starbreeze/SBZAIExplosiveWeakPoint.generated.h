// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
#ifdef STARBREEZE_SBZAIExplosiveWeakPoint_generated_h
#error "SBZAIExplosiveWeakPoint.generated.h already included, missing '#pragma once' in SBZAIExplosiveWeakPoint.h"
#endif
#define STARBREEZE_SBZAIExplosiveWeakPoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_EVENT_PARMS \
	struct SBZAIExplosiveWeakPoint_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIExplosiveWeakPoint(); \
	friend struct Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics; \
public: \
	DECLARE_CLASS(USBZAIExplosiveWeakPoint, USBZAIWeakPoint, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIExplosiveWeakPoint) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAIExplosiveWeakPoint*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIExplosiveWeakPoint(); \
	friend struct Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics; \
public: \
	DECLARE_CLASS(USBZAIExplosiveWeakPoint, USBZAIWeakPoint, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIExplosiveWeakPoint) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAIExplosiveWeakPoint*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIExplosiveWeakPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIExplosiveWeakPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIExplosiveWeakPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIExplosiveWeakPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIExplosiveWeakPoint(USBZAIExplosiveWeakPoint&&); \
	NO_API USBZAIExplosiveWeakPoint(const USBZAIExplosiveWeakPoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIExplosiveWeakPoint(USBZAIExplosiveWeakPoint&&); \
	NO_API USBZAIExplosiveWeakPoint(const USBZAIExplosiveWeakPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIExplosiveWeakPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIExplosiveWeakPoint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIExplosiveWeakPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameplayEffectClass() { return STRUCT_OFFSET(USBZAIExplosiveWeakPoint, GameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRange() { return STRUCT_OFFSET(USBZAIExplosiveWeakPoint, AIExplosionRange); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRange() { return STRUCT_OFFSET(USBZAIExplosiveWeakPoint, PlayerExplosionRange); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(USBZAIExplosiveWeakPoint, HurtReactionData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIExplosiveWeakPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIExplosiveWeakPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
