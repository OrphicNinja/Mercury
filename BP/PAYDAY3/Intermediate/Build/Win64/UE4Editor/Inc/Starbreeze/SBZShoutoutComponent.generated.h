// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
enum class ESBZShoutActionType : uint8;
class USBZShoutTargetComponent;
#ifdef STARBREEZE_SBZShoutoutComponent_generated_h
#error "SBZShoutoutComponent.generated.h already included, missing '#pragma once' in SBZShoutoutComponent.h"
#endif
#define STARBREEZE_SBZShoutoutComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_RPC_WRAPPERS \
	virtual void Multicast_SendPing_Implementation(FVector const& Location); \
	virtual void Multicast_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target); \
	virtual void Multicast_ShoutoutWithoutTarget_Implementation(ESBZShoutActionType Action); \
	virtual void Server_SendPing_Implementation(FVector const& Location); \
	virtual bool Server_Shoutout_Validate(AActor* , ESBZShoutActionType , USBZShoutTargetComponent* ); \
	virtual void Server_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target); \
 \
	DECLARE_FUNCTION(execIsActorMarked); \
	DECLARE_FUNCTION(execMulticast_SendPing); \
	DECLARE_FUNCTION(execMulticast_Shoutout); \
	DECLARE_FUNCTION(execMulticast_ShoutoutWithoutTarget); \
	DECLARE_FUNCTION(execOnPingComplete); \
	DECLARE_FUNCTION(execServer_SendPing); \
	DECLARE_FUNCTION(execServer_Shoutout); \
	DECLARE_FUNCTION(execSetMarkLimit);


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SendPing_Implementation(FVector const& Location); \
	virtual void Multicast_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target); \
	virtual void Multicast_ShoutoutWithoutTarget_Implementation(ESBZShoutActionType Action); \
	virtual void Server_SendPing_Implementation(FVector const& Location); \
	virtual bool Server_Shoutout_Validate(AActor* , ESBZShoutActionType , USBZShoutTargetComponent* ); \
	virtual void Server_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target); \
 \
	DECLARE_FUNCTION(execIsActorMarked); \
	DECLARE_FUNCTION(execMulticast_SendPing); \
	DECLARE_FUNCTION(execMulticast_Shoutout); \
	DECLARE_FUNCTION(execMulticast_ShoutoutWithoutTarget); \
	DECLARE_FUNCTION(execOnPingComplete); \
	DECLARE_FUNCTION(execServer_SendPing); \
	DECLARE_FUNCTION(execServer_Shoutout); \
	DECLARE_FUNCTION(execSetMarkLimit);


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_EVENT_PARMS \
	struct SBZShoutoutComponent_eventMulticast_SendPing_Parms \
	{ \
		FVector Location; \
	}; \
	struct SBZShoutoutComponent_eventMulticast_Shoutout_Parms \
	{ \
		AActor* Actor; \
		ESBZShoutActionType Action; \
		USBZShoutTargetComponent* Target; \
	}; \
	struct SBZShoutoutComponent_eventMulticast_ShoutoutWithoutTarget_Parms \
	{ \
		ESBZShoutActionType Action; \
	}; \
	struct SBZShoutoutComponent_eventServer_SendPing_Parms \
	{ \
		FVector Location; \
	}; \
	struct SBZShoutoutComponent_eventServer_Shoutout_Parms \
	{ \
		AActor* Actor; \
		ESBZShoutActionType Action; \
		USBZShoutTargetComponent* Target; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZShoutoutComponent(); \
	friend struct Z_Construct_UClass_USBZShoutoutComponent_Statics; \
public: \
	DECLARE_CLASS(USBZShoutoutComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZShoutoutComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZShoutoutComponent(); \
	friend struct Z_Construct_UClass_USBZShoutoutComponent_Statics; \
public: \
	DECLARE_CLASS(USBZShoutoutComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZShoutoutComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZShoutoutComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZShoutoutComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZShoutoutComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZShoutoutComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZShoutoutComponent(USBZShoutoutComponent&&); \
	NO_API USBZShoutoutComponent(const USBZShoutoutComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZShoutoutComponent(USBZShoutoutComponent&&); \
	NO_API USBZShoutoutComponent(const USBZShoutoutComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZShoutoutComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZShoutoutComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZShoutoutComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShoutOutRadius() { return STRUCT_OFFSET(USBZShoutoutComponent, ShoutOutRadius); } \
	FORCEINLINE static uint32 __PPO__MaxRoomPathDistanceFromInitialTarget() { return STRUCT_OFFSET(USBZShoutoutComponent, MaxRoomPathDistanceFromInitialTarget); } \
	FORCEINLINE static uint32 __PPO__HeightCutOffDistance() { return STRUCT_OFFSET(USBZShoutoutComponent, HeightCutOffDistance); } \
	FORCEINLINE static uint32 __PPO__RaytraceTargetFindDist() { return STRUCT_OFFSET(USBZShoutoutComponent, RaytraceTargetFindDist); } \
	FORCEINLINE static uint32 __PPO__AproximateTargetFindBox() { return STRUCT_OFFSET(USBZShoutoutComponent, AproximateTargetFindBox); } \
	FORCEINLINE static uint32 __PPO__MarkingOutlineAsset() { return STRUCT_OFFSET(USBZShoutoutComponent, MarkingOutlineAsset); } \
	FORCEINLINE static uint32 __PPO__MarkLimit() { return STRUCT_OFFSET(USBZShoutoutComponent, MarkLimit); } \
	FORCEINLINE static uint32 __PPO__ShoutoutDuration() { return STRUCT_OFFSET(USBZShoutoutComponent, ShoutoutDuration); } \
	FORCEINLINE static uint32 __PPO__DefaultMarkComment() { return STRUCT_OFFSET(USBZShoutoutComponent, DefaultMarkComment); } \
	FORCEINLINE static uint32 __PPO__DefaultHelpComment() { return STRUCT_OFFSET(USBZShoutoutComponent, DefaultHelpComment); } \
	FORCEINLINE static uint32 __PPO__DefaultGetDownComment() { return STRUCT_OFFSET(USBZShoutoutComponent, DefaultGetDownComment); } \
	FORCEINLINE static uint32 __PPO__DefaultCopSurrenderComment() { return STRUCT_OFFSET(USBZShoutoutComponent, DefaultCopSurrenderComment); } \
	FORCEINLINE static uint32 __PPO__GetDownTags() { return STRUCT_OFFSET(USBZShoutoutComponent, GetDownTags); } \
	FORCEINLINE static uint32 __PPO__BlockGoDownTagContainer() { return STRUCT_OFFSET(USBZShoutoutComponent, BlockGoDownTagContainer); } \
	FORCEINLINE static uint32 __PPO__BlockSurrenderOwnedTagContainer() { return STRUCT_OFFSET(USBZShoutoutComponent, BlockSurrenderOwnedTagContainer); } \
	FORCEINLINE static uint32 __PPO__PingMarkerAsset() { return STRUCT_OFFSET(USBZShoutoutComponent, PingMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__PingTimer() { return STRUCT_OFFSET(USBZShoutoutComponent, PingTimer); } \
	FORCEINLINE static uint32 __PPO__CopSurrenderAction() { return STRUCT_OFFSET(USBZShoutoutComponent, CopSurrenderAction); } \
	FORCEINLINE static uint32 __PPO__PingIndex() { return STRUCT_OFFSET(USBZShoutoutComponent, PingIndex); } \
	FORCEINLINE static uint32 __PPO__AbilitySystem() { return STRUCT_OFFSET(USBZShoutoutComponent, AbilitySystem); } \
	FORCEINLINE static uint32 __PPO__ActivationBlockedTags() { return STRUCT_OFFSET(USBZShoutoutComponent, ActivationBlockedTags); }


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZShoutoutComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZShoutoutComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
