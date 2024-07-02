// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZAIShield_generated_h
#error "SBZAIShield.generated.h already included, missing '#pragma once' in SBZAIShield.h"
#endif
#define STARBREEZE_SBZAIShield_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_RPC_WRAPPERS \
	virtual void Multicast_ShieldBreak_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ShieldBreak); \
	DECLARE_FUNCTION(execOnCharacterAnimEventActive); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnPlayerEndPlay); \
	DECLARE_FUNCTION(execOnRep_ShieldBreak); \
	DECLARE_FUNCTION(execOnShieldEndPlay);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ShieldBreak_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ShieldBreak); \
	DECLARE_FUNCTION(execOnCharacterAnimEventActive); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnPlayerEndPlay); \
	DECLARE_FUNCTION(execOnRep_ShieldBreak); \
	DECLARE_FUNCTION(execOnShieldEndPlay);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIShield(); \
	friend struct Z_Construct_UClass_USBZAIShield_Statics; \
public: \
	DECLARE_CLASS(USBZAIShield, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIShield)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIShield(); \
	friend struct Z_Construct_UClass_USBZAIShield_Statics; \
public: \
	DECLARE_CLASS(USBZAIShield, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIShield)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIShield(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIShield) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIShield); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIShield(USBZAIShield&&); \
	NO_API USBZAIShield(const USBZAIShield&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIShield(USBZAIShield&&); \
	NO_API USBZAIShield(const USBZAIShield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIShield); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIShield)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisorArmor() { return STRUCT_OFFSET(USBZAIShield, VisorArmor); } \
	FORCEINLINE static uint32 __PPO__ShieldArmorHardness() { return STRUCT_OFFSET(USBZAIShield, ShieldArmorHardness); } \
	FORCEINLINE static uint32 __PPO__VisorArmorHardness() { return STRUCT_OFFSET(USBZAIShield, VisorArmorHardness); } \
	FORCEINLINE static uint32 __PPO__FrontAttachSocketName() { return STRUCT_OFFSET(USBZAIShield, FrontAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__BackAttachSocketName() { return STRUCT_OFFSET(USBZAIShield, BackAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__BreakEvent() { return STRUCT_OFFSET(USBZAIShield, BreakEvent); } \
	FORCEINLINE static uint32 __PPO__BreakComment() { return STRUCT_OFFSET(USBZAIShield, BreakComment); } \
	FORCEINLINE static uint32 __PPO__ShieldAttributSet() { return STRUCT_OFFSET(USBZAIShield, ShieldAttributSet); } \
	FORCEINLINE static uint32 __PPO__bIsBroken() { return STRUCT_OFFSET(USBZAIShield, bIsBroken); } \
	FORCEINLINE static uint32 __PPO__bIsIndestructible() { return STRUCT_OFFSET(USBZAIShield, bIsIndestructible); } \
	FORCEINLINE static uint32 __PPO__ShieldVisor() { return STRUCT_OFFSET(USBZAIShield, ShieldVisor); } \
	FORCEINLINE static uint32 __PPO__VisorCPDIndex() { return STRUCT_OFFSET(USBZAIShield, VisorCPDIndex); } \
	FORCEINLINE static uint32 __PPO__VisorCPDVal() { return STRUCT_OFFSET(USBZAIShield, VisorCPDVal); } \
	FORCEINLINE static uint32 __PPO__VisorDamageSteps() { return STRUCT_OFFSET(USBZAIShield, VisorDamageSteps); } \
	FORCEINLINE static uint32 __PPO__DedicatedServerAttachmentOffset() { return STRUCT_OFFSET(USBZAIShield, DedicatedServerAttachmentOffset); } \
	FORCEINLINE static uint32 __PPO__ExplosionBlockDegrees() { return STRUCT_OFFSET(USBZAIShield, ExplosionBlockDegrees); } \
	FORCEINLINE static uint32 __PPO__ExplosionBlockDot() { return STRUCT_OFFSET(USBZAIShield, ExplosionBlockDot); } \
	FORCEINLINE static uint32 __PPO__LightConeWidthDegrees() { return STRUCT_OFFSET(USBZAIShield, LightConeWidthDegrees); } \
	FORCEINLINE static uint32 __PPO__PlayerLightDirectionMinDegrees() { return STRUCT_OFFSET(USBZAIShield, PlayerLightDirectionMinDegrees); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(USBZAIShield, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__NiagaraComponentSelector() { return STRUCT_OFFSET(USBZAIShield, NiagaraComponentSelector); } \
	FORCEINLINE static uint32 __PPO__LightColor() { return STRUCT_OFFSET(USBZAIShield, LightColor); } \
	FORCEINLINE static uint32 __PPO__ReflectorShieldRadius() { return STRUCT_OFFSET(USBZAIShield, ReflectorShieldRadius); } \
	FORCEINLINE static uint32 __PPO__LightMaterialEmissiveValue() { return STRUCT_OFFSET(USBZAIShield, LightMaterialEmissiveValue); } \
	FORCEINLINE static uint32 __PPO__LightLength() { return STRUCT_OFFSET(USBZAIShield, LightLength); } \
	FORCEINLINE static uint32 __PPO__LightMaxDistance() { return STRUCT_OFFSET(USBZAIShield, LightMaxDistance); } \
	FORCEINLINE static uint32 __PPO__MaterialOnOffCPDIndex() { return STRUCT_OFFSET(USBZAIShield, MaterialOnOffCPDIndex); } \
	FORCEINLINE static uint32 __PPO__RedCPDIndex() { return STRUCT_OFFSET(USBZAIShield, RedCPDIndex); } \
	FORCEINLINE static uint32 __PPO__GreenCPDIndex() { return STRUCT_OFFSET(USBZAIShield, GreenCPDIndex); } \
	FORCEINLINE static uint32 __PPO__BlueCPDIndex() { return STRUCT_OFFSET(USBZAIShield, BlueCPDIndex); } \
	FORCEINLINE static uint32 __PPO__MaterialEmissiveCPDIndex() { return STRUCT_OFFSET(USBZAIShield, MaterialEmissiveCPDIndex); } \
	FORCEINLINE static uint32 __PPO__NiagaraComponent() { return STRUCT_OFFSET(USBZAIShield, NiagaraComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentVisiblePlayerMap() { return STRUCT_OFFSET(USBZAIShield, CurrentVisiblePlayerMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_21_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIShield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIShield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
