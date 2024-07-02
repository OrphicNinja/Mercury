// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZLocalPlayerFeedbackParameters;
class USBZLocalPlayerFeedback;
class UObject;
class USBZPlayerCameraFeedbackComponent;
#ifdef STARBREEZE_SBZPlayerCameraFeedbackComponent_generated_h
#error "SBZPlayerCameraFeedbackComponent.generated.h already included, missing '#pragma once' in SBZPlayerCameraFeedbackComponent.h"
#endif
#define STARBREEZE_SBZPlayerCameraFeedbackComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddFeedback); \
	DECLARE_FUNCTION(execCooldownTimerDelegate); \
	DECLARE_FUNCTION(execFadeOutFeedback); \
	DECLARE_FUNCTION(execGetLocalCameraFeedbackComponent); \
	DECLARE_FUNCTION(execOnExitedActionPhase); \
	DECLARE_FUNCTION(execRemoveFeedback); \
	DECLARE_FUNCTION(execSetFeedbackIntensity);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddFeedback); \
	DECLARE_FUNCTION(execCooldownTimerDelegate); \
	DECLARE_FUNCTION(execFadeOutFeedback); \
	DECLARE_FUNCTION(execGetLocalCameraFeedbackComponent); \
	DECLARE_FUNCTION(execOnExitedActionPhase); \
	DECLARE_FUNCTION(execRemoveFeedback); \
	DECLARE_FUNCTION(execSetFeedbackIntensity);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerCameraFeedbackComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerCameraFeedbackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerCameraFeedbackComponent) \
	DECLARE_WITHIN(ASBZPlayerCameraManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerCameraFeedbackComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerCameraFeedbackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerCameraFeedbackComponent) \
	DECLARE_WITHIN(ASBZPlayerCameraManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerCameraFeedbackComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerCameraFeedbackComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerCameraFeedbackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerCameraFeedbackComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerCameraFeedbackComponent(USBZPlayerCameraFeedbackComponent&&); \
	NO_API USBZPlayerCameraFeedbackComponent(const USBZPlayerCameraFeedbackComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerCameraFeedbackComponent(USBZPlayerCameraFeedbackComponent&&); \
	NO_API USBZPlayerCameraFeedbackComponent(const USBZPlayerCameraFeedbackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerCameraFeedbackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerCameraFeedbackComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerCameraFeedbackComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentFeedbacks() { return STRUCT_OFFSET(USBZPlayerCameraFeedbackComponent, CurrentFeedbacks); } \
	FORCEINLINE static uint32 __PPO__PlayerCameraOwner() { return STRUCT_OFFSET(USBZPlayerCameraFeedbackComponent, PlayerCameraOwner); } \
	FORCEINLINE static uint32 __PPO__FeedbackFirstPlayCooldowns() { return STRUCT_OFFSET(USBZPlayerCameraFeedbackComponent, FeedbackFirstPlayCooldowns); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerCameraFeedbackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerCameraFeedbackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
