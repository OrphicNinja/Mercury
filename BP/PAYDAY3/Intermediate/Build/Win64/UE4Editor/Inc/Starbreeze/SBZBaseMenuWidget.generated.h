// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZControlsReference;
#ifdef STARBREEZE_SBZBaseMenuWidget_generated_h
#error "SBZBaseMenuWidget.generated.h already included, missing '#pragma once' in SBZBaseMenuWidget.h"
#endif
#define STARBREEZE_SBZBaseMenuWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideControlsReference); \
	DECLARE_FUNCTION(execOnActiveControlsReferenceChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideControlsReference); \
	DECLARE_FUNCTION(execOnActiveControlsReferenceChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBaseMenuWidget(); \
	friend struct Z_Construct_UClass_USBZBaseMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBaseMenuWidget, USBZInternetStatusWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBaseMenuWidget(); \
	friend struct Z_Construct_UClass_USBZBaseMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBaseMenuWidget, USBZInternetStatusWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBaseMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBaseMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseMenuWidget(USBZBaseMenuWidget&&); \
	NO_API USBZBaseMenuWidget(const USBZBaseMenuWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseMenuWidget(USBZBaseMenuWidget&&); \
	NO_API USBZBaseMenuWidget(const USBZBaseMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBaseMenuWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_ControlsReference() { return STRUCT_OFFSET(USBZBaseMenuWidget, Widget_ControlsReference); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBaseMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBaseMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
