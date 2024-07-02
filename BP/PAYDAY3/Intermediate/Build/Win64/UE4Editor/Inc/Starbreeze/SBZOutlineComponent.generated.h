// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
class USBZBaseInteractableComponent;
class USBZOutlineAsset;
class UObject;
#ifdef STARBREEZE_SBZOutlineComponent_generated_h
#error "SBZOutlineComponent.generated.h already included, missing '#pragma once' in SBZOutlineComponent.h"
#endif
#define STARBREEZE_SBZOutlineComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_SetActiveReplicated_Implementation(USBZOutlineAsset* NewActiveReplicated); \
	virtual void Multicast_SetReplicatedHidden_Implementation(bool bInIsReplicatedHidden); \
 \
	DECLARE_FUNCTION(execAddMesh); \
	DECLARE_FUNCTION(execHandleInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execHandleInteractionFocusChanged); \
	DECLARE_FUNCTION(execMulticast_SetActiveReplicated); \
	DECLARE_FUNCTION(execMulticast_SetReplicatedHidden); \
	DECLARE_FUNCTION(execOnRep_ActiveReplicated); \
	DECLARE_FUNCTION(execOnRep_IsReplicatedHidden); \
	DECLARE_FUNCTION(execRemoveMesh); \
	DECLARE_FUNCTION(execSetGloballyHideAllOutlines); \
	DECLARE_FUNCTION(execSetReplicatedHidden);


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetActiveReplicated_Implementation(USBZOutlineAsset* NewActiveReplicated); \
	virtual void Multicast_SetReplicatedHidden_Implementation(bool bInIsReplicatedHidden); \
 \
	DECLARE_FUNCTION(execAddMesh); \
	DECLARE_FUNCTION(execHandleInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execHandleInteractionFocusChanged); \
	DECLARE_FUNCTION(execMulticast_SetActiveReplicated); \
	DECLARE_FUNCTION(execMulticast_SetReplicatedHidden); \
	DECLARE_FUNCTION(execOnRep_ActiveReplicated); \
	DECLARE_FUNCTION(execOnRep_IsReplicatedHidden); \
	DECLARE_FUNCTION(execRemoveMesh); \
	DECLARE_FUNCTION(execSetGloballyHideAllOutlines); \
	DECLARE_FUNCTION(execSetReplicatedHidden);


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_EVENT_PARMS \
	struct SBZOutlineComponent_eventMulticast_SetActiveReplicated_Parms \
	{ \
		USBZOutlineAsset* NewActiveReplicated; \
	}; \
	struct SBZOutlineComponent_eventMulticast_SetReplicatedHidden_Parms \
	{ \
		bool bInIsReplicatedHidden; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOutlineComponent(); \
	friend struct Z_Construct_UClass_USBZOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(USBZOutlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOutlineComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActiveReplicated=NETFIELD_REP_START, \
		bIsReplicatedHidden, \
		NETFIELD_REP_END=bIsReplicatedHidden	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOutlineComponent(); \
	friend struct Z_Construct_UClass_USBZOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(USBZOutlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOutlineComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActiveReplicated=NETFIELD_REP_START, \
		bIsReplicatedHidden, \
		NETFIELD_REP_END=bIsReplicatedHidden	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOutlineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOutlineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOutlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOutlineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOutlineComponent(USBZOutlineComponent&&); \
	NO_API USBZOutlineComponent(const USBZOutlineComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOutlineComponent(USBZOutlineComponent&&); \
	NO_API USBZOutlineComponent(const USBZOutlineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOutlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOutlineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOutlineComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultAsset() { return STRUCT_OFFSET(USBZOutlineComponent, DefaultAsset); } \
	FORCEINLINE static uint32 __PPO__MeshSelectors() { return STRUCT_OFFSET(USBZOutlineComponent, MeshSelectors); } \
	FORCEINLINE static uint32 __PPO__InteractableSelector() { return STRUCT_OFFSET(USBZOutlineComponent, InteractableSelector); } \
	FORCEINLINE static uint32 __PPO__InteractableFocusAsset() { return STRUCT_OFFSET(USBZOutlineComponent, InteractableFocusAsset); } \
	FORCEINLINE static uint32 __PPO__bIsHiddenManagedByInteractable() { return STRUCT_OFFSET(USBZOutlineComponent, bIsHiddenManagedByInteractable); } \
	FORCEINLINE static uint32 __PPO__Meshes() { return STRUCT_OFFSET(USBZOutlineComponent, Meshes); } \
	FORCEINLINE static uint32 __PPO__ActiveAsset() { return STRUCT_OFFSET(USBZOutlineComponent, ActiveAsset); } \
	FORCEINLINE static uint32 __PPO__ActiveReplicated() { return STRUCT_OFFSET(USBZOutlineComponent, ActiveReplicated); } \
	FORCEINLINE static uint32 __PPO__bIsReplicatedHidden() { return STRUCT_OFFSET(USBZOutlineComponent, bIsReplicatedHidden); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOutlineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOutlineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
