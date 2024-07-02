// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAlertnessDataComponent_generated_h
#error "SBZAlertnessDataComponent.generated.h already included, missing '#pragma once' in SBZAlertnessDataComponent.h"
#endif
#define STARBREEZE_SBZAlertnessDataComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_RPC_WRAPPERS \
	virtual void Multicast_SetAlertState_Implementation(int8 RepAlertState); \
 \
	DECLARE_FUNCTION(execMulticast_SetAlertState); \
	DECLARE_FUNCTION(execOnRep_AlertState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetAlertState_Implementation(int8 RepAlertState); \
 \
	DECLARE_FUNCTION(execMulticast_SetAlertState); \
	DECLARE_FUNCTION(execOnRep_AlertState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_EVENT_PARMS \
	struct SBZAlertnessDataComponent_eventMulticast_SetAlertState_Parms \
	{ \
		int8 RepAlertState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_SBZAlertnessDataComponent(); \
	friend struct Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_SBZAlertnessDataComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_SBZAlertnessDataComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AlertState=NETFIELD_REP_START, \
		NETFIELD_REP_END=AlertState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_SBZAlertnessDataComponent(); \
	friend struct Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_SBZAlertnessDataComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_SBZAlertnessDataComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AlertState=NETFIELD_REP_START, \
		NETFIELD_REP_END=AlertState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_SBZAlertnessDataComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_SBZAlertnessDataComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_SBZAlertnessDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_SBZAlertnessDataComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_SBZAlertnessDataComponent(UDEPRECATED_SBZAlertnessDataComponent&&); \
	NO_API UDEPRECATED_SBZAlertnessDataComponent(const UDEPRECATED_SBZAlertnessDataComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_SBZAlertnessDataComponent(UDEPRECATED_SBZAlertnessDataComponent&&); \
	NO_API UDEPRECATED_SBZAlertnessDataComponent(const UDEPRECATED_SBZAlertnessDataComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_SBZAlertnessDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_SBZAlertnessDataComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_SBZAlertnessDataComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AlertState() { return STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, AlertState); } \
	FORCEINLINE static uint32 __PPO__AlertMarkerAsset() { return STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, AlertMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__MarkerOffset() { return STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, MarkerOffset); } \
	FORCEINLINE static uint32 __PPO__MarkerSocketName() { return STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, MarkerSocketName); } \
	FORCEINLINE static uint32 __PPO__Component() { return STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, Component); } \
	FORCEINLINE static uint32 __PPO__SightDetectionCurve() { return STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, SightDetectionCurve); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UDEPRECATED_SBZAlertnessDataComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAlertnessDataComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
