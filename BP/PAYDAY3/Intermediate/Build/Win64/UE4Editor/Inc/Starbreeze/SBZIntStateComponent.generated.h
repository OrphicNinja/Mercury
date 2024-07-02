// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZIntStateComponent_generated_h
#error "SBZIntStateComponent.generated.h already included, missing '#pragma once' in SBZIntStateComponent.h"
#endif
#define STARBREEZE_SBZIntStateComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_RPC_WRAPPERS \
	virtual void Multicast_SetState_Implementation(int32 NewState); \
 \
	DECLARE_FUNCTION(execDecreaseState); \
	DECLARE_FUNCTION(execIncreaseState); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetLocalState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetState_Implementation(int32 NewState); \
 \
	DECLARE_FUNCTION(execDecreaseState); \
	DECLARE_FUNCTION(execIncreaseState); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetLocalState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_EVENT_PARMS \
	struct SBZIntStateComponent_eventMulticast_SetState_Parms \
	{ \
		int32 NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZIntStateComponent(); \
	friend struct Z_Construct_UClass_USBZIntStateComponent_Statics; \
public: \
	DECLARE_CLASS(USBZIntStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZIntStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZIntStateComponent(); \
	friend struct Z_Construct_UClass_USBZIntStateComponent_Statics; \
public: \
	DECLARE_CLASS(USBZIntStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZIntStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZIntStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZIntStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZIntStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZIntStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZIntStateComponent(USBZIntStateComponent&&); \
	NO_API USBZIntStateComponent(const USBZIntStateComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZIntStateComponent(USBZIntStateComponent&&); \
	NO_API USBZIntStateComponent(const USBZIntStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZIntStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZIntStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZIntStateComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(USBZIntStateComponent, State); } \
	FORCEINLINE static uint32 __PPO__bClientDelayStateFromServer() { return STRUCT_OFFSET(USBZIntStateComponent, bClientDelayStateFromServer); } \
	FORCEINLINE static uint32 __PPO__ClientStateDelay() { return STRUCT_OFFSET(USBZIntStateComponent, ClientStateDelay); }


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZIntStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZIntStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
