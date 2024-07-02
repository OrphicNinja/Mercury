// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAISightModifierVolume_generated_h
#error "SBZAISightModifierVolume.generated.h already included, missing '#pragma once' in SBZAISightModifierVolume.h"
#endif
#define STARBREEZE_SBZAISightModifierVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_RPC_WRAPPERS \
	virtual void Multicast_OnEffectActivated_Implementation(bool bSetActive); \
 \
	DECLARE_FUNCTION(execMulticast_OnEffectActivated); \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execSetSightModifierVolumeActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnEffectActivated_Implementation(bool bSetActive); \
 \
	DECLARE_FUNCTION(execMulticast_OnEffectActivated); \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execSetSightModifierVolumeActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_EVENT_PARMS \
	struct SBZAISightModifierVolume_eventMulticast_OnEffectActivated_Parms \
	{ \
		bool bSetActive; \
	}; \
	struct SBZAISightModifierVolume_eventOnActiveStateChanged_Parms \
	{ \
		bool bSetActive; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAISightModifierVolume(); \
	friend struct Z_Construct_UClass_ASBZAISightModifierVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZAISightModifierVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAISightModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAISightModifierVolume*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZAISightModifierVolume(); \
	friend struct Z_Construct_UClass_ASBZAISightModifierVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZAISightModifierVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAISightModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAISightModifierVolume*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAISightModifierVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAISightModifierVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAISightModifierVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAISightModifierVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAISightModifierVolume(ASBZAISightModifierVolume&&); \
	NO_API ASBZAISightModifierVolume(const ASBZAISightModifierVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAISightModifierVolume(ASBZAISightModifierVolume&&); \
	NO_API ASBZAISightModifierVolume(const ASBZAISightModifierVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAISightModifierVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAISightModifierVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAISightModifierVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VolumeBox() { return STRUCT_OFFSET(ASBZAISightModifierVolume, VolumeBox); } \
	FORCEINLINE static uint32 __PPO__StealthSightModifier() { return STRUCT_OFFSET(ASBZAISightModifierVolume, StealthSightModifier); } \
	FORCEINLINE static uint32 __PPO__LoudSightModifier() { return STRUCT_OFFSET(ASBZAISightModifierVolume, LoudSightModifier); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(ASBZAISightModifierVolume, bIsActive); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAISightModifierVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAISightModifierVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
