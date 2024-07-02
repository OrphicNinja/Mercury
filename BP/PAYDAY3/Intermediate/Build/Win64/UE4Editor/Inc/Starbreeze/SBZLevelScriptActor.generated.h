// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZStatisticCriteriaData;
class UObject;
struct FVector;
struct FRotator;
class ULevelStreamingDynamic;
class UWorld;
struct FTransform;
class USBZBagType;
struct FGameplayTagContainer;
enum class EPD3HeistState : uint8;
struct FSBZBagHandle;
enum class ESBZDifficulty : uint8;
enum class ESBZSecurityCompany : uint8;
class ASBZPlayerState;
enum class EPD3DefeatState : uint8;
class ASBZInstantLoot;
class ASBZPlayerCharacter;
struct FRandomStream;
#ifdef STARBREEZE_SBZLevelScriptActor_generated_h
#error "SBZLevelScriptActor.generated.h already included, missing '#pragma once' in SBZLevelScriptActor.h"
#endif
#define STARBREEZE_SBZLevelScriptActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCriteriaObjectiveComplete); \
	DECLARE_FUNCTION(execEndIntroSequence); \
	DECLARE_FUNCTION(execEndOutroSequence); \
	DECLARE_FUNCTION(execGetRandomBoolWithWeightFromLevelStream); \
	DECLARE_FUNCTION(execGetRandomBoolWithWeightFromStreamMixed); \
	DECLARE_FUNCTION(execGetRandomIntegerFromLevelStream); \
	DECLARE_FUNCTION(execGetRandomIntegerFromStreamMixed); \
	DECLARE_FUNCTION(execHandleActionPhaseStarted); \
	DECLARE_FUNCTION(execHandleBlackScreenStarted); \
	DECLARE_FUNCTION(execHandleIntroSequenceChanged); \
	DECLARE_FUNCTION(execHandleOutroSequenceStarted); \
	DECLARE_FUNCTION(execOnOptionalObjectiveComplete); \
	DECLARE_FUNCTION(execOnRandomizedRoomShown); \
	DECLARE_FUNCTION(execSBZPlaceRandomSublevel); \
	DECLARE_FUNCTION(execSBZPlaceRandomSublevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execSetBagMarkerEnabledByBagType); \
	DECLARE_FUNCTION(execSetBagMarkerEnabledByTags);


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCriteriaObjectiveComplete); \
	DECLARE_FUNCTION(execEndIntroSequence); \
	DECLARE_FUNCTION(execEndOutroSequence); \
	DECLARE_FUNCTION(execGetRandomBoolWithWeightFromLevelStream); \
	DECLARE_FUNCTION(execGetRandomBoolWithWeightFromStreamMixed); \
	DECLARE_FUNCTION(execGetRandomIntegerFromLevelStream); \
	DECLARE_FUNCTION(execGetRandomIntegerFromStreamMixed); \
	DECLARE_FUNCTION(execHandleActionPhaseStarted); \
	DECLARE_FUNCTION(execHandleBlackScreenStarted); \
	DECLARE_FUNCTION(execHandleIntroSequenceChanged); \
	DECLARE_FUNCTION(execHandleOutroSequenceStarted); \
	DECLARE_FUNCTION(execOnOptionalObjectiveComplete); \
	DECLARE_FUNCTION(execOnRandomizedRoomShown); \
	DECLARE_FUNCTION(execSBZPlaceRandomSublevel); \
	DECLARE_FUNCTION(execSBZPlaceRandomSublevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execSetBagMarkerEnabledByBagType); \
	DECLARE_FUNCTION(execSetBagMarkerEnabledByTags);


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_EVENT_PARMS \
	struct SBZLevelScriptActor_eventHeistStateChanged_Parms \
	{ \
		EPD3HeistState OldHeistState; \
		EPD3HeistState CurrentHeistState; \
	}; \
	struct SBZLevelScriptActor_eventIntroSequenceChanged_Parms \
	{ \
		bool bIsStarted; \
	}; \
	struct SBZLevelScriptActor_eventOnAllBagSecured_Parms \
	{ \
		int32 SecuredCount; \
	}; \
	struct SBZLevelScriptActor_eventOnBagSecured_Parms \
	{ \
		FSBZBagHandle BagHandle; \
		int32 SecuredCount; \
		int32 TotalLeftToSecure; \
	}; \
	struct SBZLevelScriptActor_eventOnDifficultyModifierApplied_Parms \
	{ \
		ESBZDifficulty InDifficulty; \
	}; \
	struct SBZLevelScriptActor_eventOnLevelModifiersApplied_Parms \
	{ \
		ESBZDifficulty InDifficulty; \
		TArray<ESBZSecurityCompany> InCompanies; \
	}; \
	struct SBZLevelScriptActor_eventOnPlayerDefeatStateChanged_Parms \
	{ \
		ASBZPlayerState* PlayerState; \
		EPD3DefeatState OldDefeatState; \
		EPD3DefeatState DefeatState; \
	}; \
	struct SBZLevelScriptActor_eventOnPlayerInstantLootTaken_Parms \
	{ \
		ASBZInstantLoot* InstantLoot; \
		ASBZPlayerCharacter* TakenByPlayer; \
	}; \
	struct SBZLevelScriptActor_eventOnPlayerPickedUpBag_Parms \
	{ \
		FSBZBagHandle BagHandle; \
	}; \
	struct SBZLevelScriptActor_eventOnPreplanningAssetsTagsApplied_Parms \
	{ \
		FGameplayTagContainer PreplanningTagContainer; \
	}; \
	struct SBZLevelScriptActor_eventOutroSequenceStarted_Parms \
	{ \
		int32 OutroVariation; \
	}; \
	struct SBZLevelScriptActor_eventRandomPlacementStarted_Parms \
	{ \
		FRandomStream RandomStream; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLevelScriptActor(); \
	friend struct Z_Construct_UClass_ASBZLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ASBZLevelScriptActor, ASBZLevelScriptActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLevelScriptActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASBZLevelScriptActor(); \
	friend struct Z_Construct_UClass_ASBZLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ASBZLevelScriptActor, ASBZLevelScriptActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLevelScriptActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLevelScriptActor(ASBZLevelScriptActor&&); \
	NO_API ASBZLevelScriptActor(const ASBZLevelScriptActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLevelScriptActor(ASBZLevelScriptActor&&); \
	NO_API ASBZLevelScriptActor(const ASBZLevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLevelScriptActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZLevelScriptActor, Seed); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_25_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
