// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZAIBehaviorCategory : uint8;
class ASBZAICharacter;
class ASBZCharacter;
#ifdef STARBREEZE_SBZAICharacterVoiceComponent_generated_h
#error "SBZAICharacterVoiceComponent.generated.h already included, missing '#pragma once' in SBZAICharacterVoiceComponent.h"
#endif
#define STARBREEZE_SBZAICharacterVoiceComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAIBehaviorCategoryChanged); \
	DECLARE_FUNCTION(execHandleHumanShieldChanged); \
	DECLARE_FUNCTION(execHandleOnHostageStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAIBehaviorCategoryChanged); \
	DECLARE_FUNCTION(execHandleHumanShieldChanged); \
	DECLARE_FUNCTION(execHandleOnHostageStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAICharacterVoiceComponent(); \
	friend struct Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAICharacterVoiceComponent, USBZCharacterVoiceComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAICharacterVoiceComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAICharacterVoiceComponent(); \
	friend struct Z_Construct_UClass_USBZAICharacterVoiceComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAICharacterVoiceComponent, USBZCharacterVoiceComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAICharacterVoiceComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAICharacterVoiceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAICharacterVoiceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAICharacterVoiceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAICharacterVoiceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAICharacterVoiceComponent(USBZAICharacterVoiceComponent&&); \
	NO_API USBZAICharacterVoiceComponent(const USBZAICharacterVoiceComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAICharacterVoiceComponent(USBZAICharacterVoiceComponent&&); \
	NO_API USBZAICharacterVoiceComponent(const USBZAICharacterVoiceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAICharacterVoiceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAICharacterVoiceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAICharacterVoiceComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAICharacterVoiceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICharacterVoiceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
