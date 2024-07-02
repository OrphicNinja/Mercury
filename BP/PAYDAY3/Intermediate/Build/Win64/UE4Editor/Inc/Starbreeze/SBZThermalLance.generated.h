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
class ASBZBagTriggerVolume;
class ASBZBagItem;
struct FSBZBagHandle;
#ifdef STARBREEZE_SBZThermalLance_generated_h
#error "SBZThermalLance.generated.h already included, missing '#pragma once' in SBZThermalLance.h"
#endif
#define STARBREEZE_SBZThermalLance_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAckAddedCanister); \
	DECLARE_FUNCTION(execOnAckRemovedCanister); \
	DECLARE_FUNCTION(execOnBagEntered); \
	DECLARE_FUNCTION(execOnBoltingComplete); \
	DECLARE_FUNCTION(execOnDisassembled); \
	DECLARE_FUNCTION(execOnIgnitionComplete); \
	DECLARE_FUNCTION(execOnInteractStateChanged); \
	DECLARE_FUNCTION(execOnRanOutOfFuel); \
	DECLARE_FUNCTION(execOnRefuelingReached); \
	DECLARE_FUNCTION(execOnServerAddedCanister); \
	DECLARE_FUNCTION(execOnServerRemovedCanister);


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAckAddedCanister); \
	DECLARE_FUNCTION(execOnAckRemovedCanister); \
	DECLARE_FUNCTION(execOnBagEntered); \
	DECLARE_FUNCTION(execOnBoltingComplete); \
	DECLARE_FUNCTION(execOnDisassembled); \
	DECLARE_FUNCTION(execOnIgnitionComplete); \
	DECLARE_FUNCTION(execOnInteractStateChanged); \
	DECLARE_FUNCTION(execOnRanOutOfFuel); \
	DECLARE_FUNCTION(execOnRefuelingReached); \
	DECLARE_FUNCTION(execOnServerAddedCanister); \
	DECLARE_FUNCTION(execOnServerRemovedCanister);


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_EVENT_PARMS \
	struct SBZThermalLance_eventBP_OnBolted_Parms \
	{ \
		int32 Amount; \
		int32 BoltIndex; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZThermalLance(); \
	friend struct Z_Construct_UClass_ASBZThermalLance_Statics; \
public: \
	DECLARE_CLASS(ASBZThermalLance, ASBZHeavyBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThermalLance)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZThermalLance(); \
	friend struct Z_Construct_UClass_ASBZThermalLance_Statics; \
public: \
	DECLARE_CLASS(ASBZThermalLance, ASBZHeavyBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThermalLance)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZThermalLance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThermalLance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThermalLance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThermalLance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThermalLance(ASBZThermalLance&&); \
	NO_API ASBZThermalLance(const ASBZThermalLance&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThermalLance(ASBZThermalLance&&); \
	NO_API ASBZThermalLance(const ASBZThermalLance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThermalLance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThermalLance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThermalLance)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IgnitionInteraction() { return STRUCT_OFFSET(ASBZThermalLance, IgnitionInteraction); } \
	FORCEINLINE static uint32 __PPO__RemoveCanisterInteraction() { return STRUCT_OFFSET(ASBZThermalLance, RemoveCanisterInteraction); } \
	FORCEINLINE static uint32 __PPO__AddCanisterInteraction() { return STRUCT_OFFSET(ASBZThermalLance, AddCanisterInteraction); } \
	FORCEINLINE static uint32 __PPO__DisassembleInteraction() { return STRUCT_OFFSET(ASBZThermalLance, DisassembleInteraction); } \
	FORCEINLINE static uint32 __PPO__BoltingInteractions() { return STRUCT_OFFSET(ASBZThermalLance, BoltingInteractions); } \
	FORCEINLINE static uint32 __PPO__BoltingInteractionWaypointLocation() { return STRUCT_OFFSET(ASBZThermalLance, BoltingInteractionWaypointLocation); } \
	FORCEINLINE static uint32 __PPO__DissassemblyWaypointLocation() { return STRUCT_OFFSET(ASBZThermalLance, DissassemblyWaypointLocation); } \
	FORCEINLINE static uint32 __PPO__bNeedsDisassemblyWhenFinished() { return STRUCT_OFFSET(ASBZThermalLance, bNeedsDisassemblyWhenFinished); } \
	FORCEINLINE static uint32 __PPO__bShouldSpawnBagsWhenCompleted() { return STRUCT_OFFSET(ASBZThermalLance, bShouldSpawnBagsWhenCompleted); } \
	FORCEINLINE static uint32 __PPO__BagTriggerVolume() { return STRUCT_OFFSET(ASBZThermalLance, BagTriggerVolume); } \
	FORCEINLINE static uint32 __PPO__RequiredBagType() { return STRUCT_OFFSET(ASBZThermalLance, RequiredBagType); } \
	FORCEINLINE static uint32 __PPO__DisassembleInteractionWaitTime() { return STRUCT_OFFSET(ASBZThermalLance, DisassembleInteractionWaitTime); } \
	FORCEINLINE static uint32 __PPO__WidgetSelector() { return STRUCT_OFFSET(ASBZThermalLance, WidgetSelector); } \
	FORCEINLINE static uint32 __PPO__BoltedEvent() { return STRUCT_OFFSET(ASBZThermalLance, BoltedEvent); } \
	FORCEINLINE static uint32 __PPO__RemoveCannisterEvent() { return STRUCT_OFFSET(ASBZThermalLance, RemoveCannisterEvent); } \
	FORCEINLINE static uint32 __PPO__AddCannisterEvent() { return STRUCT_OFFSET(ASBZThermalLance, AddCannisterEvent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZThermalLance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZThermalLance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
