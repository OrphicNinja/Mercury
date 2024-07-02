// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZScrollBox_generated_h
#error "SBZScrollBox.generated.h already included, missing '#pragma once' in SBZScrollBox.h"
#endif
#define STARBREEZE_SBZScrollBox_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomFocus);


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomFocus);


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZScrollBox(); \
	friend struct Z_Construct_UClass_USBZScrollBox_Statics; \
public: \
	DECLARE_CLASS(USBZScrollBox, UScrollBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZScrollBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZScrollBox(); \
	friend struct Z_Construct_UClass_USBZScrollBox_Statics; \
public: \
	DECLARE_CLASS(USBZScrollBox, UScrollBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZScrollBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZScrollBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZScrollBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZScrollBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZScrollBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZScrollBox(USBZScrollBox&&); \
	NO_API USBZScrollBox(const USBZScrollBox&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZScrollBox(USBZScrollBox&&); \
	NO_API USBZScrollBox(const USBZScrollBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZScrollBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZScrollBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZScrollBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(USBZScrollBox, InputComponent); } \
	FORCEINLINE static uint32 __PPO__InputAxisYName() { return STRUCT_OFFSET(USBZScrollBox, InputAxisYName); } \
	FORCEINLINE static uint32 __PPO__ScrollSpeedY() { return STRUCT_OFFSET(USBZScrollBox, ScrollSpeedY); } \
	FORCEINLINE static uint32 __PPO__InputAxisDeadZone() { return STRUCT_OFFSET(USBZScrollBox, InputAxisDeadZone); } \
	FORCEINLINE static uint32 __PPO__bIsCustomFocus() { return STRUCT_OFFSET(USBZScrollBox, bIsCustomFocus); }


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZScrollBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZScrollBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
