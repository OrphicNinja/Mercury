// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZTrafficLightStatus : uint8;
class UStaticMeshComponent;
class USBZAmbientSoundComponent;
#ifdef STARBREEZE_SBZTrafficLights_generated_h
#error "SBZTrafficLights.generated.h already included, missing '#pragma once' in SBZTrafficLights.h"
#endif
#define STARBREEZE_SBZTrafficLights_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_RPC_WRAPPERS \
	virtual void Multicast_SetActivePool_Implementation(int32 NewActivePoolIndex); \
	virtual void UpdatePool_Implementation(ESBZTrafficLightStatus Status, TArray<UStaticMeshComponent*> const& Pool, TArray<USBZAmbientSoundComponent*> const& PedestrianSoundEmitters); \
 \
	DECLARE_FUNCTION(execMulticast_SetActivePool); \
	DECLARE_FUNCTION(execRep_ActivePoolStateIndex); \
	DECLARE_FUNCTION(execUpdatePool);


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetActivePool_Implementation(int32 NewActivePoolIndex); \
	virtual void UpdatePool_Implementation(ESBZTrafficLightStatus Status, TArray<UStaticMeshComponent*> const& Pool, TArray<USBZAmbientSoundComponent*> const& PedestrianSoundEmitters); \
 \
	DECLARE_FUNCTION(execMulticast_SetActivePool); \
	DECLARE_FUNCTION(execRep_ActivePoolStateIndex); \
	DECLARE_FUNCTION(execUpdatePool);


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_EVENT_PARMS \
	struct SBZTrafficLights_eventMulticast_SetActivePool_Parms \
	{ \
		int32 NewActivePoolIndex; \
	}; \
	struct SBZTrafficLights_eventUpdatePool_Parms \
	{ \
		ESBZTrafficLightStatus Status; \
		TArray<UStaticMeshComponent*> Pool; \
		TArray<USBZAmbientSoundComponent*> PedestrianSoundEmitters; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZTrafficLights(); \
	friend struct Z_Construct_UClass_ASBZTrafficLights_Statics; \
public: \
	DECLARE_CLASS(ASBZTrafficLights, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTrafficLights) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActivePoolIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=ActivePoolIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZTrafficLights(); \
	friend struct Z_Construct_UClass_ASBZTrafficLights_Statics; \
public: \
	DECLARE_CLASS(ASBZTrafficLights, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTrafficLights) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActivePoolIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=ActivePoolIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZTrafficLights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTrafficLights) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTrafficLights); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTrafficLights); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTrafficLights(ASBZTrafficLights&&); \
	NO_API ASBZTrafficLights(const ASBZTrafficLights&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTrafficLights(ASBZTrafficLights&&); \
	NO_API ASBZTrafficLights(const ASBZTrafficLights&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTrafficLights); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTrafficLights); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTrafficLights)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PoolStates() { return STRUCT_OFFSET(ASBZTrafficLights, PoolStates); } \
	FORCEINLINE static uint32 __PPO__ActivePoolIndex() { return STRUCT_OFFSET(ASBZTrafficLights, ActivePoolIndex); } \
	FORCEINLINE static uint32 __PPO__NextPoolTimer() { return STRUCT_OFFSET(ASBZTrafficLights, NextPoolTimer); } \
	FORCEINLINE static uint32 __PPO__TrafficManager() { return STRUCT_OFFSET(ASBZTrafficLights, TrafficManager); } \
	FORCEINLINE static uint32 __PPO__TrafficSettings() { return STRUCT_OFFSET(ASBZTrafficLights, TrafficSettings); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZTrafficLights>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTrafficLights_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
