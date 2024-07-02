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
#ifdef STARBREEZE_SBZConnectedCableBox_generated_h
#error "SBZConnectedCableBox.generated.h already included, missing '#pragma once' in SBZConnectedCableBox.h"
#endif
#define STARBREEZE_SBZConnectedCableBox_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableInteraction); \
	DECLARE_FUNCTION(execOnCableInteractionComplete); \
	DECLARE_FUNCTION(execOnDoorInteractionComplete); \
	DECLARE_FUNCTION(execOnRep_CurrentSequenceIndex); \
	DECLARE_FUNCTION(execOnRep_DoorOpen); \
	DECLARE_FUNCTION(execOnRep_FailCounter); \
	DECLARE_FUNCTION(execOnRep_InteractionStates); \
	DECLARE_FUNCTION(execSetCorrectColorIndex); \
	DECLARE_FUNCTION(execSetCorrectColorSequence);


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableInteraction); \
	DECLARE_FUNCTION(execOnCableInteractionComplete); \
	DECLARE_FUNCTION(execOnDoorInteractionComplete); \
	DECLARE_FUNCTION(execOnRep_CurrentSequenceIndex); \
	DECLARE_FUNCTION(execOnRep_DoorOpen); \
	DECLARE_FUNCTION(execOnRep_FailCounter); \
	DECLARE_FUNCTION(execOnRep_InteractionStates); \
	DECLARE_FUNCTION(execSetCorrectColorIndex); \
	DECLARE_FUNCTION(execSetCorrectColorSequence);


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_EVENT_PARMS \
	struct SBZConnectedCableBox_eventBP_FlipSwitch_Parms \
	{ \
		int32 Index; \
		bool bDoCosmetics; \
		bool bReset; \
	}; \
	struct SBZConnectedCableBox_eventBP_OnComplete_Parms \
	{ \
		bool bWasSuccess; \
	}; \
	struct SBZConnectedCableBox_eventBP_OpenDoor_Parms \
	{ \
		bool bDoCosmetics; \
	}; \
	struct SBZConnectedCableBox_eventBP_UpdateFailCounter_Parms \
	{ \
		int32 NumberOfFails; \
	}; \
	struct SBZConnectedCableBox_eventBP_UpdateInputsMade_Parms \
	{ \
		int32 InputsMade; \
	}; \
	struct SBZConnectedCableBox_eventBP_UpdateModelNumber_Parms \
	{ \
		FText ModelNumberText; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZConnectedCableBox(); \
	friend struct Z_Construct_UClass_ASBZConnectedCableBox_Statics; \
public: \
	DECLARE_CLASS(ASBZConnectedCableBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZConnectedCableBox) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSequenceIndex=NETFIELD_REP_START, \
		InteractionStates, \
		bIsDoorOpen, \
		bIsCompleted, \
		FailCounter, \
		NETFIELD_REP_END=FailCounter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZConnectedCableBox(); \
	friend struct Z_Construct_UClass_ASBZConnectedCableBox_Statics; \
public: \
	DECLARE_CLASS(ASBZConnectedCableBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZConnectedCableBox) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSequenceIndex=NETFIELD_REP_START, \
		InteractionStates, \
		bIsDoorOpen, \
		bIsCompleted, \
		FailCounter, \
		NETFIELD_REP_END=FailCounter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZConnectedCableBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZConnectedCableBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZConnectedCableBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZConnectedCableBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZConnectedCableBox(ASBZConnectedCableBox&&); \
	NO_API ASBZConnectedCableBox(const ASBZConnectedCableBox&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZConnectedCableBox(ASBZConnectedCableBox&&); \
	NO_API ASBZConnectedCableBox(const ASBZConnectedCableBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZConnectedCableBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZConnectedCableBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZConnectedCableBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorInteractableSelector() { return STRUCT_OFFSET(ASBZConnectedCableBox, DoorInteractableSelector); } \
	FORCEINLINE static uint32 __PPO__CableInteractablesSelectors() { return STRUCT_OFFSET(ASBZConnectedCableBox, CableInteractablesSelectors); } \
	FORCEINLINE static uint32 __PPO__AllowedChances() { return STRUCT_OFFSET(ASBZConnectedCableBox, AllowedChances); } \
	FORCEINLINE static uint32 __PPO__CurrentCorrectSequence() { return STRUCT_OFFSET(ASBZConnectedCableBox, CurrentCorrectSequence); } \
	FORCEINLINE static uint32 __PPO__CurrentSequenceIndex() { return STRUCT_OFFSET(ASBZConnectedCableBox, CurrentSequenceIndex); } \
	FORCEINLINE static uint32 __PPO__InteractionStates() { return STRUCT_OFFSET(ASBZConnectedCableBox, InteractionStates); } \
	FORCEINLINE static uint32 __PPO__bIsDoorOpen() { return STRUCT_OFFSET(ASBZConnectedCableBox, bIsDoorOpen); } \
	FORCEINLINE static uint32 __PPO__CurrentModelNumberText() { return STRUCT_OFFSET(ASBZConnectedCableBox, CurrentModelNumberText); } \
	FORCEINLINE static uint32 __PPO__CableInteractables() { return STRUCT_OFFSET(ASBZConnectedCableBox, CableInteractables); } \
	FORCEINLINE static uint32 __PPO__DoorInteractable() { return STRUCT_OFFSET(ASBZConnectedCableBox, DoorInteractable); } \
	FORCEINLINE static uint32 __PPO__CurrentCorrectColorIndex() { return STRUCT_OFFSET(ASBZConnectedCableBox, CurrentCorrectColorIndex); } \
	FORCEINLINE static uint32 __PPO__bIsCompleted() { return STRUCT_OFFSET(ASBZConnectedCableBox, bIsCompleted); } \
	FORCEINLINE static uint32 __PPO__FailCounter() { return STRUCT_OFFSET(ASBZConnectedCableBox, FailCounter); }


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZConnectedCableBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZConnectedCableBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
