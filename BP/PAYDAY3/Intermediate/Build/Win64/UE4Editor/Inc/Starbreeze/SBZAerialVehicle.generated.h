// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZVehicleSpawnComponent;
class USBZVehicleSplineFollowingComponent;
class ASBZSpline;
enum class ESBZAerialVehicleDoor : uint8;
#ifdef STARBREEZE_SBZAerialVehicle_generated_h
#error "SBZAerialVehicle.generated.h already included, missing '#pragma once' in SBZAerialVehicle.h"
#endif
#define STARBREEZE_SBZAerialVehicle_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_RPC_WRAPPERS \
	virtual void Multicast_SetDoorState_Implementation(uint8 NewState); \
 \
	DECLARE_FUNCTION(execGetSpawnComponent); \
	DECLARE_FUNCTION(execGetSplineFollowingComponent); \
	DECLARE_FUNCTION(execGetVehicleSplineFollowingComponent); \
	DECLARE_FUNCTION(execMulticast_SetDoorState); \
	DECLARE_FUNCTION(execOnBeginStopCallback); \
	DECLARE_FUNCTION(execOnPathEndReachedCallback); \
	DECLARE_FUNCTION(execOnRep_DoorState); \
	DECLARE_FUNCTION(execOnRep_RepMove); \
	DECLARE_FUNCTION(execOnSplineEndReachedCallback); \
	DECLARE_FUNCTION(execOnSplineEnteredCallback); \
	DECLARE_FUNCTION(execOnSplineLeftCallback); \
	DECLARE_FUNCTION(execOnStoppedCallback); \
	DECLARE_FUNCTION(execSetDoorOpen); \
	DECLARE_FUNCTION(execSetDoorState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetDoorState_Implementation(uint8 NewState); \
 \
	DECLARE_FUNCTION(execGetSpawnComponent); \
	DECLARE_FUNCTION(execGetSplineFollowingComponent); \
	DECLARE_FUNCTION(execGetVehicleSplineFollowingComponent); \
	DECLARE_FUNCTION(execMulticast_SetDoorState); \
	DECLARE_FUNCTION(execOnBeginStopCallback); \
	DECLARE_FUNCTION(execOnPathEndReachedCallback); \
	DECLARE_FUNCTION(execOnRep_DoorState); \
	DECLARE_FUNCTION(execOnRep_RepMove); \
	DECLARE_FUNCTION(execOnSplineEndReachedCallback); \
	DECLARE_FUNCTION(execOnSplineEnteredCallback); \
	DECLARE_FUNCTION(execOnSplineLeftCallback); \
	DECLARE_FUNCTION(execOnStoppedCallback); \
	DECLARE_FUNCTION(execSetDoorOpen); \
	DECLARE_FUNCTION(execSetDoorState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_EVENT_PARMS \
	struct SBZAerialVehicle_eventMulticast_SetDoorState_Parms \
	{ \
		uint8 NewState; \
	}; \
	struct SBZAerialVehicle_eventReceiveOnDoorStateChanged_Parms \
	{ \
		ESBZAerialVehicleDoor Door; \
		bool bIsDoorOpen; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAerialVehicle(); \
	friend struct Z_Construct_UClass_ASBZAerialVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZAerialVehicle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAerialVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAerialVehicle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DoorState=NETFIELD_REP_START, \
		RepMove, \
		MaxRollAngle, \
		PitchAngle, \
		NETFIELD_REP_END=PitchAngle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_INCLASS \
private: \
	static void StaticRegisterNativesASBZAerialVehicle(); \
	friend struct Z_Construct_UClass_ASBZAerialVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZAerialVehicle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAerialVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAerialVehicle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DoorState=NETFIELD_REP_START, \
		RepMove, \
		MaxRollAngle, \
		PitchAngle, \
		NETFIELD_REP_END=PitchAngle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAerialVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAerialVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAerialVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAerialVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAerialVehicle(ASBZAerialVehicle&&); \
	NO_API ASBZAerialVehicle(const ASBZAerialVehicle&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAerialVehicle(ASBZAerialVehicle&&); \
	NO_API ASBZAerialVehicle(const ASBZAerialVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAerialVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAerialVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAerialVehicle)


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASBZAerialVehicle, Mesh); } \
	FORCEINLINE static uint32 __PPO__SplineFollowingComponent() { return STRUCT_OFFSET(ASBZAerialVehicle, SplineFollowingComponent); } \
	FORCEINLINE static uint32 __PPO__StateMachine() { return STRUCT_OFFSET(ASBZAerialVehicle, StateMachine); } \
	FORCEINLINE static uint32 __PPO__HoverStatePitchCurve() { return STRUCT_OFFSET(ASBZAerialVehicle, HoverStatePitchCurve); } \
	FORCEINLINE static uint32 __PPO__HoverStateYawCurve() { return STRUCT_OFFSET(ASBZAerialVehicle, HoverStateYawCurve); } \
	FORCEINLINE static uint32 __PPO__HoverStateRollCurve() { return STRUCT_OFFSET(ASBZAerialVehicle, HoverStateRollCurve); } \
	FORCEINLINE static uint32 __PPO__DoorState() { return STRUCT_OFFSET(ASBZAerialVehicle, DoorState); } \
	FORCEINLINE static uint32 __PPO__RepMove() { return STRUCT_OFFSET(ASBZAerialVehicle, RepMove); } \
	FORCEINLINE static uint32 __PPO__MaxRollAngle() { return STRUCT_OFFSET(ASBZAerialVehicle, MaxRollAngle); } \
	FORCEINLINE static uint32 __PPO__PitchAngle() { return STRUCT_OFFSET(ASBZAerialVehicle, PitchAngle); } \
	FORCEINLINE static uint32 __PPO__MaxHoverYawAngle() { return STRUCT_OFFSET(ASBZAerialVehicle, MaxHoverYawAngle); } \
	FORCEINLINE static uint32 __PPO__MaxHoverRollAngle() { return STRUCT_OFFSET(ASBZAerialVehicle, MaxHoverRollAngle); } \
	FORCEINLINE static uint32 __PPO__LandingRotation() { return STRUCT_OFFSET(ASBZAerialVehicle, LandingRotation); } \
	FORCEINLINE static uint32 __PPO__bUseLandingRotation() { return STRUCT_OFFSET(ASBZAerialVehicle, bUseLandingRotation); } \
	FORCEINLINE static uint32 __PPO__MainRotorName() { return STRUCT_OFFSET(ASBZAerialVehicle, MainRotorName); } \
	FORCEINLINE static uint32 __PPO__TailRotorName() { return STRUCT_OFFSET(ASBZAerialVehicle, TailRotorName); } \
	FORCEINLINE static uint32 __PPO__RootName() { return STRUCT_OFFSET(ASBZAerialVehicle, RootName); } \
	FORCEINLINE static uint32 __PPO__bActiveEngine() { return STRUCT_OFFSET(ASBZAerialVehicle, bActiveEngine); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_27_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAerialVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
