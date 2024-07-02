// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZGameplayEffectData;
#ifdef STARBREEZE_SBZBaseInteractableComponent_generated_h
#error "SBZBaseInteractableComponent.generated.h already included, missing '#pragma once' in SBZBaseInteractableComponent.h"
#endif
#define STARBREEZE_SBZBaseInteractableComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_RPC_WRAPPERS \
	virtual void OnFocusChanged_Implementation(bool bInNewFocusState); \
 \
	DECLARE_FUNCTION(execGetCurrentModeIndex); \
	DECLARE_FUNCTION(execGetGameplayEffectsOnInteract); \
	DECLARE_FUNCTION(execIsInteractionIllegal); \
	DECLARE_FUNCTION(execOnFocusChanged); \
	DECLARE_FUNCTION(execSetGameplayEffectsOnInteract);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFocusChanged_Implementation(bool bInNewFocusState); \
 \
	DECLARE_FUNCTION(execGetCurrentModeIndex); \
	DECLARE_FUNCTION(execGetGameplayEffectsOnInteract); \
	DECLARE_FUNCTION(execIsInteractionIllegal); \
	DECLARE_FUNCTION(execOnFocusChanged); \
	DECLARE_FUNCTION(execSetGameplayEffectsOnInteract);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_EVENT_PARMS \
	struct SBZBaseInteractableComponent_eventOnFocusChanged_Parms \
	{ \
		bool bInNewFocusState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBaseInteractableComponent(); \
	friend struct Z_Construct_UClass_USBZBaseInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZBaseInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseInteractableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBaseInteractableComponent(); \
	friend struct Z_Construct_UClass_USBZBaseInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZBaseInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseInteractableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBaseInteractableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBaseInteractableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseInteractableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseInteractableComponent(USBZBaseInteractableComponent&&); \
	NO_API USBZBaseInteractableComponent(const USBZBaseInteractableComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseInteractableComponent(USBZBaseInteractableComponent&&); \
	NO_API USBZBaseInteractableComponent(const USBZBaseInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseInteractableComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBaseInteractableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(USBZBaseInteractableComponent, Duration); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(USBZBaseInteractableComponent, Text); } \
	FORCEINLINE static uint32 __PPO__ScreenInteractDistance() { return STRUCT_OFFSET(USBZBaseInteractableComponent, ScreenInteractDistance); } \
	FORCEINLINE static uint32 __PPO__MinScreenInteractDegrees() { return STRUCT_OFFSET(USBZBaseInteractableComponent, MinScreenInteractDegrees); } \
	FORCEINLINE static uint32 __PPO__MinScreenInteractDot() { return STRUCT_OFFSET(USBZBaseInteractableComponent, MinScreenInteractDot); } \
	FORCEINLINE static uint32 __PPO__PendingOnScreenDelay() { return STRUCT_OFFSET(USBZBaseInteractableComponent, PendingOnScreenDelay); } \
	FORCEINLINE static uint32 __PPO__GameplayEffectsOnInteract() { return STRUCT_OFFSET(USBZBaseInteractableComponent, GameplayEffectsOnInteract); } \
	FORCEINLINE static uint32 __PPO__AlternativeModeData() { return STRUCT_OFFSET(USBZBaseInteractableComponent, AlternativeModeData); } \
	FORCEINLINE static uint32 __PPO__OnStart2DAudioEvent() { return STRUCT_OFFSET(USBZBaseInteractableComponent, OnStart2DAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OnStart3DAudioEvent() { return STRUCT_OFFSET(USBZBaseInteractableComponent, OnStart3DAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OnFinish2DAudioEvent() { return STRUCT_OFFSET(USBZBaseInteractableComponent, OnFinish2DAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OnFinish3DAudioEvent() { return STRUCT_OFFSET(USBZBaseInteractableComponent, OnFinish3DAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OnCancel2DAudioEvent() { return STRUCT_OFFSET(USBZBaseInteractableComponent, OnCancel2DAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OnCancel3DAudioEvent() { return STRUCT_OFFSET(USBZBaseInteractableComponent, OnCancel3DAudioEvent); } \
	FORCEINLINE static uint32 __PPO__StartComment() { return STRUCT_OFFSET(USBZBaseInteractableComponent, StartComment); } \
	FORCEINLINE static uint32 __PPO__CompletedComment() { return STRUCT_OFFSET(USBZBaseInteractableComponent, CompletedComment); } \
	FORCEINLINE static uint32 __PPO__CancelComment() { return STRUCT_OFFSET(USBZBaseInteractableComponent, CancelComment); } \
	FORCEINLINE static uint32 __PPO__LastInteractor() { return STRUCT_OFFSET(USBZBaseInteractableComponent, LastInteractor); } \
	FORCEINLINE static uint32 __PPO__ModeIndex() { return STRUCT_OFFSET(USBZBaseInteractableComponent, ModeIndex); } \
	FORCEINLINE static uint32 __PPO__AnimationName() { return STRUCT_OFFSET(USBZBaseInteractableComponent, AnimationName); } \
	FORCEINLINE static uint32 __PPO__AnimatedInteractionData() { return STRUCT_OFFSET(USBZBaseInteractableComponent, AnimatedInteractionData); } \
	FORCEINLINE static uint32 __PPO__bIsScramblerAffected() { return STRUCT_OFFSET(USBZBaseInteractableComponent, bIsScramblerAffected); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_16_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBaseInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
