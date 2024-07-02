// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlayerMicroCamera_generated_h
#error "SBZPlayerMicroCamera.generated.h already included, missing '#pragma once' in SBZPlayerMicroCamera.h"
#endif
#define STARBREEZE_SBZPlayerMicroCamera_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_RPC_WRAPPERS \
	virtual void Multicast_BecomeViewTarget_Implementation(int32 PlayerId); \
	virtual void Multicast_EndViewTarget_Implementation(int32 PlayerId); \
 \
	DECLARE_FUNCTION(execMulticast_BecomeViewTarget); \
	DECLARE_FUNCTION(execMulticast_EndViewTarget); \
	DECLARE_FUNCTION(execOnPlayerStateReplicated); \
	DECLARE_FUNCTION(execOnRep_CameraCurrentRotation); \
	DECLARE_FUNCTION(execOnRep_CameraTargetRotation); \
	DECLARE_FUNCTION(execOnRep_ViewTargetPlayerStateIdArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_BecomeViewTarget_Implementation(int32 PlayerId); \
	virtual void Multicast_EndViewTarget_Implementation(int32 PlayerId); \
 \
	DECLARE_FUNCTION(execMulticast_BecomeViewTarget); \
	DECLARE_FUNCTION(execMulticast_EndViewTarget); \
	DECLARE_FUNCTION(execOnPlayerStateReplicated); \
	DECLARE_FUNCTION(execOnRep_CameraCurrentRotation); \
	DECLARE_FUNCTION(execOnRep_CameraTargetRotation); \
	DECLARE_FUNCTION(execOnRep_ViewTargetPlayerStateIdArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_EVENT_PARMS \
	struct SBZPlayerMicroCamera_eventBP_OnViewTargetChanged_Parms \
	{ \
		bool bIsViewTarget; \
	}; \
	struct SBZPlayerMicroCamera_eventMulticast_BecomeViewTarget_Parms \
	{ \
		int32 PlayerId; \
	}; \
	struct SBZPlayerMicroCamera_eventMulticast_EndViewTarget_Parms \
	{ \
		int32 PlayerId; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerMicroCamera(); \
	friend struct Z_Construct_UClass_ASBZPlayerMicroCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerMicroCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerMicroCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerMicroCamera*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedCameraTargetRotation=NETFIELD_REP_START, \
		ReplicatedCameraCurrentRotation, \
		ViewTargetPlayerStateIdArray, \
		NETFIELD_REP_END=ViewTargetPlayerStateIdArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerMicroCamera(); \
	friend struct Z_Construct_UClass_ASBZPlayerMicroCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerMicroCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerMicroCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerMicroCamera*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedCameraTargetRotation=NETFIELD_REP_START, \
		ReplicatedCameraCurrentRotation, \
		ViewTargetPlayerStateIdArray, \
		NETFIELD_REP_END=ViewTargetPlayerStateIdArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerMicroCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerMicroCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerMicroCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerMicroCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerMicroCamera(ASBZPlayerMicroCamera&&); \
	NO_API ASBZPlayerMicroCamera(const ASBZPlayerMicroCamera&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerMicroCamera(ASBZPlayerMicroCamera&&); \
	NO_API ASBZPlayerMicroCamera(const ASBZPlayerMicroCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerMicroCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerMicroCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerMicroCamera)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__ReplicatedCameraTargetRotation() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, ReplicatedCameraTargetRotation); } \
	FORCEINLINE static uint32 __PPO__ReplicatedCameraCurrentRotation() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, ReplicatedCameraCurrentRotation); } \
	FORCEINLINE static uint32 __PPO__YawLimit() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, YawLimit); } \
	FORCEINLINE static uint32 __PPO__PitchLimit() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, PitchLimit); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__InstigatorCharacter() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, InstigatorCharacter); } \
	FORCEINLINE static uint32 __PPO__ViewTargetPlayerStateIdArray() { return STRUCT_OFFSET(ASBZPlayerMicroCamera, ViewTargetPlayerStateIdArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerMicroCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerMicroCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
