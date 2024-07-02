// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZUIEditableTextBox_generated_h
#error "SBZUIEditableTextBox.generated.h already included, missing '#pragma once' in SBZUIEditableTextBox.h"
#endif
#define STARBREEZE_SBZUIEditableTextBox_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEmptyOrConsistsOfWhitespaces);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEmptyOrConsistsOfWhitespaces);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUIEditableTextBox(); \
	friend struct Z_Construct_UClass_USBZUIEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(USBZUIEditableTextBox, UEditableTextBox, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIEditableTextBox) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUIEditableTextBox(); \
	friend struct Z_Construct_UClass_USBZUIEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(USBZUIEditableTextBox, UEditableTextBox, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIEditableTextBox) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUIEditableTextBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUIEditableTextBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIEditableTextBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIEditableTextBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIEditableTextBox(USBZUIEditableTextBox&&); \
	NO_API USBZUIEditableTextBox(const USBZUIEditableTextBox&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIEditableTextBox(USBZUIEditableTextBox&&); \
	NO_API USBZUIEditableTextBox(const USBZUIEditableTextBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIEditableTextBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIEditableTextBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUIEditableTextBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableUserTextLengthLimit() { return STRUCT_OFFSET(USBZUIEditableTextBox, bEnableUserTextLengthLimit); } \
	FORCEINLINE static uint32 __PPO__MaxInputLength() { return STRUCT_OFFSET(USBZUIEditableTextBox, MaxInputLength); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUIEditableTextBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUIEditableTextBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
