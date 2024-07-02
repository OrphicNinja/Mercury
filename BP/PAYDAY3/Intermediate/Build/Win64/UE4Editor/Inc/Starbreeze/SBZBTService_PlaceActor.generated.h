// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBTService_PlaceActor_generated_h
#error "SBZBTService_PlaceActor.generated.h already included, missing '#pragma once' in SBZBTService_PlaceActor.h"
#endif
#define STARBREEZE_SBZBTService_PlaceActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBTService_PlaceActor(); \
	friend struct Z_Construct_UClass_USBZBTService_PlaceActor_Statics; \
public: \
	DECLARE_CLASS(USBZBTService_PlaceActor, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBTService_PlaceActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBTService_PlaceActor(); \
	friend struct Z_Construct_UClass_USBZBTService_PlaceActor_Statics; \
public: \
	DECLARE_CLASS(USBZBTService_PlaceActor, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBTService_PlaceActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBTService_PlaceActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBTService_PlaceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBTService_PlaceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBTService_PlaceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBTService_PlaceActor(USBZBTService_PlaceActor&&); \
	NO_API USBZBTService_PlaceActor(const USBZBTService_PlaceActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBTService_PlaceActor(USBZBTService_PlaceActor&&); \
	NO_API USBZBTService_PlaceActor(const USBZBTService_PlaceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBTService_PlaceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBTService_PlaceActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZBTService_PlaceActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlacingCooldown() { return STRUCT_OFFSET(USBZBTService_PlaceActor, PlacingCooldown); } \
	FORCEINLINE static uint32 __PPO__RandomChance() { return STRUCT_OFFSET(USBZBTService_PlaceActor, RandomChance); } \
	FORCEINLINE static uint32 __PPO__ForbiddenPlacementTags() { return STRUCT_OFFSET(USBZBTService_PlaceActor, ForbiddenPlacementTags); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBTService_PlaceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBTService_PlaceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
