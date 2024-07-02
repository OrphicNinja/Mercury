// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZEquippable;
struct FVector;
class AActor;
class UMeshComponent;
class USBZOutlineComponent;
class ASBZCharacter;
#ifdef STARBREEZE_SBZEquippableCharm_generated_h
#error "SBZEquippableCharm.generated.h already included, missing '#pragma once' in SBZEquippableCharm.h"
#endif
#define STARBREEZE_SBZEquippableCharm_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_RPC_WRAPPERS \
	virtual void OnEquippableDropped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableEquipped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableUndropped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableUnequipped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableUsed_Implementation(const ASBZEquippable* Equippable); \
 \
	DECLARE_FUNCTION(execEquippableDropped); \
	DECLARE_FUNCTION(execEquippableEquipped); \
	DECLARE_FUNCTION(execEquippableUndropped); \
	DECLARE_FUNCTION(execEquippableUnequipped); \
	DECLARE_FUNCTION(execEquippableUsed); \
	DECLARE_FUNCTION(execGetEquippableTimeLastUsed); \
	DECLARE_FUNCTION(execGetOwningCharacterVelocity); \
	DECLARE_FUNCTION(execOnEquippableDropped); \
	DECLARE_FUNCTION(execOnEquippableEquipped); \
	DECLARE_FUNCTION(execOnEquippableUndropped); \
	DECLARE_FUNCTION(execOnEquippableUnequipped); \
	DECLARE_FUNCTION(execOnEquippableUsed); \
	DECLARE_FUNCTION(execOnParentDestroyed); \
	DECLARE_FUNCTION(execResetMeshProperties); \
	DECLARE_FUNCTION(execSetOwningCharacter); \
	DECLARE_FUNCTION(execSetOwningEquippable); \
	DECLARE_FUNCTION(execUpdateMeshPropertiesFrom);


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEquippableDropped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableEquipped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableUndropped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableUnequipped_Implementation(const ASBZEquippable* Equippable); \
	virtual void OnEquippableUsed_Implementation(const ASBZEquippable* Equippable); \
 \
	DECLARE_FUNCTION(execEquippableDropped); \
	DECLARE_FUNCTION(execEquippableEquipped); \
	DECLARE_FUNCTION(execEquippableUndropped); \
	DECLARE_FUNCTION(execEquippableUnequipped); \
	DECLARE_FUNCTION(execEquippableUsed); \
	DECLARE_FUNCTION(execGetEquippableTimeLastUsed); \
	DECLARE_FUNCTION(execGetOwningCharacterVelocity); \
	DECLARE_FUNCTION(execOnEquippableDropped); \
	DECLARE_FUNCTION(execOnEquippableEquipped); \
	DECLARE_FUNCTION(execOnEquippableUndropped); \
	DECLARE_FUNCTION(execOnEquippableUnequipped); \
	DECLARE_FUNCTION(execOnEquippableUsed); \
	DECLARE_FUNCTION(execOnParentDestroyed); \
	DECLARE_FUNCTION(execResetMeshProperties); \
	DECLARE_FUNCTION(execSetOwningCharacter); \
	DECLARE_FUNCTION(execSetOwningEquippable); \
	DECLARE_FUNCTION(execUpdateMeshPropertiesFrom);


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_EVENT_PARMS \
	struct SBZEquippableCharm_eventOnEquippableDropped_Parms \
	{ \
		const ASBZEquippable* Equippable; \
	}; \
	struct SBZEquippableCharm_eventOnEquippableEquipped_Parms \
	{ \
		const ASBZEquippable* Equippable; \
	}; \
	struct SBZEquippableCharm_eventOnEquippableUndropped_Parms \
	{ \
		const ASBZEquippable* Equippable; \
	}; \
	struct SBZEquippableCharm_eventOnEquippableUnequipped_Parms \
	{ \
		const ASBZEquippable* Equippable; \
	}; \
	struct SBZEquippableCharm_eventOnEquippableUsed_Parms \
	{ \
		const ASBZEquippable* Equippable; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZEquippableCharm(); \
	friend struct Z_Construct_UClass_ASBZEquippableCharm_Statics; \
public: \
	DECLARE_CLASS(ASBZEquippableCharm, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZEquippableCharm)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZEquippableCharm(); \
	friend struct Z_Construct_UClass_ASBZEquippableCharm_Statics; \
public: \
	DECLARE_CLASS(ASBZEquippableCharm, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZEquippableCharm)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZEquippableCharm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZEquippableCharm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZEquippableCharm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZEquippableCharm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZEquippableCharm(ASBZEquippableCharm&&); \
	NO_API ASBZEquippableCharm(const ASBZEquippableCharm&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZEquippableCharm(ASBZEquippableCharm&&); \
	NO_API ASBZEquippableCharm(const ASBZEquippableCharm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZEquippableCharm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZEquippableCharm); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZEquippableCharm)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningCharacter() { return STRUCT_OFFSET(ASBZEquippableCharm, OwningCharacter); } \
	FORCEINLINE static uint32 __PPO__OwningEquippable() { return STRUCT_OFFSET(ASBZEquippableCharm, OwningEquippable); }


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZEquippableCharm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableCharm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
