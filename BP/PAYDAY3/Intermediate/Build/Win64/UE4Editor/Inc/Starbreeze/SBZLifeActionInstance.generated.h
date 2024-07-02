// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZLifeActionSlot;
class ASBZCharacter;
struct FGameplayTag;
enum class ESBZLifeActionState : uint8;
#ifdef STARBREEZE_SBZLifeActionInstance_generated_h
#error "SBZLifeActionInstance.generated.h already included, missing '#pragma once' in SBZLifeActionInstance.h"
#endif
#define STARBREEZE_SBZLifeActionInstance_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreAllNeededSlotsReady); \
	DECLARE_FUNCTION(execContainsSlot); \
	DECLARE_FUNCTION(execGetReservedSlot); \
	DECLARE_FUNCTION(execGetSlotWithTag); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTag); \
	DECLARE_FUNCTION(execIsSlotFree); \
	DECLARE_FUNCTION(execStartDialog); \
	DECLARE_FUNCTION(execStopDialog);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreAllNeededSlotsReady); \
	DECLARE_FUNCTION(execContainsSlot); \
	DECLARE_FUNCTION(execGetReservedSlot); \
	DECLARE_FUNCTION(execGetSlotWithTag); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTag); \
	DECLARE_FUNCTION(execIsSlotFree); \
	DECLARE_FUNCTION(execStartDialog); \
	DECLARE_FUNCTION(execStopDialog);


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLifeActionInstance(); \
	friend struct Z_Construct_UClass_USBZLifeActionInstance_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionInstance, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionInstance)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLifeActionInstance(); \
	friend struct Z_Construct_UClass_USBZLifeActionInstance_Statics; \
public: \
	DECLARE_CLASS(USBZLifeActionInstance, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLifeActionInstance)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLifeActionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionInstance(USBZLifeActionInstance&&); \
	NO_API USBZLifeActionInstance(const USBZLifeActionInstance&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLifeActionInstance(USBZLifeActionInstance&&); \
	NO_API USBZLifeActionInstance(const USBZLifeActionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLifeActionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLifeActionInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLifeActionInstance)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Tag() { return STRUCT_OFFSET(USBZLifeActionInstance, Tag); } \
	FORCEINLINE static uint32 __PPO__DialogPlayer() { return STRUCT_OFFSET(USBZLifeActionInstance, DialogPlayer); } \
	FORCEINLINE static uint32 __PPO__OwningLifeActionComponent() { return STRUCT_OFFSET(USBZLifeActionInstance, OwningLifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__Slots() { return STRUCT_OFFSET(USBZLifeActionInstance, Slots); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLifeActionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
