// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZActorFilterComponent_generated_h
#error "SBZActorFilterComponent.generated.h already included, missing '#pragma once' in SBZActorFilterComponent.h"
#endif
#define STARBREEZE_SBZActorFilterComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execSetPrimitiveComponent); \
	DECLARE_FUNCTION(execSetPrimitiveComponentEnableCollision);


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execSetPrimitiveComponent); \
	DECLARE_FUNCTION(execSetPrimitiveComponentEnableCollision);


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZActorFilterComponent(); \
	friend struct Z_Construct_UClass_USBZActorFilterComponent_Statics; \
public: \
	DECLARE_CLASS(USBZActorFilterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(USBZActorFilterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZActorFilterComponent(); \
	friend struct Z_Construct_UClass_USBZActorFilterComponent_Statics; \
public: \
	DECLARE_CLASS(USBZActorFilterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(USBZActorFilterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API USBZActorFilterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActorFilterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, USBZActorFilterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActorFilterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API USBZActorFilterComponent(USBZActorFilterComponent&&); \
	STARBREEZE_API USBZActorFilterComponent(const USBZActorFilterComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API USBZActorFilterComponent(USBZActorFilterComponent&&); \
	STARBREEZE_API USBZActorFilterComponent(const USBZActorFilterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, USBZActorFilterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActorFilterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActorFilterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeakPrimitiveComponent() { return STRUCT_OFFSET(USBZActorFilterComponent, WeakPrimitiveComponent); } \
	FORCEINLINE static uint32 __PPO__PrimitiveComponent() { return STRUCT_OFFSET(USBZActorFilterComponent, PrimitiveComponent); } \
	FORCEINLINE static uint32 __PPO__CachedCollisionEnabledState() { return STRUCT_OFFSET(USBZActorFilterComponent, CachedCollisionEnabledState); } \
	FORCEINLINE static uint32 __PPO__FilterDefinitions() { return STRUCT_OFFSET(USBZActorFilterComponent, FilterDefinitions); }


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZActorFilterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorFilterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
