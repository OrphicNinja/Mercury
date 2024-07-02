// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZZipline;
struct FVector;
struct FSBZMinimalAgilityTraversalTrajectory;
#ifdef STARBREEZE_SBZCharacterMovementComponent_generated_h
#error "SBZCharacterMovementComponent.generated.h already included, missing '#pragma once' in SBZCharacterMovementComponent.h"
#endif
#define STARBREEZE_SBZCharacterMovementComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_RPC_WRAPPERS \
	virtual void Multicast_StartZipline_Implementation(ASBZZipline* InZipline, bool bIsMovingZiplineForward, const float InTimeOnZipline); \
	virtual void Multicast_StopZipline_Implementation(bool bWasCancelled); \
	virtual void NetMulticast_StartSlide_Implementation(FVector const& InSlideDirection, FVector const& InEndSlideLocation); \
	virtual void NetMulticast_StartTraversal_Implementation(FSBZMinimalAgilityTraversalTrajectory const& MinimalTrajectory); \
	virtual void NetMulticast_StopSlide_Implementation(); \
	virtual void NetMulticast_StopTraversal_Implementation(); \
	virtual bool Server_StartSlide_Validate(FVector const& , FVector const& ); \
	virtual void Server_StartSlide_Implementation(FVector const& InSlideDirection, FVector const& InEndSlideLocation); \
	virtual bool Server_StartTraversal_Validate(FSBZMinimalAgilityTraversalTrajectory const& ); \
	virtual void Server_StartTraversal_Implementation(FSBZMinimalAgilityTraversalTrajectory const& MinimalTrajectory); \
	virtual void Server_StartZipline_Implementation(ASBZZipline* InZipline, bool bIsMovingZiplineForward, const float InTimeOnZipline); \
	virtual bool Server_StopSlide_Validate(); \
	virtual void Server_StopSlide_Implementation(); \
	virtual void Server_StopZipline_Implementation(bool bWasCancelled); \
 \
	DECLARE_FUNCTION(execMulticast_StartZipline); \
	DECLARE_FUNCTION(execMulticast_StopZipline); \
	DECLARE_FUNCTION(execNetMulticast_StartSlide); \
	DECLARE_FUNCTION(execNetMulticast_StartTraversal); \
	DECLARE_FUNCTION(execNetMulticast_StopSlide); \
	DECLARE_FUNCTION(execNetMulticast_StopTraversal); \
	DECLARE_FUNCTION(execServer_StartSlide); \
	DECLARE_FUNCTION(execServer_StartTraversal); \
	DECLARE_FUNCTION(execServer_StartZipline); \
	DECLARE_FUNCTION(execServer_StopSlide); \
	DECLARE_FUNCTION(execServer_StopZipline);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StartZipline_Implementation(ASBZZipline* InZipline, bool bIsMovingZiplineForward, const float InTimeOnZipline); \
	virtual void Multicast_StopZipline_Implementation(bool bWasCancelled); \
	virtual void NetMulticast_StartSlide_Implementation(FVector const& InSlideDirection, FVector const& InEndSlideLocation); \
	virtual void NetMulticast_StartTraversal_Implementation(FSBZMinimalAgilityTraversalTrajectory const& MinimalTrajectory); \
	virtual void NetMulticast_StopSlide_Implementation(); \
	virtual void NetMulticast_StopTraversal_Implementation(); \
	virtual bool Server_StartSlide_Validate(FVector const& , FVector const& ); \
	virtual void Server_StartSlide_Implementation(FVector const& InSlideDirection, FVector const& InEndSlideLocation); \
	virtual bool Server_StartTraversal_Validate(FSBZMinimalAgilityTraversalTrajectory const& ); \
	virtual void Server_StartTraversal_Implementation(FSBZMinimalAgilityTraversalTrajectory const& MinimalTrajectory); \
	virtual void Server_StartZipline_Implementation(ASBZZipline* InZipline, bool bIsMovingZiplineForward, const float InTimeOnZipline); \
	virtual bool Server_StopSlide_Validate(); \
	virtual void Server_StopSlide_Implementation(); \
	virtual void Server_StopZipline_Implementation(bool bWasCancelled); \
 \
	DECLARE_FUNCTION(execMulticast_StartZipline); \
	DECLARE_FUNCTION(execMulticast_StopZipline); \
	DECLARE_FUNCTION(execNetMulticast_StartSlide); \
	DECLARE_FUNCTION(execNetMulticast_StartTraversal); \
	DECLARE_FUNCTION(execNetMulticast_StopSlide); \
	DECLARE_FUNCTION(execNetMulticast_StopTraversal); \
	DECLARE_FUNCTION(execServer_StartSlide); \
	DECLARE_FUNCTION(execServer_StartTraversal); \
	DECLARE_FUNCTION(execServer_StartZipline); \
	DECLARE_FUNCTION(execServer_StopSlide); \
	DECLARE_FUNCTION(execServer_StopZipline);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_EVENT_PARMS \
	struct SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms \
	{ \
		ASBZZipline* InZipline; \
		bool bIsMovingZiplineForward; \
		float InTimeOnZipline; \
	}; \
	struct SBZCharacterMovementComponent_eventMulticast_StopZipline_Parms \
	{ \
		bool bWasCancelled; \
	}; \
	struct SBZCharacterMovementComponent_eventNetMulticast_StartSlide_Parms \
	{ \
		FVector InSlideDirection; \
		FVector InEndSlideLocation; \
	}; \
	struct SBZCharacterMovementComponent_eventNetMulticast_StartTraversal_Parms \
	{ \
		FSBZMinimalAgilityTraversalTrajectory MinimalTrajectory; \
	}; \
	struct SBZCharacterMovementComponent_eventServer_StartSlide_Parms \
	{ \
		FVector InSlideDirection; \
		FVector InEndSlideLocation; \
	}; \
	struct SBZCharacterMovementComponent_eventServer_StartTraversal_Parms \
	{ \
		FSBZMinimalAgilityTraversalTrajectory MinimalTrajectory; \
	}; \
	struct SBZCharacterMovementComponent_eventServer_StartZipline_Parms \
	{ \
		ASBZZipline* InZipline; \
		bool bIsMovingZiplineForward; \
		float InTimeOnZipline; \
	}; \
	struct SBZCharacterMovementComponent_eventServer_StopZipline_Parms \
	{ \
		bool bWasCancelled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterMovementComponent(USBZCharacterMovementComponent&&); \
	NO_API USBZCharacterMovementComponent(const USBZCharacterMovementComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterMovementComponent(USBZCharacterMovementComponent&&); \
	NO_API USBZCharacterMovementComponent(const USBZCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AgilityTrajectoryQueryParams() { return STRUCT_OFFSET(USBZCharacterMovementComponent, AgilityTrajectoryQueryParams); } \
	FORCEINLINE static uint32 __PPO__AgilitySlideParams() { return STRUCT_OFFSET(USBZCharacterMovementComponent, AgilitySlideParams); } \
	FORCEINLINE static uint32 __PPO__CurrentZipline() { return STRUCT_OFFSET(USBZCharacterMovementComponent, CurrentZipline); } \
	FORCEINLINE static uint32 __PPO__CurrentControlsReferenceID() { return STRUCT_OFFSET(USBZCharacterMovementComponent, CurrentControlsReferenceID); } \
	FORCEINLINE static uint32 __PPO__ZiplineParams() { return STRUCT_OFFSET(USBZCharacterMovementComponent, ZiplineParams); } \
	FORCEINLINE static uint32 __PPO__MaxRunSpeed() { return STRUCT_OFFSET(USBZCharacterMovementComponent, MaxRunSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxTargetingSpeed() { return STRUCT_OFFSET(USBZCharacterMovementComponent, MaxTargetingSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxHSInstigatorTargetingSpeed() { return STRUCT_OFFSET(USBZCharacterMovementComponent, MaxHSInstigatorTargetingSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxHSInstigatorWalkingSpeed() { return STRUCT_OFFSET(USBZCharacterMovementComponent, MaxHSInstigatorWalkingSpeed); } \
	FORCEINLINE static uint32 __PPO__StandingHalfHeight() { return STRUCT_OFFSET(USBZCharacterMovementComponent, StandingHalfHeight); } \
	FORCEINLINE static uint32 __PPO__TraversingHalfHeight() { return STRUCT_OFFSET(USBZCharacterMovementComponent, TraversingHalfHeight); } \
	FORCEINLINE static uint32 __PPO__TraversingMaxAngle() { return STRUCT_OFFSET(USBZCharacterMovementComponent, TraversingMaxAngle); } \
	FORCEINLINE static uint32 __PPO__CharacterMovementState() { return STRUCT_OFFSET(USBZCharacterMovementComponent, CharacterMovementState); } \
	FORCEINLINE static uint32 __PPO__SBZCharacterOwner() { return STRUCT_OFFSET(USBZCharacterMovementComponent, SBZCharacterOwner); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
