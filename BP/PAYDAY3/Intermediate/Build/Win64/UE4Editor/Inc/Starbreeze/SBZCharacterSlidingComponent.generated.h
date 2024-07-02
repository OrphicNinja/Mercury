// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCharacterSlidingComponent_generated_h
#error "SBZCharacterSlidingComponent.generated.h already included, missing '#pragma once' in SBZCharacterSlidingComponent.h"
#endif
#define STARBREEZE_SBZCharacterSlidingComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterSlidingComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterSlidingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterSlidingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterSlidingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterSlidingComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterSlidingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterSlidingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterSlidingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterSlidingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterSlidingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterSlidingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterSlidingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterSlidingComponent(USBZCharacterSlidingComponent&&); \
	NO_API USBZCharacterSlidingComponent(const USBZCharacterSlidingComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterSlidingComponent(USBZCharacterSlidingComponent&&); \
	NO_API USBZCharacterSlidingComponent(const USBZCharacterSlidingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterSlidingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterSlidingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterSlidingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bCanMakeNoise() { return STRUCT_OFFSET(USBZCharacterSlidingComponent, bCanMakeNoise); } \
	FORCEINLINE static uint32 __PPO__SlidingNoiseRange() { return STRUCT_OFFSET(USBZCharacterSlidingComponent, SlidingNoiseRange); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(USBZCharacterSlidingComponent, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacterMovementComponent() { return STRUCT_OFFSET(USBZCharacterSlidingComponent, OwnerCharacterMovementComponent); } \
	FORCEINLINE static uint32 __PPO__LastUsedAkComponent() { return STRUCT_OFFSET(USBZCharacterSlidingComponent, LastUsedAkComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterSlidingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterSlidingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
