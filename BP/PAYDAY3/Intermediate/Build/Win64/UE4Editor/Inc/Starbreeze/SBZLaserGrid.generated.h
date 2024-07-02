// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZLaserGrid_generated_h
#error "SBZLaserGrid.generated.h already included, missing '#pragma once' in SBZLaserGrid.h"
#endif
#define STARBREEZE_SBZLaserGrid_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_RPC_WRAPPERS \
	virtual void Multicast_NextPattern_Implementation(); \
	virtual void Multicast_SetEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execBlockingActorEntered); \
	DECLARE_FUNCTION(execMulticast_NextPattern); \
	DECLARE_FUNCTION(execMulticast_SetEnabled); \
	DECLARE_FUNCTION(execNextPattern); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentPatternIndex); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execStartCyclingPatterns); \
	DECLARE_FUNCTION(execStopCyclingPatterns);


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_NextPattern_Implementation(); \
	virtual void Multicast_SetEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execBlockingActorEntered); \
	DECLARE_FUNCTION(execMulticast_NextPattern); \
	DECLARE_FUNCTION(execMulticast_SetEnabled); \
	DECLARE_FUNCTION(execNextPattern); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentPatternIndex); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execStartCyclingPatterns); \
	DECLARE_FUNCTION(execStopCyclingPatterns);


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_EVENT_PARMS \
	struct SBZLaserGrid_eventMulticast_SetEnabled_Parms \
	{ \
		bool bEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLaserGrid(); \
	friend struct Z_Construct_UClass_ASBZLaserGrid_Statics; \
public: \
	DECLARE_CLASS(ASBZLaserGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLaserGrid) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPatternIndex=NETFIELD_REP_START, \
		bIsEnabled, \
		NETFIELD_REP_END=bIsEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASBZLaserGrid(); \
	friend struct Z_Construct_UClass_ASBZLaserGrid_Statics; \
public: \
	DECLARE_CLASS(ASBZLaserGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLaserGrid) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPatternIndex=NETFIELD_REP_START, \
		bIsEnabled, \
		NETFIELD_REP_END=bIsEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLaserGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLaserGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLaserGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLaserGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLaserGrid(ASBZLaserGrid&&); \
	NO_API ASBZLaserGrid(const ASBZLaserGrid&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLaserGrid(ASBZLaserGrid&&); \
	NO_API ASBZLaserGrid(const ASBZLaserGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLaserGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLaserGrid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLaserGrid)


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LaserComponentClass() { return STRUCT_OFFSET(ASBZLaserGrid, LaserComponentClass); } \
	FORCEINLINE static uint32 __PPO__LaserConnectionArray() { return STRUCT_OFFSET(ASBZLaserGrid, LaserConnectionArray); } \
	FORCEINLINE static uint32 __PPO__HitBoxSize() { return STRUCT_OFFSET(ASBZLaserGrid, HitBoxSize); } \
	FORCEINLINE static uint32 __PPO__bShouldDisableOnAlarm() { return STRUCT_OFFSET(ASBZLaserGrid, bShouldDisableOnAlarm); } \
	FORCEINLINE static uint32 __PPO__bShouldUsePatterns() { return STRUCT_OFFSET(ASBZLaserGrid, bShouldUsePatterns); } \
	FORCEINLINE static uint32 __PPO__LaserPatterns() { return STRUCT_OFFSET(ASBZLaserGrid, LaserPatterns); } \
	FORCEINLINE static uint32 __PPO__PatternCyclingTime() { return STRUCT_OFFSET(ASBZLaserGrid, PatternCyclingTime); } \
	FORCEINLINE static uint32 __PPO__LaserAudioEvent() { return STRUCT_OFFSET(ASBZLaserGrid, LaserAudioEvent); } \
	FORCEINLINE static uint32 __PPO__LaserShutdownAudioEvent() { return STRUCT_OFFSET(ASBZLaserGrid, LaserShutdownAudioEvent); } \
	FORCEINLINE static uint32 __PPO__CachedLaserArray() { return STRUCT_OFFSET(ASBZLaserGrid, CachedLaserArray); } \
	FORCEINLINE static uint32 __PPO__CachedBoxArray() { return STRUCT_OFFSET(ASBZLaserGrid, CachedBoxArray); } \
	FORCEINLINE static uint32 __PPO__CachedAmbientSoundArray() { return STRUCT_OFFSET(ASBZLaserGrid, CachedAmbientSoundArray); } \
	FORCEINLINE static uint32 __PPO__CurrentPatternIndex() { return STRUCT_OFFSET(ASBZLaserGrid, CurrentPatternIndex); } \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(ASBZLaserGrid, bIsEnabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_19_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLaserGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLaserGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
