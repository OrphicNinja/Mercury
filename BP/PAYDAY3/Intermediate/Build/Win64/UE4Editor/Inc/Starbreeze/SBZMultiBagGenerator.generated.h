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
#ifdef STARBREEZE_SBZMultiBagGenerator_generated_h
#error "SBZMultiBagGenerator.generated.h already included, missing '#pragma once' in SBZMultiBagGenerator.h"
#endif
#define STARBREEZE_SBZMultiBagGenerator_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMultiBagGenerator(); \
	friend struct Z_Construct_UClass_ASBZMultiBagGenerator_Statics; \
public: \
	DECLARE_CLASS(ASBZMultiBagGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMultiBagGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZMultiBagGenerator*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZMultiBagGenerator(); \
	friend struct Z_Construct_UClass_ASBZMultiBagGenerator_Statics; \
public: \
	DECLARE_CLASS(ASBZMultiBagGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMultiBagGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZMultiBagGenerator*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMultiBagGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMultiBagGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMultiBagGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMultiBagGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMultiBagGenerator(ASBZMultiBagGenerator&&); \
	NO_API ASBZMultiBagGenerator(const ASBZMultiBagGenerator&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMultiBagGenerator(ASBZMultiBagGenerator&&); \
	NO_API ASBZMultiBagGenerator(const ASBZMultiBagGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMultiBagGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMultiBagGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMultiBagGenerator)


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZMultiBagGenerator, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZMultiBagGenerator, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__BagType() { return STRUCT_OFFSET(ASBZMultiBagGenerator, BagType); } \
	FORCEINLINE static uint32 __PPO__NumberOfBags() { return STRUCT_OFFSET(ASBZMultiBagGenerator, NumberOfBags); } \
	FORCEINLINE static uint32 __PPO__bDestroyOnLastBag() { return STRUCT_OFFSET(ASBZMultiBagGenerator, bDestroyOnLastBag); } \
	FORCEINLINE static uint32 __PPO__BagHandleArray() { return STRUCT_OFFSET(ASBZMultiBagGenerator, BagHandleArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMultiBagGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMultiBagGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
