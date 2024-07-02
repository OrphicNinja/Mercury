// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMovingSecurityCamera_generated_h
#error "SBZMovingSecurityCamera.generated.h already included, missing '#pragma once' in SBZMovingSecurityCamera.h"
#endif
#define STARBREEZE_SBZMovingSecurityCamera_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableMotionSensor); \
	DECLARE_FUNCTION(execOnRep_ServerStartTime);


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableMotionSensor); \
	DECLARE_FUNCTION(execOnRep_ServerStartTime);


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMovingSecurityCamera(); \
	friend struct Z_Construct_UClass_ASBZMovingSecurityCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZMovingSecurityCamera, ASBZSecurityCamera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMovingSecurityCamera) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerStartTime=NETFIELD_REP_START, \
		ScramblerStopTime, \
		NETFIELD_REP_END=ScramblerStopTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZMovingSecurityCamera(); \
	friend struct Z_Construct_UClass_ASBZMovingSecurityCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZMovingSecurityCamera, ASBZSecurityCamera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMovingSecurityCamera) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerStartTime=NETFIELD_REP_START, \
		ScramblerStopTime, \
		NETFIELD_REP_END=ScramblerStopTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMovingSecurityCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMovingSecurityCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMovingSecurityCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMovingSecurityCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMovingSecurityCamera(ASBZMovingSecurityCamera&&); \
	NO_API ASBZMovingSecurityCamera(const ASBZMovingSecurityCamera&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMovingSecurityCamera(ASBZMovingSecurityCamera&&); \
	NO_API ASBZMovingSecurityCamera(const ASBZMovingSecurityCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMovingSecurityCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMovingSecurityCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMovingSecurityCamera)


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Splines() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, Splines); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__POIClass() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, POIClass); } \
	FORCEINLINE static uint32 __PPO__POIInstance() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, POIInstance); } \
	FORCEINLINE static uint32 __PPO__CameraDebris() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, CameraDebris); } \
	FORCEINLINE static uint32 __PPO__DebrisTransformSelector() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, DebrisTransformSelector); } \
	FORCEINLINE static uint32 __PPO__bDestroyOnKill() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, bDestroyOnKill); } \
	FORCEINLINE static uint32 __PPO__ChosenSpline() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, ChosenSpline); } \
	FORCEINLINE static uint32 __PPO__DistanceAlongSpline() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, DistanceAlongSpline); } \
	FORCEINLINE static uint32 __PPO__ServerStartTime() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, ServerStartTime); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, Seed); } \
	FORCEINLINE static uint32 __PPO__SplineDistance() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, SplineDistance); } \
	FORCEINLINE static uint32 __PPO__CameraAttachComponent() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, CameraAttachComponent); } \
	FORCEINLINE static uint32 __PPO__CameraAttachment() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, CameraAttachment); } \
	FORCEINLINE static uint32 __PPO__bIsStealthDrone() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, bIsStealthDrone); } \
	FORCEINLINE static uint32 __PPO__ScramblerStopTime() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, ScramblerStopTime); } \
	FORCEINLINE static uint32 __PPO__DebrisActor() { return STRUCT_OFFSET(ASBZMovingSecurityCamera, DebrisActor); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMovingSecurityCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMovingSecurityCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
