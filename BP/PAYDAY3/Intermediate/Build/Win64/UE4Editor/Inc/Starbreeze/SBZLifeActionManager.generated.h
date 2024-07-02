// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
class UObject;
class USBZLifeActionManager;
class USBZLifeActionSlot;
struct FTransform;
class USBZLifeActionComponent;
struct FGameplayTag;
class USBZLifeActionInstance;
struct FVector;
enum class ESBZLifeActionStopReason : uint8;
struct FSBZLifeActionRequest;
#ifdef STARBREEZE_SBZLifeActionManager_generated_h
#error "SBZLifeActionManager.generated.h already included, missing '#pragma once' in SBZLifeActionManager.h"
#endif
#define STARBREEZE_SBZLifeActionManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnterActionForCharacter); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetActionSlotForCharacter); \
	DECLARE_FUNCTION(execGetActionSlotTransformForCharacter); \
	DECLARE_FUNCTION(execGetCharacterForActionSlot); \
	DECLARE_FUNCTION(execGetClosestLifeActionMatchingTagAny); \
	DECLARE_FUNCTION(execGetLifeActionComponentForCharacter); \
	DECLARE_FUNCTION(execIsCharacterPendingAction); \
	DECLARE_FUNCTION(execIsCharacterPlayingAction); \
	DECLARE_FUNCTION(execOnSlotEntered); \
	DECLARE_FUNCTION(execOnSlotExited); \
	DECLARE_FUNCTION(execOnSlotFreed); \
	DECLARE_FUNCTION(execOnSlotReserved); \
	DECLARE_FUNCTION(execReserveAction); \
	DECLARE_FUNCTION(execSetSlotReadyForCharacter); \
	DECLARE_FUNCTION(execStopActionForCharacter);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterActionForCharacter); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetActionSlotForCharacter); \
	DECLARE_FUNCTION(execGetActionSlotTransformForCharacter); \
	DECLARE_FUNCTION(execGetCharacterForActionSlot); \
	DECLARE_FUNCTION(execGetClosestLifeActionMatchingTagAny); \
	DECLARE_FUNCTION(execGetLifeActionComponentForCharacter); \
	DECLARE_FUNCTION(execIsCharacterPendingAction); \
	DECLARE_FUNCTION(execIsCharacterPlayingAction); \
	DECLARE_FUNCTION(execOnSlotEntered); \
	DECLARE_FUNCTION(execOnSlotExited); \
	DECLARE_FUNCTION(execOnSlotFreed); \
	DECLARE_FUNCTION(execOnSlotReserved); \
	DECLARE_FUNCTION(execReserveAction); \
	DECLARE_FUNCTION(execSetSlotReadyForCharacter); \
	DECLARE_FUNCTION(execStopActionForCharacter);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLifeActionManager(); \
	friend struct Z_Construct_UClass_USBZLifeActionManager_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLifeActionManager(); \
	friend struct Z_Construct_UClass_USBZLifeActionManager_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLifeActionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionManager(USBZLifeActionManager&&); \
	NO_API USBZLifeActionManager(const USBZLifeActionManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionManager(USBZLifeActionManager&&); \
	NO_API USBZLifeActionManager(const USBZLifeActionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LifeActionComponents() { return STRUCT_OFFSET(USBZLifeActionManager, LifeActionComponents); } \
	FORCEINLINE static uint32 __PPO__LifeActionCharacters() { return STRUCT_OFFSET(USBZLifeActionManager, LifeActionCharacters); } \
	FORCEINLINE static uint32 __PPO__LoadingMontages() { return STRUCT_OFFSET(USBZLifeActionManager, LoadingMontages); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLifeActionManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
