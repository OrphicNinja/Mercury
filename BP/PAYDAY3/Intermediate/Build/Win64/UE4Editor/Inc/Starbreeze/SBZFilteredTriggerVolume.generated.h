// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZFilteredTriggerVolume_generated_h
#error "SBZFilteredTriggerVolume.generated.h already included, missing '#pragma once' in SBZFilteredTriggerVolume.h"
#endif
#define STARBREEZE_SBZFilteredTriggerVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFilteredActorBeginOverlapping); \
	DECLARE_FUNCTION(execOnFilteredActorEndOverlapping); \
	DECLARE_FUNCTION(execOnFilterHasDesiredCountChanged); \
	DECLARE_FUNCTION(execOnFiltersAllHaveDesiredCountsChanged); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFilteredActorBeginOverlapping); \
	DECLARE_FUNCTION(execOnFilteredActorEndOverlapping); \
	DECLARE_FUNCTION(execOnFilterHasDesiredCountChanged); \
	DECLARE_FUNCTION(execOnFiltersAllHaveDesiredCountsChanged); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZFilteredTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZFilteredTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZFilteredTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZFilteredTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZFilteredTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZFilteredTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZFilteredTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZFilteredTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZFilteredTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZFilteredTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZFilteredTriggerVolume(ASBZFilteredTriggerVolume&&); \
	STARBREEZE_API ASBZFilteredTriggerVolume(const ASBZFilteredTriggerVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZFilteredTriggerVolume(ASBZFilteredTriggerVolume&&); \
	STARBREEZE_API ASBZFilteredTriggerVolume(const ASBZFilteredTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZFilteredTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZFilteredTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZFilteredTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorFilterComponent() { return STRUCT_OFFSET(ASBZFilteredTriggerVolume, ActorFilterComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZFilteredTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFilteredTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
