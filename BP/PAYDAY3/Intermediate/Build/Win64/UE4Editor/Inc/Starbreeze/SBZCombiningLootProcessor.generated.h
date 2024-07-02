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
#ifdef STARBREEZE_SBZCombiningLootProcessor_generated_h
#error "SBZCombiningLootProcessor.generated.h already included, missing '#pragma once' in SBZCombiningLootProcessor.h"
#endif
#define STARBREEZE_SBZCombiningLootProcessor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_RPC_WRAPPERS \
	virtual void Multicast_UpdateCombinedBagsCount_Implementation(int32 NewCount); \
 \
	DECLARE_FUNCTION(execMulticast_UpdateCombinedBagsCount); \
	DECLARE_FUNCTION(execOnServerClaimCombinedBagInteractionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_UpdateCombinedBagsCount_Implementation(int32 NewCount); \
 \
	DECLARE_FUNCTION(execMulticast_UpdateCombinedBagsCount); \
	DECLARE_FUNCTION(execOnServerClaimCombinedBagInteractionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_EVENT_PARMS \
	struct SBZCombiningLootProcessor_eventBP_OnCombinedBagCountUpdated_Parms \
	{ \
		int32 Count; \
	}; \
	struct SBZCombiningLootProcessor_eventMulticast_UpdateCombinedBagsCount_Parms \
	{ \
		int32 NewCount; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCombiningLootProcessor(); \
	friend struct Z_Construct_UClass_ASBZCombiningLootProcessor_Statics; \
public: \
	DECLARE_CLASS(ASBZCombiningLootProcessor, ASBZLootProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCombiningLootProcessor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CombinedBags=NETFIELD_REP_START, \
		NETFIELD_REP_END=CombinedBags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZCombiningLootProcessor(); \
	friend struct Z_Construct_UClass_ASBZCombiningLootProcessor_Statics; \
public: \
	DECLARE_CLASS(ASBZCombiningLootProcessor, ASBZLootProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCombiningLootProcessor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CombinedBags=NETFIELD_REP_START, \
		NETFIELD_REP_END=CombinedBags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCombiningLootProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCombiningLootProcessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCombiningLootProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCombiningLootProcessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCombiningLootProcessor(ASBZCombiningLootProcessor&&); \
	NO_API ASBZCombiningLootProcessor(const ASBZCombiningLootProcessor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCombiningLootProcessor(ASBZCombiningLootProcessor&&); \
	NO_API ASBZCombiningLootProcessor(const ASBZCombiningLootProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCombiningLootProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCombiningLootProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCombiningLootProcessor)


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombinedBagType() { return STRUCT_OFFSET(ASBZCombiningLootProcessor, CombinedBagType); } \
	FORCEINLINE static uint32 __PPO__NumberOfBagsToCombine() { return STRUCT_OFFSET(ASBZCombiningLootProcessor, NumberOfBagsToCombine); } \
	FORCEINLINE static uint32 __PPO__ClaimCombinedBagInteractable() { return STRUCT_OFFSET(ASBZCombiningLootProcessor, ClaimCombinedBagInteractable); } \
	FORCEINLINE static uint32 __PPO__CombinedBags() { return STRUCT_OFFSET(ASBZCombiningLootProcessor, CombinedBags); } \
	FORCEINLINE static uint32 __PPO__CombinedBagHandle() { return STRUCT_OFFSET(ASBZCombiningLootProcessor, CombinedBagHandle); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCombiningLootProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
