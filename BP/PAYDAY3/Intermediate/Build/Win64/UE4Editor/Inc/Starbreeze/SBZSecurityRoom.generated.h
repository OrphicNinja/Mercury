// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWorld;
#ifdef STARBREEZE_SBZSecurityRoom_generated_h
#error "SBZSecurityRoom.generated.h already included, missing '#pragma once' in SBZSecurityRoom.h"
#endif
#define STARBREEZE_SBZSecurityRoom_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCameraDestroyed); \
	DECLARE_FUNCTION(execOnPlayableLevelInitialized);


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCameraDestroyed); \
	DECLARE_FUNCTION(execOnPlayableLevelInitialized);


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSecurityRoom(); \
	friend struct Z_Construct_UClass_ASBZSecurityRoom_Statics; \
public: \
	DECLARE_CLASS(ASBZSecurityRoom, ASBZPawnSpawnPredefined, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSecurityRoom) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSecurityRoom*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZSecurityRoom(); \
	friend struct Z_Construct_UClass_ASBZSecurityRoom_Statics; \
public: \
	DECLARE_CLASS(ASBZSecurityRoom, ASBZPawnSpawnPredefined, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSecurityRoom) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSecurityRoom*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSecurityRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSecurityRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSecurityRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSecurityRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSecurityRoom(ASBZSecurityRoom&&); \
	NO_API ASBZSecurityRoom(const ASBZSecurityRoom&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSecurityRoom(ASBZSecurityRoom&&); \
	NO_API ASBZSecurityRoom(const ASBZSecurityRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSecurityRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSecurityRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSecurityRoom)


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShadeCameraDownVO() { return STRUCT_OFFSET(ASBZSecurityRoom, ShadeCameraDownVO); } \
	FORCEINLINE static uint32 __PPO__ShadeCameraUpVO() { return STRUCT_OFFSET(ASBZSecurityRoom, ShadeCameraUpVO); } \
	FORCEINLINE static uint32 __PPO__SecurityCameras() { return STRUCT_OFFSET(ASBZSecurityRoom, SecurityCameras); } \
	FORCEINLINE static uint32 __PPO__GuardRoomSpawner() { return STRUCT_OFFSET(ASBZSecurityRoom, GuardRoomSpawner); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSecurityRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSecurityRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
