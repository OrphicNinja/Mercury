// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIPointOfInterestReplicatedDebris_generated_h
#error "SBZAIPointOfInterestReplicatedDebris.generated.h already included, missing '#pragma once' in SBZAIPointOfInterestReplicatedDebris.h"
#endif
#define STARBREEZE_SBZAIPointOfInterestReplicatedDebris_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_OnSpawnDebris);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_OnSpawnDebris);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIPointOfInterestReplicatedDebris(); \
	friend struct Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics; \
public: \
	DECLARE_CLASS(ASBZAIPointOfInterestReplicatedDebris, ASBZAIPointOfInterest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIPointOfInterestReplicatedDebris) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSpawnDebris=NETFIELD_REP_START, \
		NETFIELD_REP_END=bSpawnDebris	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIPointOfInterestReplicatedDebris(); \
	friend struct Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics; \
public: \
	DECLARE_CLASS(ASBZAIPointOfInterestReplicatedDebris, ASBZAIPointOfInterest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIPointOfInterestReplicatedDebris) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSpawnDebris=NETFIELD_REP_START, \
		NETFIELD_REP_END=bSpawnDebris	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIPointOfInterestReplicatedDebris(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIPointOfInterestReplicatedDebris) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIPointOfInterestReplicatedDebris); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIPointOfInterestReplicatedDebris); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIPointOfInterestReplicatedDebris(ASBZAIPointOfInterestReplicatedDebris&&); \
	NO_API ASBZAIPointOfInterestReplicatedDebris(const ASBZAIPointOfInterestReplicatedDebris&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIPointOfInterestReplicatedDebris(ASBZAIPointOfInterestReplicatedDebris&&); \
	NO_API ASBZAIPointOfInterestReplicatedDebris(const ASBZAIPointOfInterestReplicatedDebris&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIPointOfInterestReplicatedDebris); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIPointOfInterestReplicatedDebris); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIPointOfInterestReplicatedDebris)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Debris() { return STRUCT_OFFSET(ASBZAIPointOfInterestReplicatedDebris, Debris); } \
	FORCEINLINE static uint32 __PPO__bSpawnDebris() { return STRUCT_OFFSET(ASBZAIPointOfInterestReplicatedDebris, bSpawnDebris); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIPointOfInterestReplicatedDebris>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIPointOfInterestReplicatedDebris_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
