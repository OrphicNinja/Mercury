// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZInteractionActor_generated_h
#error "SBZInteractionActor.generated.h already included, missing '#pragma once' in SBZInteractionActor.h"
#endif
#define STARBREEZE_SBZInteractionActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAckComplete); \
	DECLARE_FUNCTION(execHandleServerComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAckComplete); \
	DECLARE_FUNCTION(execHandleServerComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZInteractionActor(); \
	friend struct Z_Construct_UClass_ASBZInteractionActor_Statics; \
public: \
	DECLARE_CLASS(ASBZInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInteractionActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZInteractionActor(); \
	friend struct Z_Construct_UClass_ASBZInteractionActor_Statics; \
public: \
	DECLARE_CLASS(ASBZInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInteractionActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZInteractionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInteractionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInteractionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInteractionActor(ASBZInteractionActor&&); \
	NO_API ASBZInteractionActor(const ASBZInteractionActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInteractionActor(ASBZInteractionActor&&); \
	NO_API ASBZInteractionActor(const ASBZInteractionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInteractionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInteractionActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZInteractionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInteractionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
