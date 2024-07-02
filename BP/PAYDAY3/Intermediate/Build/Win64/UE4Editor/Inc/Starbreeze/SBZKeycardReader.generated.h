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
#ifdef STARBREEZE_SBZKeycardReader_generated_h
#error "SBZKeycardReader.generated.h already included, missing '#pragma once' in SBZKeycardReader.h"
#endif
#define STARBREEZE_SBZKeycardReader_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionComplete); \
	DECLARE_FUNCTION(execOnInteractionStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionComplete); \
	DECLARE_FUNCTION(execOnInteractionStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZKeycardReader(); \
	friend struct Z_Construct_UClass_ASBZKeycardReader_Statics; \
public: \
	DECLARE_CLASS(ASBZKeycardReader, ASBZModuleActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZKeycardReader)


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZKeycardReader(); \
	friend struct Z_Construct_UClass_ASBZKeycardReader_Statics; \
public: \
	DECLARE_CLASS(ASBZKeycardReader, ASBZModuleActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZKeycardReader)


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZKeycardReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZKeycardReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZKeycardReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZKeycardReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZKeycardReader(ASBZKeycardReader&&); \
	NO_API ASBZKeycardReader(const ASBZKeycardReader&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZKeycardReader(ASBZKeycardReader&&); \
	NO_API ASBZKeycardReader(const ASBZKeycardReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZKeycardReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZKeycardReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZKeycardReader)


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZKeycardReader, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__AIOjectiveComponent() { return STRUCT_OFFSET(ASBZKeycardReader, AIOjectiveComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZKeycardReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZKeycardReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
