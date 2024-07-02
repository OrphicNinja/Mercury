// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZAICrewController_generated_h
#error "SBZAICrewController.generated.h already included, missing '#pragma once' in SBZAICrewController.h"
#endif
#define STARBREEZE_SBZAICrewController_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCrewStateDestroyed); \
	DECLARE_FUNCTION(execOnRep_CrewState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCrewStateDestroyed); \
	DECLARE_FUNCTION(execOnRep_CrewState);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAICrewController(); \
	friend struct Z_Construct_UClass_ASBZAICrewController_Statics; \
public: \
	DECLARE_CLASS(ASBZAICrewController, ASBZAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICrewController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrewState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CrewState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZAICrewController(); \
	friend struct Z_Construct_UClass_ASBZAICrewController_Statics; \
public: \
	DECLARE_CLASS(ASBZAICrewController, ASBZAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICrewController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrewState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CrewState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAICrewController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICrewController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICrewController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICrewController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICrewController(ASBZAICrewController&&); \
	NO_API ASBZAICrewController(const ASBZAICrewController&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICrewController(ASBZAICrewController&&); \
	NO_API ASBZAICrewController(const ASBZAICrewController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICrewController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICrewController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICrewController)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrewState() { return STRUCT_OFFSET(ASBZAICrewController, CrewState); } \
	FORCEINLINE static uint32 __PPO__CustodyDurationArray() { return STRUCT_OFFSET(ASBZAICrewController, CustodyDurationArray); } \
	FORCEINLINE static uint32 __PPO__LastWardRoom() { return STRUCT_OFFSET(ASBZAICrewController, LastWardRoom); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAICrewController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICrewController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
