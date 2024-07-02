// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
#ifdef STARBREEZE_SBZPlaceableTripMine_generated_h
#error "SBZPlaceableTripMine.generated.h already included, missing '#pragma once' in SBZPlaceableTripMine.h"
#endif
#define STARBREEZE_SBZPlaceableTripMine_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Server_SetArmed_Implementation(); \
	virtual void Server_SetUnarmed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execServer_SetArmed); \
	DECLARE_FUNCTION(execServer_SetUnarmed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Server_SetArmed_Implementation(); \
	virtual void Server_SetUnarmed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execServer_SetArmed); \
	DECLARE_FUNCTION(execServer_SetUnarmed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_EVENT_PARMS \
	struct SBZPlaceableTripMine_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableTripMine(); \
	friend struct Z_Construct_UClass_ASBZPlaceableTripMine_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableTripMine, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableTripMine) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlaceableTripMine*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableTripMine(); \
	friend struct Z_Construct_UClass_ASBZPlaceableTripMine_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableTripMine, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableTripMine) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlaceableTripMine*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableTripMine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableTripMine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableTripMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableTripMine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableTripMine(ASBZPlaceableTripMine&&); \
	NO_API ASBZPlaceableTripMine(const ASBZPlaceableTripMine&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableTripMine(ASBZPlaceableTripMine&&); \
	NO_API ASBZPlaceableTripMine(const ASBZPlaceableTripMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableTripMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableTripMine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableTripMine)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZPlaceableTripMine, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZPlaceableTripMine, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__PlaceableTripMineEffectClass() { return STRUCT_OFFSET(ASBZPlaceableTripMine, PlaceableTripMineEffectClass); } \
	FORCEINLINE static uint32 __PPO__PlaceableTripMineExplodedEvent() { return STRUCT_OFFSET(ASBZPlaceableTripMine, PlaceableTripMineExplodedEvent); } \
	FORCEINLINE static uint32 __PPO__DetonationEffect() { return STRUCT_OFFSET(ASBZPlaceableTripMine, DetonationEffect); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRange() { return STRUCT_OFFSET(ASBZPlaceableTripMine, AIExplosionRange); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRange() { return STRUCT_OFFSET(ASBZPlaceableTripMine, PlayerExplosionRange); } \
	FORCEINLINE static uint32 __PPO__AkComponent() { return STRUCT_OFFSET(ASBZPlaceableTripMine, AkComponent); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZPlaceableTripMine, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__PendingDataExplosionResult() { return STRUCT_OFFSET(ASBZPlaceableTripMine, PendingDataExplosionResult); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableTripMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableTripMine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
