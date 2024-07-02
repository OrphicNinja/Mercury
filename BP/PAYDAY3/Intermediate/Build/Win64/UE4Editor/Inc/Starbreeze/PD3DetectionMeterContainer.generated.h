// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3DetectionMeterContainer_generated_h
#error "PD3DetectionMeterContainer.generated.h already included, missing '#pragma once' in PD3DetectionMeterContainer.h"
#endif
#define STARBREEZE_PD3DetectionMeterContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleHeistGoneLoud); \
	DECLARE_FUNCTION(execOnObserved);


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleHeistGoneLoud); \
	DECLARE_FUNCTION(execOnObserved);


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_EVENT_PARMS \
	struct PD3DetectionMeterContainer_eventOnObservedChanged_Parms \
	{ \
		bool bObserved; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3DetectionMeterContainer(); \
	friend struct Z_Construct_UClass_UPD3DetectionMeterContainer_Statics; \
public: \
	DECLARE_CLASS(UPD3DetectionMeterContainer, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3DetectionMeterContainer)


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPD3DetectionMeterContainer(); \
	friend struct Z_Construct_UClass_UPD3DetectionMeterContainer_Statics; \
public: \
	DECLARE_CLASS(UPD3DetectionMeterContainer, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3DetectionMeterContainer)


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3DetectionMeterContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3DetectionMeterContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3DetectionMeterContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3DetectionMeterContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3DetectionMeterContainer(UPD3DetectionMeterContainer&&); \
	NO_API UPD3DetectionMeterContainer(const UPD3DetectionMeterContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3DetectionMeterContainer(UPD3DetectionMeterContainer&&); \
	NO_API UPD3DetectionMeterContainer(const UPD3DetectionMeterContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3DetectionMeterContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3DetectionMeterContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3DetectionMeterContainer)


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetectionMeterClass() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectionMeterClass); } \
	FORCEINLINE static uint32 __PPO__Overlay_DetectionMeters() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, Overlay_DetectionMeters); } \
	FORCEINLINE static uint32 __PPO__DetectedAudioEvent() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectedAudioEvent); } \
	FORCEINLINE static uint32 __PPO__DetectedAudioEventCooldown() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectedAudioEventCooldown); } \
	FORCEINLINE static uint32 __PPO__DetectionMeters() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, DetectionMeters); } \
	FORCEINLINE static uint32 __PPO__TimeLastPlayedDetectedAudio() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, TimeLastPlayedDetectedAudio); } \
	FORCEINLINE static uint32 __PPO__bIsBeingDetected() { return STRUCT_OFFSET(UPD3DetectionMeterContainer, bIsBeingDetected); }


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3DetectionMeterContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeterContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
