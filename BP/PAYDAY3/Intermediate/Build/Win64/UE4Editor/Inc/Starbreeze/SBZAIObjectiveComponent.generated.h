// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZRoomVolume;
class UPrimitiveComponent;
class USBZBaseInteractableComponent;
class USBZAIOrder;
class APawn;
#ifdef STARBREEZE_SBZAIObjectiveComponent_generated_h
#error "SBZAIObjectiveComponent.generated.h already included, missing '#pragma once' in SBZAIObjectiveComponent.h"
#endif
#define STARBREEZE_SBZAIObjectiveComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentRoom_Implementation); \
	DECLARE_FUNCTION(execGetLastKnownRoom); \
	DECLARE_FUNCTION(execOnCollisionChanged); \
	DECLARE_FUNCTION(execOnInteractStateChanged); \
	DECLARE_FUNCTION(execOnOrderCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentRoom_Implementation); \
	DECLARE_FUNCTION(execGetLastKnownRoom); \
	DECLARE_FUNCTION(execOnCollisionChanged); \
	DECLARE_FUNCTION(execOnInteractStateChanged); \
	DECLARE_FUNCTION(execOnOrderCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIObjectiveComponent(); \
	friend struct Z_Construct_UClass_USBZAIObjectiveComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIObjectiveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIObjectiveComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAIObjectiveComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIObjectiveComponent(); \
	friend struct Z_Construct_UClass_USBZAIObjectiveComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIObjectiveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIObjectiveComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAIObjectiveComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIObjectiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIObjectiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIObjectiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIObjectiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIObjectiveComponent(USBZAIObjectiveComponent&&); \
	NO_API USBZAIObjectiveComponent(const USBZAIObjectiveComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIObjectiveComponent(USBZAIObjectiveComponent&&); \
	NO_API USBZAIObjectiveComponent(const USBZAIObjectiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIObjectiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIObjectiveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIObjectiveComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bRegisterToWorldRuntime() { return STRUCT_OFFSET(USBZAIObjectiveComponent, bRegisterToWorldRuntime); } \
	FORCEINLINE static uint32 __PPO__bExcludeInteractableAfterUse() { return STRUCT_OFFSET(USBZAIObjectiveComponent, bExcludeInteractableAfterUse); } \
	FORCEINLINE static uint32 __PPO__InteractionType() { return STRUCT_OFFSET(USBZAIObjectiveComponent, InteractionType); } \
	FORCEINLINE static uint32 __PPO__InteractionPriority() { return STRUCT_OFFSET(USBZAIObjectiveComponent, InteractionPriority); } \
	FORCEINLINE static uint32 __PPO__HasIteractionItems() { return STRUCT_OFFSET(USBZAIObjectiveComponent, HasIteractionItems); } \
	FORCEINLINE static uint32 __PPO__DoesNotHaveIteractionItems() { return STRUCT_OFFSET(USBZAIObjectiveComponent, DoesNotHaveIteractionItems); } \
	FORCEINLINE static uint32 __PPO__CurrentUser() { return STRUCT_OFFSET(USBZAIObjectiveComponent, CurrentUser); } \
	FORCEINLINE static uint32 __PPO__ObjectiveInteractables() { return STRUCT_OFFSET(USBZAIObjectiveComponent, ObjectiveInteractables); } \
	FORCEINLINE static uint32 __PPO__ActiveInteractables() { return STRUCT_OFFSET(USBZAIObjectiveComponent, ActiveInteractables); } \
	FORCEINLINE static uint32 __PPO__InteractableExclusionList() { return STRUCT_OFFSET(USBZAIObjectiveComponent, InteractableExclusionList); } \
	FORCEINLINE static uint32 __PPO__ObjectiveColliders() { return STRUCT_OFFSET(USBZAIObjectiveComponent, ObjectiveColliders); } \
	FORCEINLINE static uint32 __PPO__ActiveColliders() { return STRUCT_OFFSET(USBZAIObjectiveComponent, ActiveColliders); } \
	FORCEINLINE static uint32 __PPO__InteractionPoint() { return STRUCT_OFFSET(USBZAIObjectiveComponent, InteractionPoint); } \
	FORCEINLINE static uint32 __PPO__MoveToPosition() { return STRUCT_OFFSET(USBZAIObjectiveComponent, MoveToPosition); } \
	FORCEINLINE static uint32 __PPO__InitialObjectiveLocation() { return STRUCT_OFFSET(USBZAIObjectiveComponent, InitialObjectiveLocation); } \
	FORCEINLINE static uint32 __PPO__CurrentInteractable() { return STRUCT_OFFSET(USBZAIObjectiveComponent, CurrentInteractable); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(USBZAIObjectiveComponent, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__LastKnownRoom() { return STRUCT_OFFSET(USBZAIObjectiveComponent, LastKnownRoom); } \
	FORCEINLINE static uint32 __PPO__MoveToPosEQSQuery() { return STRUCT_OFFSET(USBZAIObjectiveComponent, MoveToPosEQSQuery); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_23_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIObjectiveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIObjectiveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
