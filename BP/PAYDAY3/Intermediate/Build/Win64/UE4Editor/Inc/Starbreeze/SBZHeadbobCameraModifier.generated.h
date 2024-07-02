// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
#ifdef STARBREEZE_SBZHeadbobCameraModifier_generated_h
#error "SBZHeadbobCameraModifier.generated.h already included, missing '#pragma once' in SBZHeadbobCameraModifier.h"
#endif
#define STARBREEZE_SBZHeadbobCameraModifier_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCurrentEquippableIndexChanged); \
	DECLARE_FUNCTION(execHandleEquippableArrayChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCurrentEquippableIndexChanged); \
	DECLARE_FUNCTION(execHandleEquippableArrayChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHeadbobCameraModifier(); \
	friend struct Z_Construct_UClass_USBZHeadbobCameraModifier_Statics; \
public: \
	DECLARE_CLASS(USBZHeadbobCameraModifier, USBZPlayerCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHeadbobCameraModifier)


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHeadbobCameraModifier(); \
	friend struct Z_Construct_UClass_USBZHeadbobCameraModifier_Statics; \
public: \
	DECLARE_CLASS(USBZHeadbobCameraModifier, USBZPlayerCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHeadbobCameraModifier)


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHeadbobCameraModifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHeadbobCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHeadbobCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHeadbobCameraModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHeadbobCameraModifier(USBZHeadbobCameraModifier&&); \
	NO_API USBZHeadbobCameraModifier(const USBZHeadbobCameraModifier&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHeadbobCameraModifier(USBZHeadbobCameraModifier&&); \
	NO_API USBZHeadbobCameraModifier(const USBZHeadbobCameraModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHeadbobCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHeadbobCameraModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHeadbobCameraModifier)


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultHeadbobData() { return STRUCT_OFFSET(USBZHeadbobCameraModifier, DefaultHeadbobData); } \
	FORCEINLINE static uint32 __PPO__CurrentData() { return STRUCT_OFFSET(USBZHeadbobCameraModifier, CurrentData); } \
	FORCEINLINE static uint32 __PPO__CurrentTargetingData() { return STRUCT_OFFSET(USBZHeadbobCameraModifier, CurrentTargetingData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHeadbobCameraModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHeadbobCameraModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
