// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
class AActor;
#ifdef STARBREEZE_SBZFilteredAudioVolume_generated_h
#error "SBZFilteredAudioVolume.generated.h already included, missing '#pragma once' in SBZFilteredAudioVolume.h"
#endif
#define STARBREEZE_SBZFilteredAudioVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_RPC_WRAPPERS \
	virtual void Multicast_SetIntensity_Implementation(uint8 NewIntensity); \
 \
	DECLARE_FUNCTION(execMulticast_SetIntensity); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnOverlapActorsChanged); \
	DECLARE_FUNCTION(execOnRep_Intensity); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetIntensity_Implementation(uint8 NewIntensity); \
 \
	DECLARE_FUNCTION(execMulticast_SetIntensity); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnOverlapActorsChanged); \
	DECLARE_FUNCTION(execOnRep_Intensity); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_EVENT_PARMS \
	struct SBZFilteredAudioVolume_eventMulticast_SetIntensity_Parms \
	{ \
		uint8 NewIntensity; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZFilteredAudioVolume(); \
	friend struct Z_Construct_UClass_ASBZFilteredAudioVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZFilteredAudioVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZFilteredAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Intensity=NETFIELD_REP_START, \
		NETFIELD_REP_END=Intensity	}; \
	STARBREEZE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZFilteredAudioVolume(); \
	friend struct Z_Construct_UClass_ASBZFilteredAudioVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZFilteredAudioVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZFilteredAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Intensity=NETFIELD_REP_START, \
		NETFIELD_REP_END=Intensity	}; \
	STARBREEZE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZFilteredAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZFilteredAudioVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZFilteredAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZFilteredAudioVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZFilteredAudioVolume(ASBZFilteredAudioVolume&&); \
	STARBREEZE_API ASBZFilteredAudioVolume(const ASBZFilteredAudioVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZFilteredAudioVolume(ASBZFilteredAudioVolume&&); \
	STARBREEZE_API ASBZFilteredAudioVolume(const ASBZFilteredAudioVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZFilteredAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZFilteredAudioVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZFilteredAudioVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorFilterComponent() { return STRUCT_OFFSET(ASBZFilteredAudioVolume, ActorFilterComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZFilteredAudioVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFilteredAudioVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
