// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMaintenanceBoxState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZConnectedMaintenanceBox_generated_h
#error "SBZConnectedMaintenanceBox.generated.h already included, missing '#pragma once' in SBZConnectedMaintenanceBox.h"
#endif
#define STARBREEZE_SBZConnectedMaintenanceBox_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_RPC_WRAPPERS \
	virtual void Multicast_SetNextColor_Implementation(); \
	virtual void Multicast_SetState_Implementation(ESBZMaintenanceBoxState NewState); \
 \
	DECLARE_FUNCTION(execEnableCutting); \
	DECLARE_FUNCTION(execMulticast_SetNextColor); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnCableBoxComplete); \
	DECLARE_FUNCTION(execOnRep_CompletedCableBoxes); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetNextColor_Implementation(); \
	virtual void Multicast_SetState_Implementation(ESBZMaintenanceBoxState NewState); \
 \
	DECLARE_FUNCTION(execEnableCutting); \
	DECLARE_FUNCTION(execMulticast_SetNextColor); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnCableBoxComplete); \
	DECLARE_FUNCTION(execOnRep_CompletedCableBoxes); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_EVENT_PARMS \
	struct SBZConnectedMaintenanceBox_eventBP_OnStateChanged_Parms \
	{ \
		ESBZMaintenanceBoxState NewState; \
	}; \
	struct SBZConnectedMaintenanceBox_eventBP_UpdateColors_Parms \
	{ \
		TArray<int32> SequenceArray; \
		int32 NumberOfCompleteCables; \
	}; \
	struct SBZConnectedMaintenanceBox_eventBP_UpdateNumberOfConnectedBoxes_Parms \
	{ \
		int32 NumberOfBoxes; \
	}; \
	struct SBZConnectedMaintenanceBox_eventMulticast_SetState_Parms \
	{ \
		ESBZMaintenanceBoxState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZConnectedMaintenanceBox(); \
	friend struct Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics; \
public: \
	DECLARE_CLASS(ASBZConnectedMaintenanceBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZConnectedMaintenanceBox) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		CompletedCableBoxes, \
		NETFIELD_REP_END=CompletedCableBoxes	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASBZConnectedMaintenanceBox(); \
	friend struct Z_Construct_UClass_ASBZConnectedMaintenanceBox_Statics; \
public: \
	DECLARE_CLASS(ASBZConnectedMaintenanceBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZConnectedMaintenanceBox) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		CompletedCableBoxes, \
		NETFIELD_REP_END=CompletedCableBoxes	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZConnectedMaintenanceBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZConnectedMaintenanceBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZConnectedMaintenanceBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZConnectedMaintenanceBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZConnectedMaintenanceBox(ASBZConnectedMaintenanceBox&&); \
	NO_API ASBZConnectedMaintenanceBox(const ASBZConnectedMaintenanceBox&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZConnectedMaintenanceBox(ASBZConnectedMaintenanceBox&&); \
	NO_API ASBZConnectedMaintenanceBox(const ASBZConnectedMaintenanceBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZConnectedMaintenanceBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZConnectedMaintenanceBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZConnectedMaintenanceBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConnectedCableBoxes() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, ConnectedCableBoxes); } \
	FORCEINLINE static uint32 __PPO__Objective() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, Objective); } \
	FORCEINLINE static uint32 __PPO__CurrentModelNumber() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CurrentModelNumber); } \
	FORCEINLINE static uint32 __PPO__SequenceLength() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, SequenceLength); } \
	FORCEINLINE static uint32 __PPO__NumberOfSequences() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, NumberOfSequences); } \
	FORCEINLINE static uint32 __PPO__bRequiresDeactivate() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, bRequiresDeactivate); } \
	FORCEINLINE static uint32 __PPO__SequenceViewerSet() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, SequenceViewerSet); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, Seed); } \
	FORCEINLINE static uint32 __PPO__CableSymbols() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CableSymbols); } \
	FORCEINLINE static uint32 __PPO__CableColorTexts() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CableColorTexts); } \
	FORCEINLINE static uint32 __PPO__FirstNotificationAsset() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, FirstNotificationAsset); } \
	FORCEINLINE static uint32 __PPO__SecondNotificationAsset() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, SecondNotificationAsset); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__ShoutTargetComponent() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, ShoutTargetComponent); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__CorrectSequenceArray() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CorrectSequenceArray); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CurrentState); } \
	FORCEINLINE static uint32 __PPO__CompletedCableBoxes() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, CompletedCableBoxes); } \
	FORCEINLINE static uint32 __PPO__bShouldUpdateCompletedCount() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, bShouldUpdateCompletedCount); } \
	FORCEINLINE static uint32 __PPO__bHasTriggeredSearch() { return STRUCT_OFFSET(ASBZConnectedMaintenanceBox, bHasTriggeredSearch); }


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZConnectedMaintenanceBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZConnectedMaintenanceBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
