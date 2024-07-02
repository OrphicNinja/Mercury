// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZSharedKeyItemTagChangedEvent;
class UAkAudioEvent;
#ifdef STARBREEZE_SBZInteractableComponent_generated_h
#error "SBZInteractableComponent.generated.h already included, missing '#pragma once' in SBZInteractableComponent.h"
#endif
#define STARBREEZE_SBZInteractableComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_RPC_WRAPPERS \
	virtual void Multicast_SetInteractionEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_SetInteractionEnabled); \
	DECLARE_FUNCTION(execOnRep_InteractionEnabled); \
	DECLARE_FUNCTION(execOnSharedKeyItemTagChanged); \
	DECLARE_FUNCTION(execPlay3DSound); \
	DECLARE_FUNCTION(execSetDefaultsForInstant); \
	DECLARE_FUNCTION(execSetDefaultsForTimed); \
	DECLARE_FUNCTION(execSetInteractionEnabled); \
	DECLARE_FUNCTION(execSetLocalEnabled); \
	DECLARE_FUNCTION(execStop3DSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetInteractionEnabled_Implementation(bool bEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_SetInteractionEnabled); \
	DECLARE_FUNCTION(execOnRep_InteractionEnabled); \
	DECLARE_FUNCTION(execOnSharedKeyItemTagChanged); \
	DECLARE_FUNCTION(execPlay3DSound); \
	DECLARE_FUNCTION(execSetDefaultsForInstant); \
	DECLARE_FUNCTION(execSetDefaultsForTimed); \
	DECLARE_FUNCTION(execSetInteractionEnabled); \
	DECLARE_FUNCTION(execSetLocalEnabled); \
	DECLARE_FUNCTION(execStop3DSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_EVENT_PARMS \
	struct SBZInteractableComponent_eventMulticast_SetInteractionEnabled_Parms \
	{ \
		bool bEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInteractableComponent(); \
	friend struct Z_Construct_UClass_USBZInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZInteractableComponent, USBZBaseInteractableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInteractableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZInteractableComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bInteractionEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bInteractionEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInteractableComponent(); \
	friend struct Z_Construct_UClass_USBZInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZInteractableComponent, USBZBaseInteractableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInteractableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZInteractableComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bInteractionEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bInteractionEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInteractableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInteractableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInteractableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInteractableComponent(USBZInteractableComponent&&); \
	NO_API USBZInteractableComponent(const USBZInteractableComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInteractableComponent(USBZInteractableComponent&&); \
	NO_API USBZInteractableComponent(const USBZInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInteractableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInteractableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoopingAkComponent() { return STRUCT_OFFSET(USBZInteractableComponent, LoopingAkComponent); } \
	FORCEINLINE static uint32 __PPO__GameplayInteractionQuery() { return STRUCT_OFFSET(USBZInteractableComponent, GameplayInteractionQuery); } \
	FORCEINLINE static uint32 __PPO__SharedKeyItemQuery() { return STRUCT_OFFSET(USBZInteractableComponent, SharedKeyItemQuery); } \
	FORCEINLINE static uint32 __PPO__Interactors() { return STRUCT_OFFSET(USBZInteractableComponent, Interactors); } \
	FORCEINLINE static uint32 __PPO__PredictedInteractor() { return STRUCT_OFFSET(USBZInteractableComponent, PredictedInteractor); } \
	FORCEINLINE static uint32 __PPO__PredictionTimeoutSeconds() { return STRUCT_OFFSET(USBZInteractableComponent, PredictionTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__NextCancelAudioData() { return STRUCT_OFFSET(USBZInteractableComponent, NextCancelAudioData); } \
	FORCEINLINE static uint32 __PPO__LocalizedAnimatedInteractionDatas() { return STRUCT_OFFSET(USBZInteractableComponent, LocalizedAnimatedInteractionDatas); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInteractableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
