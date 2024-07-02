// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSeasonalEventItemBase_generated_h
#error "SBZSeasonalEventItemBase.generated.h already included, missing '#pragma once' in SBZSeasonalEventItemBase.h"
#endif
#define STARBREEZE_SBZSeasonalEventItemBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_RPC_WRAPPERS \
	virtual void Multicast_OnItemPickedUp_Implementation(bool bIsPositiveEffect); \
 \
	DECLARE_FUNCTION(execMulticast_OnItemPickedUp);


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnItemPickedUp_Implementation(bool bIsPositiveEffect); \
 \
	DECLARE_FUNCTION(execMulticast_OnItemPickedUp);


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_EVENT_PARMS \
	struct SBZSeasonalEventItemBase_eventBP_OnItemPickedUp_Parms \
	{ \
		bool bIsPositiveEffect; \
	}; \
	struct SBZSeasonalEventItemBase_eventMulticast_OnItemPickedUp_Parms \
	{ \
		bool bIsPositiveEffect; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSeasonalEventItemBase(); \
	friend struct Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics; \
public: \
	DECLARE_CLASS(ASBZSeasonalEventItemBase, ASBZPowerUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSeasonalEventItemBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZSeasonalEventItemBase(); \
	friend struct Z_Construct_UClass_ASBZSeasonalEventItemBase_Statics; \
public: \
	DECLARE_CLASS(ASBZSeasonalEventItemBase, ASBZPowerUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSeasonalEventItemBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSeasonalEventItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSeasonalEventItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSeasonalEventItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSeasonalEventItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSeasonalEventItemBase(ASBZSeasonalEventItemBase&&); \
	NO_API ASBZSeasonalEventItemBase(const ASBZSeasonalEventItemBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSeasonalEventItemBase(ASBZSeasonalEventItemBase&&); \
	NO_API ASBZSeasonalEventItemBase(const ASBZSeasonalEventItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSeasonalEventItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSeasonalEventItemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSeasonalEventItemBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectChanceDataArray() { return STRUCT_OFFSET(ASBZSeasonalEventItemBase, EffectChanceDataArray); } \
	FORCEINLINE static uint32 __PPO__HealthGained() { return STRUCT_OFFSET(ASBZSeasonalEventItemBase, HealthGained); } \
	FORCEINLINE static uint32 __PPO__ArmorChunksToGrant() { return STRUCT_OFFSET(ASBZSeasonalEventItemBase, ArmorChunksToGrant); } \
	FORCEINLINE static uint32 __PPO__NumberOfMagazines() { return STRUCT_OFFSET(ASBZSeasonalEventItemBase, NumberOfMagazines); } \
	FORCEINLINE static uint32 __PPO__NumberOfGrenades() { return STRUCT_OFFSET(ASBZSeasonalEventItemBase, NumberOfGrenades); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSeasonalEventItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
