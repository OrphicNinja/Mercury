// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZSimplePhysicsState;
struct FVector;
#ifdef STARBREEZE_SBZSimplePhysicsCorrector_generated_h
#error "SBZSimplePhysicsCorrector.generated.h already included, missing '#pragma once' in SBZSimplePhysicsCorrector.h"
#endif
#define STARBREEZE_SBZSimplePhysicsCorrector_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_RPC_WRAPPERS \
	virtual void Multicast_ForceTeleport_Implementation(FSBZSimplePhysicsState const& State); \
	virtual void Multicast_InvalidateState_Implementation(); \
	virtual void Multicast_SyncState_Implementation(FSBZSimplePhysicsState const& State); \
 \
	DECLARE_FUNCTION(execMulticast_ForceTeleport); \
	DECLARE_FUNCTION(execMulticast_InvalidateState); \
	DECLARE_FUNCTION(execMulticast_SyncState); \
	DECLARE_FUNCTION(execSetVelocity);


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ForceTeleport_Implementation(FSBZSimplePhysicsState const& State); \
	virtual void Multicast_InvalidateState_Implementation(); \
	virtual void Multicast_SyncState_Implementation(FSBZSimplePhysicsState const& State); \
 \
	DECLARE_FUNCTION(execMulticast_ForceTeleport); \
	DECLARE_FUNCTION(execMulticast_InvalidateState); \
	DECLARE_FUNCTION(execMulticast_SyncState); \
	DECLARE_FUNCTION(execSetVelocity);


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_EVENT_PARMS \
	struct SBZSimplePhysicsCorrector_eventMulticast_ForceTeleport_Parms \
	{ \
		FSBZSimplePhysicsState State; \
	}; \
	struct SBZSimplePhysicsCorrector_eventMulticast_SyncState_Parms \
	{ \
		FSBZSimplePhysicsState State; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSimplePhysicsCorrector(); \
	friend struct Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics; \
public: \
	DECLARE_CLASS(USBZSimplePhysicsCorrector, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSimplePhysicsCorrector) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Velocity=NETFIELD_REP_START, \
		AngularVel, \
		LastState, \
		NETFIELD_REP_END=LastState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSimplePhysicsCorrector(); \
	friend struct Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics; \
public: \
	DECLARE_CLASS(USBZSimplePhysicsCorrector, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSimplePhysicsCorrector) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Velocity=NETFIELD_REP_START, \
		AngularVel, \
		LastState, \
		NETFIELD_REP_END=LastState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSimplePhysicsCorrector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSimplePhysicsCorrector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSimplePhysicsCorrector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSimplePhysicsCorrector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSimplePhysicsCorrector(USBZSimplePhysicsCorrector&&); \
	NO_API USBZSimplePhysicsCorrector(const USBZSimplePhysicsCorrector&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSimplePhysicsCorrector(USBZSimplePhysicsCorrector&&); \
	NO_API USBZSimplePhysicsCorrector(const USBZSimplePhysicsCorrector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSimplePhysicsCorrector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSimplePhysicsCorrector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSimplePhysicsCorrector)


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeleportDistance() { return STRUCT_OFFSET(USBZSimplePhysicsCorrector, TeleportDistance); } \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(USBZSimplePhysicsCorrector, Velocity); } \
	FORCEINLINE static uint32 __PPO__AngularVel() { return STRUCT_OFFSET(USBZSimplePhysicsCorrector, AngularVel); } \
	FORCEINLINE static uint32 __PPO__LastState() { return STRUCT_OFFSET(USBZSimplePhysicsCorrector, LastState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSimplePhysicsCorrector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSimplePhysicsCorrector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
