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
#ifdef STARBREEZE_SBZTimedBagConverter_generated_h
#error "SBZTimedBagConverter.generated.h already included, missing '#pragma once' in SBZTimedBagConverter.h"
#endif
#define STARBREEZE_SBZTimedBagConverter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execOnServerBagPickedUp); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execOnServerBagPickedUp); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_EVENT_PARMS \
	struct SBZTimedBagConverter_eventBP_OnECMJammedChanged_Parms \
	{ \
		bool bIsJammed; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZTimedBagConverter(); \
	friend struct Z_Construct_UClass_ASBZTimedBagConverter_Statics; \
public: \
	DECLARE_CLASS(ASBZTimedBagConverter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTimedBagConverter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZTimedBagConverter*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZTimedBagConverter(); \
	friend struct Z_Construct_UClass_ASBZTimedBagConverter_Statics; \
public: \
	DECLARE_CLASS(ASBZTimedBagConverter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTimedBagConverter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZTimedBagConverter*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZTimedBagConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTimedBagConverter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTimedBagConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTimedBagConverter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTimedBagConverter(ASBZTimedBagConverter&&); \
	NO_API ASBZTimedBagConverter(const ASBZTimedBagConverter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTimedBagConverter(ASBZTimedBagConverter&&); \
	NO_API ASBZTimedBagConverter(const ASBZTimedBagConverter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTimedBagConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTimedBagConverter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTimedBagConverter)


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttachedBagGenerator() { return STRUCT_OFFSET(ASBZTimedBagConverter, AttachedBagGenerator); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(ASBZTimedBagConverter, Duration); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZTimedBagConverter, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__OnBagConverterDisabled() { return STRUCT_OFFSET(ASBZTimedBagConverter, OnBagConverterDisabled); } \
	FORCEINLINE static uint32 __PPO__OnBagConverted() { return STRUCT_OFFSET(ASBZTimedBagConverter, OnBagConverted); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZTimedBagConverter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTimedBagConverter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
