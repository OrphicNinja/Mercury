// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZColorStyle;
class USBZTextStyle;
#ifdef STARBREEZE_SBZUITextBlock_generated_h
#error "SBZUITextBlock.generated.h already included, missing '#pragma once' in SBZUITextBlock.h"
#endif
#define STARBREEZE_SBZUITextBlock_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetScrollState); \
	DECLARE_FUNCTION(execSetColorStyle); \
	DECLARE_FUNCTION(execSetScrollingEnabled); \
	DECLARE_FUNCTION(execSetStyle);


#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetScrollState); \
	DECLARE_FUNCTION(execSetColorStyle); \
	DECLARE_FUNCTION(execSetScrollingEnabled); \
	DECLARE_FUNCTION(execSetStyle);


#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUITextBlock(); \
	friend struct Z_Construct_UClass_USBZUITextBlock_Statics; \
public: \
	DECLARE_CLASS(USBZUITextBlock, UTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUITextBlock) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUITextBlock(); \
	friend struct Z_Construct_UClass_USBZUITextBlock_Statics; \
public: \
	DECLARE_CLASS(USBZUITextBlock, UTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUITextBlock) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUITextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUITextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUITextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUITextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUITextBlock(USBZUITextBlock&&); \
	NO_API USBZUITextBlock(const USBZUITextBlock&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUITextBlock(USBZUITextBlock&&); \
	NO_API USBZUITextBlock(const USBZUITextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUITextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUITextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUITextBlock)


#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ColorStyle() { return STRUCT_OFFSET(USBZUITextBlock, ColorStyle); } \
	FORCEINLINE static uint32 __PPO__Style() { return STRUCT_OFFSET(USBZUITextBlock, Style); } \
	FORCEINLINE static uint32 __PPO__ScrollStyle() { return STRUCT_OFFSET(USBZUITextBlock, ScrollStyle); } \
	FORCEINLINE static uint32 __PPO__bIsScrollingEnabled() { return STRUCT_OFFSET(USBZUITextBlock, bIsScrollingEnabled); } \
	FORCEINLINE static uint32 __PPO__bEnableHideTextOnEmpty() { return STRUCT_OFFSET(USBZUITextBlock, bEnableHideTextOnEmpty); } \
	FORCEINLINE static uint32 __PPO__OnEmptyVisibility() { return STRUCT_OFFSET(USBZUITextBlock, OnEmptyVisibility); } \
	FORCEINLINE static uint32 __PPO__OnNotEmptyVisbility() { return STRUCT_OFFSET(USBZUITextBlock, OnNotEmptyVisbility); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUITextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUITextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
