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
#ifdef STARBREEZE_SBZHackingZoneController_generated_h
#error "SBZHackingZoneController.generated.h already included, missing '#pragma once' in SBZHackingZoneController.h"
#endif
#define STARBREEZE_SBZHackingZoneController_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableHackingZones); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableHackingZones); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHackingZoneController(); \
	friend struct Z_Construct_UClass_ASBZHackingZoneController_Statics; \
public: \
	DECLARE_CLASS(ASBZHackingZoneController, ASBZModifiableTimer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackingZoneController)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZHackingZoneController(); \
	friend struct Z_Construct_UClass_ASBZHackingZoneController_Statics; \
public: \
	DECLARE_CLASS(ASBZHackingZoneController, ASBZModifiableTimer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackingZoneController)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHackingZoneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackingZoneController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackingZoneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackingZoneController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackingZoneController(ASBZHackingZoneController&&); \
	NO_API ASBZHackingZoneController(const ASBZHackingZoneController&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackingZoneController(ASBZHackingZoneController&&); \
	NO_API ASBZHackingZoneController(const ASBZHackingZoneController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackingZoneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackingZoneController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackingZoneController)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZHackingZoneController, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZHackingZoneController, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZHackingZoneController, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__HackingZoneArray() { return STRUCT_OFFSET(ASBZHackingZoneController, HackingZoneArray); } \
	FORCEINLINE static uint32 __PPO__NumberOfZonesActiveAtOnce() { return STRUCT_OFFSET(ASBZHackingZoneController, NumberOfZonesActiveAtOnce); } \
	FORCEINLINE static uint32 __PPO__bSkipRandomization() { return STRUCT_OFFSET(ASBZHackingZoneController, bSkipRandomization); } \
	FORCEINLINE static uint32 __PPO__SingleLocationDuration() { return STRUCT_OFFSET(ASBZHackingZoneController, SingleLocationDuration); } \
	FORCEINLINE static uint32 __PPO__PlayerMultiplierArray() { return STRUCT_OFFSET(ASBZHackingZoneController, PlayerMultiplierArray); } \
	FORCEINLINE static uint32 __PPO__LoudOptions() { return STRUCT_OFFSET(ASBZHackingZoneController, LoudOptions); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZHackingZoneController, Seed); } \
	FORCEINLINE static uint32 __PPO__NumberOfZonesOccupied() { return STRUCT_OFFSET(ASBZHackingZoneController, NumberOfZonesOccupied); } \
	FORCEINLINE static uint32 __PPO__HackingZoneDataArray() { return STRUCT_OFFSET(ASBZHackingZoneController, HackingZoneDataArray); } \
	FORCEINLINE static uint32 __PPO__AvailableZoneIndexes() { return STRUCT_OFFSET(ASBZHackingZoneController, AvailableZoneIndexes); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHackingZoneController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackingZoneController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
