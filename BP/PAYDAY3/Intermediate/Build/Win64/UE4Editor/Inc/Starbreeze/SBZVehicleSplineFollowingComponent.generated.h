// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
#ifdef STARBREEZE_SBZVehicleSplineFollowingComponent_generated_h
#error "SBZVehicleSplineFollowingComponent.generated.h already included, missing '#pragma once' in SBZVehicleSplineFollowingComponent.h"
#endif
#define STARBREEZE_SBZVehicleSplineFollowingComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_RPC_WRAPPERS \
	virtual void Multicast_OnBeginStop_Implementation(); \
	virtual void Multicast_OnPathEndReached_Implementation(); \
	virtual void Multicast_OnSplineEndReached_Implementation(ASBZSpline* Spline); \
	virtual void Multicast_OnSplineEntered_Implementation(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart); \
	virtual void Multicast_OnSplineLeft_Implementation(ASBZSpline* Spline); \
	virtual void Multicast_OnStarted_Implementation(); \
	virtual void Multicast_OnStopped_Implementation(ASBZSpline* Spline, float Distance); \
	virtual void Multicast_PushPath_Implementation(TArray<ASBZSpline*> const& InPath); \
	virtual void Multicast_PushPathSpline_Implementation(ASBZSpline* InPath); \
	virtual void Multicast_SetAcceleration_Implementation(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InAcceleration); \
	virtual void Multicast_SetCruisingSpeed_Implementation(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InSpeed, bool bForceUpdateTargetSpeed); \
	virtual void Multicast_SetDeceleration_Implementation(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InDeceleration); \
	virtual void Multicast_SetPath_Implementation(TArray<ASBZSpline*> const& InPath, bool bTeleportToPathStart); \
	virtual void Multicast_SetPathSpline_Implementation(ASBZSpline* InPath); \
	virtual void Multicast_Start_Implementation(); \
	virtual void Multicast_StopAtDistance_Implementation(float Distance, bool bRequestedByUser); \
 \
	DECLARE_FUNCTION(execGetBrakingDistance); \
	DECLARE_FUNCTION(execGetCurrentSpline); \
	DECLARE_FUNCTION(execGetFullPath); \
	DECLARE_FUNCTION(execGetLastSpline); \
	DECLARE_FUNCTION(execGetNextSpline); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsStopping); \
	DECLARE_FUNCTION(execMulticast_OnBeginStop); \
	DECLARE_FUNCTION(execMulticast_OnPathEndReached); \
	DECLARE_FUNCTION(execMulticast_OnSplineEndReached); \
	DECLARE_FUNCTION(execMulticast_OnSplineEntered); \
	DECLARE_FUNCTION(execMulticast_OnSplineLeft); \
	DECLARE_FUNCTION(execMulticast_OnStarted); \
	DECLARE_FUNCTION(execMulticast_OnStopped); \
	DECLARE_FUNCTION(execMulticast_PushPath); \
	DECLARE_FUNCTION(execMulticast_PushPathSpline); \
	DECLARE_FUNCTION(execMulticast_SetAcceleration); \
	DECLARE_FUNCTION(execMulticast_SetCruisingSpeed); \
	DECLARE_FUNCTION(execMulticast_SetDeceleration); \
	DECLARE_FUNCTION(execMulticast_SetPath); \
	DECLARE_FUNCTION(execMulticast_SetPathSpline); \
	DECLARE_FUNCTION(execMulticast_Start); \
	DECLARE_FUNCTION(execMulticast_StopAtDistance); \
	DECLARE_FUNCTION(execPushPath); \
	DECLARE_FUNCTION(execPushPathSpline); \
	DECLARE_FUNCTION(execSetAcceleration); \
	DECLARE_FUNCTION(execSetCruisingSpeed); \
	DECLARE_FUNCTION(execSetDeceleration); \
	DECLARE_FUNCTION(execSetPath); \
	DECLARE_FUNCTION(execSetPathSpline); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStop);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnBeginStop_Implementation(); \
	virtual void Multicast_OnPathEndReached_Implementation(); \
	virtual void Multicast_OnSplineEndReached_Implementation(ASBZSpline* Spline); \
	virtual void Multicast_OnSplineEntered_Implementation(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart); \
	virtual void Multicast_OnSplineLeft_Implementation(ASBZSpline* Spline); \
	virtual void Multicast_OnStarted_Implementation(); \
	virtual void Multicast_OnStopped_Implementation(ASBZSpline* Spline, float Distance); \
	virtual void Multicast_PushPath_Implementation(TArray<ASBZSpline*> const& InPath); \
	virtual void Multicast_PushPathSpline_Implementation(ASBZSpline* InPath); \
	virtual void Multicast_SetAcceleration_Implementation(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InAcceleration); \
	virtual void Multicast_SetCruisingSpeed_Implementation(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InSpeed, bool bForceUpdateTargetSpeed); \
	virtual void Multicast_SetDeceleration_Implementation(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InDeceleration); \
	virtual void Multicast_SetPath_Implementation(TArray<ASBZSpline*> const& InPath, bool bTeleportToPathStart); \
	virtual void Multicast_SetPathSpline_Implementation(ASBZSpline* InPath); \
	virtual void Multicast_Start_Implementation(); \
	virtual void Multicast_StopAtDistance_Implementation(float Distance, bool bRequestedByUser); \
 \
	DECLARE_FUNCTION(execGetBrakingDistance); \
	DECLARE_FUNCTION(execGetCurrentSpline); \
	DECLARE_FUNCTION(execGetFullPath); \
	DECLARE_FUNCTION(execGetLastSpline); \
	DECLARE_FUNCTION(execGetNextSpline); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsStopping); \
	DECLARE_FUNCTION(execMulticast_OnBeginStop); \
	DECLARE_FUNCTION(execMulticast_OnPathEndReached); \
	DECLARE_FUNCTION(execMulticast_OnSplineEndReached); \
	DECLARE_FUNCTION(execMulticast_OnSplineEntered); \
	DECLARE_FUNCTION(execMulticast_OnSplineLeft); \
	DECLARE_FUNCTION(execMulticast_OnStarted); \
	DECLARE_FUNCTION(execMulticast_OnStopped); \
	DECLARE_FUNCTION(execMulticast_PushPath); \
	DECLARE_FUNCTION(execMulticast_PushPathSpline); \
	DECLARE_FUNCTION(execMulticast_SetAcceleration); \
	DECLARE_FUNCTION(execMulticast_SetCruisingSpeed); \
	DECLARE_FUNCTION(execMulticast_SetDeceleration); \
	DECLARE_FUNCTION(execMulticast_SetPath); \
	DECLARE_FUNCTION(execMulticast_SetPathSpline); \
	DECLARE_FUNCTION(execMulticast_Start); \
	DECLARE_FUNCTION(execMulticast_StopAtDistance); \
	DECLARE_FUNCTION(execPushPath); \
	DECLARE_FUNCTION(execPushPathSpline); \
	DECLARE_FUNCTION(execSetAcceleration); \
	DECLARE_FUNCTION(execSetCruisingSpeed); \
	DECLARE_FUNCTION(execSetDeceleration); \
	DECLARE_FUNCTION(execSetPath); \
	DECLARE_FUNCTION(execSetPathSpline); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStop);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_EVENT_PARMS \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEndReached_Parms \
	{ \
		ASBZSpline* Spline; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms \
	{ \
		ASBZSpline* Spline; \
		bool bPathEntered; \
		bool bTeleportToPathStart; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineLeft_Parms \
	{ \
		ASBZSpline* Spline; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_OnStopped_Parms \
	{ \
		ASBZSpline* Spline; \
		float Distance; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_PushPath_Parms \
	{ \
		TArray<ASBZSpline*> InPath; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_PushPathSpline_Parms \
	{ \
		ASBZSpline* InPath; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms \
	{ \
		float ServerCurrentSpeed; \
		TArray<ASBZSpline*> InServerPath; \
		float InServerTraveledDistance; \
		float InAcceleration; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms \
	{ \
		float ServerCurrentSpeed; \
		TArray<ASBZSpline*> InServerPath; \
		float InServerTraveledDistance; \
		float InSpeed; \
		bool bForceUpdateTargetSpeed; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms \
	{ \
		float ServerCurrentSpeed; \
		TArray<ASBZSpline*> InServerPath; \
		float InServerTraveledDistance; \
		float InDeceleration; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_SetPath_Parms \
	{ \
		TArray<ASBZSpline*> InPath; \
		bool bTeleportToPathStart; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_SetPathSpline_Parms \
	{ \
		ASBZSpline* InPath; \
	}; \
	struct SBZVehicleSplineFollowingComponent_eventMulticast_StopAtDistance_Parms \
	{ \
		float Distance; \
		bool bRequestedByUser; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVehicleSplineFollowingComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleSplineFollowingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleSplineFollowingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedProperties=NETFIELD_REP_START, \
		TargetSpeed, \
		Speed, \
		StopBeginSpeed, \
		StopBeginDistance, \
		StopEndDistance, \
		DecelDuration, \
		DecelTime, \
		CruisingSpeed, \
		TurnCruisingSpeed, \
		Acceleration, \
		Deceleration, \
		bIsStopping, \
		bIsStopRequestedByUser, \
		NETFIELD_REP_END=bIsStopRequestedByUser	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVehicleSplineFollowingComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleSplineFollowingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleSplineFollowingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedProperties=NETFIELD_REP_START, \
		TargetSpeed, \
		Speed, \
		StopBeginSpeed, \
		StopBeginDistance, \
		StopEndDistance, \
		DecelDuration, \
		DecelTime, \
		CruisingSpeed, \
		TurnCruisingSpeed, \
		Acceleration, \
		Deceleration, \
		bIsStopping, \
		bIsStopRequestedByUser, \
		NETFIELD_REP_END=bIsStopRequestedByUser	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleSplineFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleSplineFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleSplineFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleSplineFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleSplineFollowingComponent(USBZVehicleSplineFollowingComponent&&); \
	NO_API USBZVehicleSplineFollowingComponent(const USBZVehicleSplineFollowingComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleSplineFollowingComponent(USBZVehicleSplineFollowingComponent&&); \
	NO_API USBZVehicleSplineFollowingComponent(const USBZVehicleSplineFollowingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleSplineFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleSplineFollowingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleSplineFollowingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VehicleManager() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, VehicleManager); } \
	FORCEINLINE static uint32 __PPO__ReplicatedProperties() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, ReplicatedProperties); } \
	FORCEINLINE static uint32 __PPO__ClientPath() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, ClientPath); } \
	FORCEINLINE static uint32 __PPO__TargetSpeed() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, TargetSpeed); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, Speed); } \
	FORCEINLINE static uint32 __PPO__StopBeginSpeed() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, StopBeginSpeed); } \
	FORCEINLINE static uint32 __PPO__StopBeginDistance() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, StopBeginDistance); } \
	FORCEINLINE static uint32 __PPO__StopEndDistance() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, StopEndDistance); } \
	FORCEINLINE static uint32 __PPO__DecelDuration() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, DecelDuration); } \
	FORCEINLINE static uint32 __PPO__DecelTime() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, DecelTime); } \
	FORCEINLINE static uint32 __PPO__CruisingSpeed() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, CruisingSpeed); } \
	FORCEINLINE static uint32 __PPO__TurnCruisingSpeed() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, TurnCruisingSpeed); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__Deceleration() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, Deceleration); } \
	FORCEINLINE static uint32 __PPO__FullPath() { return STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, FullPath); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleSplineFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleSplineFollowingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
