// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlayerAndItemTriggerVolume_generated_h
#error "SBZPlayerAndItemTriggerVolume.generated.h already included, missing '#pragma once' in SBZPlayerAndItemTriggerVolume.h"
#endif
#define STARBREEZE_SBZPlayerAndItemTriggerVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerAndItemTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerAndItemTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerAndItemTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerAndItemTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerAndItemTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerAndItemTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerAndItemTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerAndItemTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerAndItemTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerAndItemTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerAndItemTriggerVolume(ASBZPlayerAndItemTriggerVolume&&); \
	NO_API ASBZPlayerAndItemTriggerVolume(const ASBZPlayerAndItemTriggerVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerAndItemTriggerVolume(ASBZPlayerAndItemTriggerVolume&&); \
	NO_API ASBZPlayerAndItemTriggerVolume(const ASBZPlayerAndItemTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerAndItemTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerAndItemTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerAndItemTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastOverlapActor() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, LastOverlapActor); } \
	FORCEINLINE static uint32 __PPO__OverlapPlayerArray() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, OverlapPlayerArray); } \
	FORCEINLINE static uint32 __PPO__OverlapBagArray() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, OverlapBagArray); } \
	FORCEINLINE static uint32 __PPO__ServerCountChangedDelegate() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, ServerCountChangedDelegate); } \
	FORCEINLINE static uint32 __PPO__ServerEmptyDelegate() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, ServerEmptyDelegate); } \
	FORCEINLINE static uint32 __PPO__bIsVolumeEnabledInitially() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsVolumeEnabledInitially); } \
	FORCEINLINE static uint32 __PPO__bIsVolumeEnabled() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsVolumeEnabled); } \
	FORCEINLINE static uint32 __PPO__bIsEnabledOnAlarm() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsEnabledOnAlarm); } \
	FORCEINLINE static uint32 __PPO__bIsDisabledOnEmpty() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsDisabledOnEmpty); } \
	FORCEINLINE static uint32 __PPO__bIsDisabledOnEmptyInitially() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsDisabledOnEmptyInitially); } \
	FORCEINLINE static uint32 __PPO__bIsBagsTeleported() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsBagsTeleported); } \
	FORCEINLINE static uint32 __PPO__BagTeleportLocation() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, BagTeleportLocation); } \
	FORCEINLINE static uint32 __PPO__bIsClosedOffWhenDisabled() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, bIsClosedOffWhenDisabled); } \
	FORCEINLINE static uint32 __PPO__ClosedReactorArray() { return STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, ClosedReactorArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerAndItemTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
