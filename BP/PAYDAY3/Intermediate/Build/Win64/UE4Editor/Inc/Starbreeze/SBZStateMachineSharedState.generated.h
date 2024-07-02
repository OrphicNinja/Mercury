// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZStateMachineSharedState_generated_h
#error "SBZStateMachineSharedState.generated.h already included, missing '#pragma once' in SBZStateMachineSharedState.h"
#endif
#define STARBREEZE_SBZStateMachineSharedState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_11_DELEGATE \
static inline void FOnServerInAction_DelegateWrapper(const FMulticastScriptDelegate& OnServerInAction) \
{ \
	OnServerInAction.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_RPC_WRAPPERS \
	virtual void NotifyServerInActionPhase_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyServerInActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyServerInActionPhase_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyServerInActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineSharedState(); \
	friend struct Z_Construct_UClass_USBZStateMachineSharedState_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineSharedState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineSharedState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OnlineSessionPhase=NETFIELD_REP_START, \
		NETFIELD_REP_END=OnlineSessionPhase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineSharedState(); \
	friend struct Z_Construct_UClass_USBZStateMachineSharedState_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineSharedState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineSharedState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OnlineSessionPhase=NETFIELD_REP_START, \
		NETFIELD_REP_END=OnlineSessionPhase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineSharedState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineSharedState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineSharedState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineSharedState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineSharedState(USBZStateMachineSharedState&&); \
	NO_API USBZStateMachineSharedState(const USBZStateMachineSharedState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineSharedState(USBZStateMachineSharedState&&); \
	NO_API USBZStateMachineSharedState(const USBZStateMachineSharedState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineSharedState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineSharedState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineSharedState)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineSharedState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineSharedState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
