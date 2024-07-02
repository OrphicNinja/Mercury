// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWaypoint_generated_h
#error "SBZWaypoint.generated.h already included, missing '#pragma once' in SBZWaypoint.h"
#endif
#define STARBREEZE_SBZWaypoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMarker); \
	DECLARE_FUNCTION(execRemoveMarker);


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMarker); \
	DECLARE_FUNCTION(execRemoveMarker);


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZWaypoint(); \
	friend struct Z_Construct_UClass_ASBZWaypoint_Statics; \
public: \
	DECLARE_CLASS(ASBZWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWaypoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZWaypoint(); \
	friend struct Z_Construct_UClass_ASBZWaypoint_Statics; \
public: \
	DECLARE_CLASS(ASBZWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWaypoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZWaypoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWaypoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWaypoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWaypoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWaypoint(ASBZWaypoint&&); \
	NO_API ASBZWaypoint(const ASBZWaypoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWaypoint(ASBZWaypoint&&); \
	NO_API ASBZWaypoint(const ASBZWaypoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWaypoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWaypoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWaypoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShowMarkerOnSpawn() { return STRUCT_OFFSET(ASBZWaypoint, bShowMarkerOnSpawn); } \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZWaypoint, MarkerAsset); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZWaypoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWaypoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
