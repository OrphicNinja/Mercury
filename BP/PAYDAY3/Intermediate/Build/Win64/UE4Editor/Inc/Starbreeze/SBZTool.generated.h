// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZToolState : uint8;
class AActor;
#ifdef STARBREEZE_SBZTool_generated_h
#error "SBZTool.generated.h already included, missing '#pragma once' in SBZTool.h"
#endif
#define STARBREEZE_SBZTool_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_RPC_WRAPPERS \
	virtual void Multicast_SetToolState_Implementation(ESBZToolState NewToolState); \
	virtual void Server_CallReady_Implementation(); \
	virtual void Server_SetEquippedAnimationFullyPlayed_Implementation(bool bInIsEquippedAnimationReady); \
	virtual void Server_SetToolState_Implementation(ESBZToolState NewToolState); \
 \
	DECLARE_FUNCTION(execMulticast_SetToolState); \
	DECLARE_FUNCTION(execOnInstigatorEndPlay); \
	DECLARE_FUNCTION(execOnRep_ToolState); \
	DECLARE_FUNCTION(execServer_CallReady); \
	DECLARE_FUNCTION(execServer_SetEquippedAnimationFullyPlayed); \
	DECLARE_FUNCTION(execServer_SetToolState); \
	DECLARE_FUNCTION(execStopAllSounds);


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetToolState_Implementation(ESBZToolState NewToolState); \
	virtual void Server_CallReady_Implementation(); \
	virtual void Server_SetEquippedAnimationFullyPlayed_Implementation(bool bInIsEquippedAnimationReady); \
	virtual void Server_SetToolState_Implementation(ESBZToolState NewToolState); \
 \
	DECLARE_FUNCTION(execMulticast_SetToolState); \
	DECLARE_FUNCTION(execOnInstigatorEndPlay); \
	DECLARE_FUNCTION(execOnRep_ToolState); \
	DECLARE_FUNCTION(execServer_CallReady); \
	DECLARE_FUNCTION(execServer_SetEquippedAnimationFullyPlayed); \
	DECLARE_FUNCTION(execServer_SetToolState); \
	DECLARE_FUNCTION(execStopAllSounds);


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_EVENT_PARMS \
	struct SBZTool_eventMulticast_SetToolState_Parms \
	{ \
		ESBZToolState NewToolState; \
	}; \
	struct SBZTool_eventServer_SetEquippedAnimationFullyPlayed_Parms \
	{ \
		bool bInIsEquippedAnimationReady; \
	}; \
	struct SBZTool_eventServer_SetToolState_Parms \
	{ \
		ESBZToolState NewToolState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZTool(); \
	friend struct Z_Construct_UClass_ASBZTool_Statics; \
public: \
	DECLARE_CLASS(ASBZTool, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTool) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ToolState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ToolState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASBZTool(); \
	friend struct Z_Construct_UClass_ASBZTool_Statics; \
public: \
	DECLARE_CLASS(ASBZTool, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTool) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ToolState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ToolState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTool(ASBZTool&&); \
	NO_API ASBZTool(const ASBZTool&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTool(ASBZTool&&); \
	NO_API ASBZTool(const ASBZTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTool); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTool)


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ASBZTool, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__Data() { return STRUCT_OFFSET(ASBZTool, Data); } \
	FORCEINLINE static uint32 __PPO__ToolState() { return STRUCT_OFFSET(ASBZTool, ToolState); } \
	FORCEINLINE static uint32 __PPO__InstigatorCharacter() { return STRUCT_OFFSET(ASBZTool, InstigatorCharacter); } \
	FORCEINLINE static uint32 __PPO__OnReadyEvent() { return STRUCT_OFFSET(ASBZTool, OnReadyEvent); } \
	FORCEINLINE static uint32 __PPO__OnActivatedEvent() { return STRUCT_OFFSET(ASBZTool, OnActivatedEvent); } \
	FORCEINLINE static uint32 __PPO__OnActivatedIdleEvent() { return STRUCT_OFFSET(ASBZTool, OnActivatedIdleEvent); } \
	FORCEINLINE static uint32 __PPO__OnActivatedUsingEvent() { return STRUCT_OFFSET(ASBZTool, OnActivatedUsingEvent); } \
	FORCEINLINE static uint32 __PPO__OnCanceledEvent() { return STRUCT_OFFSET(ASBZTool, OnCanceledEvent); } \
	FORCEINLINE static uint32 __PPO__StopAllSoundsEvent() { return STRUCT_OFFSET(ASBZTool, StopAllSoundsEvent); } \
	FORCEINLINE static uint32 __PPO__OnReadyEventRtpc() { return STRUCT_OFFSET(ASBZTool, OnReadyEventRtpc); } \
	FORCEINLINE static uint32 __PPO__OnActivatedEventRtpc() { return STRUCT_OFFSET(ASBZTool, OnActivatedEventRtpc); } \
	FORCEINLINE static uint32 __PPO__OnActivatedIdleEventRtpc() { return STRUCT_OFFSET(ASBZTool, OnActivatedIdleEventRtpc); } \
	FORCEINLINE static uint32 __PPO__OnActivatedUsingEventRtpc() { return STRUCT_OFFSET(ASBZTool, OnActivatedUsingEventRtpc); } \
	FORCEINLINE static uint32 __PPO__OnCanceledRtpc() { return STRUCT_OFFSET(ASBZTool, OnCanceledRtpc); } \
	FORCEINLINE static uint32 __PPO__LockedPlayerController() { return STRUCT_OFFSET(ASBZTool, LockedPlayerController); } \
	FORCEINLINE static uint32 __PPO__ActivePlayerController() { return STRUCT_OFFSET(ASBZTool, ActivePlayerController); } \
	FORCEINLINE static uint32 __PPO__EquipPlayerController() { return STRUCT_OFFSET(ASBZTool, EquipPlayerController); } \
	FORCEINLINE static uint32 __PPO__ActiveUsingPlayerController() { return STRUCT_OFFSET(ASBZTool, ActiveUsingPlayerController); } \
	FORCEINLINE static uint32 __PPO__EquipPlayerFeedback() { return STRUCT_OFFSET(ASBZTool, EquipPlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__ActivePlayerFeedback() { return STRUCT_OFFSET(ASBZTool, ActivePlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__ActiveUsingPlayerFeedback() { return STRUCT_OFFSET(ASBZTool, ActiveUsingPlayerFeedback); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_19_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTool_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
