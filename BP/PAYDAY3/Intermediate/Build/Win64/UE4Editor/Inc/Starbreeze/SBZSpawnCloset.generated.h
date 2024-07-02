// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZSpawnCloset_generated_h
#error "SBZSpawnCloset.generated.h already included, missing '#pragma once' in SBZSpawnCloset.h"
#endif
#define STARBREEZE_SBZSpawnCloset_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindRoomVolumeOverlaps); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execOnRoomVolumeBeginOverlap); \
	DECLARE_FUNCTION(execOnRoomVolumeEndOverlap);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindRoomVolumeOverlaps); \
	DECLARE_FUNCTION(execOnHeistGoneLoud); \
	DECLARE_FUNCTION(execOnRoomVolumeBeginOverlap); \
	DECLARE_FUNCTION(execOnRoomVolumeEndOverlap);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSpawnCloset(); \
	friend struct Z_Construct_UClass_ASBZSpawnCloset_Statics; \
public: \
	DECLARE_CLASS(ASBZSpawnCloset, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZSpawnCloset)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZSpawnCloset(); \
	friend struct Z_Construct_UClass_ASBZSpawnCloset_Statics; \
public: \
	DECLARE_CLASS(ASBZSpawnCloset, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZSpawnCloset)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZSpawnCloset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpawnCloset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZSpawnCloset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpawnCloset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZSpawnCloset(ASBZSpawnCloset&&); \
	STARBREEZE_API ASBZSpawnCloset(const ASBZSpawnCloset&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZSpawnCloset(ASBZSpawnCloset&&); \
	STARBREEZE_API ASBZSpawnCloset(const ASBZSpawnCloset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZSpawnCloset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpawnCloset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpawnCloset)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClosetVolume() { return STRUCT_OFFSET(ASBZSpawnCloset, ClosetVolume); } \
	FORCEINLINE static uint32 __PPO__SpawnGroupsInCloset() { return STRUCT_OFFSET(ASBZSpawnCloset, SpawnGroupsInCloset); } \
	FORCEINLINE static uint32 __PPO__Reactors() { return STRUCT_OFFSET(ASBZSpawnCloset, Reactors); } \
	FORCEINLINE static uint32 __PPO__bStayOpenDuringStealth() { return STRUCT_OFFSET(ASBZSpawnCloset, bStayOpenDuringStealth); } \
	FORCEINLINE static uint32 __PPO__ReactionDelay() { return STRUCT_OFFSET(ASBZSpawnCloset, ReactionDelay); } \
	FORCEINLINE static uint32 __PPO__NumberOfBlockingActors() { return STRUCT_OFFSET(ASBZSpawnCloset, NumberOfBlockingActors); } \
	FORCEINLINE static uint32 __PPO__bActorsInVolume() { return STRUCT_OFFSET(ASBZSpawnCloset, bActorsInVolume); } \
	FORCEINLINE static uint32 __PPO__bIsStealth() { return STRUCT_OFFSET(ASBZSpawnCloset, bIsStealth); } \
	FORCEINLINE static uint32 __PPO__CiviliansInVolume() { return STRUCT_OFFSET(ASBZSpawnCloset, CiviliansInVolume); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSpawnCloset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnCloset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
