// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAISquadOrder_generated_h
#error "SBZAISquadOrder.generated.h already included, missing '#pragma once' in SBZAISquadOrder.h"
#endif
#define STARBREEZE_SBZAISquadOrder_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAISquadOrder(); \
	friend struct Z_Construct_UClass_USBZAISquadOrder_Statics; \
public: \
	DECLARE_CLASS(USBZAISquadOrder, USBZAIOrder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISquadOrder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAISquadOrder(); \
	friend struct Z_Construct_UClass_USBZAISquadOrder_Statics; \
public: \
	DECLARE_CLASS(USBZAISquadOrder, USBZAIOrder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISquadOrder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAISquadOrder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAISquadOrder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISquadOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISquadOrder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISquadOrder(USBZAISquadOrder&&); \
	NO_API USBZAISquadOrder(const USBZAISquadOrder&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISquadOrder(USBZAISquadOrder&&); \
	NO_API USBZAISquadOrder(const USBZAISquadOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISquadOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISquadOrder); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZAISquadOrder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnWeight() { return STRUCT_OFFSET(USBZAISquadOrder, SpawnWeight); } \
	FORCEINLINE static uint32 __PPO__OwnerSquad() { return STRUCT_OFFSET(USBZAISquadOrder, OwnerSquad); } \
	FORCEINLINE static uint32 __PPO__WaitingMembers() { return STRUCT_OFFSET(USBZAISquadOrder, WaitingMembers); } \
	FORCEINLINE static uint32 __PPO__IgnoredMembers() { return STRUCT_OFFSET(USBZAISquadOrder, IgnoredMembers); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAISquadOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAISquadOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
