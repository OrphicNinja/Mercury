// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCablePointAttachment;
struct FSBZCableCollisionPlane;
struct FVector;
class USceneComponent;
struct FSBZWindData;
#ifdef STARBREEZE_SBZCableComponent_generated_h
#error "SBZCableComponent.generated.h already included, missing '#pragma once' in SBZCableComponent.h"
#endif
#define STARBREEZE_SBZCableComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAttachmentPoint); \
	DECLARE_FUNCTION(execAddCollisionPlane); \
	DECLARE_FUNCTION(execAddDisplacementForce); \
	DECLARE_FUNCTION(execDeleteAttachmentPoint); \
	DECLARE_FUNCTION(execResetAttachPoints); \
	DECLARE_FUNCTION(execResetCable); \
	DECLARE_FUNCTION(execResetCollisionPlanes); \
	DECLARE_FUNCTION(execSetStartAttachmentPointRewindSpeed); \
	DECLARE_FUNCTION(execSetWindData); \
	DECLARE_FUNCTION(execUpdateSegmentCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAttachmentPoint); \
	DECLARE_FUNCTION(execAddCollisionPlane); \
	DECLARE_FUNCTION(execAddDisplacementForce); \
	DECLARE_FUNCTION(execDeleteAttachmentPoint); \
	DECLARE_FUNCTION(execResetAttachPoints); \
	DECLARE_FUNCTION(execResetCable); \
	DECLARE_FUNCTION(execResetCollisionPlanes); \
	DECLARE_FUNCTION(execSetStartAttachmentPointRewindSpeed); \
	DECLARE_FUNCTION(execSetWindData); \
	DECLARE_FUNCTION(execUpdateSegmentCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCableComponent(); \
	friend struct Z_Construct_UClass_USBZCableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCableComponent, UCableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCableComponent(); \
	friend struct Z_Construct_UClass_USBZCableComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCableComponent, UCableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCableComponent(USBZCableComponent&&); \
	NO_API USBZCableComponent(const USBZCableComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCableComponent(USBZCableComponent&&); \
	NO_API USBZCableComponent(const USBZCableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCableComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
