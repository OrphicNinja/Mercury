// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZLifeActionActor_generated_h
#error "SBZLifeActionActor.generated.h already included, missing '#pragma once' in SBZLifeActionActor.h"
#endif
#define STARBREEZE_SBZLifeActionActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLifeActionActor(); \
	friend struct Z_Construct_UClass_ASBZLifeActionActor_Statics; \
public: \
	DECLARE_CLASS(ASBZLifeActionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLifeActionActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZLifeActionActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZLifeActionActor(); \
	friend struct Z_Construct_UClass_ASBZLifeActionActor_Statics; \
public: \
	DECLARE_CLASS(ASBZLifeActionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLifeActionActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZLifeActionActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLifeActionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLifeActionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLifeActionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLifeActionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLifeActionActor(ASBZLifeActionActor&&); \
	NO_API ASBZLifeActionActor(const ASBZLifeActionActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLifeActionActor(ASBZLifeActionActor&&); \
	NO_API ASBZLifeActionActor(const ASBZLifeActionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLifeActionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLifeActionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLifeActionActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LifeActionComponent() { return STRUCT_OFFSET(ASBZLifeActionActor, LifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZLifeActionActor, RoomVolumes); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLifeActionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
