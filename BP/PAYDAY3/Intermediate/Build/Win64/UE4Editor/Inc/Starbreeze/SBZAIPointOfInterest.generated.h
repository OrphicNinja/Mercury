// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FGameplayTagContainer;
struct FGameplayTag;
class AActor;
#ifdef STARBREEZE_SBZAIPointOfInterest_generated_h
#error "SBZAIPointOfInterest.generated.h already included, missing '#pragma once' in SBZAIPointOfInterest.h"
#endif
#define STARBREEZE_SBZAIPointOfInterest_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execOnOwnerDestroyed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execOnOwnerDestroyed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_EVENT_PARMS \
	struct SBZAIPointOfInterest_eventOnInteracted_Parms \
	{ \
		AActor* ActionInstigator; \
		FGameplayTag InteractionTag; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIPointOfInterest(); \
	friend struct Z_Construct_UClass_ASBZAIPointOfInterest_Statics; \
public: \
	DECLARE_CLASS(ASBZAIPointOfInterest, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIPointOfInterest) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIPointOfInterest*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIPointOfInterest(); \
	friend struct Z_Construct_UClass_ASBZAIPointOfInterest_Statics; \
public: \
	DECLARE_CLASS(ASBZAIPointOfInterest, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIPointOfInterest) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIPointOfInterest*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIPointOfInterest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIPointOfInterest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIPointOfInterest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIPointOfInterest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIPointOfInterest(ASBZAIPointOfInterest&&); \
	NO_API ASBZAIPointOfInterest(const ASBZAIPointOfInterest&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIPointOfInterest(ASBZAIPointOfInterest&&); \
	NO_API ASBZAIPointOfInterest(const ASBZAIPointOfInterest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIPointOfInterest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIPointOfInterest); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIPointOfInterest)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAutoEnable() { return STRUCT_OFFSET(ASBZAIPointOfInterest, bAutoEnable); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZAIPointOfInterest, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZAIPointOfInterest, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__SphereCollision() { return STRUCT_OFFSET(ASBZAIPointOfInterest, SphereCollision); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIPointOfInterest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
