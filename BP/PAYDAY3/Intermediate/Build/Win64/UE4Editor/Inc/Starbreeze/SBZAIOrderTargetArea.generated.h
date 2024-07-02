// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIOrderTargetArea_generated_h
#error "SBZAIOrderTargetArea.generated.h already included, missing '#pragma once' in SBZAIOrderTargetArea.h"
#endif
#define STARBREEZE_SBZAIOrderTargetArea_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execUpdateCoverPoints);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execUpdateCoverPoints);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIOrderTargetArea(); \
	friend struct Z_Construct_UClass_ASBZAIOrderTargetArea_Statics; \
public: \
	DECLARE_CLASS(ASBZAIOrderTargetArea, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIOrderTargetArea) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIOrderTargetArea*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIOrderTargetArea(); \
	friend struct Z_Construct_UClass_ASBZAIOrderTargetArea_Statics; \
public: \
	DECLARE_CLASS(ASBZAIOrderTargetArea, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIOrderTargetArea) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIOrderTargetArea*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIOrderTargetArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIOrderTargetArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIOrderTargetArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIOrderTargetArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIOrderTargetArea(ASBZAIOrderTargetArea&&); \
	NO_API ASBZAIOrderTargetArea(const ASBZAIOrderTargetArea&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIOrderTargetArea(ASBZAIOrderTargetArea&&); \
	NO_API ASBZAIOrderTargetArea(const ASBZAIOrderTargetArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIOrderTargetArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIOrderTargetArea); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIOrderTargetArea)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, bEnabled); } \
	FORCEINLINE static uint32 __PPO__bConsiderCoversDirection() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, bConsiderCoversDirection); } \
	FORCEINLINE static uint32 __PPO__ArcAngle() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, ArcAngle); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__AssignedSquads() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, AssignedSquads); } \
	FORCEINLINE static uint32 __PPO__CachedCoverPoints() { return STRUCT_OFFSET(ASBZAIOrderTargetArea, CachedCoverPoints); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIOrderTargetArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIOrderTargetArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
