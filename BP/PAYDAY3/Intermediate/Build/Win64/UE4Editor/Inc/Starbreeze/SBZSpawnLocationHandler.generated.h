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
#ifdef STARBREEZE_SBZSpawnLocationHandler_generated_h
#error "SBZSpawnLocationHandler.generated.h already included, missing '#pragma once' in SBZSpawnLocationHandler.h"
#endif
#define STARBREEZE_SBZSpawnLocationHandler_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnServerImportantLootPickedUp); \
	DECLARE_FUNCTION(execTriggerSpawnManually);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnServerImportantLootPickedUp); \
	DECLARE_FUNCTION(execTriggerSpawnManually);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSpawnLocationHandler(); \
	friend struct Z_Construct_UClass_ASBZSpawnLocationHandler_Statics; \
public: \
	DECLARE_CLASS(ASBZSpawnLocationHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSpawnLocationHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZSpawnLocationHandler(); \
	friend struct Z_Construct_UClass_ASBZSpawnLocationHandler_Statics; \
public: \
	DECLARE_CLASS(ASBZSpawnLocationHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSpawnLocationHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSpawnLocationHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpawnLocationHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSpawnLocationHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpawnLocationHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSpawnLocationHandler(ASBZSpawnLocationHandler&&); \
	NO_API ASBZSpawnLocationHandler(const ASBZSpawnLocationHandler&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSpawnLocationHandler(ASBZSpawnLocationHandler&&); \
	NO_API ASBZSpawnLocationHandler(const ASBZSpawnLocationHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSpawnLocationHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpawnLocationHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpawnLocationHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShouldRandomizeOnBeginPlay() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, bShouldRandomizeOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__SpawnLocationArray() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, SpawnLocationArray); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, Seed); } \
	FORCEINLINE static uint32 __PPO__HackableActor() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, HackableActor); } \
	FORCEINLINE static uint32 __PPO__HackableActorArray() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, HackableActorArray); } \
	FORCEINLINE static uint32 __PPO__HackableEmailIndex() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, HackableEmailIndex); } \
	FORCEINLINE static uint32 __PPO__ImportantItem() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, ImportantItem); } \
	FORCEINLINE static uint32 __PPO__RandomLootToSpawnMap() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, RandomLootToSpawnMap); } \
	FORCEINLINE static uint32 __PPO__RandomIndex() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, RandomIndex); } \
	FORCEINLINE static uint32 __PPO__bUseOnlyOneLocation() { return STRUCT_OFFSET(ASBZSpawnLocationHandler, bUseOnlyOneLocation); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSpawnLocationHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnLocationHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
