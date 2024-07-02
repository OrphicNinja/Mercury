// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIWeakPoint_generated_h
#error "SBZAIWeakPoint.generated.h already included, missing '#pragma once' in SBZAIWeakPoint.h"
#endif
#define STARBREEZE_SBZAIWeakPoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_RPC_WRAPPERS \
	virtual void Multicast_OnWeakPointDestroyed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnWeakPointDestroyed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnWeakPointDestroyed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnWeakPointDestroyed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIWeakPoint(); \
	friend struct Z_Construct_UClass_USBZAIWeakPoint_Statics; \
public: \
	DECLARE_CLASS(USBZAIWeakPoint, UStaticMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIWeakPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIWeakPoint(); \
	friend struct Z_Construct_UClass_USBZAIWeakPoint_Statics; \
public: \
	DECLARE_CLASS(USBZAIWeakPoint, UStaticMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIWeakPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIWeakPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIWeakPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIWeakPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIWeakPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIWeakPoint(USBZAIWeakPoint&&); \
	NO_API USBZAIWeakPoint(const USBZAIWeakPoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIWeakPoint(USBZAIWeakPoint&&); \
	NO_API USBZAIWeakPoint(const USBZAIWeakPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIWeakPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIWeakPoint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIWeakPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeakPointHealth() { return STRUCT_OFFSET(USBZAIWeakPoint, WeakPointHealth); } \
	FORCEINLINE static uint32 __PPO__DestroyedEffect() { return STRUCT_OFFSET(USBZAIWeakPoint, DestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__DestroyedEvent() { return STRUCT_OFFSET(USBZAIWeakPoint, DestroyedEvent); } \
	FORCEINLINE static uint32 __PPO__WeakPointAttributeSet() { return STRUCT_OFFSET(USBZAIWeakPoint, WeakPointAttributeSet); } \
	FORCEINLINE static uint32 __PPO__DestroyedInstigator() { return STRUCT_OFFSET(USBZAIWeakPoint, DestroyedInstigator); } \
	FORCEINLINE static uint32 __PPO__WeakPointType() { return STRUCT_OFFSET(USBZAIWeakPoint, WeakPointType); } \
	FORCEINLINE static uint32 __PPO__HideInfo() { return STRUCT_OFFSET(USBZAIWeakPoint, HideInfo); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIWeakPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIWeakPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
