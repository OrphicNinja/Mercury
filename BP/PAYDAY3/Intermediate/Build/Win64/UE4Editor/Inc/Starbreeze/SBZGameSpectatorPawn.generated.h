// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZGameSpectatorPawn_generated_h
#error "SBZGameSpectatorPawn.generated.h already included, missing '#pragma once' in SBZGameSpectatorPawn.h"
#endif
#define STARBREEZE_SBZGameSpectatorPawn_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZGameSpectatorPawn(); \
	friend struct Z_Construct_UClass_ASBZGameSpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASBZGameSpectatorPawn, ASBZSpectatorPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGameSpectatorPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZGameSpectatorPawn(); \
	friend struct Z_Construct_UClass_ASBZGameSpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASBZGameSpectatorPawn, ASBZSpectatorPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGameSpectatorPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZGameSpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGameSpectatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGameSpectatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGameSpectatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGameSpectatorPawn(ASBZGameSpectatorPawn&&); \
	NO_API ASBZGameSpectatorPawn(const ASBZGameSpectatorPawn&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGameSpectatorPawn(ASBZGameSpectatorPawn&&); \
	NO_API ASBZGameSpectatorPawn(const ASBZGameSpectatorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGameSpectatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGameSpectatorPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGameSpectatorPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DeadTargetDelay() { return STRUCT_OFFSET(ASBZGameSpectatorPawn, DeadTargetDelay); } \
	FORCEINLINE static uint32 __PPO__SpectateTarget() { return STRUCT_OFFSET(ASBZGameSpectatorPawn, SpectateTarget); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZGameSpectatorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameSpectatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
