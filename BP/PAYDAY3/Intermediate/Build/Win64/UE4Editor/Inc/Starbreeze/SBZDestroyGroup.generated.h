// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZDestroyGroup_generated_h
#error "SBZDestroyGroup.generated.h already included, missing '#pragma once' in SBZDestroyGroup.h"
#endif
#define STARBREEZE_SBZDestroyGroup_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_RPC_WRAPPERS \
	virtual void Multicast_DestroyActors_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyActors); \
	DECLARE_FUNCTION(execMulticast_DestroyActors); \
	DECLARE_FUNCTION(execOnRep_HasDestroyedActors);


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DestroyActors_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyActors); \
	DECLARE_FUNCTION(execMulticast_DestroyActors); \
	DECLARE_FUNCTION(execOnRep_HasDestroyedActors);


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZDestroyGroup(); \
	friend struct Z_Construct_UClass_ASBZDestroyGroup_Statics; \
public: \
	DECLARE_CLASS(ASBZDestroyGroup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDestroyGroup) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasDestroyedNonReplicatedActors=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasDestroyedNonReplicatedActors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZDestroyGroup(); \
	friend struct Z_Construct_UClass_ASBZDestroyGroup_Statics; \
public: \
	DECLARE_CLASS(ASBZDestroyGroup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDestroyGroup) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasDestroyedNonReplicatedActors=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasDestroyedNonReplicatedActors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZDestroyGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDestroyGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDestroyGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDestroyGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDestroyGroup(ASBZDestroyGroup&&); \
	NO_API ASBZDestroyGroup(const ASBZDestroyGroup&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDestroyGroup(ASBZDestroyGroup&&); \
	NO_API ASBZDestroyGroup(const ASBZDestroyGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDestroyGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDestroyGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDestroyGroup)


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorsToDestroy() { return STRUCT_OFFSET(ASBZDestroyGroup, ActorsToDestroy); } \
	FORCEINLINE static uint32 __PPO__NumOfActorsToDestroyPerDifficulty() { return STRUCT_OFFSET(ASBZDestroyGroup, NumOfActorsToDestroyPerDifficulty); } \
	FORCEINLINE static uint32 __PPO__bShouldDestroyOnBeginplay() { return STRUCT_OFFSET(ASBZDestroyGroup, bShouldDestroyOnBeginplay); } \
	FORCEINLINE static uint32 __PPO__bHasDestroyedNonReplicatedActors() { return STRUCT_OFFSET(ASBZDestroyGroup, bHasDestroyedNonReplicatedActors); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZDestroyGroup, Seed); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZDestroyGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDestroyGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
