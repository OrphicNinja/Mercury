// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZReplicatedIntStateActor_generated_h
#error "SBZReplicatedIntStateActor.generated.h already included, missing '#pragma once' in SBZReplicatedIntStateActor.h"
#endif
#define STARBREEZE_SBZReplicatedIntStateActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_RPC_WRAPPERS \
	virtual void Multicast_SetState_Implementation(int32 NewState); \
 \
	DECLARE_FUNCTION(execDecreaseState); \
	DECLARE_FUNCTION(execIncreaseState); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetLocalState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetState_Implementation(int32 NewState); \
 \
	DECLARE_FUNCTION(execDecreaseState); \
	DECLARE_FUNCTION(execIncreaseState); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetLocalState); \
	DECLARE_FUNCTION(execSetState);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_EVENT_PARMS \
	struct SBZReplicatedIntStateActor_eventMulticast_SetState_Parms \
	{ \
		int32 NewState; \
	}; \
	struct SBZReplicatedIntStateActor_eventOnStateChanged_Parms \
	{ \
		int32 OldState; \
		int32 NewState; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZReplicatedIntStateActor(); \
	friend struct Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics; \
public: \
	DECLARE_CLASS(ASBZReplicatedIntStateActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZReplicatedIntStateActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZReplicatedIntStateActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZReplicatedIntStateActor(); \
	friend struct Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics; \
public: \
	DECLARE_CLASS(ASBZReplicatedIntStateActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZReplicatedIntStateActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZReplicatedIntStateActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZReplicatedIntStateActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZReplicatedIntStateActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZReplicatedIntStateActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZReplicatedIntStateActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZReplicatedIntStateActor(ASBZReplicatedIntStateActor&&); \
	NO_API ASBZReplicatedIntStateActor(const ASBZReplicatedIntStateActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZReplicatedIntStateActor(ASBZReplicatedIntStateActor&&); \
	NO_API ASBZReplicatedIntStateActor(const ASBZReplicatedIntStateActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZReplicatedIntStateActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZReplicatedIntStateActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZReplicatedIntStateActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ASBZReplicatedIntStateActor, State); } \
	FORCEINLINE static uint32 __PPO__bClientDelayStateFromServer() { return STRUCT_OFFSET(ASBZReplicatedIntStateActor, bClientDelayStateFromServer); } \
	FORCEINLINE static uint32 __PPO__ClientStateDelay() { return STRUCT_OFFSET(ASBZReplicatedIntStateActor, ClientStateDelay); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZReplicatedIntStateActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReplicatedIntStateActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
