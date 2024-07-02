// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZRoomActor_generated_h
#error "SBZRoomActor.generated.h already included, missing '#pragma once' in SBZRoomActor.h"
#endif
#define STARBREEZE_SBZRoomActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZRoomActor(); \
	friend struct Z_Construct_UClass_ASBZRoomActor_Statics; \
public: \
	DECLARE_CLASS(ASBZRoomActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZRoomActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZRoomActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZRoomActor(); \
	friend struct Z_Construct_UClass_ASBZRoomActor_Statics; \
public: \
	DECLARE_CLASS(ASBZRoomActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZRoomActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZRoomActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZRoomActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZRoomActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZRoomActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZRoomActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZRoomActor(ASBZRoomActor&&); \
	NO_API ASBZRoomActor(const ASBZRoomActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZRoomActor(ASBZRoomActor&&); \
	NO_API ASBZRoomActor(const ASBZRoomActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZRoomActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZRoomActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZRoomActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZRoomActor, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZRoomActor, BoxComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZRoomActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRoomActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
