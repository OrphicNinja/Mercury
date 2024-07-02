// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCuttableState : uint8;
enum class ESBZCuttableType : uint8;
struct FSBZCutProgressData;
#ifdef STARBREEZE_SBZCuttableComponent_generated_h
#error "SBZCuttableComponent.generated.h already included, missing '#pragma once' in SBZCuttableComponent.h"
#endif
#define STARBREEZE_SBZCuttableComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_RPC_WRAPPERS \
	virtual void Multicast_CreateCut_Implementation(FSBZCutProgressData NewCutProgressData); \
	virtual void Multicast_CreateInitialCut_Implementation(FSBZCutProgressData NewCutProgressData); \
	virtual void Multicast_CreateInitialCutAngle_Implementation(float InCutAngle); \
	virtual void Multicast_CreateLineCut_Implementation(FSBZCutProgressData NewCutProgressData); \
	virtual void Multicast_SetCuttableState_Implementation(ESBZCuttableState NewCuttableState); \
	virtual void Multicast_SetCuttingBlocked_Implementation(bool bInIsBlocked); \
 \
	DECLARE_FUNCTION(execGetCuttableState); \
	DECLARE_FUNCTION(execGetCuttableType); \
	DECLARE_FUNCTION(execMulticast_CreateCut); \
	DECLARE_FUNCTION(execMulticast_CreateInitialCut); \
	DECLARE_FUNCTION(execMulticast_CreateInitialCutAngle); \
	DECLARE_FUNCTION(execMulticast_CreateLineCut); \
	DECLARE_FUNCTION(execMulticast_SetCuttableState); \
	DECLARE_FUNCTION(execMulticast_SetCuttingBlocked); \
	DECLARE_FUNCTION(execOnRep_CutProgressData); \
	DECLARE_FUNCTION(execOnRep_CuttableState); \
	DECLARE_FUNCTION(execOnRep_InitialCutAngle);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CreateCut_Implementation(FSBZCutProgressData NewCutProgressData); \
	virtual void Multicast_CreateInitialCut_Implementation(FSBZCutProgressData NewCutProgressData); \
	virtual void Multicast_CreateInitialCutAngle_Implementation(float InCutAngle); \
	virtual void Multicast_CreateLineCut_Implementation(FSBZCutProgressData NewCutProgressData); \
	virtual void Multicast_SetCuttableState_Implementation(ESBZCuttableState NewCuttableState); \
	virtual void Multicast_SetCuttingBlocked_Implementation(bool bInIsBlocked); \
 \
	DECLARE_FUNCTION(execGetCuttableState); \
	DECLARE_FUNCTION(execGetCuttableType); \
	DECLARE_FUNCTION(execMulticast_CreateCut); \
	DECLARE_FUNCTION(execMulticast_CreateInitialCut); \
	DECLARE_FUNCTION(execMulticast_CreateInitialCutAngle); \
	DECLARE_FUNCTION(execMulticast_CreateLineCut); \
	DECLARE_FUNCTION(execMulticast_SetCuttableState); \
	DECLARE_FUNCTION(execMulticast_SetCuttingBlocked); \
	DECLARE_FUNCTION(execOnRep_CutProgressData); \
	DECLARE_FUNCTION(execOnRep_CuttableState); \
	DECLARE_FUNCTION(execOnRep_InitialCutAngle);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_EVENT_PARMS \
	struct SBZCuttableComponent_eventMulticast_CreateCut_Parms \
	{ \
		FSBZCutProgressData NewCutProgressData; \
	}; \
	struct SBZCuttableComponent_eventMulticast_CreateInitialCut_Parms \
	{ \
		FSBZCutProgressData NewCutProgressData; \
	}; \
	struct SBZCuttableComponent_eventMulticast_CreateInitialCutAngle_Parms \
	{ \
		float InCutAngle; \
	}; \
	struct SBZCuttableComponent_eventMulticast_CreateLineCut_Parms \
	{ \
		FSBZCutProgressData NewCutProgressData; \
	}; \
	struct SBZCuttableComponent_eventMulticast_SetCuttableState_Parms \
	{ \
		ESBZCuttableState NewCuttableState; \
	}; \
	struct SBZCuttableComponent_eventMulticast_SetCuttingBlocked_Parms \
	{ \
		bool bInIsBlocked; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCuttableComponent(); \
	friend struct Z_Construct_UClass_USBZCuttableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CuttableState=NETFIELD_REP_START, \
		CutProgressData, \
		InitialCutAngle, \
		bIsCuttingBlocked, \
		NETFIELD_REP_END=bIsCuttingBlocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCuttableComponent(); \
	friend struct Z_Construct_UClass_USBZCuttableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CuttableState=NETFIELD_REP_START, \
		CutProgressData, \
		InitialCutAngle, \
		bIsCuttingBlocked, \
		NETFIELD_REP_END=bIsCuttingBlocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCuttableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableComponent(USBZCuttableComponent&&); \
	NO_API USBZCuttableComponent(const USBZCuttableComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableComponent(USBZCuttableComponent&&); \
	NO_API USBZCuttableComponent(const USBZCuttableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FuelCost() { return STRUCT_OFFSET(USBZCuttableComponent, FuelCost); } \
	FORCEINLINE static uint32 __PPO__CuttableType() { return STRUCT_OFFSET(USBZCuttableComponent, CuttableType); } \
	FORCEINLINE static uint32 __PPO__CuttableState() { return STRUCT_OFFSET(USBZCuttableComponent, CuttableState); } \
	FORCEINLINE static uint32 __PPO__OnCutCompleteServer() { return STRUCT_OFFSET(USBZCuttableComponent, OnCutCompleteServer); } \
	FORCEINLINE static uint32 __PPO__TotalCutTime() { return STRUCT_OFFSET(USBZCuttableComponent, TotalCutTime); } \
	FORCEINLINE static uint32 __PPO__CutProgressData() { return STRUCT_OFFSET(USBZCuttableComponent, CutProgressData); } \
	FORCEINLINE static uint32 __PPO__CuttableTier() { return STRUCT_OFFSET(USBZCuttableComponent, CuttableTier); } \
	FORCEINLINE static uint32 __PPO__HotSpeed() { return STRUCT_OFFSET(USBZCuttableComponent, HotSpeed); } \
	FORCEINLINE static uint32 __PPO__CoolSpeed() { return STRUCT_OFFSET(USBZCuttableComponent, CoolSpeed); } \
	FORCEINLINE static uint32 __PPO__InitialCutAngle() { return STRUCT_OFFSET(USBZCuttableComponent, InitialCutAngle); } \
	FORCEINLINE static uint32 __PPO__NiagaraEffectVisibilityTime() { return STRUCT_OFFSET(USBZCuttableComponent, NiagaraEffectVisibilityTime); } \
	FORCEINLINE static uint32 __PPO__bIsCuttingBlocked() { return STRUCT_OFFSET(USBZCuttableComponent, bIsCuttingBlocked); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCuttableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCuttableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
