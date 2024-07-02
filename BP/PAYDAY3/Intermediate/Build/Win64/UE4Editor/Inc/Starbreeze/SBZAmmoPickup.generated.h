// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAmmoPickup_generated_h
#error "SBZAmmoPickup.generated.h already included, missing '#pragma once' in SBZAmmoPickup.h"
#endif
#define STARBREEZE_SBZAmmoPickup_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAmmoPickup(); \
	friend struct Z_Construct_UClass_ASBZAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(ASBZAmmoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAmmoPickup)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZAmmoPickup(); \
	friend struct Z_Construct_UClass_ASBZAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(ASBZAmmoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAmmoPickup)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAmmoPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAmmoPickup(ASBZAmmoPickup&&); \
	NO_API ASBZAmmoPickup(const ASBZAmmoPickup&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAmmoPickup(ASBZAmmoPickup&&); \
	NO_API ASBZAmmoPickup(const ASBZAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAmmoPickup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAmmoPickup)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupModifier() { return STRUCT_OFFSET(ASBZAmmoPickup, PickupModifier); } \
	FORCEINLINE static uint32 __PPO__PhysicsComponent() { return STRUCT_OFFSET(ASBZAmmoPickup, PhysicsComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAmmoPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
