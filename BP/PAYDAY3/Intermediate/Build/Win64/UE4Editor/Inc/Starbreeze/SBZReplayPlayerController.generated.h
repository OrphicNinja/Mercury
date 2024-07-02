// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZReplayManager;
#ifdef STARBREEZE_SBZReplayPlayerController_generated_h
#error "SBZReplayPlayerController.generated.h already included, missing '#pragma once' in SBZReplayPlayerController.h"
#endif
#define STARBREEZE_SBZReplayPlayerController_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReplayManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReplayManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZReplayPlayerController(); \
	friend struct Z_Construct_UClass_ASBZReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASBZReplayPlayerController, ASBZPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZReplayPlayerController)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZReplayPlayerController(); \
	friend struct Z_Construct_UClass_ASBZReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASBZReplayPlayerController, ASBZPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZReplayPlayerController)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZReplayPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZReplayPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZReplayPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZReplayPlayerController(ASBZReplayPlayerController&&); \
	NO_API ASBZReplayPlayerController(const ASBZReplayPlayerController&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZReplayPlayerController(ASBZReplayPlayerController&&); \
	NO_API ASBZReplayPlayerController(const ASBZReplayPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZReplayPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZReplayPlayerController)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplayManager() { return STRUCT_OFFSET(ASBZReplayPlayerController, ReplayManager); } \
	FORCEINLINE static uint32 __PPO__ReplayWidget() { return STRUCT_OFFSET(ASBZReplayPlayerController, ReplayWidget); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZReplayPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReplayPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
