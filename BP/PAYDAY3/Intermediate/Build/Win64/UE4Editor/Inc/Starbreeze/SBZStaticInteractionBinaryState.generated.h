// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZStaticInteractionBinaryState_generated_h
#error "SBZStaticInteractionBinaryState.generated.h already included, missing '#pragma once' in SBZStaticInteractionBinaryState.h"
#endif
#define STARBREEZE_SBZStaticInteractionBinaryState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_EVENT_PARMS \
	struct SBZStaticInteractionBinaryState_eventBP_OnStateChanged_Parms \
	{ \
		bool bNewState; \
		bool bDoCosmentics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZStaticInteractionBinaryState(); \
	friend struct Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics; \
public: \
	DECLARE_CLASS(ASBZStaticInteractionBinaryState, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStaticInteractionBinaryState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bState=NETFIELD_REP_START, \
		NETFIELD_REP_END=bState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZStaticInteractionBinaryState(); \
	friend struct Z_Construct_UClass_ASBZStaticInteractionBinaryState_Statics; \
public: \
	DECLARE_CLASS(ASBZStaticInteractionBinaryState, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStaticInteractionBinaryState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bState=NETFIELD_REP_START, \
		NETFIELD_REP_END=bState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZStaticInteractionBinaryState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStaticInteractionBinaryState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStaticInteractionBinaryState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStaticInteractionBinaryState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStaticInteractionBinaryState(ASBZStaticInteractionBinaryState&&); \
	NO_API ASBZStaticInteractionBinaryState(const ASBZStaticInteractionBinaryState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStaticInteractionBinaryState(ASBZStaticInteractionBinaryState&&); \
	NO_API ASBZStaticInteractionBinaryState(const ASBZStaticInteractionBinaryState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStaticInteractionBinaryState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStaticInteractionBinaryState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStaticInteractionBinaryState)


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZStaticInteractionBinaryState, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__bState() { return STRUCT_OFFSET(ASBZStaticInteractionBinaryState, bState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZStaticInteractionBinaryState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStaticInteractionBinaryState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
