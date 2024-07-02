// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlayerTriggerVolume_generated_h
#error "SBZPlayerTriggerVolume.generated.h already included, missing '#pragma once' in SBZPlayerTriggerVolume.h"
#endif
#define STARBREEZE_SBZPlayerTriggerVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreAllPlayerPawnsInside); \
	DECLARE_FUNCTION(execGetCurrentNumOverlappingPlayers); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreAllPlayerPawnsInside); \
	DECLARE_FUNCTION(execGetCurrentNumOverlappingPlayers); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZPlayerTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZPlayerTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZPlayerTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZPlayerTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZPlayerTriggerVolume(ASBZPlayerTriggerVolume&&); \
	STARBREEZE_API ASBZPlayerTriggerVolume(const ASBZPlayerTriggerVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZPlayerTriggerVolume(ASBZPlayerTriggerVolume&&); \
	STARBREEZE_API ASBZPlayerTriggerVolume(const ASBZPlayerTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZPlayerTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawnParentClass() { return STRUCT_OFFSET(ASBZPlayerTriggerVolume, PlayerPawnParentClass); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
