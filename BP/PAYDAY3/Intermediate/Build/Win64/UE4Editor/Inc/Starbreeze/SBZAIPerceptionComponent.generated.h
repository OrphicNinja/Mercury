// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
struct FActorPerceptionUpdateInfo;
enum class ESBZSenseConfig : uint8;
#ifdef STARBREEZE_SBZAIPerceptionComponent_generated_h
#error "SBZAIPerceptionComponent.generated.h already included, missing '#pragma once' in SBZAIPerceptionComponent.h"
#endif
#define STARBREEZE_SBZAIPerceptionComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTargetPerception); \
	DECLARE_FUNCTION(execOnTransporterBrutalCarrySkillPerceptionInfoUpdated); \
	DECLARE_FUNCTION(execSetSenseConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTargetPerception); \
	DECLARE_FUNCTION(execOnTransporterBrutalCarrySkillPerceptionInfoUpdated); \
	DECLARE_FUNCTION(execSetSenseConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIPerceptionComponent(); \
	friend struct Z_Construct_UClass_USBZAIPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIPerceptionComponent, UAIPerceptionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIPerceptionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIPerceptionComponent(); \
	friend struct Z_Construct_UClass_USBZAIPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIPerceptionComponent, UAIPerceptionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIPerceptionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIPerceptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIPerceptionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIPerceptionComponent(USBZAIPerceptionComponent&&); \
	NO_API USBZAIPerceptionComponent(const USBZAIPerceptionComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIPerceptionComponent(USBZAIPerceptionComponent&&); \
	NO_API USBZAIPerceptionComponent(const USBZAIPerceptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIPerceptionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIPerceptionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombatSensesConfig() { return STRUCT_OFFSET(USBZAIPerceptionComponent, CombatSensesConfig); } \
	FORCEINLINE static uint32 __PPO__DistractedSensesConfig() { return STRUCT_OFFSET(USBZAIPerceptionComponent, DistractedSensesConfig); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIPerceptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIPerceptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
