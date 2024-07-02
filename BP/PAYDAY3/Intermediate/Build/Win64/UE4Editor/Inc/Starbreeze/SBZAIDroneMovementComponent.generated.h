// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIDroneMovementComponent_generated_h
#error "SBZAIDroneMovementComponent.generated.h already included, missing '#pragma once' in SBZAIDroneMovementComponent.h"
#endif
#define STARBREEZE_SBZAIDroneMovementComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIDroneMovementComponent(); \
	friend struct Z_Construct_UClass_USBZAIDroneMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIDroneMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIDroneMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MoveUpVector=NETFIELD_REP_START, \
		NETFIELD_REP_END=MoveUpVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIDroneMovementComponent(); \
	friend struct Z_Construct_UClass_USBZAIDroneMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIDroneMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIDroneMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MoveUpVector=NETFIELD_REP_START, \
		NETFIELD_REP_END=MoveUpVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIDroneMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIDroneMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIDroneMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIDroneMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIDroneMovementComponent(USBZAIDroneMovementComponent&&); \
	NO_API USBZAIDroneMovementComponent(const USBZAIDroneMovementComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIDroneMovementComponent(USBZAIDroneMovementComponent&&); \
	NO_API USBZAIDroneMovementComponent(const USBZAIDroneMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIDroneMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIDroneMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIDroneMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxFlyDownSpeed() { return STRUCT_OFFSET(USBZAIDroneMovementComponent, MaxFlyDownSpeed); } \
	FORCEINLINE static uint32 __PPO__DroneAvoidanceConsiderationRadius() { return STRUCT_OFFSET(USBZAIDroneMovementComponent, DroneAvoidanceConsiderationRadius); } \
	FORCEINLINE static uint32 __PPO__DroneAvoidanceCollisionRadius() { return STRUCT_OFFSET(USBZAIDroneMovementComponent, DroneAvoidanceCollisionRadius); } \
	FORCEINLINE static uint32 __PPO__MoveUpVector() { return STRUCT_OFFSET(USBZAIDroneMovementComponent, MoveUpVector); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIDroneMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIDroneMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
