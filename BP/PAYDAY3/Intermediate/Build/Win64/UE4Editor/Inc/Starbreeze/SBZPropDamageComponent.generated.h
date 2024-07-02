// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FVector;
class UPrimitiveComponent;
class UDamageType;
struct FHitResult;
struct FRadialDamageParams;
#ifdef STARBREEZE_SBZPropDamageComponent_generated_h
#error "SBZPropDamageComponent.generated.h already included, missing '#pragma once' in SBZPropDamageComponent.h"
#endif
#define STARBREEZE_SBZPropDamageComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage); \
	DECLARE_FUNCTION(execOnRep_DamagePools);


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage); \
	DECLARE_FUNCTION(execOnRep_DamagePools);


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPropDamageComponent(); \
	friend struct Z_Construct_UClass_USBZPropDamageComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPropDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPropDamageComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DamagePools=NETFIELD_REP_START, \
		NETFIELD_REP_END=DamagePools	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPropDamageComponent(); \
	friend struct Z_Construct_UClass_USBZPropDamageComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPropDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPropDamageComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DamagePools=NETFIELD_REP_START, \
		NETFIELD_REP_END=DamagePools	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPropDamageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPropDamageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPropDamageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPropDamageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPropDamageComponent(USBZPropDamageComponent&&); \
	NO_API USBZPropDamageComponent(const USBZPropDamageComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPropDamageComponent(USBZPropDamageComponent&&); \
	NO_API USBZPropDamageComponent(const USBZPropDamageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPropDamageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPropDamageComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPropDamageComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamagePools() { return STRUCT_OFFSET(USBZPropDamageComponent, DamagePools); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_17_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPropDamageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPropDamageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
