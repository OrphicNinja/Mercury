// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STARBREEZE_SBZWindEmitterComponent_generated_h
#error "SBZWindEmitterComponent.generated.h already included, missing '#pragma once' in SBZWindEmitterComponent.h"
#endif
#define STARBREEZE_SBZWindEmitterComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetExtent); \
	DECLARE_FUNCTION(execSetSpeed);


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetExtent); \
	DECLARE_FUNCTION(execSetSpeed);


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWindEmitterComponent(); \
	friend struct Z_Construct_UClass_USBZWindEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(USBZWindEmitterComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWindEmitterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWindEmitterComponent(); \
	friend struct Z_Construct_UClass_USBZWindEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(USBZWindEmitterComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWindEmitterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWindEmitterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWindEmitterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWindEmitterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWindEmitterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWindEmitterComponent(USBZWindEmitterComponent&&); \
	NO_API USBZWindEmitterComponent(const USBZWindEmitterComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWindEmitterComponent(USBZWindEmitterComponent&&); \
	NO_API USBZWindEmitterComponent(const USBZWindEmitterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWindEmitterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWindEmitterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWindEmitterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VolumeType() { return STRUCT_OFFSET(USBZWindEmitterComponent, VolumeType); } \
	FORCEINLINE static uint32 __PPO__EmitterType() { return STRUCT_OFFSET(USBZWindEmitterComponent, EmitterType); } \
	FORCEINLINE static uint32 __PPO__bHasInfiniteExtent() { return STRUCT_OFFSET(USBZWindEmitterComponent, bHasInfiniteExtent); } \
	FORCEINLINE static uint32 __PPO__Extent() { return STRUCT_OFFSET(USBZWindEmitterComponent, Extent); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(USBZWindEmitterComponent, Speed); } \
	FORCEINLINE static uint32 __PPO__MinGustAmount() { return STRUCT_OFFSET(USBZWindEmitterComponent, MinGustAmount); } \
	FORCEINLINE static uint32 __PPO__MaxGustAmount() { return STRUCT_OFFSET(USBZWindEmitterComponent, MaxGustAmount); } \
	FORCEINLINE static uint32 __PPO__GustFrequency() { return STRUCT_OFFSET(USBZWindEmitterComponent, GustFrequency); } \
	FORCEINLINE static uint32 __PPO__Strength() { return STRUCT_OFFSET(USBZWindEmitterComponent, Strength); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWindEmitterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWindEmitterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
