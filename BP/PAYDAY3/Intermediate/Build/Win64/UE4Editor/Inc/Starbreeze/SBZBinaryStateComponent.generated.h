// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBinaryStateComponent_generated_h
#error "SBZBinaryStateComponent.generated.h already included, missing '#pragma once' in SBZBinaryStateComponent.h"
#endif
#define STARBREEZE_SBZBinaryStateComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_RPC_WRAPPERS \
	virtual void Multicast_SetState_Implementation(bool bNewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetLocalState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execToggleState);


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetState_Implementation(bool bNewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetLocalState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execToggleState);


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_EVENT_PARMS \
	struct SBZBinaryStateComponent_eventMulticast_SetState_Parms \
	{ \
		bool bNewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBinaryStateComponent(); \
	friend struct Z_Construct_UClass_USBZBinaryStateComponent_Statics; \
public: \
	DECLARE_CLASS(USBZBinaryStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBinaryStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bState=NETFIELD_REP_START, \
		NETFIELD_REP_END=bState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBinaryStateComponent(); \
	friend struct Z_Construct_UClass_USBZBinaryStateComponent_Statics; \
public: \
	DECLARE_CLASS(USBZBinaryStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBinaryStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bState=NETFIELD_REP_START, \
		NETFIELD_REP_END=bState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBinaryStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBinaryStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBinaryStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBinaryStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBinaryStateComponent(USBZBinaryStateComponent&&); \
	NO_API USBZBinaryStateComponent(const USBZBinaryStateComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBinaryStateComponent(USBZBinaryStateComponent&&); \
	NO_API USBZBinaryStateComponent(const USBZBinaryStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBinaryStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBinaryStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBinaryStateComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnStateChanged() { return STRUCT_OFFSET(USBZBinaryStateComponent, OnStateChanged); } \
	FORCEINLINE static uint32 __PPO__bClientDelayStateFromServer() { return STRUCT_OFFSET(USBZBinaryStateComponent, bClientDelayStateFromServer); } \
	FORCEINLINE static uint32 __PPO__ClientStateDelay() { return STRUCT_OFFSET(USBZBinaryStateComponent, ClientStateDelay); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBinaryStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBinaryStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
