// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;
enum class ESBZLifeActionStopReason : uint8;
#ifdef STARBREEZE_SBZAIOrder_LifeAction_generated_h
#error "SBZAIOrder_LifeAction.generated.h already included, missing '#pragma once' in SBZAIOrder_LifeAction.h"
#endif
#define STARBREEZE_SBZAIOrder_LifeAction_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearDelegates); \
	DECLARE_FUNCTION(execOnBlockingSlotFreed); \
	DECLARE_FUNCTION(execOnCharacterSlotFreed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearDelegates); \
	DECLARE_FUNCTION(execOnBlockingSlotFreed); \
	DECLARE_FUNCTION(execOnCharacterSlotFreed);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_LifeAction(); \
	friend struct Z_Construct_UClass_USBZAIOrder_LifeAction_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_LifeAction, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_LifeAction)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_LifeAction(); \
	friend struct Z_Construct_UClass_USBZAIOrder_LifeAction_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_LifeAction, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_LifeAction)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIOrder_LifeAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIOrder_LifeAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_LifeAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_LifeAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_LifeAction(USBZAIOrder_LifeAction&&); \
	NO_API USBZAIOrder_LifeAction(const USBZAIOrder_LifeAction&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_LifeAction(USBZAIOrder_LifeAction&&); \
	NO_API USBZAIOrder_LifeAction(const USBZAIOrder_LifeAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_LifeAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_LifeAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIOrder_LifeAction)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Request() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, Request); } \
	FORCEINLINE static uint32 __PPO__CompatibleStances() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, CompatibleStances); } \
	FORCEINLINE static uint32 __PPO__AllowedHeistStates() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, AllowedHeistStates); } \
	FORCEINLINE static uint32 __PPO__CompleteOrderForResults() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, CompleteOrderForResults); } \
	FORCEINLINE static uint32 __PPO__bUseRequestOnlyOnce() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, bUseRequestOnlyOnce); } \
	FORCEINLINE static uint32 __PPO__GrantedTags() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, GrantedTags); } \
	FORCEINLINE static uint32 __PPO__bShouldRemovePersistenceAfterLA() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, bShouldRemovePersistenceAfterLA); } \
	FORCEINLINE static uint32 __PPO__LAComponentSelector() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, LAComponentSelector); } \
	FORCEINLINE static uint32 __PPO__InstanceSelector() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, InstanceSelector); } \
	FORCEINLINE static uint32 __PPO__SlotSelector() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, SlotSelector); } \
	FORCEINLINE static uint32 __PPO__bWaitForEquipped() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, bWaitForEquipped); } \
	FORCEINLINE static uint32 __PPO__ReservedSlot() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, ReservedSlot); } \
	FORCEINLINE static uint32 __PPO__LifeActionComponent() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, LifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__BlockingSlot() { return STRUCT_OFFSET(USBZAIOrder_LifeAction, BlockingSlot); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIOrder_LifeAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_LifeAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
