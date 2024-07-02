// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;
enum class ESBZLifeActionStopReason : uint8;
#ifdef STARBREEZE_SBZLifeActionTriggerVolume_generated_h
#error "SBZLifeActionTriggerVolume.generated.h already included, missing '#pragma once' in SBZLifeActionTriggerVolume.h"
#endif
#define STARBREEZE_SBZLifeActionTriggerVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFilteredActorBeginOverlapping); \
	DECLARE_FUNCTION(execOnFilteredActorEndOverlapping); \
	DECLARE_FUNCTION(execOnSlotEntered); \
	DECLARE_FUNCTION(execOnSlotExited); \
	DECLARE_FUNCTION(execOnSlotExiting); \
	DECLARE_FUNCTION(execOnSlotFreed); \
	DECLARE_FUNCTION(execOnSlotReady); \
	DECLARE_FUNCTION(execOnSlotReserved); \
	DECLARE_FUNCTION(execOnSlotStart); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFilteredActorBeginOverlapping); \
	DECLARE_FUNCTION(execOnFilteredActorEndOverlapping); \
	DECLARE_FUNCTION(execOnSlotEntered); \
	DECLARE_FUNCTION(execOnSlotExited); \
	DECLARE_FUNCTION(execOnSlotExiting); \
	DECLARE_FUNCTION(execOnSlotFreed); \
	DECLARE_FUNCTION(execOnSlotReady); \
	DECLARE_FUNCTION(execOnSlotReserved); \
	DECLARE_FUNCTION(execOnSlotStart); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLifeActionTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZLifeActionTriggerVolume, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZLifeActionTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASBZLifeActionTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZLifeActionTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZLifeActionTriggerVolume, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZLifeActionTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZLifeActionTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLifeActionTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZLifeActionTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLifeActionTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZLifeActionTriggerVolume(ASBZLifeActionTriggerVolume&&); \
	STARBREEZE_API ASBZLifeActionTriggerVolume(const ASBZLifeActionTriggerVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZLifeActionTriggerVolume(ASBZLifeActionTriggerVolume&&); \
	STARBREEZE_API ASBZLifeActionTriggerVolume(const ASBZLifeActionTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZLifeActionTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLifeActionTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLifeActionTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NeededTags() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, NeededTags); } \
	FORCEINLINE static uint32 __PPO__bShouldStartEnabled() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, bShouldStartEnabled); } \
	FORCEINLINE static uint32 __PPO__bDisableOnLifeActionReserved() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, bDisableOnLifeActionReserved); } \
	FORCEINLINE static uint32 __PPO__bDisableOnLifeActionExiting() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, bDisableOnLifeActionExiting); } \
	FORCEINLINE static uint32 __PPO__bDisableOnLifeActionComplete() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, bDisableOnLifeActionComplete); } \
	FORCEINLINE static uint32 __PPO__ActorFilterComponent() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, ActorFilterComponent); } \
	FORCEINLINE static uint32 __PPO__bTriggeredByHumanShield() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, bTriggeredByHumanShield); } \
	FORCEINLINE static uint32 __PPO__bAutoTrigger() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, bAutoTrigger); } \
	FORCEINLINE static uint32 __PPO__Action() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, Action); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotReserved() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotReserved); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotEntered() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotEntered); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotReady() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotReady); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotStart() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotStart); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotExiting() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotExiting); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotExited() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotExited); } \
	FORCEINLINE static uint32 __PPO__OnCharacterSlotFreed() { return STRUCT_OFFSET(ASBZLifeActionTriggerVolume, OnCharacterSlotFreed); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_17_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLifeActionTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
