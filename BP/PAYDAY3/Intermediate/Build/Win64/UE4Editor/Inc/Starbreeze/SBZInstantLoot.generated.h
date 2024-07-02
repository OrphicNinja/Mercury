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
#ifdef STARBREEZE_SBZInstantLoot_generated_h
#error "SBZInstantLoot.generated.h already included, missing '#pragma once' in SBZInstantLoot.h"
#endif
#define STARBREEZE_SBZInstantLoot_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAckComplete); \
	DECLARE_FUNCTION(execHandleAckRejectedPredicted); \
	DECLARE_FUNCTION(execHandlePredictedEnd); \
	DECLARE_FUNCTION(execOnRep_IsLooted); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAckComplete); \
	DECLARE_FUNCTION(execHandleAckRejectedPredicted); \
	DECLARE_FUNCTION(execHandlePredictedEnd); \
	DECLARE_FUNCTION(execOnRep_IsLooted); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_EVENT_PARMS \
	struct SBZInstantLoot_eventOnLooted_Parms \
	{ \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZInstantLoot(); \
	friend struct Z_Construct_UClass_ASBZInstantLoot_Statics; \
public: \
	DECLARE_CLASS(ASBZInstantLoot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInstantLoot) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsLooted=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsLooted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZInstantLoot(); \
	friend struct Z_Construct_UClass_ASBZInstantLoot_Statics; \
public: \
	DECLARE_CLASS(ASBZInstantLoot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInstantLoot) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsLooted=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsLooted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZInstantLoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInstantLoot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInstantLoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInstantLoot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInstantLoot(ASBZInstantLoot&&); \
	NO_API ASBZInstantLoot(const ASBZInstantLoot&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInstantLoot(ASBZInstantLoot&&); \
	NO_API ASBZInstantLoot(const ASBZInstantLoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInstantLoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInstantLoot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInstantLoot)


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsDestroyOnLooted() { return STRUCT_OFFSET(ASBZInstantLoot, bIsDestroyOnLooted); } \
	FORCEINLINE static uint32 __PPO__OnLootedEvent() { return STRUCT_OFFSET(ASBZInstantLoot, OnLootedEvent); } \
	FORCEINLINE static uint32 __PPO__bIsLooted() { return STRUCT_OFFSET(ASBZInstantLoot, bIsLooted); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZInstantLoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInstantLoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
