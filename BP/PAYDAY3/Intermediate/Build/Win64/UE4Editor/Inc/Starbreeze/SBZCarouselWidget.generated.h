// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef STARBREEZE_SBZCarouselWidget_generated_h
#error "SBZCarouselWidget.generated.h already included, missing '#pragma once' in SBZCarouselWidget.h"
#endif
#define STARBREEZE_SBZCarouselWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveIndex); \
	DECLARE_FUNCTION(execGetWidgetAtIndex); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execPreviousPage); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execStartScrolling); \
	DECLARE_FUNCTION(execStopScrolling);


#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveIndex); \
	DECLARE_FUNCTION(execGetWidgetAtIndex); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execPreviousPage); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execStartScrolling); \
	DECLARE_FUNCTION(execStopScrolling);


#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCarouselWidget(); \
	friend struct Z_Construct_UClass_USBZCarouselWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCarouselWidget, UPanelWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCarouselWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCarouselWidget(); \
	friend struct Z_Construct_UClass_USBZCarouselWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCarouselWidget, UPanelWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCarouselWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("StarbreezeUI");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCarouselWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCarouselWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCarouselWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCarouselWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCarouselWidget(USBZCarouselWidget&&); \
	NO_API USBZCarouselWidget(const USBZCarouselWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCarouselWidget(USBZCarouselWidget&&); \
	NO_API USBZCarouselWidget(const USBZCarouselWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCarouselWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCarouselWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCarouselWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCarouselWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCarouselWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
