// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIDroneController_generated_h
#error "SBZAIDroneController.generated.h already included, missing '#pragma once' in SBZAIDroneController.h"
#endif
#define STARBREEZE_SBZAIDroneController_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIDroneController(); \
	friend struct Z_Construct_UClass_ASBZAIDroneController_Statics; \
public: \
	DECLARE_CLASS(ASBZAIDroneController, ASBZAIArmedPawnController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIDroneController)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIDroneController(); \
	friend struct Z_Construct_UClass_ASBZAIDroneController_Statics; \
public: \
	DECLARE_CLASS(ASBZAIDroneController, ASBZAIArmedPawnController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIDroneController)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIDroneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIDroneController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIDroneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIDroneController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIDroneController(ASBZAIDroneController&&); \
	NO_API ASBZAIDroneController(const ASBZAIDroneController&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIDroneController(ASBZAIDroneController&&); \
	NO_API ASBZAIDroneController(const ASBZAIDroneController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIDroneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIDroneController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIDroneController)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardAsset() { return STRUCT_OFFSET(ASBZAIDroneController, BlackboardAsset); } \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(ASBZAIDroneController, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__DespawnBehaviorTree() { return STRUCT_OFFSET(ASBZAIDroneController, DespawnBehaviorTree); } \
	FORCEINLINE static uint32 __PPO__YawAngle() { return STRUCT_OFFSET(ASBZAIDroneController, YawAngle); } \
	FORCEINLINE static uint32 __PPO__PitchAngle() { return STRUCT_OFFSET(ASBZAIDroneController, PitchAngle); } \
	FORCEINLINE static uint32 __PPO__FailedTasksUntilDespawn() { return STRUCT_OFFSET(ASBZAIDroneController, FailedTasksUntilDespawn); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIDroneController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIDroneController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
