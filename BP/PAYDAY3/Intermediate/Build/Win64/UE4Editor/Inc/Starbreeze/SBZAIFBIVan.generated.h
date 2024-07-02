// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
class ASBZPlayerState;
enum class EPD3DefeatState : uint8;
struct FSBZPlayerInEscapeChangedEvent;
class UActorComponent;
struct FSBZPropDamageContext;
struct FSBZDamageEvent;
class ASBZWheeledVehicle;
class ASBZSpline;
#ifdef STARBREEZE_SBZAIFBIVan_generated_h
#error "SBZAIFBIVan.generated.h already included, missing '#pragma once' in SBZAIFBIVan.h"
#endif
#define STARBREEZE_SBZAIFBIVan_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPlayerDefeated); \
	DECLARE_FUNCTION(execOnPlayersInEscapeChanged); \
	DECLARE_FUNCTION(execOnPropDamaged); \
	DECLARE_FUNCTION(execOnRep_IsFBIActive); \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execOnVanArrived);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPlayerDefeated); \
	DECLARE_FUNCTION(execOnPlayersInEscapeChanged); \
	DECLARE_FUNCTION(execOnPropDamaged); \
	DECLARE_FUNCTION(execOnRep_IsFBIActive); \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execOnVanArrived);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIFBIVan(); \
	friend struct Z_Construct_UClass_ASBZAIFBIVan_Statics; \
public: \
	DECLARE_CLASS(ASBZAIFBIVan, ASBZWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIFBIVan) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsFBIActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsFBIActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIFBIVan(); \
	friend struct Z_Construct_UClass_ASBZAIFBIVan_Statics; \
public: \
	DECLARE_CLASS(ASBZAIFBIVan, ASBZWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIFBIVan) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsFBIActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsFBIActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIFBIVan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIFBIVan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIFBIVan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIFBIVan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIFBIVan(ASBZAIFBIVan&&); \
	NO_API ASBZAIFBIVan(const ASBZAIFBIVan&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIFBIVan(ASBZAIFBIVan&&); \
	NO_API ASBZAIFBIVan(const ASBZAIFBIVan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIFBIVan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIFBIVan); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIFBIVan)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PropDamageComponent() { return STRUCT_OFFSET(ASBZAIFBIVan, PropDamageComponent); } \
	FORCEINLINE static uint32 __PPO__AntennaHitMeshComponent() { return STRUCT_OFFSET(ASBZAIFBIVan, AntennaHitMeshComponent); } \
	FORCEINLINE static uint32 __PPO__AntennaDestroyedEffect() { return STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__DestroyedEffectOffset() { return STRUCT_OFFSET(ASBZAIFBIVan, DestroyedEffectOffset); } \
	FORCEINLINE static uint32 __PPO__AntennaDestroyedMesh() { return STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedMesh); } \
	FORCEINLINE static uint32 __PPO__AntennaDestroyedOnEvent() { return STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedOnEvent); } \
	FORCEINLINE static uint32 __PPO__VoiceComponent() { return STRUCT_OFFSET(ASBZAIFBIVan, VoiceComponent); } \
	FORCEINLINE static uint32 __PPO__FBIArrivedVO() { return STRUCT_OFFSET(ASBZAIFBIVan, FBIArrivedVO); } \
	FORCEINLINE static uint32 __PPO__AntennaDestroyedVO() { return STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedVO); } \
	FORCEINLINE static uint32 __PPO__AssaultBarkVO() { return STRUCT_OFFSET(ASBZAIFBIVan, AssaultBarkVO); } \
	FORCEINLINE static uint32 __PPO__EscapeArrivingVO() { return STRUCT_OFFSET(ASBZAIFBIVan, EscapeArrivingVO); } \
	FORCEINLINE static uint32 __PPO__PlayerInEscapeZoneVO() { return STRUCT_OFFSET(ASBZAIFBIVan, PlayerInEscapeZoneVO); } \
	FORCEINLINE static uint32 __PPO__AllPlayersInEscapeZoneVO() { return STRUCT_OFFSET(ASBZAIFBIVan, AllPlayersInEscapeZoneVO); } \
	FORCEINLINE static uint32 __PPO__FirstPlayerInCustodyVO() { return STRUCT_OFFSET(ASBZAIFBIVan, FirstPlayerInCustodyVO); } \
	FORCEINLINE static uint32 __PPO__AnotherPlayerInCustodyVO() { return STRUCT_OFFSET(ASBZAIFBIVan, AnotherPlayerInCustodyVO); } \
	FORCEINLINE static uint32 __PPO__ShadeFBIOnTheWayVO() { return STRUCT_OFFSET(ASBZAIFBIVan, ShadeFBIOnTheWayVO); } \
	FORCEINLINE static uint32 __PPO__ShadeFBIHasArrivedVO() { return STRUCT_OFFSET(ASBZAIFBIVan, ShadeFBIHasArrivedVO); } \
	FORCEINLINE static uint32 __PPO__ShadeFBIReminderVO() { return STRUCT_OFFSET(ASBZAIFBIVan, ShadeFBIReminderVO); } \
	FORCEINLINE static uint32 __PPO__DownedByTypeVOs() { return STRUCT_OFFSET(ASBZAIFBIVan, DownedByTypeVOs); } \
	FORCEINLINE static uint32 __PPO__AssaultCommentIntervalSeconds() { return STRUCT_OFFSET(ASBZAIFBIVan, AssaultCommentIntervalSeconds); } \
	FORCEINLINE static uint32 __PPO__AssaultCommentRandomChance() { return STRUCT_OFFSET(ASBZAIFBIVan, AssaultCommentRandomChance); } \
	FORCEINLINE static uint32 __PPO__EscapeVOCooldown() { return STRUCT_OFFSET(ASBZAIFBIVan, EscapeVOCooldown); } \
	FORCEINLINE static uint32 __PPO__ShadeReminderVOChance() { return STRUCT_OFFSET(ASBZAIFBIVan, ShadeReminderVOChance); } \
	FORCEINLINE static uint32 __PPO__ShadeReminderVOCooldown() { return STRUCT_OFFSET(ASBZAIFBIVan, ShadeReminderVOCooldown); } \
	FORCEINLINE static uint32 __PPO__bIsFBIActive() { return STRUCT_OFFSET(ASBZAIFBIVan, bIsFBIActive); } \
	FORCEINLINE static uint32 __PPO__ECMOutlineComponent() { return STRUCT_OFFSET(ASBZAIFBIVan, ECMOutlineComponent); } \
	FORCEINLINE static uint32 __PPO__ECMOutlineAsset() { return STRUCT_OFFSET(ASBZAIFBIVan, ECMOutlineAsset); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_27_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIFBIVan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIFBIVan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
