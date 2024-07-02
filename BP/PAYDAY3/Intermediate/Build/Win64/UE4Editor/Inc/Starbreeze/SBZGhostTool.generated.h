// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPlacementState : uint8;
#ifdef STARBREEZE_SBZGhostTool_generated_h
#error "SBZGhostTool.generated.h already included, missing '#pragma once' in SBZGhostTool.h"
#endif
#define STARBREEZE_SBZGhostTool_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_EVENT_PARMS \
	struct SBZGhostTool_eventOnGhostToolStateChanged_Parms \
	{ \
		ESBZPlacementState NewPlacementState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZGhostTool(); \
	friend struct Z_Construct_UClass_ASBZGhostTool_Statics; \
public: \
	DECLARE_CLASS(ASBZGhostTool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGhostTool)


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZGhostTool(); \
	friend struct Z_Construct_UClass_ASBZGhostTool_Statics; \
public: \
	DECLARE_CLASS(ASBZGhostTool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGhostTool)


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZGhostTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGhostTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGhostTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGhostTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGhostTool(ASBZGhostTool&&); \
	NO_API ASBZGhostTool(const ASBZGhostTool&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGhostTool(ASBZGhostTool&&); \
	NO_API ASBZGhostTool(const ASBZGhostTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGhostTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGhostTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGhostTool)


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ASBZGhostTool, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZGhostTool, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineAsset() { return STRUCT_OFFSET(ASBZGhostTool, OutlineAsset); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZGhostTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGhostTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
