// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
class AActor;
struct FAIStimulus;
#ifdef STARBREEZE_SBZAIOrder_FirstResponder_generated_h
#error "SBZAIOrder_FirstResponder.generated.h already included, missing '#pragma once' in SBZAIOrder_FirstResponder.h"
#endif
#define STARBREEZE_SBZAIOrder_FirstResponder_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_FirstResponder(); \
	friend struct Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_FirstResponder, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_FirstResponder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIOrder_FirstResponder(); \
	friend struct Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics; \
public: \
	DECLARE_CLASS(USBZAIOrder_FirstResponder, USBZAIOrder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIOrder_FirstResponder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIOrder_FirstResponder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIOrder_FirstResponder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_FirstResponder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_FirstResponder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_FirstResponder(USBZAIOrder_FirstResponder&&); \
	NO_API USBZAIOrder_FirstResponder(const USBZAIOrder_FirstResponder&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIOrder_FirstResponder(USBZAIOrder_FirstResponder&&); \
	NO_API USBZAIOrder_FirstResponder(const USBZAIOrder_FirstResponder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIOrder_FirstResponder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIOrder_FirstResponder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIOrder_FirstResponder)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoverPoint() { return STRUCT_OFFSET(USBZAIOrder_FirstResponder, CoverPoint); } \
	FORCEINLINE static uint32 __PPO__SoundTags() { return STRUCT_OFFSET(USBZAIOrder_FirstResponder, SoundTags); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIOrder_FirstResponder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIOrder_FirstResponder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
