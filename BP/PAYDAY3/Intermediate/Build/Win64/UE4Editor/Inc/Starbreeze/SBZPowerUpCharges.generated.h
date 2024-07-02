// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPowerUpChargesState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZPowerUpCharges_generated_h
#error "SBZPowerUpCharges.generated.h already included, missing '#pragma once' in SBZPowerUpCharges.h"
#endif
#define STARBREEZE_SBZPowerUpCharges_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_RPC_WRAPPERS \
	virtual void Multicast_SetState_Implementation(ESBZPowerUpChargesState NewState); \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnRep_ChargesLeft); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetState_Implementation(ESBZPowerUpChargesState NewState); \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnRep_ChargesLeft); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_EVENT_PARMS \
	struct SBZPowerUpCharges_eventBP_OnChargesChanged_Parms \
	{ \
		int32 NewCharges; \
		bool bDoCosmetics; \
	}; \
	struct SBZPowerUpCharges_eventBP_OnStateChanged_Parms \
	{ \
		ESBZPowerUpChargesState OldState; \
		ESBZPowerUpChargesState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZPowerUpCharges_eventMulticast_SetState_Parms \
	{ \
		ESBZPowerUpChargesState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPowerUpCharges(); \
	friend struct Z_Construct_UClass_ASBZPowerUpCharges_Statics; \
public: \
	DECLARE_CLASS(ASBZPowerUpCharges, ASBZPowerUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPowerUpCharges) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChargesLeft=NETFIELD_REP_START, \
		CurrentState, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZPowerUpCharges(); \
	friend struct Z_Construct_UClass_ASBZPowerUpCharges_Statics; \
public: \
	DECLARE_CLASS(ASBZPowerUpCharges, ASBZPowerUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPowerUpCharges) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChargesLeft=NETFIELD_REP_START, \
		CurrentState, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPowerUpCharges(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPowerUpCharges) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPowerUpCharges); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPowerUpCharges); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPowerUpCharges(ASBZPowerUpCharges&&); \
	NO_API ASBZPowerUpCharges(const ASBZPowerUpCharges&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPowerUpCharges(ASBZPowerUpCharges&&); \
	NO_API ASBZPowerUpCharges(const ASBZPowerUpCharges&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPowerUpCharges); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPowerUpCharges); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPowerUpCharges)


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfCharges() { return STRUCT_OFFSET(ASBZPowerUpCharges, NumberOfCharges); } \
	FORCEINLINE static uint32 __PPO__bIsLoudOnly() { return STRUCT_OFFSET(ASBZPowerUpCharges, bIsLoudOnly); } \
	FORCEINLINE static uint32 __PPO__OnStateChanged() { return STRUCT_OFFSET(ASBZPowerUpCharges, OnStateChanged); } \
	FORCEINLINE static uint32 __PPO__ChargesLeft() { return STRUCT_OFFSET(ASBZPowerUpCharges, ChargesLeft); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZPowerUpCharges, CurrentState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPowerUpCharges>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPowerUpCharges_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
