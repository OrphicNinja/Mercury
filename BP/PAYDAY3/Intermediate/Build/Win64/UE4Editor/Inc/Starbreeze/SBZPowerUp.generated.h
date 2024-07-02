// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZPowerUp_generated_h
#error "SBZPowerUp.generated.h already included, missing '#pragma once' in SBZPowerUp.h"
#endif
#define STARBREEZE_SBZPowerUp_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSeasonalItem); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSeasonalItem); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPowerUp(); \
	friend struct Z_Construct_UClass_ASBZPowerUp_Statics; \
public: \
	DECLARE_CLASS(ASBZPowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPowerUp)


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZPowerUp(); \
	friend struct Z_Construct_UClass_ASBZPowerUp_Statics; \
public: \
	DECLARE_CLASS(ASBZPowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPowerUp)


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPowerUp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPowerUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPowerUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPowerUp(ASBZPowerUp&&); \
	NO_API ASBZPowerUp(const ASBZPowerUp&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPowerUp(ASBZPowerUp&&); \
	NO_API ASBZPowerUp(const ASBZPowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPowerUp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPowerUp)


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZPowerUp, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__bIsDestroyedOnPickUp() { return STRUCT_OFFSET(ASBZPowerUp, bIsDestroyedOnPickUp); } \
	FORCEINLINE static uint32 __PPO__BuffsToGive() { return STRUCT_OFFSET(ASBZPowerUp, BuffsToGive); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPowerUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPowerUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
