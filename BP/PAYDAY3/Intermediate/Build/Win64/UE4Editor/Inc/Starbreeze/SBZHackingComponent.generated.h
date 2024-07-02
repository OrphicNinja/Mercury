// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZHackingState : uint8;
#ifdef STARBREEZE_SBZHackingComponent_generated_h
#error "SBZHackingComponent.generated.h already included, missing '#pragma once' in SBZHackingComponent.h"
#endif
#define STARBREEZE_SBZHackingComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_RPC_WRAPPERS \
	virtual void Multicast_SetHackingState_Implementation(ESBZHackingState NewHackingState); \
 \
	DECLARE_FUNCTION(execGetHackingState); \
	DECLARE_FUNCTION(execMulticast_SetHackingState); \
	DECLARE_FUNCTION(execOnRep_HackingState); \
	DECLARE_FUNCTION(execSetHackingState);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetHackingState_Implementation(ESBZHackingState NewHackingState); \
 \
	DECLARE_FUNCTION(execGetHackingState); \
	DECLARE_FUNCTION(execMulticast_SetHackingState); \
	DECLARE_FUNCTION(execOnRep_HackingState); \
	DECLARE_FUNCTION(execSetHackingState);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_EVENT_PARMS \
	struct SBZHackingComponent_eventMulticast_SetHackingState_Parms \
	{ \
		ESBZHackingState NewHackingState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHackingComponent(); \
	friend struct Z_Construct_UClass_USBZHackingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZHackingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHackingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HackingState=NETFIELD_REP_START, \
		NETFIELD_REP_END=HackingState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHackingComponent(); \
	friend struct Z_Construct_UClass_USBZHackingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZHackingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHackingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HackingState=NETFIELD_REP_START, \
		NETFIELD_REP_END=HackingState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHackingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHackingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHackingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHackingComponent(USBZHackingComponent&&); \
	NO_API USBZHackingComponent(const USBZHackingComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHackingComponent(USBZHackingComponent&&); \
	NO_API USBZHackingComponent(const USBZHackingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHackingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHackingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HackingState() { return STRUCT_OFFSET(USBZHackingComponent, HackingState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHackingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
