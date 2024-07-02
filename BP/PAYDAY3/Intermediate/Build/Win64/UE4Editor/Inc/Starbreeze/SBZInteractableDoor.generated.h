// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FSBZPropDamageContext;
#ifdef STARBREEZE_SBZInteractableDoor_generated_h
#error "SBZInteractableDoor.generated.h already included, missing '#pragma once' in SBZInteractableDoor.h"
#endif
#define STARBREEZE_SBZInteractableDoor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleBreachPropDamageHits);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleBreachPropDamageHits);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZInteractableDoor(); \
	friend struct Z_Construct_UClass_ASBZInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(ASBZInteractableDoor, ASBZInteractableGate, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInteractableDoor)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZInteractableDoor(); \
	friend struct Z_Construct_UClass_ASBZInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(ASBZInteractableDoor, ASBZInteractableGate, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInteractableDoor)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZInteractableDoor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInteractableDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInteractableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInteractableDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInteractableDoor(ASBZInteractableDoor&&); \
	NO_API ASBZInteractableDoor(const ASBZInteractableDoor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInteractableDoor(ASBZInteractableDoor&&); \
	NO_API ASBZInteractableDoor(const ASBZInteractableDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInteractableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInteractableDoor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInteractableDoor)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectedRoom() { return STRUCT_OFFSET(ASBZInteractableDoor, SelectedRoom); } \
	FORCEINLINE static uint32 __PPO__MaxSlammedOpenAngle() { return STRUCT_OFFSET(ASBZInteractableDoor, MaxSlammedOpenAngle); } \
	FORCEINLINE static uint32 __PPO__BreachPropDamageSelector() { return STRUCT_OFFSET(ASBZInteractableDoor, BreachPropDamageSelector); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZInteractableDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInteractableDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
