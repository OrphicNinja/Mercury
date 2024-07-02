// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWeightTriggerVolume_generated_h
#error "SBZWeightTriggerVolume.generated.h already included, missing '#pragma once' in SBZWeightTriggerVolume.h"
#endif
#define STARBREEZE_SBZWeightTriggerVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZWeightTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZWeightTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZWeightTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWeightTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZWeightTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZWeightTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZWeightTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWeightTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZWeightTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWeightTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWeightTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWeightTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWeightTriggerVolume(ASBZWeightTriggerVolume&&); \
	NO_API ASBZWeightTriggerVolume(const ASBZWeightTriggerVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWeightTriggerVolume(ASBZWeightTriggerVolume&&); \
	NO_API ASBZWeightTriggerVolume(const ASBZWeightTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWeightTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWeightTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWeightTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bStartEnabled() { return STRUCT_OFFSET(ASBZWeightTriggerVolume, bStartEnabled); } \
	FORCEINLINE static uint32 __PPO__WeightLimit() { return STRUCT_OFFSET(ASBZWeightTriggerVolume, WeightLimit); } \
	FORCEINLINE static uint32 __PPO__CarryCountMap() { return STRUCT_OFFSET(ASBZWeightTriggerVolume, CarryCountMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZWeightTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
