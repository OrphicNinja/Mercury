// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class USBZAIAction;
class AActor;
class USBZAIOrder;
enum class ESBZAIOrderMode : uint8;
#ifdef STARBREEZE_SBZAIController_generated_h
#error "SBZAIController.generated.h already included, missing '#pragma once' in SBZAIController.h"
#endif
#define STARBREEZE_SBZAIController_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentEnemy); \
	DECLARE_FUNCTION(execOnActionCanceled); \
	DECLARE_FUNCTION(execOnActionCompleted); \
	DECLARE_FUNCTION(execOnEnemyKilled); \
	DECLARE_FUNCTION(execOnOrderCompleted); \
	DECLARE_FUNCTION(execPushAction); \
	DECLARE_FUNCTION(execPushOrder); \
	DECLARE_FUNCTION(execSetAIEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentEnemy); \
	DECLARE_FUNCTION(execOnActionCanceled); \
	DECLARE_FUNCTION(execOnActionCompleted); \
	DECLARE_FUNCTION(execOnEnemyKilled); \
	DECLARE_FUNCTION(execOnOrderCompleted); \
	DECLARE_FUNCTION(execPushAction); \
	DECLARE_FUNCTION(execPushOrder); \
	DECLARE_FUNCTION(execSetAIEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIController(); \
	friend struct Z_Construct_UClass_ASBZAIController_Statics; \
public: \
	DECLARE_CLASS(ASBZAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIController) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIController*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIController(); \
	friend struct Z_Construct_UClass_ASBZAIController_Statics; \
public: \
	DECLARE_CLASS(ASBZAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIController) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIController*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIController(ASBZAIController&&); \
	NO_API ASBZAIController(const ASBZAIController&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIController(ASBZAIController&&); \
	NO_API ASBZAIController(const ASBZAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIController)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisualDetectionComponent() { return STRUCT_OFFSET(ASBZAIController, VisualDetectionComponent); } \
	FORCEINLINE static uint32 __PPO__UtilityComponent() { return STRUCT_OFFSET(ASBZAIController, UtilityComponent); } \
	FORCEINLINE static uint32 __PPO__BlackboardAsset() { return STRUCT_OFFSET(ASBZAIController, BlackboardAsset); } \
	FORCEINLINE static uint32 __PPO__FactionId() { return STRUCT_OFFSET(ASBZAIController, FactionId); } \
	FORCEINLINE static uint32 __PPO__LerpedControlRotation() { return STRUCT_OFFSET(ASBZAIController, LerpedControlRotation); } \
	FORCEINLINE static uint32 __PPO__CurrentActions() { return STRUCT_OFFSET(ASBZAIController, CurrentActions); } \
	FORCEINLINE static uint32 __PPO__CurrentOrder() { return STRUCT_OFFSET(ASBZAIController, CurrentOrder); } \
	FORCEINLINE static uint32 __PPO__OrderQueue() { return STRUCT_OFFSET(ASBZAIController, OrderQueue); } \
	FORCEINLINE static uint32 __PPO__DisableTargetFocusWhilePathingEFs() { return STRUCT_OFFSET(ASBZAIController, DisableTargetFocusWhilePathingEFs); } \
	FORCEINLINE static uint32 __PPO__PathFocusHandler() { return STRUCT_OFFSET(ASBZAIController, PathFocusHandler); } \
	FORCEINLINE static uint32 __PPO__MinCoverScoreToFocus() { return STRUCT_OFFSET(ASBZAIController, MinCoverScoreToFocus); } \
	FORCEINLINE static uint32 __PPO__MinDistFromTraversalNavLinkToFocus() { return STRUCT_OFFSET(ASBZAIController, MinDistFromTraversalNavLinkToFocus); } \
	FORCEINLINE static uint32 __PPO__SameRoomTargetFocusDistance() { return STRUCT_OFFSET(ASBZAIController, SameRoomTargetFocusDistance); } \
	FORCEINLINE static uint32 __PPO__bIsTargetFocusEnabled() { return STRUCT_OFFSET(ASBZAIController, bIsTargetFocusEnabled); } \
	FORCEINLINE static uint32 __PPO__FocusOnLastVisibleLocationDuration() { return STRUCT_OFFSET(ASBZAIController, FocusOnLastVisibleLocationDuration); } \
	FORCEINLINE static uint32 __PPO__DisabledReasonArray() { return STRUCT_OFFSET(ASBZAIController, DisabledReasonArray); } \
	FORCEINLINE static uint32 __PPO__LastDisabledReason() { return STRUCT_OFFSET(ASBZAIController, LastDisabledReason); } \
	FORCEINLINE static uint32 __PPO__NearRangeCurve() { return STRUCT_OFFSET(ASBZAIController, NearRangeCurve); } \
	FORCEINLINE static uint32 __PPO__PreferredRangeCurve() { return STRUCT_OFFSET(ASBZAIController, PreferredRangeCurve); } \
	FORCEINLINE static uint32 __PPO__HeistStateAlert() { return STRUCT_OFFSET(ASBZAIController, HeistStateAlert); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_25_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIController_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
