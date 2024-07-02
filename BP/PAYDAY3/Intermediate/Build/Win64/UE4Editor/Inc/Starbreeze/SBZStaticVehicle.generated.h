// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZVehicleLightCPD : uint8;
enum class ESBZVehicleLightType : uint8;
#ifdef STARBREEZE_SBZStaticVehicle_generated_h
#error "SBZStaticVehicle.generated.h already included, missing '#pragma once' in SBZStaticVehicle.h"
#endif
#define STARBREEZE_SBZStaticVehicle_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_RPC_WRAPPERS \
	virtual void TryActivateAlarm_Implementation(); \
 \
	DECLARE_FUNCTION(execSetLightCPDBroken); \
	DECLARE_FUNCTION(execSetLightType); \
	DECLARE_FUNCTION(execTryActivateAlarm);


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TryActivateAlarm_Implementation(); \
 \
	DECLARE_FUNCTION(execSetLightCPDBroken); \
	DECLARE_FUNCTION(execSetLightType); \
	DECLARE_FUNCTION(execTryActivateAlarm);


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZStaticVehicle(); \
	friend struct Z_Construct_UClass_ASBZStaticVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZStaticVehicle, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStaticVehicle)


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZStaticVehicle(); \
	friend struct Z_Construct_UClass_ASBZStaticVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZStaticVehicle, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStaticVehicle)


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZStaticVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStaticVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStaticVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStaticVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStaticVehicle(ASBZStaticVehicle&&); \
	NO_API ASBZStaticVehicle(const ASBZStaticVehicle&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStaticVehicle(ASBZStaticVehicle&&); \
	NO_API ASBZStaticVehicle(const ASBZStaticVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStaticVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStaticVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStaticVehicle)


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VariationData() { return STRUCT_OFFSET(ASBZStaticVehicle, VariationData); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZStaticVehicle, Seed); } \
	FORCEINLINE static uint32 __PPO__AlarmEquippedChance() { return STRUCT_OFFSET(ASBZStaticVehicle, AlarmEquippedChance); } \
	FORCEINLINE static uint32 __PPO__AkComponent() { return STRUCT_OFFSET(ASBZStaticVehicle, AkComponent); } \
	FORCEINLINE static uint32 __PPO__AlarmStartEvent() { return STRUCT_OFFSET(ASBZStaticVehicle, AlarmStartEvent); } \
	FORCEINLINE static uint32 __PPO__AlarmStopEvent() { return STRUCT_OFFSET(ASBZStaticVehicle, AlarmStopEvent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZStaticVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStaticVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
