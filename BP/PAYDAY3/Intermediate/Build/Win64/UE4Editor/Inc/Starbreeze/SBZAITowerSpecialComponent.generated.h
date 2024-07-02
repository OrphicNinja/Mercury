// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZAIOrder;
class APawn;
class ASBZAIRefractorShield;
#ifdef STARBREEZE_SBZAITowerSpecialComponent_generated_h
#error "SBZAITowerSpecialComponent.generated.h already included, missing '#pragma once' in SBZAITowerSpecialComponent.h"
#endif
#define STARBREEZE_SBZAITowerSpecialComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_RPC_WRAPPERS \
	virtual void Multicast_RetractShield_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_RetractShield); \
	DECLARE_FUNCTION(execOnHideOrderCompleted); \
	DECLARE_FUNCTION(execOnRep_IsGlitchEffectActive); \
	DECLARE_FUNCTION(execOnRep_RefractorShield);


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_RetractShield_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_RetractShield); \
	DECLARE_FUNCTION(execOnHideOrderCompleted); \
	DECLARE_FUNCTION(execOnRep_IsGlitchEffectActive); \
	DECLARE_FUNCTION(execOnRep_RefractorShield);


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAITowerSpecialComponent(); \
	friend struct Z_Construct_UClass_USBZAITowerSpecialComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAITowerSpecialComponent, USBZSpecialAIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAITowerSpecialComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RefractorShield=NETFIELD_REP_START, \
		bIsGlitchEffectActive, \
		NETFIELD_REP_END=bIsGlitchEffectActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAITowerSpecialComponent(); \
	friend struct Z_Construct_UClass_USBZAITowerSpecialComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAITowerSpecialComponent, USBZSpecialAIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAITowerSpecialComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RefractorShield=NETFIELD_REP_START, \
		bIsGlitchEffectActive, \
		NETFIELD_REP_END=bIsGlitchEffectActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAITowerSpecialComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAITowerSpecialComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAITowerSpecialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAITowerSpecialComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAITowerSpecialComponent(USBZAITowerSpecialComponent&&); \
	NO_API USBZAITowerSpecialComponent(const USBZAITowerSpecialComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAITowerSpecialComponent(USBZAITowerSpecialComponent&&); \
	NO_API USBZAITowerSpecialComponent(const USBZAITowerSpecialComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAITowerSpecialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAITowerSpecialComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAITowerSpecialComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShieldClass() { return STRUCT_OFFSET(USBZAITowerSpecialComponent, ShieldClass); } \
	FORCEINLINE static uint32 __PPO__ShieldBrokenComment() { return STRUCT_OFFSET(USBZAITowerSpecialComponent, ShieldBrokenComment); } \
	FORCEINLINE static uint32 __PPO__ShieldDeployedComment() { return STRUCT_OFFSET(USBZAITowerSpecialComponent, ShieldDeployedComment); } \
	FORCEINLINE static uint32 __PPO__RefractorShield() { return STRUCT_OFFSET(USBZAITowerSpecialComponent, RefractorShield); } \
	FORCEINLINE static uint32 __PPO__bIsGlitchEffectActive() { return STRUCT_OFFSET(USBZAITowerSpecialComponent, bIsGlitchEffectActive); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAITowerSpecialComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAITowerSpecialComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
