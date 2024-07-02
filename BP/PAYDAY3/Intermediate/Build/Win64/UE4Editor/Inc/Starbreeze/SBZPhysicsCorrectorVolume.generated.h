// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPhysicsCorrectorVolume_generated_h
#error "SBZPhysicsCorrectorVolume.generated.h already included, missing '#pragma once' in SBZPhysicsCorrectorVolume.h"
#endif
#define STARBREEZE_SBZPhysicsCorrectorVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_RPC_WRAPPERS \
	virtual void Multicast_SetVolumeEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_SetVolumeEnabled); \
	DECLARE_FUNCTION(execOnRep_VolumeEnabled); \
	DECLARE_FUNCTION(execSetVolumeEnabled); \
	DECLARE_FUNCTION(execSetVolumeEnabledLocally);


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetVolumeEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_SetVolumeEnabled); \
	DECLARE_FUNCTION(execOnRep_VolumeEnabled); \
	DECLARE_FUNCTION(execSetVolumeEnabled); \
	DECLARE_FUNCTION(execSetVolumeEnabledLocally);


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_EVENT_PARMS \
	struct SBZPhysicsCorrectorVolume_eventMulticast_SetVolumeEnabled_Parms \
	{ \
		bool bEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPhysicsCorrectorVolume(); \
	friend struct Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZPhysicsCorrectorVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPhysicsCorrectorVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsVolumeEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsVolumeEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZPhysicsCorrectorVolume(); \
	friend struct Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZPhysicsCorrectorVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPhysicsCorrectorVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsVolumeEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsVolumeEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPhysicsCorrectorVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPhysicsCorrectorVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPhysicsCorrectorVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPhysicsCorrectorVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPhysicsCorrectorVolume(ASBZPhysicsCorrectorVolume&&); \
	NO_API ASBZPhysicsCorrectorVolume(const ASBZPhysicsCorrectorVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPhysicsCorrectorVolume(ASBZPhysicsCorrectorVolume&&); \
	NO_API ASBZPhysicsCorrectorVolume(const ASBZPhysicsCorrectorVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPhysicsCorrectorVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPhysicsCorrectorVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPhysicsCorrectorVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NonCorrectedActorsInVolume() { return STRUCT_OFFSET(ASBZPhysicsCorrectorVolume, NonCorrectedActorsInVolume); } \
	FORCEINLINE static uint32 __PPO__bIsVolumeEnabled() { return STRUCT_OFFSET(ASBZPhysicsCorrectorVolume, bIsVolumeEnabled); } \
	FORCEINLINE static uint32 __PPO__bStartVolumeEnabled() { return STRUCT_OFFSET(ASBZPhysicsCorrectorVolume, bStartVolumeEnabled); } \
	FORCEINLINE static uint32 __PPO__BoundingBox() { return STRUCT_OFFSET(ASBZPhysicsCorrectorVolume, BoundingBox); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPhysicsCorrectorVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPhysicsCorrectorVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
