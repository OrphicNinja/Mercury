// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZLifeActionSlot;
class USBZLifeActionInstance;
class ASBZCharacter;
struct FGameplayTag;
struct FTransform;
enum class ESBZLifeActionStopReason : uint8;
#ifdef STARBREEZE_SBZLifeActionComponent_generated_h
#error "SBZLifeActionComponent.generated.h already included, missing '#pragma once' in SBZLifeActionComponent.h"
#endif
#define STARBREEZE_SBZLifeActionComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActionForSlot); \
	DECLARE_FUNCTION(execGetActionWithReservedSlotForCharacter); \
	DECLARE_FUNCTION(execGetCharacterInAction); \
	DECLARE_FUNCTION(execGetCharacterInActionSlot); \
	DECLARE_FUNCTION(execGetReservedSlotForCharacter); \
	DECLARE_FUNCTION(execGetSlotTransformForCharacter); \
	DECLARE_FUNCTION(execIsCharacterPendingAction); \
	DECLARE_FUNCTION(execIsCharacterPlayingAction); \
	DECLARE_FUNCTION(execOnSlotEntered); \
	DECLARE_FUNCTION(execOnSlotExited); \
	DECLARE_FUNCTION(execOnSlotFreed); \
	DECLARE_FUNCTION(execOnSlotReady); \
	DECLARE_FUNCTION(execOnSlotReserved); \
	DECLARE_FUNCTION(execOnSlotStart);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActionForSlot); \
	DECLARE_FUNCTION(execGetActionWithReservedSlotForCharacter); \
	DECLARE_FUNCTION(execGetCharacterInAction); \
	DECLARE_FUNCTION(execGetCharacterInActionSlot); \
	DECLARE_FUNCTION(execGetReservedSlotForCharacter); \
	DECLARE_FUNCTION(execGetSlotTransformForCharacter); \
	DECLARE_FUNCTION(execIsCharacterPendingAction); \
	DECLARE_FUNCTION(execIsCharacterPlayingAction); \
	DECLARE_FUNCTION(execOnSlotEntered); \
	DECLARE_FUNCTION(execOnSlotExited); \
	DECLARE_FUNCTION(execOnSlotFreed); \
	DECLARE_FUNCTION(execOnSlotReady); \
	DECLARE_FUNCTION(execOnSlotReserved); \
	DECLARE_FUNCTION(execOnSlotStart);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLifeActionComponent(); \
	friend struct Z_Construct_UClass_USBZLifeActionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLifeActionComponent(); \
	friend struct Z_Construct_UClass_USBZLifeActionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLifeActionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionComponent(USBZLifeActionComponent&&); \
	NO_API USBZLifeActionComponent(const USBZLifeActionComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionComponent(USBZLifeActionComponent&&); \
	NO_API USBZLifeActionComponent(const USBZLifeActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionInstances() { return STRUCT_OFFSET(USBZLifeActionComponent, ActionInstances); } \
	FORCEINLINE static uint32 __PPO__PreviewSkeletals() { return STRUCT_OFFSET(USBZLifeActionComponent, PreviewSkeletals); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLifeActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
