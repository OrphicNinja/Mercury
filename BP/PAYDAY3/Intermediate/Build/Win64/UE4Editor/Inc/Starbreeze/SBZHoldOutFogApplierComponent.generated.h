// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZHoldOutDroneFogSettings;
#ifdef STARBREEZE_SBZHoldOutFogApplierComponent_generated_h
#error "SBZHoldOutFogApplierComponent.generated.h already included, missing '#pragma once' in SBZHoldOutFogApplierComponent.h"
#endif
#define STARBREEZE_SBZHoldOutFogApplierComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_RPC_WRAPPERS \
	virtual void MultiCast_ReplicateFogSettings_Implementation(FSBZHoldOutDroneFogSettings const& FogSettings); \
 \
	DECLARE_FUNCTION(execMultiCast_ReplicateFogSettings); \
	DECLARE_FUNCTION(execOnRep_FogSettings);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MultiCast_ReplicateFogSettings_Implementation(FSBZHoldOutDroneFogSettings const& FogSettings); \
 \
	DECLARE_FUNCTION(execMultiCast_ReplicateFogSettings); \
	DECLARE_FUNCTION(execOnRep_FogSettings);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_EVENT_PARMS \
	struct SBZHoldOutFogApplierComponent_eventMultiCast_ReplicateFogSettings_Parms \
	{ \
		FSBZHoldOutDroneFogSettings FogSettings; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHoldOutFogApplierComponent(); \
	friend struct Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutFogApplierComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutFogApplierComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedFogSettings=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedFogSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHoldOutFogApplierComponent(); \
	friend struct Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutFogApplierComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutFogApplierComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedFogSettings=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedFogSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHoldOutFogApplierComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutFogApplierComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutFogApplierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutFogApplierComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutFogApplierComponent(USBZHoldOutFogApplierComponent&&); \
	NO_API USBZHoldOutFogApplierComponent(const USBZHoldOutFogApplierComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutFogApplierComponent(USBZHoldOutFogApplierComponent&&); \
	NO_API USBZHoldOutFogApplierComponent(const USBZHoldOutFogApplierComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutFogApplierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutFogApplierComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutFogApplierComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalFogSettings() { return STRUCT_OFFSET(USBZHoldOutFogApplierComponent, LocalFogSettings); } \
	FORCEINLINE static uint32 __PPO__ReplicatedFogSettings() { return STRUCT_OFFSET(USBZHoldOutFogApplierComponent, ReplicatedFogSettings); } \
	FORCEINLINE static uint32 __PPO__DefaultFogSettings() { return STRUCT_OFFSET(USBZHoldOutFogApplierComponent, DefaultFogSettings); } \
	FORCEINLINE static uint32 __PPO__FogActor() { return STRUCT_OFFSET(USBZHoldOutFogApplierComponent, FogActor); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHoldOutFogApplierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutFogApplierComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
