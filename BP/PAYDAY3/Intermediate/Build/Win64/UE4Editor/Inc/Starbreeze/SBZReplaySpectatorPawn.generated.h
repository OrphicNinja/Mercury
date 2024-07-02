// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZReplaySpectatorPawn_generated_h
#error "SBZReplaySpectatorPawn.generated.h already included, missing '#pragma once' in SBZReplaySpectatorPawn.h"
#endif
#define STARBREEZE_SBZReplaySpectatorPawn_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZReplaySpectatorPawn(); \
	friend struct Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASBZReplaySpectatorPawn, ASBZGameSpectatorPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZReplaySpectatorPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZReplaySpectatorPawn(); \
	friend struct Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASBZReplaySpectatorPawn, ASBZGameSpectatorPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZReplaySpectatorPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZReplaySpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZReplaySpectatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZReplaySpectatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZReplaySpectatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZReplaySpectatorPawn(ASBZReplaySpectatorPawn&&); \
	NO_API ASBZReplaySpectatorPawn(const ASBZReplaySpectatorPawn&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZReplaySpectatorPawn(ASBZReplaySpectatorPawn&&); \
	NO_API ASBZReplaySpectatorPawn(const ASBZReplaySpectatorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZReplaySpectatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZReplaySpectatorPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZReplaySpectatorPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpectatorView() { return STRUCT_OFFSET(ASBZReplaySpectatorPawn, SpectatorView); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZReplaySpectatorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReplaySpectatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
