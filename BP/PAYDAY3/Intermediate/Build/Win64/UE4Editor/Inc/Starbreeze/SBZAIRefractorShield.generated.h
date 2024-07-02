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
#ifdef STARBREEZE_SBZAIRefractorShield_generated_h
#error "SBZAIRefractorShield.generated.h already included, missing '#pragma once' in SBZAIRefractorShield.h"
#endif
#define STARBREEZE_SBZAIRefractorShield_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPropDamaged); \
	DECLARE_FUNCTION(execOnRep_HasDeployed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPropDamaged); \
	DECLARE_FUNCTION(execOnRep_HasDeployed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIRefractorShield(); \
	friend struct Z_Construct_UClass_ASBZAIRefractorShield_Statics; \
public: \
	DECLARE_CLASS(ASBZAIRefractorShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIRefractorShield) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasDeployed=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasDeployed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIRefractorShield(); \
	friend struct Z_Construct_UClass_ASBZAIRefractorShield_Statics; \
public: \
	DECLARE_CLASS(ASBZAIRefractorShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIRefractorShield) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasDeployed=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHasDeployed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIRefractorShield(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIRefractorShield) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIRefractorShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIRefractorShield); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIRefractorShield(ASBZAIRefractorShield&&); \
	NO_API ASBZAIRefractorShield(const ASBZAIRefractorShield&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIRefractorShield(ASBZAIRefractorShield&&); \
	NO_API ASBZAIRefractorShield(const ASBZAIRefractorShield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIRefractorShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIRefractorShield); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIRefractorShield)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ASBZAIRefractorShield, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__PropDamageComponent() { return STRUCT_OFFSET(ASBZAIRefractorShield, PropDamageComponent); } \
	FORCEINLINE static uint32 __PPO__DestroyedEffect() { return STRUCT_OFFSET(ASBZAIRefractorShield, DestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__DestroyedEvent() { return STRUCT_OFFSET(ASBZAIRefractorShield, DestroyedEvent); } \
	FORCEINLINE static uint32 __PPO__DeployAnimation() { return STRUCT_OFFSET(ASBZAIRefractorShield, DeployAnimation); } \
	FORCEINLINE static uint32 __PPO__RetractAnimation() { return STRUCT_OFFSET(ASBZAIRefractorShield, RetractAnimation); } \
	FORCEINLINE static uint32 __PPO__bHasDeployed() { return STRUCT_OFFSET(ASBZAIRefractorShield, bHasDeployed); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIRefractorShield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIRefractorShield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
