// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZInteractDisplayDataCollection;
struct FSBZInteractModeDisplayData;
class USBZBaseInteractableComponent;
#ifdef STARBREEZE_SBZPlayerInteractorComponent_generated_h
#error "SBZPlayerInteractorComponent.generated.h already included, missing '#pragma once' in SBZPlayerInteractorComponent.h"
#endif
#define STARBREEZE_SBZPlayerInteractorComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetModeDisplayData); \
	DECLARE_FUNCTION(execGetSelectedInteraction); \
	DECLARE_FUNCTION(execIsCurrentInstant); \
	DECLARE_FUNCTION(execShowInteractWidget);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetModeDisplayData); \
	DECLARE_FUNCTION(execGetSelectedInteraction); \
	DECLARE_FUNCTION(execIsCurrentInstant); \
	DECLARE_FUNCTION(execShowInteractWidget);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerInteractorComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerInteractorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerInteractorComponent, USBZInteractorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerInteractorComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerInteractorComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerInteractorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerInteractorComponent, USBZInteractorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerInteractorComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerInteractorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerInteractorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerInteractorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerInteractorComponent(USBZPlayerInteractorComponent&&); \
	NO_API USBZPlayerInteractorComponent(const USBZPlayerInteractorComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerInteractorComponent(USBZPlayerInteractorComponent&&); \
	NO_API USBZPlayerInteractorComponent(const USBZPlayerInteractorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerInteractorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerInteractorComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractionLockCameraData() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, InteractionLockCameraData); } \
	FORCEINLINE static uint32 __PPO__DistancePitchCurve() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, DistancePitchCurve); } \
	FORCEINLINE static uint32 __PPO__Selected() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, Selected); } \
	FORCEINLINE static uint32 __PPO__bIsValidThisFrame() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, bIsValidThisFrame); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerController() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, LocalPlayerController); } \
	FORCEINLINE static uint32 __PPO__bIsInstantModeIndex() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, bIsInstantModeIndex); } \
	FORCEINLINE static uint32 __PPO__bIsFrontSelected() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, bIsFrontSelected); } \
	FORCEINLINE static uint32 __PPO__LastFailedScreenInteractableCheckFrame() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, LastFailedScreenInteractableCheckFrame); } \
	FORCEINLINE static uint32 __PPO__CheckScreenInteractableFrameInterval() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, CheckScreenInteractableFrameInterval); } \
	FORCEINLINE static uint32 __PPO__PendingOnScreenDelay() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, PendingOnScreenDelay); } \
	FORCEINLINE static uint32 __PPO__PendingOnScreenInteractable() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, PendingOnScreenInteractable); } \
	FORCEINLINE static uint32 __PPO__PendingOnScreenTime() { return STRUCT_OFFSET(USBZPlayerInteractorComponent, PendingOnScreenTime); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerInteractorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerInteractorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
