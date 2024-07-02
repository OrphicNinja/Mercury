// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
class UPD3MiniGameWidgetBase;
class USBZMiniGameData;
class AActor;
class UAkComponent;
class UAkAudioEvent;
class UAkRtpc;
#ifdef STARBREEZE_SBZMiniGameComponent_generated_h
#error "SBZMiniGameComponent.generated.h already included, missing '#pragma once' in SBZMiniGameComponent.h"
#endif
#define STARBREEZE_SBZMiniGameComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_RPC_WRAPPERS \
	virtual void Multicast_ActivateMiniGame_Implementation(ASBZCharacter* Character); \
	virtual void Multicast_SetMiniGameData_Implementation(USBZMiniGameData* InData); \
 \
	DECLARE_FUNCTION(execActivateMiniGame); \
	DECLARE_FUNCTION(execGetSpawnedWidget); \
	DECLARE_FUNCTION(execMulticast_ActivateMiniGame); \
	DECLARE_FUNCTION(execMulticast_SetMiniGameData); \
	DECLARE_FUNCTION(execOnPlayerStateEndPlay); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execPlaySoundOnNative); \
	DECLARE_FUNCTION(execServerAbortMiniGame); \
	DECLARE_FUNCTION(execSetAudioPerspective); \
	DECLARE_FUNCTION(execSetMiniGameData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ActivateMiniGame_Implementation(ASBZCharacter* Character); \
	virtual void Multicast_SetMiniGameData_Implementation(USBZMiniGameData* InData); \
 \
	DECLARE_FUNCTION(execActivateMiniGame); \
	DECLARE_FUNCTION(execGetSpawnedWidget); \
	DECLARE_FUNCTION(execMulticast_ActivateMiniGame); \
	DECLARE_FUNCTION(execMulticast_SetMiniGameData); \
	DECLARE_FUNCTION(execOnPlayerStateEndPlay); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execPlaySoundOnNative); \
	DECLARE_FUNCTION(execServerAbortMiniGame); \
	DECLARE_FUNCTION(execSetAudioPerspective); \
	DECLARE_FUNCTION(execSetMiniGameData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_EVENT_PARMS \
	struct SBZMiniGameComponent_eventMulticast_ActivateMiniGame_Parms \
	{ \
		ASBZCharacter* Character; \
	}; \
	struct SBZMiniGameComponent_eventMulticast_SetMiniGameData_Parms \
	{ \
		USBZMiniGameData* InData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMiniGameComponent(); \
	friend struct Z_Construct_UClass_USBZMiniGameComponent_Statics; \
public: \
	DECLARE_CLASS(USBZMiniGameComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMiniGameComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZMiniGameComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		NETFIELD_REP_END=Data	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMiniGameComponent(); \
	friend struct Z_Construct_UClass_USBZMiniGameComponent_Statics; \
public: \
	DECLARE_CLASS(USBZMiniGameComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMiniGameComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZMiniGameComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		NETFIELD_REP_END=Data	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMiniGameComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMiniGameComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMiniGameComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMiniGameComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMiniGameComponent(USBZMiniGameComponent&&); \
	NO_API USBZMiniGameComponent(const USBZMiniGameComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMiniGameComponent(USBZMiniGameComponent&&); \
	NO_API USBZMiniGameComponent(const USBZMiniGameComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMiniGameComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMiniGameComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMiniGameComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Data() { return STRUCT_OFFSET(USBZMiniGameComponent, Data); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(USBZMiniGameComponent, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__AbortedAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, AbortedAudioEvent); } \
	FORCEINLINE static uint32 __PPO__SuccessAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, SuccessAudioEvent); } \
	FORCEINLINE static uint32 __PPO__FailedAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, FailedAudioEvent); } \
	FORCEINLINE static uint32 __PPO__InitiatedAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, InitiatedAudioEvent); } \
	FORCEINLINE static uint32 __PPO__InProgressAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, InProgressAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OpenWidgetAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, OpenWidgetAudioEvent); } \
	FORCEINLINE static uint32 __PPO__CloseWidgetAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, CloseWidgetAudioEvent); } \
	FORCEINLINE static uint32 __PPO__SilenceMinigameAudioEvent() { return STRUCT_OFFSET(USBZMiniGameComponent, SilenceMinigameAudioEvent); } \
	FORCEINLINE static uint32 __PPO__AbortedAudioRtpc() { return STRUCT_OFFSET(USBZMiniGameComponent, AbortedAudioRtpc); } \
	FORCEINLINE static uint32 __PPO__SuccessAudioRtpc() { return STRUCT_OFFSET(USBZMiniGameComponent, SuccessAudioRtpc); } \
	FORCEINLINE static uint32 __PPO__FailedAudioRtpc() { return STRUCT_OFFSET(USBZMiniGameComponent, FailedAudioRtpc); } \
	FORCEINLINE static uint32 __PPO__InitiatedAudioRtpc() { return STRUCT_OFFSET(USBZMiniGameComponent, InitiatedAudioRtpc); } \
	FORCEINLINE static uint32 __PPO__InProgressAudioRtpc() { return STRUCT_OFFSET(USBZMiniGameComponent, InProgressAudioRtpc); } \
	FORCEINLINE static uint32 __PPO__bSpawnMiniGameOnHackingTool() { return STRUCT_OFFSET(USBZMiniGameComponent, bSpawnMiniGameOnHackingTool); } \
	FORCEINLINE static uint32 __PPO__bSpawnMiniGameOnObject() { return STRUCT_OFFSET(USBZMiniGameComponent, bSpawnMiniGameOnObject); } \
	FORCEINLINE static uint32 __PPO__WidgetZOrder() { return STRUCT_OFFSET(USBZMiniGameComponent, WidgetZOrder); } \
	FORCEINLINE static uint32 __PPO__HackingAmmoCost() { return STRUCT_OFFSET(USBZMiniGameComponent, HackingAmmoCost); } \
	FORCEINLINE static uint32 __PPO__SpawnedWidget() { return STRUCT_OFFSET(USBZMiniGameComponent, SpawnedWidget); } \
	FORCEINLINE static uint32 __PPO__CurrentControlsReferenceID() { return STRUCT_OFFSET(USBZMiniGameComponent, CurrentControlsReferenceID); } \
	FORCEINLINE static uint32 __PPO__InteractingPlayerStateArray() { return STRUCT_OFFSET(USBZMiniGameComponent, InteractingPlayerStateArray); } \
	FORCEINLINE static uint32 __PPO__MiniGameDifficulty() { return STRUCT_OFFSET(USBZMiniGameComponent, MiniGameDifficulty); } \
	FORCEINLINE static uint32 __PPO__WinningParticipant() { return STRUCT_OFFSET(USBZMiniGameComponent, WinningParticipant); } \
	FORCEINLINE static uint32 __PPO__RootComponent() { return STRUCT_OFFSET(USBZMiniGameComponent, RootComponent); } \
	FORCEINLINE static uint32 __PPO__ActiveLocallyController() { return STRUCT_OFFSET(USBZMiniGameComponent, ActiveLocallyController); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_21_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMiniGameComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMiniGameComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
