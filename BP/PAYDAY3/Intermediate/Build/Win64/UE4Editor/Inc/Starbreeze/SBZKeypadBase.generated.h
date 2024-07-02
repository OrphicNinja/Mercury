// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class USkeletalMeshComponent;
struct FTransform;
#ifdef STARBREEZE_SBZKeypadBase_generated_h
#error "SBZKeypadBase.generated.h already included, missing '#pragma once' in SBZKeypadBase.h"
#endif
#define STARBREEZE_SBZKeypadBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_RPC_WRAPPERS \
	virtual void Multicast_StartRandomization_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_StartRandomization); \
	DECLARE_FUNCTION(execOnFocusChanged); \
	DECLARE_FUNCTION(execOnKeypadPressed); \
	DECLARE_FUNCTION(execOnLanternCapsuleBeginOverlap); \
	DECLARE_FUNCTION(execOnLanternCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnRep_GuessedCode); \
	DECLARE_FUNCTION(execOnRep_HasRandomized); \
	DECLARE_FUNCTION(execOnRep_IsInteractable); \
	DECLARE_FUNCTION(execSetInteractionEnabled); \
	DECLARE_FUNCTION(execStartRandomization);


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StartRandomization_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_StartRandomization); \
	DECLARE_FUNCTION(execOnFocusChanged); \
	DECLARE_FUNCTION(execOnKeypadPressed); \
	DECLARE_FUNCTION(execOnLanternCapsuleBeginOverlap); \
	DECLARE_FUNCTION(execOnLanternCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnRep_GuessedCode); \
	DECLARE_FUNCTION(execOnRep_HasRandomized); \
	DECLARE_FUNCTION(execOnRep_IsInteractable); \
	DECLARE_FUNCTION(execSetInteractionEnabled); \
	DECLARE_FUNCTION(execStartRandomization);


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_EVENT_PARMS \
	struct SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms \
	{ \
		TArray<AActor*> PlayerAttachedActors; \
		USkeletalMeshComponent* PlayerMesh; \
		FName SocketToAttach; \
		FTransform SpawnTransform; \
	}; \
	struct SBZKeypadBase_eventBP_HandleLanternOverlapEnd_Parms \
	{ \
		TArray<AActor*> PlayerAttachedActors; \
	}; \
	struct SBZKeypadBase_eventBP_OnGuessedCodeChanged_Parms \
	{ \
		FText GuessedCodeText; \
	}; \
	struct SBZKeypadBase_eventBP_OnKeypadFocusChanged_Parms \
	{ \
		int32 KeyIndex; \
		bool bInNewState; \
	}; \
	struct SBZKeypadBase_eventBP_OnKeypadPressed_Parms \
	{ \
		int32 KeyIndexPressed; \
	}; \
	struct SBZKeypadBase_eventBP_UpdateHighlights_Parms \
	{ \
		TArray<int32> GeneratedCode; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZKeypadBase(); \
	friend struct Z_Construct_UClass_ASBZKeypadBase_Statics; \
public: \
	DECLARE_CLASS(ASBZKeypadBase, ASBZModuleActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZKeypadBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GuessedCode=NETFIELD_REP_START, \
		Inputs, \
		bIsInteractable, \
		bHasRandomized, \
		NETFIELD_REP_END=bHasRandomized	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASBZKeypadBase(); \
	friend struct Z_Construct_UClass_ASBZKeypadBase_Statics; \
public: \
	DECLARE_CLASS(ASBZKeypadBase, ASBZModuleActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZKeypadBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GuessedCode=NETFIELD_REP_START, \
		Inputs, \
		bIsInteractable, \
		bHasRandomized, \
		NETFIELD_REP_END=bHasRandomized	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZKeypadBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZKeypadBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZKeypadBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZKeypadBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZKeypadBase(ASBZKeypadBase&&); \
	NO_API ASBZKeypadBase(const ASBZKeypadBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZKeypadBase(ASBZKeypadBase&&); \
	NO_API ASBZKeypadBase(const ASBZKeypadBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZKeypadBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZKeypadBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZKeypadBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KeypadInteractableComponentArray() { return STRUCT_OFFSET(ASBZKeypadBase, KeypadInteractableComponentArray); } \
	FORCEINLINE static uint32 __PPO__BaseKeypadMesh() { return STRUCT_OFFSET(ASBZKeypadBase, BaseKeypadMesh); } \
	FORCEINLINE static uint32 __PPO__CodeWidget() { return STRUCT_OFFSET(ASBZKeypadBase, CodeWidget); } \
	FORCEINLINE static uint32 __PPO__LanternCapsule() { return STRUCT_OFFSET(ASBZKeypadBase, LanternCapsule); } \
	FORCEINLINE static uint32 __PPO__PossibleCodeViewerSets() { return STRUCT_OFFSET(ASBZKeypadBase, PossibleCodeViewerSets); } \
	FORCEINLINE static uint32 __PPO__bIsInteractable() { return STRUCT_OFFSET(ASBZKeypadBase, bIsInteractable); } \
	FORCEINLINE static uint32 __PPO__IncorrectCodeWaitTime() { return STRUCT_OFFSET(ASBZKeypadBase, IncorrectCodeWaitTime); } \
	FORCEINLINE static uint32 __PPO__ButtonSoundEvent() { return STRUCT_OFFSET(ASBZKeypadBase, ButtonSoundEvent); } \
	FORCEINLINE static uint32 __PPO__Code() { return STRUCT_OFFSET(ASBZKeypadBase, Code); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZKeypadBase, Seed); } \
	FORCEINLINE static uint32 __PPO__bRandomizeOnBeginPlay() { return STRUCT_OFFSET(ASBZKeypadBase, bRandomizeOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__bHasRandomized() { return STRUCT_OFFSET(ASBZKeypadBase, bHasRandomized); }


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_21_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZKeypadBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZKeypadBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
