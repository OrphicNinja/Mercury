// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZHoldOutLootContainer_generated_h
#error "SBZHoldOutLootContainer.generated.h already included, missing '#pragma once' in SBZHoldOutLootContainer.h"
#endif
#define STARBREEZE_SBZHoldOutLootContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_RPC_WRAPPERS \
	virtual void Multicast_SetOpen_Implementation(bool bInIsOpen); \
 \
	DECLARE_FUNCTION(execMulticast_SetOpen); \
	DECLARE_FUNCTION(execOnRep_Open); \
	DECLARE_FUNCTION(execSetOpen);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetOpen_Implementation(bool bInIsOpen); \
 \
	DECLARE_FUNCTION(execMulticast_SetOpen); \
	DECLARE_FUNCTION(execOnRep_Open); \
	DECLARE_FUNCTION(execSetOpen);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_EVENT_PARMS \
	struct SBZHoldOutLootContainer_eventMulticast_SetOpen_Parms \
	{ \
		bool bInIsOpen; \
	}; \
	struct SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms \
	{ \
		bool bInIsOpen; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHoldOutLootContainer(); \
	friend struct Z_Construct_UClass_ASBZHoldOutLootContainer_Statics; \
public: \
	DECLARE_CLASS(ASBZHoldOutLootContainer, ASBZReplicatedBinaryStateActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHoldOutLootContainer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicatedIsOpen=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicatedIsOpen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZHoldOutLootContainer(); \
	friend struct Z_Construct_UClass_ASBZHoldOutLootContainer_Statics; \
public: \
	DECLARE_CLASS(ASBZHoldOutLootContainer, ASBZReplicatedBinaryStateActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHoldOutLootContainer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicatedIsOpen=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicatedIsOpen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHoldOutLootContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHoldOutLootContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHoldOutLootContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHoldOutLootContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHoldOutLootContainer(ASBZHoldOutLootContainer&&); \
	NO_API ASBZHoldOutLootContainer(const ASBZHoldOutLootContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHoldOutLootContainer(ASBZHoldOutLootContainer&&); \
	NO_API ASBZHoldOutLootContainer(const ASBZHoldOutLootContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHoldOutLootContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHoldOutLootContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHoldOutLootContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LootSpawnLocation() { return STRUCT_OFFSET(ASBZHoldOutLootContainer, LootSpawnLocation); } \
	FORCEINLINE static uint32 __PPO__LootClass() { return STRUCT_OFFSET(ASBZHoldOutLootContainer, LootClass); } \
	FORCEINLINE static uint32 __PPO__SpawnedLoot() { return STRUCT_OFFSET(ASBZHoldOutLootContainer, SpawnedLoot); } \
	FORCEINLINE static uint32 __PPO__bIsOpen() { return STRUCT_OFFSET(ASBZHoldOutLootContainer, bIsOpen); } \
	FORCEINLINE static uint32 __PPO__bReplicatedIsOpen() { return STRUCT_OFFSET(ASBZHoldOutLootContainer, bReplicatedIsOpen); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHoldOutLootContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
